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
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_115 = 0f;
	vector3 vLocal_116 = { 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	float fLocal_120 = 0f;
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
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	float fLocal_141 = 0f;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	vector3 vLocal_155[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_156[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_157[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<68> Local_164 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<534> Local_185 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_186 = -1;
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
	var uLocal_208 = -1082130432;
	var uLocal_209 = 3;
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
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = -1;
	var uLocal_228 = -1;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = -1082130432;
	var uLocal_251 = 3;
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
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = -1;
	var uLocal_270 = -1;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
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
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = -1082130432;
	var uLocal_293 = 3;
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
	var uLocal_309 = -1;
	var uLocal_310 = 0;
	var uLocal_311 = -1;
	var uLocal_312 = -1;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
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
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = -1082130432;
	var uLocal_335 = 3;
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
	var uLocal_351 = -1;
	var uLocal_352 = 0;
	var uLocal_353 = -1;
	var uLocal_354 = -1;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
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
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = -1082130432;
	var uLocal_377 = 3;
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
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = -1;
	var uLocal_396 = -1;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
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
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = -1082130432;
	var uLocal_419 = 3;
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
	var uLocal_435 = -1;
	var uLocal_436 = 0;
	var uLocal_437 = -1;
	var uLocal_438 = -1;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
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
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = -1082130432;
	var uLocal_461 = 3;
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
	var uLocal_477 = -1;
	var uLocal_478 = 0;
	var uLocal_479 = -1;
	var uLocal_480 = -1;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
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
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = -1082130432;
	var uLocal_503 = 3;
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
	var uLocal_519 = -1;
	var uLocal_520 = 0;
	var uLocal_521 = -1;
	var uLocal_522 = -1;
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
	var uLocal_544 = -1082130432;
	var uLocal_545 = 3;
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
	var uLocal_561 = -1;
	var uLocal_562 = 0;
	var uLocal_563 = -1;
	var uLocal_564 = -1;
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
	var uLocal_586 = -1082130432;
	var uLocal_587 = 3;
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
	var uLocal_603 = -1;
	var uLocal_604 = 0;
	var uLocal_605 = -1;
	var uLocal_606 = -1;
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
	var uLocal_628 = -1082130432;
	var uLocal_629 = 3;
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
	var uLocal_645 = -1;
	var uLocal_646 = 0;
	var uLocal_647 = -1;
	var uLocal_648 = -1;
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
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = -1082130432;
	var uLocal_671 = 3;
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
	var uLocal_687 = -1;
	var uLocal_688 = 0;
	var uLocal_689 = -1;
	var uLocal_690 = -1;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
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
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = -1082130432;
	var uLocal_713 = 3;
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
	var uLocal_729 = -1;
	var uLocal_730 = 0;
	var uLocal_731 = -1;
	var uLocal_732 = -1;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
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
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = -1082130432;
	var uLocal_755 = 3;
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
	var uLocal_771 = -1;
	var uLocal_772 = 0;
	var uLocal_773 = -1;
	var uLocal_774 = -1;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
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
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = -1082130432;
	var uLocal_797 = 3;
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
	var uLocal_813 = -1;
	var uLocal_814 = 0;
	var uLocal_815 = -1;
	var uLocal_816 = -1;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
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
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = -1082130432;
	var uLocal_839 = 3;
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
	var uLocal_855 = -1;
	var uLocal_856 = 0;
	var uLocal_857 = -1;
	var uLocal_858 = -1;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
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
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = -1082130432;
	var uLocal_881 = 3;
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
	var uLocal_897 = -1;
	var uLocal_898 = 0;
	var uLocal_899 = -1;
	var uLocal_900 = -1;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
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
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = -1082130432;
	var uLocal_923 = 3;
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
	var uLocal_939 = -1;
	var uLocal_940 = 0;
	var uLocal_941 = -1;
	var uLocal_942 = -1;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
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
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = -1082130432;
	var uLocal_965 = 3;
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
	var uLocal_981 = -1;
	var uLocal_982 = 0;
	var uLocal_983 = -1;
	var uLocal_984 = -1;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
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
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = -1082130432;
	var uLocal_1007 = 3;
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
	var uLocal_1023 = -1;
	var uLocal_1024 = 0;
	var uLocal_1025 = -1;
	var uLocal_1026 = -1;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
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
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = -1082130432;
	var uLocal_1049 = 3;
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
	var uLocal_1065 = -1;
	var uLocal_1066 = 0;
	var uLocal_1067 = -1;
	var uLocal_1068 = -1;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
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
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = -1082130432;
	var uLocal_1091 = 3;
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
	var uLocal_1107 = -1;
	var uLocal_1108 = 0;
	var uLocal_1109 = -1;
	var uLocal_1110 = -1;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
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
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = -1082130432;
	var uLocal_1133 = 3;
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
	var uLocal_1149 = -1;
	var uLocal_1150 = 0;
	var uLocal_1151 = -1;
	var uLocal_1152 = -1;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
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
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = -1082130432;
	var uLocal_1175 = 3;
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
	var uLocal_1191 = -1;
	var uLocal_1192 = 0;
	var uLocal_1193 = -1;
	var uLocal_1194 = -1;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
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
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = -1082130432;
	var uLocal_1217 = 3;
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
	var uLocal_1233 = -1;
	var uLocal_1234 = 0;
	var uLocal_1235 = -1;
	var uLocal_1236 = -1;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
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
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = -1082130432;
	var uLocal_1259 = 3;
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
	var uLocal_1275 = -1;
	var uLocal_1276 = 0;
	var uLocal_1277 = -1;
	var uLocal_1278 = -1;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
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
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = -1082130432;
	var uLocal_1301 = 3;
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
	var uLocal_1317 = -1;
	var uLocal_1318 = 0;
	var uLocal_1319 = -1;
	var uLocal_1320 = -1;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
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
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = -1082130432;
	var uLocal_1343 = 3;
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
	var uLocal_1359 = -1;
	var uLocal_1360 = 0;
	var uLocal_1361 = -1;
	var uLocal_1362 = -1;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
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
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = -1082130432;
	var uLocal_1385 = 3;
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
	var uLocal_1401 = -1;
	var uLocal_1402 = 0;
	var uLocal_1403 = -1;
	var uLocal_1404 = -1;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
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
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = -1082130432;
	var uLocal_1427 = 3;
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
	var uLocal_1443 = -1;
	var uLocal_1444 = 0;
	var uLocal_1445 = -1;
	var uLocal_1446 = -1;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
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
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = -1082130432;
	var uLocal_1469 = 3;
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
	var uLocal_1485 = -1;
	var uLocal_1486 = 0;
	var uLocal_1487 = -1;
	var uLocal_1488 = -1;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
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
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = -1082130432;
	var uLocal_1511 = 3;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = -1;
	var uLocal_1528 = 0;
	var uLocal_1529 = -1;
	struct<12> Local_1530[32];
	struct<12> Local_1531 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1532 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_115 = 40000f;
	iLocal_143 = unk_0x2F079D1FC5F6CB99();
	iLocal_144 = unk_0x2F079D1FC5F6CB99();
	iLocal_145 = -1;
	iLocal_146 = -1;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_736(ScriptParam_1532))
		{
			func_699();
		}
	}
	while (true)
	{
		func_698();
		if (func_691() || func_689())
		{
			func_699();
		}
		if (func_687())
		{
			func_699();
		}
		func_661();
		switch (func_660(unk_0x822BEC8031773562()))
		{
			case 0:
				if (func_659() == 1)
				{
					if (func_658())
					{
						func_657(unk_0x822BEC8031773562(), 1);
					}
				}
				break;
			
			case 1:
				if (func_659() == 1)
				{
					func_128();
					func_116();
				}
				else if (func_659() == 3)
				{
					func_657(unk_0x822BEC8031773562(), 3);
				}
				break;
			
			case 3:
				func_699();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_659())
			{
				case 0:
					if (func_103())
					{
						func_102(1);
					}
					break;
				
				case 1:
					if (Local_164.f_25 == 6)
					{
						func_102(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_121, 1000, 0))
					{
						func_102(3);
					}
					break;
				
				case 3:
					func_699();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1BE
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x21C
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

void func_3()//Position - 0x261
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
		{
			unk_0xF0059F27F7BB6680(&(Local_164.f_2), 0);
			Local_164.f_1 = unk_0xED678C85A82F0AB9();
		}
	}
	switch (Local_164.f_25)
	{
		case 0:
			if (func_41())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_164.f_2B), func_29(), 0) || unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_164.f_26 = unk_0xED678C85A82F0AB9();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_164.f_27), func_28(0), 0) || unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_164.f_2, 1))
				{
					Local_164.f_1 = unk_0xED678C85A82F0AB9();
					unk_0xF0059F27F7BB6680(&(Local_164.f_2), 1);
					func_27(&(Local_164.f_27), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_146, &iLocal_145);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_164.f_29), 20000, 0) || Local_164.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_164.f_3))
				{
					func_27(&(Local_164.f_2D), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x400
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_164.f_43[iVar0 /*2*/].f_1) && !unk_0x1D403DFADBC2DE3C(unk_0xD14280F674B4DBF4(Local_164.f_43[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)//Position - 0x44C
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

int func_6()//Position - 0x484
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_1530[iVar1 /*12*/].f_1, 1) || Local_1530[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xFA30DFD0084E92FE(Local_1530[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)//Position - 0x50D
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8);
}

bool func_8(int iParam0)//Position - 0x533
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)//Position - 0x54B
{
	struct<14> Var0;
	int iVar1;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -1595111884;
			Var0.f_A = iVar1;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x59E
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_11(int iParam0)//Position - 0x5CB
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
			if (func_12(iVar2, 0, 0))
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

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x628
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

void func_13()//Position - 0x672
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			unk_0xF0059F27F7BB6680(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0xFA30DFD0084E92FE(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xF0059F27F7BB6680(&(Local_164.f_2F), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
				if (unk_0x96B1061E8F3CBC9A(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_164.f_32)
	{
		Local_164.f_32 = iVar1;
	}
	else
	{
		Local_164.f_42 = (Local_164.f_32 - iVar1);
	}
	if (iVar2 > Local_164.f_33)
	{
		Local_164.f_33 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)//Position - 0x748
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)//Position - 0x793
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

int func_16()//Position - 0x7D4
{
	return Global_1407E0;
}

int func_17(int iParam0, bool bParam1)//Position - 0x7E0
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1530[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_164.f_3)
	{
		case 0:
			if (fVar0 >= Global_40001.f_2858)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_40001.f_2859)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_40001.f_285A)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_40001.f_285B)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_40001.f_285C)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_40001.f_285D)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_40001.f_285E && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_40001.f_285F)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_40001.f_2860)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_40001.f_2861)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_40001.f_2862)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_40001.f_2863))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_40001.f_2864))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_40001.f_28D4)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_40001.f_28D5)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_40001.f_2867))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_40001.f_2869))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_40001.f_286A))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_40001.f_286B))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()//Position - 0xA52
{
	switch (Local_164.f_3)
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

int func_19()//Position - 0xAB1
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xADC
{
	if (iParam0 >= 0)
	{
		if (Local_164.f_4[iParam0] == unk_0x6BAA0516CC970D99() && func_21(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0xB15
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()//Position - 0xB4F
{
	switch (Local_164.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xB6C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1530[iParam0 /*12*/].f_4;
	iVar1 = Local_1530[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xFA30DFD0084E92FE(Local_164.f_30, iParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_164.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_164.f_31++;
			unk_0xF0059F27F7BB6680(&(Local_164.f_30), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_164.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_164.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_164.f_4[iVar3] < 0 || func_21(iVar0, Local_1530[Local_164.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1530[Local_164.f_4[iVar3] /*12*/].f_4, iVar1, Local_1530[Local_164.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_164.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_145 = iVar3;
				iLocal_146 = iParam0;
			}
			Local_164.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_164.f_4[iVar5] == iParam0)
				{
					Local_164.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCEC
{
	if (Local_164.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)//Position - 0xD14
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)//Position - 0xD3A
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(Local_164.f_2F, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_164.f_4[iVar0] == iParam0)
			{
				Local_164.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x7CB6FD92BE491AD9(&(Local_164.f_30), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Local_164.f_2F), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)//Position - 0xD95
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

int func_28(bool bParam0)//Position - 0xDD2
{
	if (unk_0xFA30DFD0084E92FE(Local_164.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_164.f_3)
	{
		case 0:
			return Global_40001.f_25AD;
		
		case 8:
			return Global_40001.f_25AF;
		
		case 3:
			return Global_40001.f_25B0;
		
		case 1:
			return Global_40001.f_28C6;
		
		case 6:
			return Global_40001.f_28C7;
		
		case 10:
			return Global_40001.f_28C9;
		
		case 11:
			return Global_40001.f_28CB;
		
		case 12:
			return Global_40001.f_28CC;
		
		case 15:
			return Global_40001.f_28D0;
		
		case 16:
			return Global_40001.f_28D1;
		
		case 17:
			return Global_40001.f_28D2;
		
		case 18:
			return Global_40001.f_28D3;
		
		case 13:
			return Global_40001.f_28CA;
		
		case 14:
			return Global_40001.f_28CD;
		
		case 2:
			return Global_40001.f_25B2;
		
		case 7:
			return Global_40001.f_28C8;
		
		case 9:
			return Global_40001.f_28CE;
		
		case 5:
			return Global_40001.f_25B3;
		
		case 4:
			return Global_40001.f_25B1;
		
		default:
	}
	return -1;
}

int func_29()//Position - 0xF30
{
	return Global_40001.f_28A8;
}

void func_30(int iParam0)//Position - 0xF3F
{
	Local_164.f_25 = iParam0;
}

int func_31()//Position - 0xF4E
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_41() && ((Local_164.f_25 == 0 || func_5(Local_164.f_3)) || Local_164.f_36 < 10))
	{
		Var0 = { Local_164.f_43[iLocal_140 /*2*/] };
		if (func_40(Var0))
		{
			if (!unk_0x7FFE36DB9042AF23(Var0.f_1))
			{
				if (func_38(Local_164.f_3, iLocal_140, &vVar1, &fVar2))
				{
					Local_164.f_37[iLocal_140] = func_34(iLocal_140);
					if (unk_0xFA30DFD0084E92FE(Local_1530[Local_164.f_37[iLocal_140] /*12*/].f_2, iLocal_140))
					{
						if (func_33(&(Local_164.f_43[iLocal_140 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x60901715E78798D5(unk_0xD14280F674B4DBF4(Local_164.f_43[iLocal_140 /*2*/].f_1), 1, 1);
							unk_0xD421BC740C5340C3(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), 1);
							unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), 1);
							unk_0x251D94F557BABE92(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), 0);
							func_32(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), 1);
							if (unk_0x46032D09AA009EC4("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x46032D09AA009EC4("MPBitset", 3))
							{
								if (unk_0x3C03CFD5DD1E2D97(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x67CFC62D543B19EF(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), "MPBitset");
								}
								unk_0xF0059F27F7BB6680(&iVar3, 10);
								unk_0xF0059F27F7BB6680(&iVar3, 11);
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_140 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_164.f_37[iLocal_140] = -1;
							Local_164.f_36++;
						}
					}
				}
			}
		}
		iLocal_140++;
		if (iLocal_140 >= 10)
		{
			iLocal_140 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)//Position - 0x113D
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

int func_33(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x118B
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

int func_34(int iParam0)//Position - 0x1285
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_37(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x81C86888AEA2F49B() - 1))
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
			{
				iVar6 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
				if (func_12(iVar6, 1, 1))
				{
					fVar3 = func_35(func_36(iVar6), vVar4);
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

float func_35(vector3 vParam0, vector3 vParam1)//Position - 0x12FE
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_36(int iParam0)//Position - 0x131C
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_37(int iParam0, var uParam1, var uParam2)//Position - 0x132F
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

int func_38(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14AB
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_39(int iParam0)//Position - 0x17AF
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_40(int iParam0)//Position - 0x17CF
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

bool func_41()//Position - 0x17ED
{
	return (func_5(Local_164.f_3) || func_39(Local_164.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x180D
{
	if (func_101(unk_0xB5CEFD608600A09F(), 0) || func_98(unk_0xB5CEFD608600A09F(), 0))
	{
		if (func_97(unk_0xB5CEFD608600A09F()) || func_95(unk_0xB5CEFD608600A09F()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xB46BE0E79661103C() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	if (func_45(&(Global_180634.f_12)))
	{
		if (!func_1(&(Global_180634.f_12), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_180634.f_12));
	}
	if (func_43())
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 0);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x3D4274189EB7E01E() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_43()//Position - 0x1904
{
	return unk_0xFA30DFD0084E92FE(Global_180634.f_1, 0);
}

void func_44(var uParam0)//Position - 0x1917
{
	uParam0->f_1 = 0;
}

bool func_45(var uParam0)//Position - 0x1924
{
	return uParam0->f_1;
}

void func_46(int iParam0, int iParam1)//Position - 0x1930
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xCFDC109752603B38(0, iParam1);
			break;
		
		default:
			iVar1 = func_47(iParam1);
			iVar0 = unk_0x2DC92D46FC48E795(iVar1);
			if (unk_0xFA30DFD0084E92FE(iVar0, iParam0))
			{
				unk_0x7CB6FD92BE491AD9(&iVar0, iParam0);
				unk_0xCFDC109752603B38(iVar0, iParam1);
			}
			break;
	}
}

int func_47(int iParam0)//Position - 0x198C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
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

bool func_48(int iParam0, int iParam1)//Position - 0x19EF
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_47(iParam1);
	iVar1 = unk_0x2DC92D46FC48E795(iVar0);
	return unk_0xFA30DFD0084E92FE(iVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1A1B
{
	if ((!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 2) && !func_8(unk_0xB5CEFD608600A09F())) && !func_7(unk_0xB5CEFD608600A09F()))
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
		func_50(66, sParam0, sParam1, 1, -1, 2, 1);
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A91
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
	func_94(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_51(&Var0);
}

int func_51(var uParam0)//Position - 0x1B01
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252E21.f_BD1)
		{
			return 0;
		}
	}
	func_65(uParam0, uParam0->f_11);
	func_62(uParam0);
	if (func_61())
	{
		func_62(uParam0);
	}
	if (func_60(uParam0->f_1))
	{
		func_53();
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
				func_53();
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
				if (func_52(Global_252E21.f_A8F[iVar0 /*80*/].f_1))
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

int func_52(int iParam0)//Position - 0x1CD2
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

void func_53()//Position - 0x1D52
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
	func_54();
	if (bVar0)
	{
		Global_1164E = 0;
	}
}

void func_54()//Position - 0x1D85
{
	Global_252E21.f_BD3 = 0;
	Global_252E21.f_BD3.f_242 = 0;
	func_58(&(Global_252E21.f_BD3.f_1));
	Global_252E21.f_BD3.f_1.f_1 = 0;
	func_55(&(Global_252E21.f_BD3.f_1));
}

void func_55(var uParam0)//Position - 0x1DC6
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
				if (unk_0x17FAADF9916EF741() && !func_57(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)//Position - 0x1E6C
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

bool func_57(bool bParam0)//Position - 0x1E80
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_58(var uParam0)//Position - 0x1EAB
{
	func_59(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_59(var uParam0)//Position - 0x1ED5
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

int func_60(int iParam0)//Position - 0x1F54
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_61()//Position - 0x2056
{
	return Global_255A46.f_10;
}

void func_62(var uParam0)//Position - 0x2064
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_48 = func_63();
	}
}

int func_63()//Position - 0x207F
{
	return 21;
}

int func_64(int iParam0)//Position - 0x2089
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

void func_65(var uParam0, int iParam1)//Position - 0x211B
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_93() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_66(iParam1, -2, 0, 0);
		}
	}
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2171
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0))
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
	if ((func_91(unk_0xB5CEFD608600A09F()) || (func_90() && func_89())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_88();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_12(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_86(iParam1, iParam0, 0);
							}
							else
							{
								return func_74(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_86(iParam1, iParam0, 0);
				}
				else
				{
					return func_67(0, -1, 0);
				}
			}
			else
			{
				return func_67(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_86(iParam1, iParam0, 0);
		}
		else
		{
			return func_74(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)//Position - 0x2341
{
	return func_68(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2357
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
			if (func_73(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x241B
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_440000.f_1EF38, 1))
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

int func_70(int iParam0, bool bParam1)//Position - 0x2533
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

int func_71(int iParam0, int iParam1, int iParam2)//Position - 0x2584
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
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)//Position - 0x25CB
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x25E2
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

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x27AD
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
			if (func_83(1))
			{
				iVar3 = func_79(iParam0);
				if (!iVar3 == -1)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_73(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_72(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_79(iParam0);
	if (!iVar4 == -1)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_75(bool bParam0)//Position - 0x2951
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2968
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

int func_77(int iParam0)//Position - 0x29E0
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
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

var func_78(int iParam0)//Position - 0x2AA3
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)//Position - 0x2ABA
{
	if (!iParam0 == func_93())
	{
		if (func_81(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_80(iParam0)];
		}
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x2AEC
{
	if (iParam0 != func_93())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_93();
}

bool func_81(int iParam0, bool bParam1)//Position - 0x2B0F
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_93();
}

int func_82(int iParam0)//Position - 0x2B3A
{
	if (iParam0 != func_93())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_93())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x2B6F
{
	if ((func_85() || func_84()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_84()//Position - 0x2B9E
{
	return Global_255A46.f_F;
}

var func_85()//Position - 0x2BAC
{
	return Global_255A46.f_E;
}

int func_86(int iParam0, int iParam1, bool bParam2)//Position - 0x2BBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_83(1))
	{
		iVar2 = func_79(iParam1);
		if (!iVar2 == -1)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_93())
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
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_87(iParam0);
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

int func_87(int iParam0)//Position - 0x2D1F
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

var func_88()//Position - 0x2DF4
{
	return Global_240006.f_2;
}

bool func_89()//Position - 0x2E02
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_90()//Position - 0x2E13
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_91(int iParam0)//Position - 0x2E30
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
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

bool func_92()//Position - 0x2E72
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_93()//Position - 0x2E83
{
	return -1;
}

void func_94(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2E8C
{
	uParam1->f_11 = func_93();
	uParam1->f_12 = func_93();
	uParam1->f_13 = func_93();
	uParam1->f_14 = func_93();
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

bool func_95(int iParam0)//Position - 0x2F0A
{
	return func_96(iParam0, 20);
}

bool func_96(int iParam0, int iParam1)//Position - 0x2F1A
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

int func_97(int iParam0)//Position - 0x2F35
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_96(iParam0, 9);
	}
	return 0;
}

int func_98(int iParam0, int iParam1)//Position - 0x2F53
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 && func_99(Global_18C80F[iParam0 /*558*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1)
	{
		if (func_99(Global_18C80F[iParam0 /*558*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)//Position - 0x2FB9
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
	return func_100(iParam0, 0);
	return 0;
}

int func_100(int iParam0, int iParam1)//Position - 0x3013
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

int func_101(int iParam0, int iParam1)//Position - 0x3068
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x30A3
{
	Local_164 = iParam0;
}

int func_103()//Position - 0x30B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_164.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_164.f_27));
	func_108();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_164.f_37[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_104();
	}
	return 1;
}

void func_104()//Position - 0x3110
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_164.f_3))
		{
			Local_164.f_43[iVar0 /*2*/] = func_107();
		}
		else
		{
			Local_164.f_43[iVar0 /*2*/] = func_105();
		}
		iVar0++;
	}
}

int func_105()//Position - 0x3154
{
	int iVar0;
	
	switch (Local_164.f_3)
	{
		case 12:
			return func_106();
			break;
	}
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

int func_106()//Position - 0x31A2
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_107()//Position - 0x31D6
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_108()//Position - 0x320A
{
	int iVar0;
	
	iVar0 = func_112();
	Local_164.f_3 = iVar0;
	func_109(func_111(133, iVar0, 0, 0));
}

void func_109(int iParam0)//Position - 0x322D
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = -2008494047;
	vVar0.y = unk_0xB5CEFD608600A09F();
	vVar0.z = iParam0;
	iVar1 = func_110(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x38E776D9FA75679B(1, &vVar0, 3, iVar1);
	}
}

var func_110(int iParam0, bool bParam1)//Position - 0x3267
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32CC
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

int func_112()//Position - 0x3B31
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_40001.f_29F1;
	iVar0[1] = Global_40001.f_28AA;
	iVar0[2] = Global_40001.f_29F5;
	iVar0[3] = Global_40001.f_29F3;
	iVar0[4] = Global_40001.f_29F4;
	iVar0[5] = Global_40001.f_29F6;
	iVar0[6] = Global_40001.f_28AB;
	iVar0[7] = Global_40001.f_28AC;
	iVar0[8] = Global_40001.f_29F2;
	iVar0[9] = Global_40001.f_28B2;
	iVar0[10] = Global_40001.f_28AD;
	iVar0[11] = Global_40001.f_28AF;
	iVar0[12] = Global_40001.f_28B0;
	iVar0[13] = Global_40001.f_28AE;
	iVar0[14] = Global_40001.f_28B1;
	iVar0[15] = Global_40001.f_28B4;
	iVar0[16] = Global_40001.f_28B5;
	iVar0[17] = Global_40001.f_28B6;
	iVar0[18] = Global_40001.f_28B7;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_115(iVar2) || func_113(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = unk_0x55AEFCD285ECC0F2(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_112();
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3CAE
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_114(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_40001.f_1D4D)
		{
			if (Global_2609ED.f_82[iVar0 /*2*/] == iVar1 && Global_2609ED.f_82[iVar0 /*2*/].f_1 == func_111(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x3D2D
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		default:
	}
	return -1;
}

int func_115(int iParam0)//Position - 0x3DC1
{
	switch (iParam0)
	{
		case 0:
			return Global_40001.f_25A7;
		
		case 1:
			return Global_40001.f_28B8;
		
		case 6:
			return Global_40001.f_28B9;
		
		case 7:
			return Global_40001.f_28BA;
		
		case 8:
			return Global_40001.f_25A8;
		
		case 3:
			return Global_40001.f_25A9;
		
		case 4:
			return Global_40001.f_25AA;
		
		case 2:
			return Global_40001.f_25AB;
		
		case 5:
			return Global_40001.f_25AC;
		
		case 9:
			return Global_40001.f_28C0;
		
		case 10:
			return Global_40001.f_28BB;
		
		case 11:
			return Global_40001.f_28BD;
		
		case 12:
			return Global_40001.f_28BE;
		
		case 15:
			return Global_40001.f_28C2;
		
		case 16:
			return Global_40001.f_28C3;
		
		case 17:
			return Global_40001.f_28C4;
		
		case 18:
			return Global_40001.f_28C5;
		
		case 13:
			return Global_40001.f_28BC;
		
		case 14:
			return Global_40001.f_28BF;
		
		default:
	}
	return 1;
}

void func_116()//Position - 0x3F01
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_164.f_37[iVar0] == unk_0x6BAA0516CC970D99())
			{
				if (func_117(iVar0))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_2, iVar0))
					{
						unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_2, iVar0))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_2, iVar0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_117(int iParam0)//Position - 0x3FB2
{
	vector3 vVar0;
	var uVar1;
	
	if (func_37(iParam0, &vVar0, &uVar1))
	{
		if (func_118(vVar0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x3FF7
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
		if (func_123(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_119(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_119(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x410B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_121(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_120(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
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
								if (unk_0xF0F2FC9DE291567F(func_121(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0xF0F2FC9DE291567F(func_121(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_120(int iParam0)//Position - 0x42C2
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_121(int iParam0)//Position - 0x42ED
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_122(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_36(iParam0);
}

int func_122(vector3 vParam0)//Position - 0x4340
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_123(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x436A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_12(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_120(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_124(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_36(iVar1), vParam0, true) < fParam1)
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

int func_124(int iParam0)//Position - 0x4466
{
	if (func_127(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_126(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_125(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)//Position - 0x44AD
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (!iVar0 == func_93())
	{
		if (iVar0 == func_80(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_126(int iParam0)//Position - 0x44D8
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_127(int iParam0, int iParam1)//Position - 0x44EF
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_126(iParam0) };
		Global_26211A = { func_126(iParam1) };
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

void func_128()//Position - 0x455C
{
	float fVar0;
	float fVar1;
	
	func_654();
	func_653();
	if (func_651())
	{
		func_541();
	}
	if (!func_7(unk_0xB5CEFD608600A09F()))
	{
		if (func_518(0, 1, 1))
		{
			if (unk_0xFA30DFD0084E92FE(iLocal_135, 6))
			{
				unk_0x7CB6FD92BE491AD9(&iLocal_135, 6);
			}
			switch (Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_3)
			{
				case 0:
					if (Local_164.f_25 < 2)
					{
						if (Local_164.f_25 > 0)
						{
							if (Local_164.f_3 != -1)
							{
								func_517(1);
								func_516(1);
							}
						}
					}
					else
					{
						func_516(2);
					}
					break;
				
				case 1:
					func_510(9);
					if (Local_1531.f_8 == 0)
					{
						Local_1531.f_8 = unk_0xB99C193A32DE341D();
					}
					if (Local_164.f_25 >= 2)
					{
						func_516(2);
						Local_1531.f_9 = unk_0xB99C193A32DE341D();
					}
					if (func_41())
					{
						func_510(0);
					}
					func_508((func_29() - func_509(&(Local_164.f_2B), 0, 0)));
					func_505(func_507((func_29() - func_509(&(Local_164.f_2B), 0, 0)), 0), func_506(Local_164.f_3));
					func_449(0, func_504());
					func_428();
					func_405();
					if (func_404())
					{
						func_403();
					}
					break;
				
				case 2:
					if (Local_164.f_25 > 2)
					{
						func_517(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_402())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_385(133, fVar0, fVar1, 0, 0, 0, 0);
						func_384(Local_164.f_3, 1);
						func_383(23, 1);
						if (Local_1531.f_8 == 0)
						{
							Local_1531.f_8 = unk_0xB99C193A32DE341D();
						}
						if (Local_1531.f_9 == 0)
						{
							Local_1531.f_9 = unk_0xB99C193A32DE341D();
						}
						func_379();
						unk_0xA9F827A1B59E18D4(1);
						if (func_402())
						{
							unk_0xDF53A66AEE1401AA(0f);
							unk_0xAEC867D0DBB7AFEB(0);
						}
						if (Local_164.f_3 == 14)
						{
							func_378(&vLocal_155);
						}
						func_377();
						if (!func_7(unk_0xB5CEFD608600A09F()))
						{
							func_50(63, "AMCH_STARTED", func_376(Local_164.f_3), func_63(), -1, func_63(), 1);
							if (func_373("AMCH_WARN", func_375(Local_164.f_3), func_374(Local_164.f_3)))
							{
								unk_0x7456702622C62EA0(1);
							}
						}
						if (func_41())
						{
							func_356(678f, 794f, 206f, 8f, 0);
							func_356(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_356(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_516(3);
					}
					break;
				
				case 3:
					if (Local_164.f_25 > 3)
					{
						iLocal_137 = 0;
						func_516(4);
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(Local_164.f_2, 1))
						{
							func_319();
							func_316();
							func_315();
						}
						if (func_314(0) && !func_20(0))
						{
							func_313();
						}
					}
					if (func_402())
					{
						unk_0x2C60B9CCB9A13F96(unk_0xB5CEFD608600A09F());
					}
					func_312();
					func_289();
					func_541();
					func_449(0, 1);
					func_428();
					func_405();
					func_510(2);
					func_510(5);
					func_510(7);
					break;
				
				case 4:
					if (func_278(&uLocal_147, !unk_0xFA30DFD0084E92FE(Local_164.f_2, 0)) || unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
					{
						if (func_5(Local_164.f_3))
						{
							if (Local_164.f_25 == 5)
							{
								func_516(5);
							}
						}
						else
						{
							func_516(6);
						}
					}
					func_265();
					func_160();
					func_289();
					func_541();
					func_449(1, 1);
					func_377();
					break;
				
				case 5:
					if (Local_164.f_25 > 5)
					{
						func_516(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_155();
		}
	}
	else
	{
		func_155();
	}
	func_135();
	func_130();
	func_129();
}

void func_129()//Position - 0x48EA
{
	struct<2> Var0;
	int iVar1;
	
	if (func_41())
	{
		Var0 = { Local_164.f_43[iLocal_154 /*2*/] };
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
		iLocal_154++;
		if (iLocal_154 >= 10)
		{
			iLocal_154 = 0;
			iLocal_163 = iLocal_162;
			iLocal_162 = 0;
		}
	}
}

void func_130()//Position - 0x4956
{
	if (Local_164.f_25 == 5)
	{
		if (unk_0x7FFE36DB9042AF23(Local_164.f_43[iLocal_154 /*2*/].f_1))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_154 /*2*/].f_1), 0))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_160, iLocal_154))
				{
					unk_0xF0059F27F7BB6680(&iLocal_160, iLocal_154);
					iLocal_161[iLocal_154] = unk_0x2F079D1FC5F6CB99();
					unk_0xF2C27FE5A8B98CB5(iLocal_161[iLocal_154], "Explosion_Countdown", unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_154 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x8B34879B92B3B225(iLocal_161[iLocal_154], "Time", 30f);
				}
				if ((30000 - func_509(&(Local_164.f_2D), 0, 0)) >= 0)
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_154 /*2*/].f_1), 0))
					{
						func_510(1);
						iLocal_162 = 1;
					}
				}
				else if (unk_0x89B5CBCE9D131B32(Local_164.f_43[iLocal_154 /*2*/].f_1))
				{
					unk_0x5502708AECB47F5D(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_154 /*2*/].f_1));
					unk_0x8195A15B79CC81A4(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iLocal_154 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(iLocal_160, iLocal_154) && !unk_0x1BD5EE88F32433CD(iLocal_161[iLocal_154]))
			{
				unk_0x38FF8CB6377D36F6(iLocal_161[iLocal_154]);
			}
		}
		if (iLocal_163)
		{
			if (!func_91(unk_0xB5CEFD608600A09F()))
			{
				func_132(func_507((30000 - func_509(&(Local_164.f_2D), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_131();
			}
		}
	}
}

void func_131()//Position - 0x4AD7
{
	Global_14D262.f_440 = 1;
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x4AE7
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_133(7, iVar0);
		Global_14D262.f_1124[iVar0] = iParam0;
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

void func_133(int iParam0, int iParam1)//Position - 0x4C35
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)//Position - 0x4C4E
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

void func_135()//Position - 0x4C67
{
	if (((func_12(unk_0xB5CEFD608600A09F(), 1, 1) && !func_7(unk_0xB5CEFD608600A09F())) && !func_151(unk_0xB5CEFD608600A09F())) && func_518(0, 1, 1))
	{
		if (Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_3 == 1)
		{
			func_148(func_150(Local_164.f_3), func_375(Local_164.f_3), 0, 0);
		}
		else if (Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_3 == 3)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_135, 10))
			{
				func_136(func_374(Local_164.f_3), 0);
			}
			else
			{
				func_136("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_377();
		}
	}
	else
	{
		func_377();
	}
}

void func_136(char* sParam0, bool bParam1)//Position - 0x4D12
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return;
	}
	if (func_146(sParam0))
	{
		return;
	}
	func_140();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()//Position - 0x4D7D
{
	unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 1);
}

void func_138(bool bParam0)//Position - 0x4D90
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_140740.f_3B), 0);
}

void func_139()//Position - 0x4DB6
{
	Global_140740.f_A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_140740.f_B = unk_0xED678C85A82F0AB9();
}

void func_140()//Position - 0x4DDB
{
	func_142();
	func_141(0);
}

void func_141(bool bParam0)//Position - 0x4DEC
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

void func_142()//Position - 0x4E7E
{
	if (!func_145())
	{
	}
	if (func_144())
	{
		unk_0x0C2CA00C24C64582(&(Global_140740.f_C));
		func_143();
		unk_0xF633952844D6CF3D();
	}
}

void func_143()//Position - 0x4EA7
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

int func_144()//Position - 0x5119
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_145()//Position - 0x512F
{
	if (!func_144())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_140740.f_C));
	func_143();
	return unk_0x121EFFA2D57472F2();
}

bool func_146(char* sParam0)//Position - 0x5155
{
	if (!func_144())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_147(sParam0);
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C));
}

bool func_147(char* sParam0)//Position - 0x5199
{
	if (!func_144())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

int func_148(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x51CB
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
	if (func_149(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_140();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = iParam3;
	Global_140740.f_38 = iParam3;
	func_139();
	func_138(bParam2);
	func_137();
	return 1;
}

bool func_149(char* sParam0, char* sParam1)//Position - 0x5275
{
	if (!func_144())
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
	if (!unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C)))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam1) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

char* func_150(int iParam0)//Position - 0x52CD
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA())) || unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
					iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
					if (unk_0x7512ED01F3F46714(iVar1) && unk_0x2B4DE5C0D509B0F9(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_sniperrifle"), 0) && !unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_heavysniper"), 0)) && !unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_151(int iParam0)//Position - 0x551B
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_180634.f_D)))
		{
			if (!func_1(&(Global_180634.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_44(&(Global_180634.f_D));
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9);
}

bool func_152(int iParam0, int iParam1)//Position - 0x55AD
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

bool func_153()//Position - 0x55C6
{
	return Global_1406A0.f_1;
}

bool func_154()//Position - 0x55D4
{
	return Global_1406A0;
}

void func_155()//Position - 0x55E0
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_135, 6))
	{
		unk_0x98121A0800F4EA5E();
		func_449(1, 1);
		unk_0x38FF8CB6377D36F6(iLocal_143);
		unk_0x7CB6FD92BE491AD9(&iLocal_135, 4);
		func_159();
		func_157();
		unk_0xCF9877018AE2E3BB(0f, 0, 21);
		unk_0xF0059F27F7BB6680(&iLocal_135, 6);
		func_156();
	}
}

void func_156()//Position - 0x5629
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_7 = 0;
}

void func_157()//Position - 0x563F
{
	if (Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
	{
		func_158();
	}
}

void func_158()//Position - 0x5658
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

void func_159()//Position - 0x56B5
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E3.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_24B2CE.f_1E3 = { Var0 };
	}
}

void func_160()//Position - 0x56DA
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1, 0))
	{
		if (func_7(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1), 0);
			return;
		}
		if (func_151(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1), 0);
			return;
		}
		func_225(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1531.f_6 = (Local_1531.f_6 + iVar0);
			if (!Global_40001.f_2A89)
			{
				func_224(10, Local_1531.f_6);
			}
			Global_2588F5 = iVar0;
			if (func_223())
			{
				func_214(-1468524125, iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				unk_0x98D5F29DCDF681F8(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1531.f_7 = (Local_1531.f_7 + iVar1);
			func_213();
			func_161(0, unk_0xBC25C936A095B5BA(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1), 0);
	}
}

int func_161(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x57D4
{
	return func_162(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x57F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_172(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_168(unk_0x823166D9421223CA(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_163(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_163(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x586F
{
	vector3 vVar0;
	
	vVar0 = { func_166(iParam0, 1) };
	if (iParam0 == func_165(unk_0xBC25C936A095B5BA()))
	{
		func_164(1);
	}
	func_168(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_164(int iParam0)//Position - 0x58A3
{
	Global_252E21.f_75D = iParam0;
}

int func_165(int iParam0)//Position - 0x58B4
{
	return iParam0;
}

Vector3 func_166(int iParam0, bool bParam1)//Position - 0x58BE
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
	if (iParam0 == func_167(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
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

int func_167(int iParam0)//Position - 0x5982
{
	return iParam0;
}

void func_168(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x598C
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
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_171(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_170();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_169();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_169()//Position - 0x5AA3
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_170()//Position - 0x5ACD
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_171(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5AE8
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

var func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5B81
{
	var uVar0;
	
	uVar0 = func_173(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x5BA4
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_212(unk_0xB5CEFD608600A09F()) || func_211(unk_0xB5CEFD608600A09F()))
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
	else if (func_209() || func_206(unk_0xB5CEFD608600A09F()))
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
	if (func_205(sParam2))
	{
	}
	if (func_204())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_202(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_201(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_199(0, &iVar1);
					break;
				
				case 3:
					func_199(1, &iVar1);
					break;
				
				case 1:
					func_197(&iVar1);
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
			func_194(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_183((func_193(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_194(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_178(iVar1);
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
				func_174((func_176(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_174((func_176(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_174(int iParam0)//Position - 0x5DA2
{
	if (func_204())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_175(joaat("mpply_globalxp"), iParam0);
	}
}

void func_175(int iParam0, int iParam1)//Position - 0x5DCD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_176(int iParam0)//Position - 0x5DE9
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_177(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_177(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_177(int iParam0)//Position - 0x5E3A
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

void func_178(int iParam0)//Position - 0x5E58
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_126(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_181(func_182(&Var0));
			if (iVar1 == 0)
			{
				func_180(&Global_14F5C9, iParam0);
				func_179(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_180(&Global_14F5CA, iParam0);
				func_179(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_180(&Global_14F5CB, iParam0);
				func_179(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_180(&Global_14F5CC, iParam0);
				func_179(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_180(&Global_14F5CD, iParam0);
				func_179(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_179(int iParam0, int iParam1)//Position - 0x5F2C
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

void func_180(var uParam0, int iParam1)//Position - 0x6051
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_181(int iParam0)//Position - 0x6062
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

int func_182(var uParam0)//Position - 0x60BF
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

void func_183(int iParam0, int iParam1, int iParam2)//Position - 0x60E2
{
	if (func_204())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_192(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_192(-1)])
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
		if (func_191(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_189(iParam0, 1);
		}
		func_188(639, iParam0, -1, 1);
		func_187(640, func_189(iParam0, 1), -1, 1, 0);
		Global_14F642[func_192(-1)] = iParam0;
		func_184(7, 0);
	}
}

void func_184(int iParam0, int iParam1)//Position - 0x6203
{
	int iVar0;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185();
		Global_258004[iVar0] = iParam0;
	}
}

int func_185()//Position - 0x6226
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

int func_186(int iParam0, var uParam1)//Position - 0x625B
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

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x62E1
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6311
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_192(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_192(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_192(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_192(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_192(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_192(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_192(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_192(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_192(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_192(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_192(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_192(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_192(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_192(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_192(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_192(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_192(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_192(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_192(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_192(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_192(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_192(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_192(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_192(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_192(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_192(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_192(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_192(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_192(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_192(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_192(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_192(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_189(int iParam0, bool bParam1)//Position - 0x6ACB
{
	if (bParam1)
	{
	}
	return func_190(iParam0, 0);
}

int func_190(int iParam0, int iParam1)//Position - 0x6ADF
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

int func_191(int iParam0)//Position - 0x6B9E
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

int func_192(int iParam0)//Position - 0x6BC3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_193(int iParam0)//Position - 0x6BF7
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_192(-1)];
			}
			else if (func_191(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_192(-1)];
	}
	return 0;
}

void func_194(int iParam0, int iParam1, int iParam2)//Position - 0x6C54
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_192(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_195(iParam0))
	{
		func_187(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam2, 1);
	}
}

int func_195(int iParam0)//Position - 0x6C96
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

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0x6E8E
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0)//Position - 0x6EC0
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
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_73(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_127(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_198(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_198(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_198(int iParam0, int iParam1)//Position - 0x6FAB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_199(bool bParam0, int iParam1)//Position - 0x6FCC
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_127(unk_0xB5CEFD608600A09F(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_200(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_127(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_198(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_198(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_200(int iParam0, int iParam1)//Position - 0x70E4
{
	return SYSTEM::VDIST(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_201(int iParam0)//Position - 0x7100
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_198(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_202(int iParam0)//Position - 0x7137
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_193(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_193(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_203(8000, 0, 0) > 0)
	{
		if (func_203(8000, 0, 0) < (iParam0 + func_193(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_203(8000, 0, 0) - func_193(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_203(int iParam0, bool bParam1, int iParam2)//Position - 0x719B
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

int func_204()//Position - 0x71C3
{
	return 1;
}

int func_205(char* sParam0)//Position - 0x71CC
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

int func_206(int iParam0)//Position - 0x7205
{
	return func_207(func_208(iParam0));
}

int func_207(int iParam0)//Position - 0x7217
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x7231
{
	if (func_101(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

bool func_209()//Position - 0x7254
{
	if (unk_0x517823CA390A19F6())
	{
		return func_61();
	}
	return func_210(Global_440000.f_1EF38);
}

int func_210(int iParam0)//Position - 0x7278
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

bool func_211(int iParam0)//Position - 0x72B2
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_212(int iParam0)//Position - 0x72C7
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_213()//Position - 0x72DC
{
	Global_258663 = 1;
}

void func_214(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x72E9
{
	int iVar0;
	
	if (!func_223())
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
				func_215(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_215(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x77AF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_223())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_16()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_222(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_221(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_216(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7953
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_217(iParam0);
	}
}

void func_217(int iParam0)//Position - 0x798B
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_223())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_220(iParam0))
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
		func_218(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_218(var uParam0)//Position - 0x79DD
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
	func_219(&(uParam0->f_8.f_3));
	func_219(&(uParam0->f_8.f_10));
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

void func_219(var uParam0)//Position - 0x7AD3
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

int func_220(int iParam0)//Position - 0x7B1B
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_221(int iParam0, int iParam1)//Position - 0x7B43
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_222(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x7B57
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_223())
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

int func_223()//Position - 0x7C50
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_224(int iParam0, int iParam1)//Position - 0x7C67
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

void func_225(var uParam0, var uParam1)//Position - 0x7CD9
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x6BAA0516CC970D99(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_164.f_1 - iLocal_133)) / 60f) / 1000f));
		if (iVar1 > Global_40001.f_2A48)
		{
			iVar1 = Global_40001.f_2A48;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_264() * iVar1);
		*uParam1 = (func_263() * iVar1);
		fVar2 = func_262();
		if (fVar2 > 0f && !unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_261())
			{
				iVar3 = func_261();
			}
			iVar4 = Local_164.f_33;
			if (iVar4 > func_260())
			{
				iVar4 = func_260();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_253(func_259(), func_258(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_40001.f_2A55)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_253(func_252(), func_251(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_40001.f_2A56)));
		}
		else
		{
			func_249(1);
		}
	}
	else
	{
		func_249(0);
	}
	func_226(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_226(var uParam0, int iParam1)//Position - 0x7E21
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_248())
		{
			if (func_247(0))
			{
				if (!func_243(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_242()))
					{
						if (func_241() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_241());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_239(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_232("GB_BCUT_TICK1", func_242(), iVar0, 0, 0, 1, 1);
						}
						func_231(20);
						func_227(func_242(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_227(int iParam0, int iParam1, int iParam2)//Position - 0x7EC2
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_230(iParam0);
		func_229(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_228(iParam0));
	}
}

var func_228(int iParam0)//Position - 0x7F18
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_229(var uParam0, var uParam1)//Position - 0x7F2A
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_230(int iParam0)//Position - 0x7F44
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_231(int iParam0)//Position - 0x7F58
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_232(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x7F81
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
		unk_0x449F0674640D94C0(func_66(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_237(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_233(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_233(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x8019
{
	int iVar0;
	
	if ((!func_236() || !unk_0x517823CA390A19F6()) || !func_14(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_234(iParam2);
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

int func_234(int iParam0)//Position - 0x8121
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_235(iVar0);
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

void func_235(int iParam0)//Position - 0x8183
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_236()//Position - 0x81BC
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_237(char* sParam0)//Position - 0x81CD
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_238(&cVar0);
}

var func_238(char[4] cParam0)//Position - 0x81F1
{
	return cParam0;
}

void func_239(int iParam0, bool bParam1)//Position - 0x81FB
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_240(1);
	}
	else
	{
		iVar1 = func_240(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_240(bool bParam0)//Position - 0x822D
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_241()//Position - 0x8253
{
	return Global_40001.f_2E02;
}

int func_242()//Position - 0x8262
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_243(bool bParam0)//Position - 0x8277
{
	return func_244(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_244(int iParam0, bool bParam1)//Position - 0x8289
{
	return func_245(iParam0, bParam1, 1);
}

int func_245(int iParam0, bool bParam1, int iParam2)//Position - 0x829A
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_246(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_93() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1)//Position - 0x82F6
{
	if (iParam0 != func_93())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_93())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_247(bool bParam0)//Position - 0x8345
{
	return func_81(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_248()//Position - 0x8357
{
	return func_82(unk_0xB5CEFD608600A09F());
}

void func_249(bool bParam0)//Position - 0x8367
{
	if (bParam0)
	{
		if (func_250(1))
		{
			unk_0xF0059F27F7BB6680(&Global_18064D, 1);
		}
	}
	else if (func_250(2))
	{
		unk_0xF0059F27F7BB6680(&Global_18064D, 2);
	}
}

int func_250(int iParam0)//Position - 0x8399
{
	int iVar0;
	
	iVar0 = func_196(2530, -1, 0);
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

int func_251()//Position - 0x846A
{
	return Global_40001.f_2854;
}

int func_252()//Position - 0x8479
{
	return Global_40001.f_2852;
}

int func_253(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x8488
{
	return func_254(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_254(int iParam0, int iParam1, int iParam2)//Position - 0x84B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_255()//Position - 0x8501
{
	return Global_40001.f_2857;
}

float func_256()//Position - 0x8510
{
	return Global_40001.f_2856;
}

float func_257()//Position - 0x851F
{
	return Global_40001.f_2855;
}

int func_258()//Position - 0x852E
{
	return Global_40001.f_2853;
}

int func_259()//Position - 0x853D
{
	return Global_40001.f_2851;
}

int func_260()//Position - 0x854C
{
	return Global_40001.f_29E9;
}

int func_261()//Position - 0x855B
{
	return Global_40001.f_29E8;
}

var func_262()//Position - 0x856A
{
	if (func_20(0))
	{
		return Global_40001.f_286C;
	}
	if (func_20(1))
	{
		return Global_40001.f_286D;
	}
	if (func_20(2))
	{
		return Global_40001.f_286E;
	}
	return Global_40001.f_286F;
}

int func_263()//Position - 0x85B8
{
	return Global_40001.f_2850;
}

int func_264()//Position - 0x85C7
{
	return Global_40001.f_284F;
}

void func_265()//Position - 0x85D6
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1, 1) && (func_277() || unk_0xFA30DFD0084E92FE(Local_164.f_2, 0)))
	{
		if (func_64(func_276()))
		{
			func_275();
		}
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
			{
				if (func_314(0))
				{
					iVar2 = Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4;
					func_271(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_269(64, func_270(Local_164.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_375(Local_164.f_3), 1, 2, -1);
						}
						else if (func_268())
						{
							func_269(69, func_270(Local_164.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_375(Local_164.f_3), 1, 2, -1);
						}
						else
						{
							func_269(64, func_270(Local_164.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_375(Local_164.f_3), 1, 2, -1);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_164.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_375(Local_164.f_3), 1, 2, -1);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_164.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_164.f_3), 1, 2, -1);
						}
						else
						{
							func_269(67, func_270(Local_164.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_164.f_3), 1, 2, -1);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_164.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_375(Local_164.f_3), 1, 2, -1);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_164.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_164.f_3), 1, 2, -1);
						}
						else
						{
							func_269(67, func_270(Local_164.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_375(Local_164.f_3), 1, 2, -1);
						}
					}
					else
					{
						iVar3 = unk_0xCFA8A401AAD7BB5A(Local_164.f_4[0]);
						if (unk_0x05086B70D2CFEA6F(iVar3))
						{
							iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
							if (Local_1530[Local_164.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1530[Local_164.f_4[0] /*12*/].f_4;
							func_271(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_267(76, func_93(), func_270(Local_164.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_375(Local_164.f_3), -1, fVar1, 1, 2, unk_0xD885B2234FC72D62(iVar4));
							}
							else if (func_268())
							{
								func_267(77, func_93(), func_270(Local_164.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_375(Local_164.f_3), iVar0, -1082130432, 1, 2, unk_0xD885B2234FC72D62(iVar4));
							}
							else
							{
								func_267(76, func_93(), func_270(Local_164.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_375(Local_164.f_3), iVar0, -1082130432, 1, 2, unk_0xD885B2234FC72D62(iVar4));
							}
						}
					}
				}
				else
				{
					func_50(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1);
				}
			}
			else
			{
				func_49("", "", 1);
			}
			unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1), 1);
			func_266(133);
		}
	}
}

void func_266(int iParam0)//Position - 0x899A
{
	if (iParam0 == iParam0)
	{
	}
}

int func_267(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x89A9
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
	func_94(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_11 = iParam1;
	StringCopy(&(Var0.f_39), sParam2, 16);
	StringCopy(&(Var0.f_3D), sParam6, 16);
	StringCopy(&(Var0.f_19), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_47 = iParam9;
	Var0.f_48 = iParam10;
	return func_51(&Var0);
}

int func_268()//Position - 0x8A38
{
	return 0;
}

int func_269(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8A41
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
	func_94(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_39), sParam1, 16);
	StringCopy(&(Var0.f_3D), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_47 = iParam8;
	Var0.f_48 = iParam9;
	if (iParam10 != -1)
	{
		unk_0xF0059F27F7BB6680(&(Var0.f_45), iParam10);
	}
	return func_51(&Var0);
}

char* func_270(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x8AD2
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

int func_271(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x8C5F
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_272(Local_164.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_272(int iParam0, int iParam1)//Position - 0x8CA6
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
				return func_274(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_273(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_273(float fParam0)//Position - 0x8D49
{
	return (fParam0 / 1.609344f);
}

float func_274(float fParam0)//Position - 0x8D59
{
	return (fParam0 / 0.3048f);
}

void func_275()//Position - 0x8D69
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

int func_276()//Position - 0x8DB4
{
	return Global_252E21.f_A8F[0 /*80*/].f_1;
}

bool func_277()//Position - 0x8DC8
{
	return unk_0xFA30DFD0084E92FE(Global_180634.f_1, 25);
}

int func_278(var uParam0, bool bParam1)//Position - 0x8DDC
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_288()) && !(func_101(unk_0xB5CEFD608600A09F(), 0) && (func_97(unk_0xB5CEFD608600A09F()) || func_287(unk_0xB5CEFD608600A09F())))) && !func_285(unk_0xB5CEFD608600A09F()))
	{
		func_284();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_45(&(uParam0->f_3)))
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
				func_283(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_45(&(uParam0->f_5)))
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
				func_280();
				func_283(uParam0, 2);
			}
			break;
		
		case 2:
			func_280();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_279("AMEV_LBD_HELP"))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_283(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
				func_283(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
			return 1;
	}
	return 0;
}

int func_279(char* sParam0)//Position - 0x8F58
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_280()//Position - 0x8F6B
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0))
	{
		if (((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0x17FAADF9916EF741())
		{
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 1);
			func_282("AMEV_LBD_HELP", -1);
			func_281(1);
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 0);
		}
	}
}

void func_281(int iParam0)//Position - 0x8FEE
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_288())
	{
		unk_0xC4BA30B532FE260F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_282(char* sParam0, int iParam1)//Position - 0x901C
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam1);
}

void func_283(var uParam0, int iParam1)//Position - 0x9033
{
	*uParam0 = iParam1;
}

void func_284()//Position - 0x9040
{
	Global_258664 = 1;
}

int func_285(int iParam0)//Position - 0x904D
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_286(int iParam0)//Position - 0x9093
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

bool func_287(int iParam0)//Position - 0x93DF
{
	return func_96(iParam0, 19);
}

bool func_288()//Position - 0x93EF
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

void func_289()//Position - 0x9405
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_164.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_311() && !func_91(unk_0xB5CEFD608600A09F()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_93();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_164.f_4[iVar7] > -1)
			{
				iVar18 = unk_0xCFA8A401AAD7BB5A(Local_164.f_4[iVar7]);
				if (unk_0x05086B70D2CFEA6F(iVar18))
				{
					iVar1 = unk_0x4ED43B67B3F05E0F(iVar18);
					if (func_12(iVar1, 0, 1))
					{
						if (!func_14(iVar1, 0))
						{
							if (Local_1530[Local_164.f_4[iVar7] /*12*/].f_4 != 0)
							{
								iVar0[iVar15] = iVar1;
								func_271(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1530[Local_164.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_247(1))
								{
									if (func_81(iVar1, 1))
									{
										uVar17[iVar7] = func_66(iVar1, -2, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x6BAA0516CC970D99();
		if (func_91(unk_0xB5CEFD608600A09F()))
		{
			iVar19 = func_309();
			iVar20 = unk_0x5363B43856FA7779(iVar19);
			if (unk_0x96B1061E8F3CBC9A(iVar20))
			{
				iVar21 = unk_0xDE780EBA36114734(iVar20);
				if (unk_0x05086B70D2CFEA6F(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_271(&iVar4, &fVar9, iLocal_137, 1);
		func_271(&iVar5, &fVar10, Local_1530[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_509(&(Local_164.f_27), 0, 0);
		iVar6 = func_507(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			func_308(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_135, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_311() || Local_164.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_164.f_25 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_304(iVar0[0], iVar0[1], iVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_270(Local_164.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_305(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_268())
		{
			func_303(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_305(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_294(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_270(Local_164.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_305(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_290();
	}
}

void func_290()//Position - 0x96F7
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_293();
	if (fVar0 >= 0f)
	{
		if (Local_164.f_25 == 3)
		{
			if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xE59B7F5A03335350(iVar1, 0))
					{
						func_292(iVar1, &fLocal_141);
						fVar2 = (fVar0 + fLocal_141);
						unk_0xCF9877018AE2E3BB(fVar2, 1, 21);
						func_291(fVar0);
						return;
					}
				}
			}
		}
		if (func_279("AMCH_FLYLOW"))
		{
			unk_0x7456702622C62EA0(1);
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_135, 4))
		{
			unk_0x38FF8CB6377D36F6(iLocal_143);
			unk_0x7CB6FD92BE491AD9(&iLocal_135, 4);
		}
		unk_0xCF9877018AE2E3BB(0f, 0, 21);
	}
}

void func_291(float fParam0)//Position - 0x97A6
{
	float fVar0;
	
	if (unk_0xFB6A1A92F9B0EB9A(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_510(6);
			if (!unk_0xFA30DFD0084E92FE(iLocal_135, 4))
			{
				unk_0xC4BA30B532FE260F(iLocal_143, "Altitude_Warning", "EXILE_1", 1);
				unk_0xF0059F27F7BB6680(&iLocal_135, 4);
			}
		}
		else
		{
			if (func_279("AMCH_FLYLOW"))
			{
				unk_0x7456702622C62EA0(1);
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_135, 4))
			{
				unk_0x38FF8CB6377D36F6(iLocal_143);
				unk_0x7CB6FD92BE491AD9(&iLocal_135, 4);
			}
		}
	}
}

float func_292(int iParam0, var uParam1)//Position - 0x9818
{
	float fVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	unk_0x2084D4C6C2DF616F(vVar1, uParam1, 1, 0);
	unk_0x2084D4C6C2DF616F(vVar1, &uVar2, 0, 0);
	if (unk_0xC74F808C27B1BB64())
	{
		func_510(3);
		unk_0xF0059F27F7BB6680(&iLocal_135, 10);
		func_27(&uLocal_131, 0, 0);
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_135, 10))
	{
		if (func_1(&uLocal_131, 2000, 0))
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_135, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (vVar1.z - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_293()//Position - 0x98AE
{
	switch (Local_164.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0x98DD
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
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
	if (Global_25848B[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[0]);
			Global_258491[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_295(iParam3, &(Global_258491[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_25848B[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[1]);
			Global_258491[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_295(iParam4, &(Global_258491[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_25848B[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[2]);
			Global_258491[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_295(iParam5, &(Global_258491[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xB5CEFD608600A09F() != func_93())
			{
				if (func_151(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_295(iParam7, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam14))
	{
		sVar2 = sParam14;
	}
	func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_131();
}

void func_295(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x9BA4
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
			if (func_134(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_133(6, iVar0);
		Global_14D262.f_EBA[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_EBA.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_EBA.f_B7[iVar0] = iParam3;
		Global_14D262.f_EBA.f_AC[iVar0] = iParam2;
		Global_14D262.f_EBA.f_104[iVar0] = iParam4;
		Global_14D262.f_EBA.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_EBA.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_EBA.f_1BB[iVar0] = iParam7;
		Global_14D262.f_EBA.f_1C6[iVar0] = fParam8;
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
		if (iParam15 == 5 && func_297())
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
			if (func_296())
			{
				Global_14D262.f_444 = 1;
			}
		}
	}
}

int func_296()//Position - 0x9E06
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

int func_297()//Position - 0x9E2A
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_298(int iParam0, char* sParam1)//Position - 0x9E68
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

void func_299()//Position - 0x9F0A
{
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	Global_258667 = 1;
}

int func_300(bool bParam0)//Position - 0x9F2D
{
	if (func_302())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_301()//Position - 0x9F64
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_302()//Position - 0x9F7B
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 12);
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x9F8D
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_25848B[0] != iParam0 || Global_25848B[1] != iParam1) || Global_25848B[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_25848B[0] = iParam0;
	Global_25848B[1] = iParam1;
	Global_25848B[2] = iParam2;
	Global_25848B[3] = 0;
	Global_25848B[4] = 0;
	if (Global_25848B[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[0]);
			Global_258491[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_132(iParam3, &(Global_258491[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_25848B[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[1]);
			Global_258491[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_132(iParam4, &(Global_258491[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_25848B[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[2]);
			Global_258491[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_132(iParam5, &(Global_258491[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_132(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0xB5CEFD608600A09F() != func_93())
			{
				if (func_151(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_132(iParam7, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_132(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_132(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam13))
	{
		sVar2 = sParam13;
	}
	func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_131();
}

void func_304(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xA20F
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
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
	if (Global_25848B[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[0]);
			Global_258491[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_295(-1, &(Global_258491[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_25848B[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[1]);
			Global_258491[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_295(-1, &(Global_258491[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_25848B[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[2]);
			Global_258491[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_295(-1, &(Global_258491[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0xB5CEFD608600A09F() != func_93())
			{
				if (func_151(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_295(-1, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0xB5CEFD608600A09F()) == 0)
			{
				func_295(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_131();
}

char* func_305()//Position - 0xA4E1
{
	return "HUD_COUNTDOWN";
	switch (func_307(unk_0xB5CEFD608600A09F()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_306())
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

int func_306()//Position - 0xA68B
{
	if (func_307(unk_0xB5CEFD608600A09F()) == 133)
	{
		return Global_267214.f_12C3;
	}
	return -1;
}

int func_307(int iParam0)//Position - 0xA6AE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

void func_308(int iParam0)//Position - 0xA6CD
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

var func_309()//Position - 0xAAB0
{
	if (unk_0x724D816EA203A79E(func_310()))
	{
		return func_310();
	}
	return func_88();
}

var func_310()//Position - 0xAACE
{
	return Global_240006.f_3;
}

int func_311()//Position - 0xAADC
{
	switch (Local_164.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_312()//Position - 0xAB35
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = -1;
	Var1.f_16 = -1082130432;
	Var1.f_17 = 3;
	Var1.f_27 = -1;
	Var1.f_29 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		Local_185.f_215[iVar0 /*42*/] = { Var1 };
		Local_185.f_215[iVar0 /*42*/].f_1 = func_93();
		if (Local_164.f_4[iVar0] > -1)
		{
			iVar3 = unk_0xCFA8A401AAD7BB5A(Local_164.f_4[iVar0]);
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar2 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (!func_14(iVar2, 0))
				{
					Local_185.f_215[iVar0 /*42*/] = Local_164.f_4[iVar0];
					Local_185.f_215[iVar0 /*42*/].f_1 = iVar2;
					Local_185.f_215[iVar0 /*42*/].f_9 = Local_1530[Local_164.f_4[iVar0] /*12*/].f_4;
					Local_185.f_215[iVar0 /*42*/].f_1F = -1;
					Local_185.f_1.f_6C = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_313()//Position - 0xAC22
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_6BB), 19);
}

int func_314(int iParam0)//Position - 0xAC37
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_164.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1530[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_315()//Position - 0xAC6C
{
}

void func_316()//Position - 0xAC74
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_271(&iVar1, &fVar2, iLocal_137, 1);
	switch (Local_164.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_318(sVar0, fVar2 >= 70f);
			if (unk_0x144E80F5C46A6B75(sVar0))
			{
				fVar2 = func_317(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0xB4B01646AEC7DB2E(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x620EBB593A8870CD();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_318(sVar0, bVar3);
			if (unk_0x144E80F5C46A6B75(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_317(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_317(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0xB4B01646AEC7DB2E(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_142 != iLocal_137)
			{
				if (iLocal_137 > 0)
				{
					unk_0xC4BA30B532FE260F(iLocal_144, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x8B34879B92B3B225(iLocal_144, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					unk_0xC4BA30B532FE260F(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_142 = iLocal_137;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_135, 3))
		{
			if (func_243(1))
			{
				unk_0xC4BA30B532FE260F(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xC4BA30B532FE260F(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xF0059F27F7BB6680(&iLocal_135, 3);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_135, 3))
	{
		if (func_243(1))
		{
			unk_0xC4BA30B532FE260F(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xC4BA30B532FE260F(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_135, 3);
	}
}

float func_317(float fParam0, float fParam1)//Position - 0xAE31
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_318(char* sParam0, bool bParam1)//Position - 0xAE48
{
	if (bParam1)
	{
		if (!unk_0x144E80F5C46A6B75(sParam0))
		{
			unk_0xD6423910AAD8A379(sParam0);
		}
	}
	else if (unk_0x144E80F5C46A6B75(sParam0))
	{
		unk_0xC1300D0F3A74E20B(sParam0);
	}
}

void func_319()//Position - 0xAE78
{
	int iVar0;
	
	if ((!func_151(unk_0xB5CEFD608600A09F()) && !func_14(unk_0xB5CEFD608600A09F(), 0)) && func_12(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		iVar0 = func_340();
		if (iVar0 != Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_134) || func_339(iVar0, iLocal_134))
			{
				if (!func_338() || func_1(&uLocal_123, 1000, 0))
				{
					func_27(&uLocal_123, 0, 0);
					iLocal_134 = iVar0;
					Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4 = iVar0;
					func_322();
					if (iLocal_133 == 0)
					{
						iLocal_133 = unk_0xED678C85A82F0AB9();
					}
					if (Local_1531.f_B == 0)
					{
						Local_1531.f_B = unk_0xB99C193A32DE341D();
					}
				}
			}
		}
		iLocal_137 = func_320();
	}
}

int func_320()//Position - 0xAF3A
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_164.f_3)
	{
		case 0:
			fVar1 = unk_0x0F30CB0CB143363C();
			break;
		
		case 1:
			fVar1 = unk_0xBBB5FC157865F9C1();
			break;
		
		case 2:
			fVar1 = unk_0x620EBB593A8870CD();
			break;
		
		case 3:
			fVar1 = unk_0xD94883910C97693D();
			break;
		
		case 4:
			fVar1 = unk_0x6DCAB01957D214DA();
			break;
		
		case 5:
			fVar1 = unk_0xE590435BD561E6BD();
			break;
		
		case 8:
			iVar0 = unk_0x66D4675AE7BFBE0D();
			break;
		
		case 9:
			fVar1 = unk_0xA94ACC327E57DC18();
			break;
		
		case 11:
			fVar1 = unk_0xB329D387ACC694DB();
			break;
		
		case 12:
			fVar1 = unk_0xB329D387ACC694DB();
			break;
		
		case 13:
			fVar1 = unk_0xB3BC59BEF9318F16();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = unk_0xC40EDFF7541407A8(iVar0);
	func_321(&iVar2);
	if (iVar2 == iLocal_136)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_135, 1))
			{
				func_27(&uLocal_125, 0, 0);
				Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4.f_2 = func_509(&uLocal_125, 0, 0);
				unk_0xF0059F27F7BB6680(&iLocal_135, 1);
			}
			else if ((func_509(&uLocal_125, 0, 0) % 1000) == 0)
			{
				Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4.f_2 = func_509(&uLocal_125, 0, 0);
			}
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&iLocal_135, 1);
	}
	if ((func_21(iLocal_136, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_127, 2000, 0))
	{
		iVar2 = iLocal_136;
		unk_0xF0059F27F7BB6680(&iLocal_135, 2);
	}
	else
	{
		iLocal_136 = iVar2;
		func_44(&uLocal_127);
		unk_0x7CB6FD92BE491AD9(&iLocal_135, 2);
	}
	return iVar2;
}

void func_321(int iParam0)//Position - 0xB0EA
{
	switch (Local_164.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((((unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA())) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) || unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_322()//Position - 0xB173
{
	if (!unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1, 2))
	{
		unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_1), 2);
		func_323(1);
	}
}

void func_323(bool bParam0)//Position - 0xB1A4
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 7))
		{
			if ((!func_95(unk_0xB5CEFD608600A09F()) && !func_7(unk_0xB5CEFD608600A09F())) && !func_151(unk_0xB5CEFD608600A09F()))
			{
				if (func_154())
				{
					func_331(0);
					func_330();
				}
				if (func_329(0))
				{
					uVar0 = func_196(2476, -1, 0);
					unk_0x7CB6FD92BE491AD9(&uVar0, 0);
					func_330();
				}
				if (func_329(func_328(func_307(unk_0xB5CEFD608600A09F()))))
				{
					uVar0 = func_196(2476, -1, 0);
					unk_0x7CB6FD92BE491AD9(&uVar0, func_328(func_307(unk_0xB5CEFD608600A09F())));
					func_330();
				}
				if (func_327())
				{
					func_330();
				}
				if (func_307(unk_0xB5CEFD608600A09F()) > -1)
				{
					unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 7);
					if (func_307(unk_0xB5CEFD608600A09F()) == 236)
					{
						func_326();
					}
				}
			}
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 7))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 7);
		func_324();
	}
}

void func_324()//Position - 0xB2B9
{
	if (func_325())
	{
		unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 17);
	}
}

bool func_325()//Position - 0xB2DB
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 17);
}

void func_326()//Position - 0xB2F6
{
	if (!func_325())
	{
		Global_267214.f_1818 = unk_0xED678C85A82F0AB9();
		unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 17);
	}
}

int func_327()//Position - 0xB324
{
	if (Global_252E21.f_47F.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_328(int iParam0)//Position - 0xB33E
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

bool func_329(int iParam0)//Position - 0xB3D1
{
	int iVar0;
	
	iVar0 = func_196(2476, -1, 0);
	return unk_0xFA30DFD0084E92FE(iVar0, iParam0);
}

void func_330()//Position - 0xB3EC
{
	if (func_327())
	{
		Global_252E21.f_47F.f_10 = 1;
	}
}

void func_331(int iParam0)//Position - 0xB405
{
	if (func_154())
	{
		if (iParam0 == 1)
		{
			if (Global_267214.f_111D == -1)
			{
				Global_267214.f_111D = 60000;
			}
			func_27(&(Global_267214.f_111B), 0, 0);
			if (Global_267214.f_1120 == -1)
			{
				Global_267214.f_1120 = 10000;
			}
			func_27(&(Global_267214.f_111E), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_8 = 0;
			func_337(1);
		}
		if ((!unk_0x517823CA390A19F6() && !func_336()) && !func_332(unk_0xB5CEFD608600A09F()))
		{
			Global_EF3AD = 0;
		}
	}
}

int func_332(int iParam0)//Position - 0xB49F
{
	if (func_333(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_333(int iParam0, bool bParam1)//Position - 0xB4C3
{
	if (bParam1)
	{
		if (func_334(iParam0))
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

bool func_334(int iParam0)//Position - 0xB4EF
{
	return func_335(iParam0);
}

bool func_335(int iParam0)//Position - 0xB4FD
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

bool func_336()//Position - 0xB517
{
	return Global_255A46.f_2D7;
}

void func_337(bool bParam0)//Position - 0xB526
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_154())
		{
			if (func_12(unk_0xB5CEFD608600A09F(), 1, 0))
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
			if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
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

int func_338()//Position - 0xB61F
{
	switch (Local_164.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_339(int iParam0, int iParam1)//Position - 0xB67E
{
	if (Local_164.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_340()//Position - 0xB69C
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_355())
	{
		if (Local_164.f_3 == 14)
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && func_354(unk_0xBC25C936A095B5BA(), 0) == -1)
			{
				iVar2 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				if ((!func_353(&iVar2, 0) || unk_0x6F79ECA8C83E4357(iVar2) != joaat("dodo")) && unk_0x2A348A3A98B80B13(iVar2))
				{
					func_346(Local_164.f_3 != 14, 1, 0);
					if (func_345())
					{
						iVar3 = func_344();
						if (iVar3 >= 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_8[func_343(iVar3)], func_342(iVar3)))
							{
								iLocal_138++;
								unk_0xF0059F27F7BB6680(&(Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_8[func_343(iVar3)]), func_342(iVar3));
							}
						}
					}
					iVar0 = iLocal_138;
				}
			}
		}
		else
		{
			iVar0 = func_341();
		}
	}
	else
	{
		unk_0x8C87D396610D1D7C(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return unk_0xC40EDFF7541407A8(iVar0);
}

int func_341()//Position - 0xB7A5
{
	switch (Local_164.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_342(int iParam0)//Position - 0xB7CC
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_343(iParam0) * 31);
}

int func_343(int iParam0)//Position - 0xB7FD
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

int func_344()//Position - 0xB823
{
	return iLocal_105;
}

int func_345()//Position - 0xB82D
{
	if (iLocal_112 == 1)
	{
		iLocal_112 = 0;
		return 1;
	}
	return 0;
}

void func_346(bool bParam0, bool bParam1, int iParam2)//Position - 0xB843
{
	func_348(bParam0, iParam2);
	if (bParam1)
	{
		if (vLocal_116.z < vLocal_117.z)
		{
			vLocal_116.z = 0f;
		}
		else
		{
			vLocal_117.z = 0f;
		}
		if (vLocal_118.z < vLocal_119.z)
		{
			vLocal_118.z = 0f;
		}
		else
		{
			vLocal_119.z = 0f;
		}
	}
	switch (iLocal_106)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), vLocal_114[iLocal_105 /*3*/]) < fLocal_115)
				{
					if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0))
							{
								bLocal_107 = true;
								iLocal_106 = 1;
							}
							if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
							{
								bLocal_108 = true;
								iLocal_106 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) && !unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					func_347();
				}
				else if (!unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					func_347();
				}
				else if (!unk_0x2A348A3A98B80B13(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) && !bParam1)
				{
					func_347();
				}
				if (bLocal_107)
				{
					if (iLocal_111)
					{
						if (iLocal_110)
						{
							if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
							{
								func_347();
								iLocal_112 = 1;
							}
						}
						else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
						{
							iLocal_110 = 1;
						}
						else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
						{
							func_347();
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
					{
						iLocal_111 = 1;
					}
					else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
					{
						func_347();
					}
				}
				else if (bLocal_108)
				{
					if (iLocal_111)
					{
						if (iLocal_109)
						{
							if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
							{
								func_347();
								iLocal_112 = 1;
							}
						}
						else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
						{
							iLocal_109 = 1;
						}
						else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
						{
							func_347();
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
					{
						iLocal_111 = 1;
					}
					else if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_116, vLocal_117, fLocal_120, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0))
					{
						func_347();
					}
				}
			}
			break;
	}
}

void func_347()//Position - 0xBC43
{
	bLocal_107 = false;
	bLocal_108 = false;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_106 = 0;
}

void func_348(var uParam0, var uParam1)//Position - 0xBC5D
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	vLocal_113 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_352(iVar0)) && (uParam1 || !func_351(iVar0)))
		{
			if (func_350(vLocal_113, vLocal_114[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(vLocal_113, vLocal_114[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_105 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_349(iLocal_105);
}

void func_349(int iParam0)//Position - 0xBCF3
{
	switch (iParam0)
	{
		case 0:
			vLocal_116 = { 1103.014f, -233.0374f, 56.13004f };
			vLocal_117 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_120 = 30f;
			vLocal_118 = { 1093.589f, -248.5926f, 56.88639f };
			vLocal_119 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			vLocal_116 = { 1044.182f, -324.5904f, 49.33408f };
			vLocal_117 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_120 = 30f;
			vLocal_118 = { 1007.983f, -320.6159f, 48.4543f };
			vLocal_119 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			vLocal_116 = { 916.599f, -419.8782f, 35.62748f };
			vLocal_117 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_120 = 7f;
			vLocal_118 = { 912.1362f, -420.5161f, 35.38034f };
			vLocal_119 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			vLocal_116 = { 757.7189f, -472.924f, 19.2535f };
			vLocal_117 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_120 = 20.75f;
			vLocal_118 = { 744.9114f, -480.7373f, 19.06514f };
			vLocal_119 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			vLocal_116 = { 680.3677f, -581.1792f, 14.2145f };
			vLocal_117 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_120 = 45f;
			vLocal_118 = { 667.3692f, -610.5356f, 13.85401f };
			vLocal_119 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			vLocal_116 = { 644.2497f, -844.7504f, 12.36707f };
			vLocal_117 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_120 = 25f;
			vLocal_118 = { 644.3659f, -859.3878f, 12.59677f };
			vLocal_119 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			vLocal_116 = { 634.972f, -1011.64f, 10.92594f };
			vLocal_117 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_120 = 25f;
			vLocal_118 = { 634.9612f, -1029.123f, 10.61846f };
			vLocal_119 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			vLocal_116 = { 645.7223f, -1191.215f, 10.45198f };
			vLocal_117 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_120 = 50f;
			vLocal_118 = { 645.7223f, -1228.966f, 10.98015f };
			vLocal_119 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			vLocal_116 = { 642.1216f, -1295.73f, 9.005976f };
			vLocal_117 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_120 = 7f;
			vLocal_118 = { 644.7772f, -1298.168f, 9.128529f };
			vLocal_119 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			vLocal_116 = { 686.5675f, -1444.71f, 9.065001f };
			vLocal_117 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_120 = 25f;
			vLocal_118 = { 682.3027f, -1429.872f, 9.890836f };
			vLocal_119 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			vLocal_116 = { 718.7617f, -1734.313f, 9.082874f };
			vLocal_117 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_120 = 30f;
			vLocal_118 = { 717.5355f, -1748.646f, 9.363478f };
			vLocal_119 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			vLocal_116 = { 694.3165f, -2049.806f, 0.009695f };
			vLocal_117 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_120 = 30f;
			vLocal_118 = { 693.1836f, -2063.225f, 0.429037f };
			vLocal_119 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			vLocal_116 = { 642.6671f, -2494.551f, 0.468485f };
			vLocal_117 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_120 = 20f;
			vLocal_118 = { 647.0339f, -2506.202f, 0.583701f };
			vLocal_119 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			vLocal_116 = { 691.8235f, -2558.219f, 0.363352f };
			vLocal_117 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_120 = 10.25f;
			vLocal_118 = { 695.7928f, -2561.034f, 0.346731f };
			vLocal_119 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			vLocal_116 = { 723.6254f, -2562.171f, 0.255647f };
			vLocal_117 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_120 = 15f;
			vLocal_118 = { 735.765f, -2561.935f, 0.311182f };
			vLocal_119 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			vLocal_116 = { 891.4387f, -2603.12f, 0f };
			vLocal_117 = { 704.4932f, -2634.793f, 45f };
			fLocal_120 = 20f;
			vLocal_118 = { 893.2578f, -2616.235f, 0f };
			vLocal_119 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			vLocal_116 = { -2669.587f, 2491.96f, 2.043799f };
			vLocal_117 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_120 = 26.5f;
			vLocal_118 = { -2687.606f, 2494.868f, 2.608733f };
			vLocal_119 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			vLocal_116 = { -1986.173f, 4521.799f, 0f };
			vLocal_117 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_120 = 17f;
			vLocal_118 = { -1995.668f, 4531.259f, 0f };
			vLocal_119 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			vLocal_116 = { -526.0265f, 4472.442f, 0f };
			vLocal_117 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_120 = 10f;
			vLocal_118 = { -519.9281f, 4476.346f, 0f };
			vLocal_119 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			vLocal_116 = { 98.1615f, 3384.489f, 45.45169f };
			vLocal_117 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_120 = 8f;
			vLocal_118 = { 152.6802f, 3346.793f, 45.02156f };
			vLocal_119 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			vLocal_116 = { 147.8606f, 3406.796f, 38.03672f };
			vLocal_117 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_120 = 14.5f;
			vLocal_118 = { 130.0916f, 3425.417f, 38.05672f };
			vLocal_119 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			vLocal_116 = { 2830.972f, 4967.14f, 34.56013f };
			vLocal_117 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_120 = 10f;
			vLocal_118 = { 2826.767f, 4964.185f, 34.10636f };
			vLocal_119 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			vLocal_116 = { -151.5764f, 4264.417f, 31.04735f };
			vLocal_117 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_120 = 10f;
			vLocal_118 = { -148.3842f, 4261.071f, 31.57409f };
			vLocal_119 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			vLocal_116 = { -426.6919f, 2964.272f, 14.848f };
			vLocal_117 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_120 = 7f;
			vLocal_118 = { -425.0283f, 2967.861f, 15.22699f };
			vLocal_119 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			vLocal_116 = { -192.3414f, 2864.916f, 30.72595f };
			vLocal_117 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_120 = 10f;
			vLocal_118 = { -192.0129f, 2871.603f, 29.99943f };
			vLocal_119 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			vLocal_116 = { 2539.185f, 2228.772f, 18.6102f };
			vLocal_117 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_120 = 10f;
			vLocal_118 = { 2543.708f, 2231.402f, 18.331f };
			vLocal_119 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			vLocal_116 = { 2954.087f, 815.7209f, 0.037901f };
			vLocal_117 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_120 = 35f;
			vLocal_118 = { 2966.123f, 806.8889f, 0.544056f };
			vLocal_119 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			vLocal_116 = { 2329.673f, -459.6648f, 70.24277f };
			vLocal_117 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_120 = 12f;
			vLocal_118 = { 2324.752f, -455.5238f, 70.25145f };
			vLocal_119 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			vLocal_116 = { 1943.428f, -753.251f, 80.17905f };
			vLocal_117 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_120 = 7f;
			vLocal_118 = { 1943.366f, -758.287f, 80.32291f };
			vLocal_119 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			vLocal_116 = { -271.2849f, -2414.993f, -10f };
			vLocal_117 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_120 = 30f;
			vLocal_118 = { -279.8399f, -2427.212f, -10f };
			vLocal_119 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			vLocal_116 = { -1483f, 2691.428f, -10f };
			vLocal_117 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_120 = 12f;
			vLocal_118 = { -1478.152f, 2696.688f, -10f };
			vLocal_119 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			vLocal_116 = { 222.1519f, -2343.487f, 0.039199f };
			vLocal_117 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_120 = 12f;
			vLocal_118 = { 216.959f, -2343.487f, 0.207734f };
			vLocal_119 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			vLocal_116 = { 346.4622f, -2244.374f, 0.159779f };
			vLocal_117 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_120 = 20f;
			vLocal_118 = { 359.609f, -2244.468f, 0.129684f };
			vLocal_119 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			vLocal_116 = { -1859.68f, -322.6357f, 56.16368f };
			vLocal_117 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_120 = 7.5f;
			vLocal_118 = { -1860.27f, -327.8634f, 57.543f };
			vLocal_119 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			vLocal_116 = { -680.2632f, -600.818f, 69.11289f };
			vLocal_117 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_120 = 31.5f;
			vLocal_118 = { -680.6077f, -618.3658f, 69.27496f };
			vLocal_119 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			vLocal_116 = { -1468.096f, -591.7158f, 67.05518f };
			vLocal_117 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_120 = 11.75f;
			vLocal_118 = { -1474.903f, -591.1215f, 67.08091f };
			vLocal_119 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			vLocal_116 = { -1544.958f, -537.1475f, 72.44347f };
			vLocal_117 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_120 = 11.75f;
			vLocal_118 = { -1541.008f, -541.5494f, 71.61972f };
			vLocal_119 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			vLocal_116 = { 333.2108f, -2727.274f, 20.71663f };
			vLocal_117 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_120 = 20f;
			vLocal_118 = { 343.1127f, -2727.236f, 20.23613f };
			vLocal_119 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			vLocal_116 = { 1928.071f, 6228.355f, 43.49398f };
			vLocal_117 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_120 = 13f;
			vLocal_118 = { 1931.82f, 6235.634f, 43.37382f };
			vLocal_119 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			vLocal_116 = { -736.4309f, -1590.921f, 10.80892f };
			vLocal_117 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_120 = 15f;
			vLocal_118 = { -727.2307f, -1585.221f, 11.78027f };
			vLocal_119 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			vLocal_116 = { -676.3775f, -1548.553f, 12.33747f };
			vLocal_117 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_120 = 25f;
			vLocal_118 = { -654.203f, -1536.146f, 9.191055f };
			vLocal_119 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			vLocal_116 = { -624.2344f, -1537.045f, 12.60193f };
			vLocal_117 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_120 = 8f;
			vLocal_118 = { -615.4003f, -1536.65f, 12.40271f };
			vLocal_119 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			vLocal_116 = { -492.5057f, -1632.457f, 24.3307f };
			vLocal_117 = { -418.2088f, -1487.452f, 0f };
			fLocal_120 = 25f;
			vLocal_118 = { -486.2016f, -1636.095f, 24.20805f };
			vLocal_119 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			vLocal_116 = { -359.3541f, -1639.693f, 13.13455f };
			vLocal_117 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_120 = 25f;
			vLocal_118 = { -378.1518f, -1705.66f, 12.47196f };
			vLocal_119 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			vLocal_116 = { -243.4436f, -1814.623f, 25.69465f };
			vLocal_117 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_120 = 25f;
			vLocal_118 = { -235.1319f, -1822.094f, 25.86542f };
			vLocal_119 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			vLocal_116 = { 84.55537f, -2046.159f, 13.30767f };
			vLocal_117 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_120 = 25f;
			vLocal_118 = { 17.90788f, -2035.773f, 12.62706f };
			vLocal_119 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			vLocal_116 = { 221.5029f, -2232.766f, 9.88676f };
			vLocal_117 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_120 = 8f;
			vLocal_118 = { 218.583f, -2232.766f, 9.886198f };
			vLocal_119 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			vLocal_116 = { 221.6518f, -2184.635f, 11.66457f };
			vLocal_117 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_120 = 8f;
			vLocal_118 = { 217.8995f, -2184.635f, 11.5405f };
			vLocal_119 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			vLocal_116 = { 2326.57f, 1096.031f, 76.31458f };
			vLocal_117 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_120 = 21f;
			vLocal_118 = { 2334.453f, 1103.067f, 76.26603f };
			vLocal_119 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			vLocal_116 = { 2379.442f, 1150.776f, 58.79632f };
			vLocal_117 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_120 = 12f;
			vLocal_118 = { 2374.064f, 1146.282f, 58.83331f };
			vLocal_119 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			vLocal_116 = { -1179.405f, -355.2554f, 56.53003f };
			vLocal_117 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_120 = 12.5f;
			vLocal_118 = { -1178.385f, -361.8784f, 56.15081f };
			vLocal_119 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			vLocal_116 = { -921.3846f, -384.94f, 137.0181f };
			vLocal_117 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_120 = 16f;
			vLocal_118 = { -914.1658f, -387.9444f, 137.0794f };
			vLocal_119 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			vLocal_116 = { -740.2564f, 246.4529f, 132.2922f };
			vLocal_117 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_120 = 22f;
			vLocal_118 = { -726.6429f, 253.0676f, 132.3319f };
			vLocal_119 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			vLocal_116 = { -771.2068f, 268.2729f, 132.1689f };
			vLocal_117 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_120 = 16f;
			vLocal_118 = { -770.8035f, 310.8625f, 137.4161f };
			vLocal_119 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			vLocal_116 = { 259.2205f, 135.4146f, 136.7083f };
			vLocal_117 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_120 = 16f;
			vLocal_118 = { 261.9694f, 142.9676f, 136.6889f };
			vLocal_119 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			vLocal_116 = { 393.548f, -30.87166f, 152.6635f };
			vLocal_117 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_120 = 8f;
			vLocal_118 = { 390.5358f, -36.08882f, 152.7813f };
			vLocal_119 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			vLocal_116 = { 114.3139f, -648.4297f, 261.8488f };
			vLocal_117 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_120 = 20f;
			vLocal_118 = { 124.8467f, -646.6575f, 261.8488f };
			vLocal_119 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			vLocal_116 = { -215.919f, -823.8436f, 126.0224f };
			vLocal_117 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_120 = 20f;
			vLocal_118 = { -225.397f, -820.3937f, 126.0812f };
			vLocal_119 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			vLocal_116 = { -296.4725f, -802.0815f, 95.40108f };
			vLocal_117 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_120 = 20f;
			vLocal_118 = { -305.4602f, -798.8369f, 95.48194f };
			vLocal_119 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			vLocal_116 = { -292.3034f, -823.3569f, 95.37621f };
			vLocal_117 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_120 = 20f;
			vLocal_118 = { -288.9206f, -814.022f, 95.37556f };
			vLocal_119 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			vLocal_116 = { -256.3589f, -714.7838f, 110.1617f };
			vLocal_117 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_120 = 20f;
			vLocal_118 = { -253.7723f, -705.6632f, 110.1736f };
			vLocal_119 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			vLocal_116 = { 1808.214f, 1949.246f, 71.73707f };
			vLocal_117 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_120 = 9.75f;
			vLocal_118 = { 1802.786f, 1950.262f, 71.74002f };
			vLocal_119 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			vLocal_116 = { 2388.733f, 2931.941f, 46.62681f };
			vLocal_117 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_120 = 10f;
			vLocal_118 = { 2392.547f, 2934.867f, 46.6268f };
			vLocal_119 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			vLocal_116 = { 2700.056f, 4836.381f, 42.07854f };
			vLocal_117 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_120 = 20.75f;
			vLocal_118 = { 2685.672f, 4821.653f, 42.18471f };
			vLocal_119 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			vLocal_116 = { -1053.446f, 4766.245f, 234.3251f };
			vLocal_117 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_120 = 5f;
			vLocal_118 = { -1051.414f, 4767.193f, 234.4293f };
			vLocal_119 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_350(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xD572
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

int func_351(int iParam0)//Position - 0xD5ED
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_352(int iParam0)//Position - 0xD640
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_353(int iParam0, int iParam1)//Position - 0xD6B1
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0) || iParam1)
		{
			if (unk_0x149E9368A11035DE(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1)//Position - 0xD6E6
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

int func_355()//Position - 0xD76B
{
	switch (Local_164.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_356(vector3 vParam0, float fParam1, int iParam2)//Position - 0xD7EE
{
	int iVar0;
	
	iVar0 = -1;
	if (func_372() < 10)
	{
		iVar0 = func_371();
		func_357(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_357(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0xD81B
{
	func_358(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_358(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD835
{
	struct<12> Var0;
	
	if (func_367(unk_0xB5CEFD608600A09F()) || uParam5)
	{
		if (Var0.f_A == 1)
		{
			func_366(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_361(Var0))
		{
			Global_24B2CE.f_2C.f_40 = func_360(unk_0xB5CEFD608600A09F());
			func_359(Var0, iParam4);
		}
	}
}

void func_359(struct<12> Param0, int iParam1)//Position - 0xD8AB
{
	Global_24B2CE.f_169[iParam1 /*12*/] = { Param0 };
	Global_24B2CE.f_169[iParam1 /*12*/].f_9 = 1;
}

int func_360(int iParam0)//Position - 0xD8D4
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_361(struct<12> Param0)//Position - 0xD8F6
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
			if (!func_362(Global_24B2CE.f_2C[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_362(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xD956
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
							if (func_365(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_363(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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
							if (func_365(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_363(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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

bool func_363(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xDA8F
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_364(vParam0, vParam1, vVar0, vVar1);
}

int func_364(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xDAD3
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_365(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0xDB2A
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_366(var uParam0, var uParam1)//Position - 0xDB55
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

int func_367(int iParam0)//Position - 0xDBEC
{
	if (((func_370(iParam0, 1) || func_369(iParam0)) || func_101(iParam0, 0)) || func_368(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0xDC28
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

int func_369(int iParam0)//Position - 0xDC4B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

bool func_370(int iParam0, bool bParam1)//Position - 0xDC6C
{
	if (Global_1406BF != 0)
	{
		return func_360(iParam0) != 0;
	}
	return func_333(iParam0, bParam1);
}

int func_371()//Position - 0xDC92
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

int func_372()//Position - 0xDCC4
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

int func_373(char* sParam0, char* sParam1, char* sParam2)//Position - 0xDCF7
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_374(int iParam0)//Position - 0xDD16
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_375(int iParam0)//Position - 0xDE1F
{
	switch (iParam0)
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
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_376(int iParam0)//Position - 0xDF28
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_377()//Position - 0xE031
{
	if (!func_144())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return;
	}
	func_140();
}

void func_378(var uParam0)//Position - 0xE05E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_352(iVar0) && !func_351(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { vLocal_114[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_379()//Position - 0xE09F
{
	if (!func_355())
	{
		if (Local_164.f_3 == 14)
		{
			func_382();
		}
		Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4.f_1 = func_341();
	}
	else if ((!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 4) && !unk_0xFA30DFD0084E92FE(Global_180634.f_1, 5)) && !func_381(unk_0xB5CEFD608600A09F()))
	{
		func_380();
	}
}

void func_380()//Position - 0xE103
{
	switch (Local_164.f_3)
	{
		case 0:
			unk_0x48EA99C287C11C46(8, 2);
			break;
		
		case 1:
			unk_0x48EA99C287C11C46(13, 2);
			break;
		
		case 2:
			unk_0x48EA99C287C11C46(4, 2);
			break;
		
		case 4:
			unk_0x48EA99C287C11C46(1, 2);
			break;
		
		case 3:
			unk_0x48EA99C287C11C46(2, 2);
			break;
		
		case 5:
			unk_0x48EA99C287C11C46(3, 2);
			break;
		
		case 6:
			unk_0x48EA99C287C11C46(11, 3);
			break;
		
		case 7:
			unk_0x48EA99C287C11C46(14, 1);
			break;
		
		case 8:
			unk_0x48EA99C287C11C46(29, 2);
			break;
		
		case 9:
			unk_0x48EA99C287C11C46(12, 2);
			break;
		
		case 10:
			unk_0x48EA99C287C11C46(10, 2);
			break;
		
		case 11:
			unk_0x48EA99C287C11C46(18, 2);
			break;
		
		case 12:
			unk_0x48EA99C287C11C46(20, 2);
			break;
		
		case 13:
			unk_0x48EA99C287C11C46(27, 2);
			break;
		
		case 15:
			unk_0x48EA99C287C11C46(26, 1);
			break;
		
		case 16:
			unk_0x48EA99C287C11C46(25, 1);
			break;
		
		case 17:
			unk_0x48EA99C287C11C46(22, 1);
			break;
		
		case 18:
			unk_0x48EA99C287C11C46(24, 1);
			break;
	}
	unk_0xF0059F27F7BB6680(&iLocal_135, 8);
}

bool func_381(int iParam0)//Position - 0xE24C
{
	return func_14(iParam0, 0);
}

void func_382()//Position - 0xE25B
{
	vLocal_114[0 /*3*/] = { 1083f, -231f, 60f };
	vLocal_114[1 /*3*/] = { 1024f, -325f, 60f };
	vLocal_114[2 /*3*/] = { 910f, -401f, 43f };
	vLocal_114[3 /*3*/] = { 721f, -457f, 26f };
	vLocal_114[4 /*3*/] = { 643f, -579f, 26f };
	vLocal_114[5 /*3*/] = { 590f, -851f, 26f };
	vLocal_114[6 /*3*/] = { 590f, -1023f, 16f };
	vLocal_114[7 /*3*/] = { 582f, -1205f, 24f };
	vLocal_114[8 /*3*/] = { 608f, -1335f, 16f };
	vLocal_114[9 /*3*/] = { 640f, -1434f, 16f };
	vLocal_114[10 /*3*/] = { 671f, -1742f, 20f };
	vLocal_114[11 /*3*/] = { 651f, -2046f, 16f };
	vLocal_114[12 /*3*/] = { 603f, -2505f, 9f };
	vLocal_114[13 /*3*/] = { 673f, -2582f, 4f };
	vLocal_114[14 /*3*/] = { 728f, -2594f, 10f };
	vLocal_114[15 /*3*/] = { 794f, -2624f, 27f };
	vLocal_114[16 /*3*/] = { -2663f, 2594f, 7.5f };
	vLocal_114[17 /*3*/] = { -1902f, 4617f, 30f };
	vLocal_114[18 /*3*/] = { -513f, 4427f, 40f };
	vLocal_114[19 /*3*/] = { 126f, 3366f, 40f };
	vLocal_114[20 /*3*/] = { 143f, 3418f, 36f };
	vLocal_114[21 /*3*/] = { 2822f, 4978f, 40f };
	vLocal_114[22 /*3*/] = { -162f, 4249f, 40f };
	vLocal_114[23 /*3*/] = { -408f, 2964f, 20f };
	vLocal_114[24 /*3*/] = { -181f, 2862f, 38f };
	vLocal_114[25 /*3*/] = { 2558f, 2201f, 24f };
	vLocal_114[26 /*3*/] = { 2950f, 803f, 8f };
	vLocal_114[27 /*3*/] = { 2369f, -409f, 80f };
	vLocal_114[28 /*3*/] = { 1906f, -755f, 84f };
	vLocal_114[29 /*3*/] = { -403f, -2333f, 40f };
	vLocal_114[30 /*3*/] = { -1429f, 2649f, 10f };
	vLocal_114[31 /*3*/] = { 219f, -2315f, 5f };
	vLocal_114[32 /*3*/] = { 350f, -2315f, 5f };
	vLocal_114[33 /*3*/] = { -1848f, -333f, 75f };
	vLocal_114[34 /*3*/] = { -693f, -608f, 69f };
	vLocal_114[35 /*3*/] = { -1461f, -582f, 53f };
	vLocal_114[36 /*3*/] = { -1553f, -546f, 59f };
	vLocal_114[37 /*3*/] = { 338f, -2758f, 23f };
	vLocal_114[38 /*3*/] = { 1985f, 6201f, 53f };
	vLocal_114[39 /*3*/] = { -713f, -1538f, 13f };
	vLocal_114[40 /*3*/] = { -659f, -1518f, 13f };
	vLocal_114[41 /*3*/] = { -620f, -1502f, 16f };
	vLocal_114[42 /*3*/] = { -445f, -1575f, 26f };
	vLocal_114[43 /*3*/] = { -373f, -1680f, 19f };
	vLocal_114[44 /*3*/] = { -212f, -1805f, 29f };
	vLocal_114[45 /*3*/] = { 47f, -2040f, 18f };
	vLocal_114[46 /*3*/] = { 223f, -2240f, 6f };
	vLocal_114[47 /*3*/] = { 218f, -2189f, 6f };
	vLocal_114[48 /*3*/] = { 2308f, 1124f, 78f };
	vLocal_114[49 /*3*/] = { 2349f, 1174f, 79f };
	vLocal_114[50 /*3*/] = { -1186f, -365f, 46f };
	vLocal_114[51 /*3*/] = { -916f, -407f, 93f };
	vLocal_114[52 /*3*/] = { -726f, 235f, 105f };
	vLocal_114[53 /*3*/] = { -774f, 286f, 112f };
	vLocal_114[54 /*3*/] = { 271f, 134f, 125f };
	vLocal_114[55 /*3*/] = { 377f, -28f, 125f };
	vLocal_114[56 /*3*/] = { 121f, -703f, 150f };
	vLocal_114[57 /*3*/] = { -204f, -784f, 74f };
	vLocal_114[58 /*3*/] = { -287f, -774f, 72f };
	vLocal_114[59 /*3*/] = { -272f, -824f, 71f };
	vLocal_114[60 /*3*/] = { -230f, -723f, 80f };
	vLocal_114[61 /*3*/] = { 1822f, 2044f, 62f };
	vLocal_114[62 /*3*/] = { 2410f, 2907f, 44f };
	vLocal_114[63 /*3*/] = { 2686f, 4858f, 36f };
	vLocal_114[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_383(int iParam0, bool bParam1)//Position - 0xE81E
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

void func_384(var uParam0, int iParam1)//Position - 0xE881
{
	if (func_307(unk_0xB5CEFD608600A09F()) == 133 && iParam1)
	{
		Global_267214.f_12C3 = uParam0;
	}
	else
	{
		Global_267214.f_12C3 = -1;
	}
}

void func_385(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xE8B2
{
	bool bVar0;
	
	unk_0x9B90420B04C07704("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
	}
	Global_267214.f_1279 = -1;
	bVar0 = (func_101(unk_0xB5CEFD608600A09F(), 0) && func_97(unk_0xB5CEFD608600A09F()));
	if (bParam6)
	{
		func_383(21, 1);
	}
	else
	{
		func_401(iParam0, -1);
		if (func_8(unk_0xB5CEFD608600A09F()))
		{
			Global_180634.f_3 = iParam0;
		}
		else
		{
			func_400(iParam0);
		}
		Global_180634.f_4 = -1;
		if (func_8(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 5);
		}
		if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 4);
		}
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 17);
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 20);
		if (func_399(iParam0))
		{
			func_398();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_395(fParam1);
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
		if (func_393(iParam0))
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
				func_391(1);
				if (func_250(0))
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 9);
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_389(1);
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 12);
		}
		if (bParam5)
		{
			func_388();
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_386(iParam0))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 21);
			}
		}
	}
	Global_2620A0 = 1;
}

int func_386(int iParam0)//Position - 0xEA7C
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
	if (func_387())
	{
		return 1;
	}
	return 0;
}

int func_387()//Position - 0xEAD7
{
	switch (func_306())
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

void func_388()//Position - 0xEB05
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1270), 0);
}

void func_389(bool bParam0)//Position - 0xEB19
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
		func_390(iVar0);
		iVar0++;
	}
}

void func_390(int iParam0)//Position - 0xEB50
{
	Global_16B4F.f_A9[iParam0] = 1;
	Global_16B4F.f_A8 = 1;
}

void func_391(int iParam0)//Position - 0xEB6A
{
	if (func_392() && iParam0)
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

int func_392()//Position - 0xEB9F
{
	if ((((Global_EF3AE != -1 && Global_EF3AE != 33) && Global_EF3AE != 35) && Global_EF3AE != 37) && Global_EF3AE != 21)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)//Position - 0xEBE5
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_394(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_394(int iParam0)//Position - 0xEC23
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

void func_395(float fParam0)//Position - 0xEC49
{
	float fVar0;
	
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_396())
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

int func_396()//Position - 0xECB5
{
	switch (func_397())
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

int func_397()//Position - 0xECE9
{
	return Global_62BD;
}

void func_398()//Position - 0xECF4
{
	Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_C4 = 0;
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11C3), 1);
}

int func_399(int iParam0)//Position - 0xED16
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_400(int iParam0)//Position - 0xED30
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/] = iParam0;
}

void func_401(int iParam0, int iParam1)//Position - 0xED45
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_329(0) || func_329(func_328(iVar0)))
		{
			unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 2);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 2);
		}
	}
}

int func_402()//Position - 0xEDAB
{
	switch (Local_164.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_403()//Position - 0xEDDA
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

int func_404()//Position - 0xEEEC
{
	switch (Local_164.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_405()//Position - 0xEF21
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_164.f_3))
	{
		if (Local_164.f_3 == 1 || Local_164.f_3 == 6)
		{
			iVar0 = func_427(unk_0xB5CEFD608600A09F(), 1);
			iVar1 = func_189(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 1, false, false);
					func_406(1);
				}
			}
			else
			{
				unk_0xC4E9ABB77918D853(unk_0xB5CEFD608600A09F(), 1);
			}
		}
	}
}

void func_406(bool bParam0)//Position - 0xEF93
{
	int iVar0;
	
	if (unk_0xA86A4D206EC8EB16(unk_0xBC25C936A095B5BA(), 5) != 0)
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
		unk_0x50F2F0965715E2E9(unk_0xB5CEFD608600A09F(), func_196(585, -1, 0));
		if (func_426())
		{
			unk_0x1198327AE0081E72(unk_0xB5CEFD608600A09F(), 1931904776);
		}
		else if (func_425())
		{
			unk_0x1198327AE0081E72(unk_0xB5CEFD608600A09F(), -2124524821);
		}
		if (func_422(3610, -1, -1))
		{
		}
		iVar0 = func_196(2040, -1, 0);
		unk_0x010C38B96FD822BF(unk_0xB5CEFD608600A09F(), func_421(unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F()), iVar0));
		if (func_247(0))
		{
			unk_0x50F2F0965715E2E9(unk_0xB5CEFD608600A09F(), func_196(585, -1, 0));
		}
		else
		{
			unk_0x50F2F0965715E2E9(unk_0xB5CEFD608600A09F(), func_420(Global_2693C3));
		}
		func_419(unk_0xB5CEFD608600A09F(), iVar0);
		unk_0xC88B78697EDDABA9(unk_0xB5CEFD608600A09F(), 5, func_412(unk_0xBC25C936A095B5BA(), iVar0), func_411(unk_0xBC25C936A095B5BA(), iVar0), 0);
		func_410(func_196(2040, -1, 0), 1);
		Global_267214.f_114 = 1;
		func_407(unk_0xB5CEFD608600A09F(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_407(int iParam0, int iParam1, int iParam2)//Position - 0xF095
{
	if (unk_0x7AF0088ABFA713B6())
	{
		func_409();
		if (iParam2 == -1)
		{
			iParam2 = func_196(2040, -1, 0);
		}
		unk_0xC88B78697EDDABA9(iParam0, 5, func_412(unk_0xA95CF30C72EB526E(iParam0), iParam2), func_411(unk_0xA95CF30C72EB526E(iParam0), iParam2), 0);
		unk_0x010C38B96FD822BF(iParam0, func_421(unk_0xA95CF30C72EB526E(iParam0), iParam2));
		unk_0xB0031DDAE4FF0BC3(unk_0xA95CF30C72EB526E(iParam0), 5, func_412(unk_0xA95CF30C72EB526E(iParam0), iParam2), func_411(unk_0xA95CF30C72EB526E(iParam0), iParam2), func_421(unk_0xA95CF30C72EB526E(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_196(585, -1, 0);
		}
		if (func_247(1) && func_408(iParam0))
		{
			unk_0x50F2F0965715E2E9(iParam0, func_420(Global_2693C3));
		}
		else
		{
			unk_0x50F2F0965715E2E9(iParam0, iParam1);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_1C, 4))
		{
			unk_0x50F2F0965715E2E9(iParam0, Global_1805EE);
			unk_0x1198327AE0081E72(iParam0, -1780610292);
		}
		func_419(iParam0, iParam2);
		unk_0x2E9860A2B72187F5(unk_0xA95CF30C72EB526E(iParam0), 177, 1);
	}
}

bool func_408(int iParam0)//Position - 0xF18F
{
	return func_96(iParam0, 10);
}

void func_409()//Position - 0xF19F
{
	Global_1152A = 0;
	Global_1152B = -1;
	Global_1152C = -1;
	Global_1152D = -1;
	Global_1152E = -1;
	Global_1152F = -1;
}

void func_410(int iParam0, int iParam1)//Position - 0xF1C5
{
	if (unk_0x7AF0088ABFA713B6())
	{
		func_409();
		func_187(2040, iParam0, -1, 1, 0);
		unk_0xC88B78697EDDABA9(unk_0xB5CEFD608600A09F(), 5, func_412(unk_0xBC25C936A095B5BA(), iParam0), func_411(unk_0xBC25C936A095B5BA(), iParam0), 0);
		func_419(unk_0xB5CEFD608600A09F(), iParam0);
		unk_0x010C38B96FD822BF(unk_0xB5CEFD608600A09F(), func_421(unk_0xBC25C936A095B5BA(), iParam0));
		if ((iParam1 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0xA86A4D206EC8EB16(unk_0xBC25C936A095B5BA(), 5) != 0)
		{
			func_407(unk_0xB5CEFD608600A09F(), -1, -1);
		}
	}
}

int func_411(int iParam0, int iParam1)//Position - 0xF24B
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_412(int iParam0, int iParam1)//Position - 0xF2AD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0xA86A4D206EC8EB16(iParam0, 9) != false;
	iVar1 = unk_0x769DFEDCD5A3DE41(iParam0, 8, unk_0xA86A4D206EC8EB16(iParam0, 8), unk_0x695D13ECF7DAEC22(iParam0, 8));
	iVar2 = unk_0x769DFEDCD5A3DE41(iParam0, 11, unk_0xA86A4D206EC8EB16(iParam0, 11), unk_0x695D13ECF7DAEC22(iParam0, 11));
	iVar3 = unk_0x769DFEDCD5A3DE41(iParam0, 4, unk_0xA86A4D206EC8EB16(iParam0, 4), unk_0x695D13ECF7DAEC22(iParam0, 4));
	if ((((!bVar0 == Global_1152A || !iParam1 == Global_1152B) || !iVar1 == Global_1152C) || !iVar2 == Global_1152D) || !iVar3 == Global_1152E)
	{
		Global_1152A = bVar0;
		Global_1152B = iParam1;
		Global_1152C = iVar1;
		Global_1152D = iVar2;
		Global_1152E = iVar3;
		Global_1152F = func_413(iParam0, iParam1);
	}
	return Global_1152F;
}

int func_413(int iParam0, int iParam1)//Position - 0xF37D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0xA86A4D206EC8EB16(iParam0, 11);
	if (unk_0xA86A4D206EC8EB16(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6F79ECA8C83E4357(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 50;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x769DFEDCD5A3DE41(iParam0, 8, unk_0xA86A4D206EC8EB16(iParam0, 8), unk_0x695D13ECF7DAEC22(iParam0, 8));
	if (unk_0xF062C4E30590463E(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0xF062C4E30590463E(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0xF062C4E30590463E(iVar4, 350281921, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, -887141061, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, -1185371730, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, -2124629577, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0xF062C4E30590463E(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0xF062C4E30590463E(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0xF062C4E30590463E(iVar4, -887141061, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, -1185371730, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			if (unk_0xF062C4E30590463E(iVar4, -2124629577, 8))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		return func_418(iParam0, iParam1);
	}
	if (func_417(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x769DFEDCD5A3DE41(iParam0, 11, iVar0, unk_0x695D13ECF7DAEC22(iParam0, 11));
		if (unk_0xF062C4E30590463E(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0xF062C4E30590463E(iVar5, -979468724, 0))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else if (unk_0xF062C4E30590463E(iVar5, -306768813, 0))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else if (unk_0xF062C4E30590463E(iVar5, -58412562, 0))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1536649085, 0) && !unk_0xF062C4E30590463E(iVar5, 350281921, 0))
		{
			iVar6 = func_416(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_415(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_415(iVar5);
						break;
					}
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 248194463, 0))
		{
			if (unk_0xF062C4E30590463E(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 396458410, 0))
		{
			iVar7 = func_414(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_415(iVar5);
					break;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1719167561, 0) || unk_0xF062C4E30590463E(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1274099003, 0) || unk_0xF062C4E30590463E(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xF062C4E30590463E(iVar5, -1407614029, 0))
				{
					return func_418(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0xF062C4E30590463E(iVar5, -1086258388, 0) || unk_0xF062C4E30590463E(iVar5, 103539798, 0)) || unk_0xF062C4E30590463E(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_418(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1506370874, 0) || unk_0xF062C4E30590463E(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return func_418(iParam0, iParam1);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return func_418(iParam0, iParam1);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_418(iParam0, iParam1) + 15;
			}
			else
			{
				return func_418(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0xF062C4E30590463E(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0xF062C4E30590463E(iVar5, -2017999390, 0) || unk_0xF062C4E30590463E(iVar5, 320460654, 0)) || unk_0xF062C4E30590463E(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_415(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_414(int iParam0, int iParam1)//Position - 0x111FB
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF062C4E30590463E(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_415(int iParam0)//Position - 0x1139B
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0xF062C4E30590463E(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_416(int iParam0, int iParam1)//Position - 0x11508
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xF062C4E30590463E(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xF062C4E30590463E(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xF062C4E30590463E(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_417(int iParam0)//Position - 0x1164C
{
	if (unk_0xF062C4E30590463E(unk_0x769DFEDCD5A3DE41(iParam0, 4, unk_0xA86A4D206EC8EB16(iParam0, 4), unk_0x695D13ECF7DAEC22(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_418(int iParam0, int iParam1)//Position - 0x1167B
{
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_419(int iParam0, int iParam1)//Position - 0x116EA
{
	if (func_426())
	{
		if (iParam1 > 51)
		{
			unk_0xA768DBC86E5810C9(iParam0, 1269440357);
		}
		else if (iParam1 > 46)
		{
			unk_0xA768DBC86E5810C9(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			unk_0xA768DBC86E5810C9(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			unk_0xA768DBC86E5810C9(iParam0, 1269440357);
		}
		else
		{
			unk_0x2E3BFA5081B4C3D4(iParam0);
		}
	}
	else if (func_425())
	{
		if (iParam1 > 0)
		{
			unk_0xA768DBC86E5810C9(iParam0, 1479397204);
		}
		else
		{
			unk_0x2E3BFA5081B4C3D4(iParam0);
		}
	}
}

int func_420(var uParam0)//Position - 0x11776
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_421(int iParam0, int iParam1)//Position - 0x1182E
{
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2)//Position - 0x11837
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_424(iParam0, iParam1);
	uVar2 = func_423(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_423(int iParam0)//Position - 0x11874
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_424(int iParam0, int iParam1)//Position - 0x11B60
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_425()//Position - 0x11E2D
{
	return unk_0x7B2F21BFE86AEB61(1428761799);
}

bool func_426()//Position - 0x11E3E
{
	return unk_0x7B2F21BFE86AEB61(-1005876368);
}

int func_427(int iParam0, bool bParam1)//Position - 0x11E4F
{
	if (bParam1)
	{
	}
	return func_193(iParam0);
}

void func_428()//Position - 0x11E62
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
	float fVar12;
	
	if ((((!func_7(unk_0xB5CEFD608600A09F()) && !func_151(unk_0xB5CEFD608600A09F())) && !func_301()) && !func_439(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_438(unk_0xB5CEFD608600A09F()))
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			fVar4 = 2.147484E+09f;
			iVar5 = -1;
			vVar6 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			bVar7 = func_5(Local_164.f_3);
			bVar8 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0);
			bVar9 = func_436();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar10 = Local_164.f_43[iVar2 /*2*/].f_1;
				if (unk_0x8EA6CABD14F1B89A(iVar10) && unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(iVar10), 0))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == unk_0x19D7F09C2FABDDA0(iVar10))
						{
							func_323(1);
						}
					}
					unk_0xF0059F27F7BB6680(&uVar3, iVar2);
					if (bVar7 && func_38(Local_164.f_3, iVar2, &vVar0, &uVar1))
					{
						vVar11 = { unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(iVar10), 1) };
						if (SYSTEM::VDIST(vVar11, vVar0) <= 10f)
						{
							fVar12 = SYSTEM::VDIST(vVar11, vVar6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_39(Local_164.f_3))
			{
				unk_0xF0059F27F7BB6680(&uVar3, 31);
			}
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_7 = uVar3;
			if (func_5(Local_164.f_3))
			{
				if ((unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()) || (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2.147484E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_38(Local_164.f_3, iVar5, &vVar0, &uVar1))
						{
							func_435(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_434(vVar0, 1, 0);
							func_430(10, 0, 0, 0, 0);
							unk_0xF0059F27F7BB6680(&iLocal_135, 5);
						}
					}
				}
				else
				{
					func_429();
				}
			}
		}
	}
	else
	{
		func_429();
	}
}

void func_429()//Position - 0x1209D
{
	if (unk_0xFA30DFD0084E92FE(iLocal_135, 5))
	{
		func_159();
		func_157();
		unk_0x7CB6FD92BE491AD9(&iLocal_135, 5);
		func_156();
	}
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x120C4
{
	if (Global_252E21.f_760.f_2B2.f_10 != func_93())
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

int func_431()//Position - 0x12163
{
	if (((func_208(unk_0xB5CEFD608600A09F()) == 229 || func_208(unk_0xB5CEFD608600A09F()) == 191) || func_433()) || func_432())
	{
		return 0;
	}
	return 1;
}

bool func_432()//Position - 0x121A3
{
	return Global_1805CE;
}

int func_433()//Position - 0x121AF
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_434(vector3 vParam0, int iParam1, int iParam2)//Position - 0x121C4
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_435(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x121EE
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
	if (func_367(unk_0xB5CEFD608600A09F()))
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

int func_436()//Position - 0x122FC
{
	if (((((func_437(unk_0xB5CEFD608600A09F()) || func_154()) || func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21)) || func_8(unk_0xB5CEFD608600A09F())) || func_7(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0)//Position - 0x12354
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x1237A
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

int func_439(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x123B9
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
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_285(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_447(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_446(iParam0))
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
		if (func_444(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_441(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_440(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)//Position - 0x124B9
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
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_93())
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_441(int iParam0)//Position - 0x12547
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_442(int iParam0)//Position - 0x1258E
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)//Position - 0x125D5
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_93())
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_444(int iParam0)//Position - 0x12635
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x1267C
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_446(int iParam0)//Position - 0x126C2
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x12708
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x1274E
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_449(bool bParam0, bool bParam1)//Position - 0x12794
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	
	if (func_503())
	{
		if (bParam1)
		{
			iVar0 = unk_0x6BAA0516CC970D99();
			if (func_91(unk_0xB5CEFD608600A09F()))
			{
				iVar1 = func_309();
				iVar2 = unk_0x5363B43856FA7779(iVar1);
				if (unk_0x96B1061E8F3CBC9A(iVar2))
				{
					iVar3 = unk_0xDE780EBA36114734(iVar2);
					if (unk_0x05086B70D2CFEA6F(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_502())
				{
					switch (Local_164.f_3)
					{
						case 14:
							if (!func_352(iVar4) && !func_351(iVar4))
							{
								func_454("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_41())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x8EA6CABD14F1B89A(Local_164.f_43[iVar5 /*2*/].f_1)) && unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iVar5 /*2*/].f_1), 0)) && unk_0x1AAF0C23233C57AF(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_157[iVar5]))
				{
					iLocal_157[iVar5] = unk_0x511FE22BCF5353CD(unk_0xD14280F674B4DBF4(Local_164.f_43[iVar5 /*2*/].f_1));
					unk_0xBF0E22F3E083C33D(iLocal_157[iVar5], func_453(iVar5));
					unk_0x12DB69036F6569F7(iLocal_157[iVar5], 9);
					unk_0x436D0272182E484D(iLocal_157[iVar5], func_452(iVar5));
					func_450(&(iLocal_157[iVar5]), 9);
				}
				else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					vVar6 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
					if (SYSTEM::VDIST(vVar6, unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_164.f_43[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x222805B89367761E(iLocal_157[iVar5], 1);
					}
					else
					{
						unk_0x222805B89367761E(iLocal_157[iVar5], 0);
					}
				}
			}
			else if (unk_0x2DA8CA50A72528FB(iLocal_157[iVar5]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_157[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_450(var uParam0, int iParam1)//Position - 0x1297C
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		iVar0 = func_451(iParam1);
		unk_0x0D5352939CC40C16(*uParam0, iVar0);
	}
}

int func_451(int iParam0)//Position - 0x129A2
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

char* func_452(int iParam0)//Position - 0x12C0A
{
	if (unk_0x8C1A6E7D5F410F4A(Local_164.f_43[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xA19D269B4B5A1532(Local_164.f_43[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x7512ED01F3F46714(Local_164.f_43[iParam0 /*2*/]) && !unk_0x89B9572166100905(Local_164.f_43[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_453(int iParam0)//Position - 0x12C7D
{
	if (unk_0x8C1A6E7D5F410F4A(Local_164.f_43[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0xA19D269B4B5A1532(Local_164.f_43[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x7512ED01F3F46714(Local_164.f_43[iParam0 /*2*/]) && !unk_0x89B9572166100905(Local_164.f_43[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_454(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x12CE4
{
	vector3 vVar0;
	
	if (!unk_0xFA30DFD0084E92FE(Local_1530[iParam2 /*12*/].f_8[func_343(iParam3)], func_342(iParam3)) && !bParam1)
	{
		vVar0 = { func_501(iParam3) };
		if (!unk_0x2DA8CA50A72528FB(iLocal_156[iParam3]))
		{
			if (!func_500(vVar0, 0f, 0f, 0f, 0) && !func_500(vVar0, 0f, 0f, -2000f, 0))
			{
				iLocal_156[iParam3] = unk_0x390CF6C8AD6903B7(vVar0);
				unk_0x12DB69036F6569F7(iLocal_156[iParam3], 9);
				unk_0x436D0272182E484D(iLocal_156[iParam3], sParam0);
				func_455(iLocal_156[iParam3], 25, 1152319488, 1137180672);
				func_450(&(iLocal_156[iParam3]), 12);
				unk_0x222805B89367761E(iLocal_156[iParam3], 1);
			}
		}
		else if (unk_0xE186ACC7BE9B244E())
		{
			unk_0x7781946F1FC054FA(iLocal_156[iParam3], 255);
		}
		else
		{
			func_455(iLocal_156[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(iLocal_156[iParam3]))
	{
		unk_0x07B8ECB35A4ED3AC(&(iLocal_156[iParam3]));
		if (!bParam1)
		{
			unk_0xC4BA30B532FE260F(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_455(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x12E0B
{
	unk_0x7781946F1FC054FA(iParam0, func_456(iParam0, iParam1, fParam2, fParam3));
}

int func_456(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x12E25
{
	float fVar0;
	
	if (!func_499(Global_252E21))
	{
		fVar0 = func_458(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_457();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_457()//Position - 0x12E69
{
	if (func_370(Global_252E21, 1))
	{
		return 50;
	}
	return 0;
}

float func_458(int iParam0, float fParam1, float fParam2)//Position - 0x12E83
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_252E21;
	vVar2 = { unk_0x5DC00ADB7E2FD7C2(iParam0) };
	vVar2.z = 0f;
	if ((Global_1417BB || func_498()) || func_497())
	{
		if (func_496(iVar0))
		{
			vVar3 = { func_461(iVar0) };
		}
		else if (func_460(iVar0))
		{
			vVar3 = { func_459(iVar0) };
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

Vector3 func_459(int iParam0)//Position - 0x12F3D
{
	int iVar0;
	
	if (func_460(iParam0))
	{
		iVar0 = unk_0xA95CF30C72EB526E(iParam0);
		if (unk_0x724D816EA203A79E(iVar0))
		{
			return unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_460(int iParam0)//Position - 0x12F71
{
	int iVar0;
	
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
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

Vector3 func_461(int iParam0)//Position - 0x12FCD
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
	
	if (iParam0 == func_93())
	{
	}
	if (func_495(iParam0))
	{
		iVar0 = func_494(iParam0);
		if (iVar0 != func_93())
		{
			if (!func_493(iVar0))
			{
				if (unk_0x724D816EA203A79E(Global_252E21.f_290[iVar0 /*3*/][1]))
				{
					return unk_0x541C2AEF053615BC(Global_252E21.f_290[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_24FB5C[func_494(iParam0) /*406*/].f_131.f_5;
				}
			}
			else
			{
				iVar1 = func_489(iVar0);
				if (!iVar1 == -1)
				{
					return Global_197055.f_2A[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_488(iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_267214.f_126))
		{
			return unk_0x541C2AEF053615BC(Global_267214.f_126, 0);
		}
	}
	else if (func_446(iParam0) && !func_487(iParam0))
	{
		iVar2 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar2 != func_93())
		{
			iVar3 = func_489(iVar2);
			if (!iVar3 == -1)
			{
				return Global_197055.f_2A[iVar3 /*3*/];
			}
		}
	}
	else if (func_444(iParam0) && !func_486(iParam0))
	{
		if (func_496(iParam0) && func_485())
		{
			return Global_197055.f_2A[Global_24FB5C[iParam0 /*406*/].f_131.f_1 /*3*/];
		}
		iVar4 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar4 != func_93())
		{
			if (func_484(iVar4))
			{
				iVar5 = func_480(iVar4);
				if (iVar5 != -1)
				{
					return Global_197055.f_2A[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_443(iParam0))
	{
		iVar6 = func_479(iParam0);
		if (iVar6 != func_93())
		{
			if (!func_478(iVar6))
			{
				if (unk_0x724D816EA203A79E(Global_252E21.f_2F1[iVar6]))
				{
					return unk_0x541C2AEF053615BC(Global_252E21.f_2F1[iVar6], 0);
				}
				else
				{
					return Global_24FB5C[func_479(iParam0) /*406*/].f_131.f_E;
				}
			}
			else
			{
				iVar7 = func_480(iVar6);
				if (!iVar7 == -1)
				{
					return Global_197055.f_2A[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_477(iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_267214.f_128))
		{
			return unk_0x541C2AEF053615BC(Global_267214.f_128, 0);
		}
	}
	else if (func_442(iParam0) && !func_476(iParam0))
	{
		iVar8 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar8 != func_93())
		{
			if (func_475(iVar8))
			{
				iVar9 = func_471(iVar8);
				if (iVar9 != -1)
				{
					return func_470(iVar9);
				}
			}
		}
	}
	else if (func_441(iParam0) && !func_469(iParam0))
	{
		iVar10 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar10 != func_93())
		{
			if (func_468(iVar10))
			{
				iVar11 = func_464(iVar10);
				if (iVar11 != -1)
				{
					return Global_197055.f_2A[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_440(iParam0, 0))
	{
		iVar12 = func_463(iParam0);
		if (iVar12 != func_93())
		{
			if (!func_462(iVar12))
			{
				if (unk_0x724D816EA203A79E(Global_252E21.f_312[iVar12]))
				{
					return unk_0x541C2AEF053615BC(Global_252E21.f_312[iVar12], 0);
				}
				else
				{
					return Global_18C80F[func_463(iParam0) /*558*/].f_225;
				}
			}
			else
			{
				iVar13 = func_464(iVar12);
				if (!iVar13 == -1)
				{
					return Global_197055.f_2A[iVar13 /*3*/];
				}
			}
		}
	}
	if (func_442(iParam0))
	{
		return func_470(Global_24FB5C[iParam0 /*406*/].f_131.f_1);
	}
	return Global_197055.f_2A[Global_24FB5C[iParam0 /*406*/].f_131.f_1 /*3*/];
}

int func_462(int iParam0)//Position - 0x1339A
{
	if (iParam0 != func_93())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131.f_15, 4);
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x133C2
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_24FB5C[iParam0 /*406*/].f_131.f_4;
}

int func_464(int iParam0)//Position - 0x133E6
{
	int iVar0;
	
	if (iParam0 != func_93())
	{
		iVar0 = func_467(iParam0);
		if (iVar0 != 0)
		{
			return func_465(iVar0);
		}
	}
	return -1;
}

int func_465(int iParam0)//Position - 0x1340F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_286(iVar0) == 11)
		{
			if (func_466(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_466(int iParam0)//Position - 0x13446
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

int func_467(int iParam0)//Position - 0x134BD
{
	if (iParam0 != func_93())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_10A;
	}
	return 0;
}

int func_468(int iParam0)//Position - 0x134E1
{
	if (iParam0 != func_93())
	{
		if (Global_18402B[iParam0 /*770*/].f_111.f_10A != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x1350A
{
	if (iParam0 != func_93())
	{
		if (func_441(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_470(int iParam0)//Position - 0x1353F
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

int func_471(int iParam0)//Position - 0x1364A
{
	int iVar0;
	
	if (iParam0 != func_93())
	{
		iVar0 = func_474(iParam0);
		if (iVar0 != 0)
		{
			return func_472(iVar0);
		}
	}
	return -1;
}

int func_472(int iParam0)//Position - 0x13673
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_286(iVar0) == 11)
		{
			if (func_473(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_473(int iParam0)//Position - 0x136AA
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

int func_474(int iParam0)//Position - 0x13721
{
	if (iParam0 != func_93())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133;
	}
	return 0;
}

int func_475(int iParam0)//Position - 0x13745
{
	if (iParam0 != func_93())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133 != 0;
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x1376B
{
	if (iParam0 != func_93())
	{
		if (func_442(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0)//Position - 0x137A0
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_478(int iParam0)//Position - 0x137E7
{
	if (iParam0 != func_93())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131.f_A, 6);
	}
	return 0;
}

int func_479(int iParam0)//Position - 0x1380F
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_24FB5C[iParam0 /*406*/].f_131.f_4;
}

int func_480(int iParam0)//Position - 0x13833
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_483(iParam0);
	if (!iVar0 == 0)
	{
		return func_481(iVar0);
	}
	return -1;
}

int func_481(int iParam0)//Position - 0x13862
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_286(iVar0) == 9)
		{
			if (func_482(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_482(int iParam0)//Position - 0x13899
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

int func_483(int iParam0)//Position - 0x13905
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_100;
}

int func_484(int iParam0)//Position - 0x13929
{
	if (iParam0 != func_93())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_100 != 0;
	}
	return 0;
}

int func_485()//Position - 0x1394F
{
	if (unk_0xFA30DFD0084E92FE(Global_197055.f_CDC, 13) || Global_197055.f_871)
	{
		return 1;
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x13979
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_444(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x139B2
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_446(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x139EB
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_489(int iParam0)//Position - 0x13A31
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_492(iParam0);
	if (!iVar0 == 0)
	{
		return func_490(iVar0);
	}
	return -1;
}

int func_490(int iParam0)//Position - 0x13A60
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_491(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_491(int iParam0)//Position - 0x13A8C
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

int func_492(int iParam0)//Position - 0x13C26
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_A8[5 /*12*/];
}

int func_493(int iParam0)//Position - 0x13C4C
{
	if (iParam0 != func_93())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 6);
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x13C72
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_24FB5C[iParam0 /*406*/].f_131.f_4;
}

int func_495(int iParam0)//Position - 0x13C96
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_93())
			{
				return func_286(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_496(int iParam0)//Position - 0x13CF5
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_12(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

bool func_497()//Position - 0x13D5B
{
	return unk_0xFA30DFD0084E92FE(Global_1996AC, 5);
}

bool func_498()//Position - 0x13D6C
{
	return unk_0xFA30DFD0084E92FE(Global_1996AB, 1);
}

int func_499(int iParam0)//Position - 0x13D7D
{
	if ((unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 9) && !(unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 6) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 7))) || ((unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 6) && !unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 7)) && !unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_500(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x13E18
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_501(int iParam0)//Position - 0x13E5F
{
	switch (Local_164.f_3)
	{
		case 14:
			return vLocal_155[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_502()//Position - 0x13E86
{
	switch (Local_164.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_503()//Position - 0x13EA4
{
	switch (Local_164.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_504()//Position - 0x13EC1
{
	switch (Local_164.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_505(var uParam0, char* sParam1)//Position - 0x13EE1
{
	char* sVar0;
	
	if (func_300(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_205(sParam1))
	{
		sVar0 = sParam1;
	}
	func_132(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_506(int iParam0)//Position - 0x13F20
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

int func_507(int iParam0, int iParam1)//Position - 0x1412A
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_508(int iParam0)//Position - 0x14140
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

int func_509(var uParam0, bool bParam1, bool bParam2)//Position - 0x14197
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

void func_510(int iParam0)//Position - 0x141DE
{
	if (!unk_0x7382A6B79BD5F585() && !unk_0x17FAADF9916EF741())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C())
					{
						if (func_5(Local_164.f_3))
						{
							if (Local_164.f_3 == 12)
							{
								func_282("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_282("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_164.f_3))
						{
							func_282("AMCH_BIKEAV", 30000);
						}
						func_281(1);
						unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E())
					{
						func_282("AMCH_BLOW", 30000);
						func_281(1);
						unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !func_515(63))
					{
						switch (Local_164.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
									{
										func_282("AMCH_ALTI", 30000);
										func_281(1);
										unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_NMIS", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_FRFALL", -1);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_PVPO1", -1);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_PVPO2", -1);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_WHEELIE", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_STOPPIE", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_LFALL", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_LPARA", 30000);
									func_281(1);
									unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
					{
						switch (Local_164.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
									{
										if (func_1(&uLocal_129, 1000, 0))
										{
											func_282("AMCH_OCEAN", 30000);
											func_281(1);
											func_44(&uLocal_129);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !func_515(63))
					{
						switch (Local_164.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
									{
										if (func_499(unk_0xB5CEFD608600A09F()) && !func_512(unk_0xB5CEFD608600A09F()))
										{
											func_282("AMCH_ALTIEXP", 30000);
											func_281(1);
											unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
					{
						if (func_1(&uLocal_129, 1000, 0))
						{
							func_282("AMCH_FLYLOW", 30000);
							func_281(1);
							func_44(&uLocal_129);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if (Local_164.f_3 == 7)
					{
						if (iLocal_159 == 0)
						{
							if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
							{
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_MVS1", 30000);
									func_281(1);
									iLocal_159 = 1;
								}
							}
						}
						else if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
						{
							if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
							{
								func_282("AMCH_MVS2", 30000);
								func_281(1);
								unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
							}
						}
					}
					if (Local_164.f_3 == 14)
					{
						if (iLocal_159 == 0)
						{
							if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
							{
								if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
								{
									func_282("AMCH_BRBL", 30000);
									func_281(1);
									iLocal_159 = 1;
								}
							}
						}
						else if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && !func_515(63))
						{
							if (func_12(unk_0xB5CEFD608600A09F(), 1, 1))
							{
								func_282("AMCH_BRBL2", 30000);
								func_281(1);
								unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xFA30DFD0084E92FE(iLocal_158, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C())
					{
						func_511("AMCH_WARN", func_375(Local_164.f_3), func_374(Local_164.f_3), 30000);
						func_281(0);
						Local_1531.f_8 = unk_0xB99C193A32DE341D();
						unk_0xC4BA30B532FE260F(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xF0059F27F7BB6680(&iLocal_158, iParam0);
					}
				}
				break;
			}
	}
}

void func_511(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x147C2
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam3);
}

bool func_512(int iParam0)//Position - 0x147E5
{
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_F1.f_88[func_514(9) /*33*/][iParam0], func_513(9));
}

int func_513(int iParam0)//Position - 0x1480B
{
	return (iParam0 % 32);
}

int func_514(int iParam0)//Position - 0x14818
{
	return (iParam0 / 32);
}

bool func_515(int iParam0)//Position - 0x14825
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 == iParam0;
}

void func_516(int iParam0)//Position - 0x1483C
{
	Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_3 = iParam0;
}

void func_517(bool bParam0)//Position - 0x14851
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

int func_518(bool bParam0, bool bParam1, bool bParam2)//Position - 0x14885
{
	if (func_540(unk_0xB5CEFD608600A09F(), 29))
	{
		return 0;
	}
	if (func_152(unk_0xB5CEFD608600A09F(), 21))
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
	if (func_332(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_538(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (func_537())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_95(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	else if (func_530(unk_0xB5CEFD608600A09F()) == 3)
	{
		return 0;
	}
	if (func_529(unk_0xB5CEFD608600A09F()) != func_93() && func_529(unk_0xB5CEFD608600A09F()) == func_80(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_528(func_276()) && func_307(unk_0xB5CEFD608600A09F()) != 236)
	{
		return 0;
	}
	if (func_527())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (unk_0x517823CA390A19F6())
	{
		return 0;
	}
	if (func_334(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!func_525())
	{
		return 0;
	}
	if (func_152(unk_0xB5CEFD608600A09F(), 0) || func_152(unk_0xB5CEFD608600A09F(), 3))
	{
		return 0;
	}
	if ((func_152(unk_0xB5CEFD608600A09F(), 12) || func_152(unk_0xB5CEFD608600A09F(), 14)) || func_152(unk_0xB5CEFD608600A09F(), 13))
	{
		return 0;
	}
	if (func_439(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_495(unk_0xB5CEFD608600A09F()))
	{
		if (!func_497() && !Global_262215)
		{
			return 0;
		}
	}
	if (func_524(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_523())
	{
		return 0;
	}
	if (Global_193981)
	{
		return 0;
	}
	if (func_368(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_522())
	{
		return 0;
	}
	if (func_520(unk_0xB5CEFD608600A09F()) && Global_183ECC.f_AB)
	{
		return 0;
	}
	if (func_519())
	{
		return 0;
	}
	return 1;
}

bool func_519()//Position - 0x14A9E
{
	return Global_197055.f_1C;
}

int func_520(int iParam0)//Position - 0x14AAC
{
	if (func_521(Global_18402B[iParam0 /*770*/].f_111.f_15))
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x14ACE
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

int func_522()//Position - 0x14AFD
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

bool func_523()//Position - 0x14B15
{
	return Global_16B4F.f_142 > 0;
}

bool func_524(int iParam0)//Position - 0x14B26
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11);
}

int func_525()//Position - 0x14B42
{
	if (func_526() == 0)
	{
		return 1;
	}
	return 0;
}

int func_526()//Position - 0x14B57
{
	return Global_1406D2.f_12;
}

bool func_527()//Position - 0x14B65
{
	return Global_140856;
}

int func_528(int iParam0)//Position - 0x14B71
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

int func_529(int iParam0)//Position - 0x14BB5
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_23;
}

int func_530(int iParam0)//Position - 0x14BCA
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_369(iParam0) && !func_8(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8));
	bVar2 = func_95(iParam0);
	uVar3 = func_154();
	uVar4 = func_531();
	if ((bVar1 && (func_437(iParam0) || func_394(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_97(iParam0)) && !func_287(iParam0)))
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

int func_531()//Position - 0x14C88
{
	if ((func_96(unk_0xB5CEFD608600A09F(), 21) || func_96(unk_0xB5CEFD608600A09F(), 22)) || func_535())
	{
		return 1;
	}
	if (func_533())
	{
		func_532(22);
		return 1;
	}
	return 0;
}

void func_532(int iParam0)//Position - 0x14CCD
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

int func_533()//Position - 0x14CEA
{
	if (func_101(unk_0xB5CEFD608600A09F(), 0))
	{
		if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		else
		{
			func_534(27);
		}
	}
	return 0;
}

void func_534(int iParam0)//Position - 0x14D2D
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

int func_535()//Position - 0x14D4A
{
	return func_536(306, -1);
}

int func_536(int iParam0, int iParam1)//Position - 0x14D5A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_537()//Position - 0x14D86
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 5;
}

int func_538(int iParam0)//Position - 0x14D9B
{
	if (Global_24FB5C[iParam0 /*406*/].f_101.f_4 != 0 || Global_24FB5C[iParam0 /*406*/].f_101.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_539()//Position - 0x14DCF
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

bool func_540(int iParam0, int iParam1)//Position - 0x14DEB
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_5, iParam1);
}

void func_541()//Position - 0x14E06
{
	func_542(&(Local_185.f_215), &Local_185, 26, &(Local_185.f_1), &(Local_185.f_74), Local_164.f_3, 0, 0);
}

void func_542(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x14E2E
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
	
	if (func_650(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_648() || iParam2 == 27)
	{
		if (func_605(iParam1, iParam2, uParam3, Global_180515, 0, func_651(), sParam7))
		{
			func_604(1);
			if ((!func_603() && !func_602()) || unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
			{
				if (func_601())
				{
					func_600();
				}
				else
				{
					unk_0xC2EAD30963BDAA47(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_599(1);
						Global_180515 = 0;
						iVar19 = -1;
						if (Global_1805CF != 1)
						{
							func_598(iParam1, 0, 0);
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
								if (func_12(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
									if (!func_14(iVar3, 0))
									{
										if ((func_597(iVar3) || Global_24FB5C[iVar3 /*406*/].f_E8 != -1) || func_596(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_593(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_98(unk_0xB5CEFD608600A09F(), 0) && func_208(unk_0xB5CEFD608600A09F()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_592())
							{
								if (func_12(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
								}
								else
								{
									iVar3 = func_93();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_591(iVar3) && func_588(iVar3, iParam2)) && func_12(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
								Var6 = { func_583(iVar3) };
								if (iVar3 == unk_0xB5CEFD608600A09F())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xD885B2234FC72D62(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_126(iVar3) };
								iVar5 = func_577(iVar3);
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
									if (!func_592())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_575(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_270(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_574(iVar3, 0);
								if (bVar2)
								{
									if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
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
								if (func_573(iParam5))
								{
									func_572(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_572(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_12(iVar3, 0, 1) && !unk_0xFA30DFD0084E92FE(iVar14, iVar3))
							{
								iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							}
							else
							{
								iVar3 = func_93();
							}
							if (func_591(iVar3))
							{
								if (func_12(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
									Var6 = { func_583(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_126(iVar3) };
									iVar5 = func_577(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
									}
									Global_180515++;
									iVar16 = func_574(iVar3, 1);
									if (bVar2)
									{
										if (func_81(iVar3, 1))
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
									func_555(iVar3, unk_0xD885B2234FC72D62(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							func_552(uParam3, iParam1);
						}
						func_44(&(uParam3->f_15));
						func_551();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
						{
							func_550(uParam3, iParam1);
							func_549(iParam1, 0, 1);
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 7);
						}
						func_550(uParam3, iParam1);
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 11);
						}
						if (func_545(uParam3))
						{
							Global_1805CF = 1;
						}
						func_543(uParam3);
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
			func_551();
			func_599(0);
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

void func_543(var uParam0)//Position - 0x1547F
{
	if (!func_45(&(uParam0->f_15)))
	{
		func_2(&(uParam0->f_15), 0, 0);
	}
	else if (func_1(&(uParam0->f_15), 250, 0))
	{
		func_44(&(uParam0->f_15));
		func_544(0);
	}
}

void func_544(bool bParam0)//Position - 0x154BB
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

int func_545(var uParam0)//Position - 0x15501
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x3171C34AB3FE6F2E(uParam0->f_25);
	if (iVar3 != func_93() && func_12(iVar3, 0, 1))
	{
		Var2 = { func_126(iVar3) };
		iVar1 = func_548(uParam0, uParam0->f_25);
		if (func_547(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_546(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_546(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_546(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_546(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xCE838A0680E73021(&Var2))
						{
							iVar4 = 1;
							func_546(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_546(uParam0, iVar0, 0);
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

void func_546(var uParam0, int iParam1, int iParam2)//Position - 0x1562E
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_547(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x15640
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

var func_548(var uParam0, int iParam1)//Position - 0x15650
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_549(int iParam0, bool bParam1, int iParam2)//Position - 0x15660
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

void func_550(var uParam0, int iParam1)//Position - 0x15698
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_21, 10))
	{
		unk_0x29CD142125FE177B(*iParam1, "SET_HIGHLIGHT");
		unk_0x1E1FB49121565EB6(uParam0->f_23);
		unk_0xF9FBC2F3F73D94C9();
		unk_0xF0059F27F7BB6680(&(uParam0->f_21), 10);
	}
}

void func_551()//Position - 0x156D0
{
	if (Global_1805CF != 0)
	{
		Global_1805CF = 0;
	}
}

void func_552(var uParam0, int iParam1)//Position - 0x156E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar2 != func_93())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_554(uParam0->f_26[iVar0 /*2*/], 0);
					func_553(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_18402B[iVar0 /*770*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_553(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15758
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

int func_554(int iParam0, bool bParam1)//Position - 0x15795
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

void func_555(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x157C9
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_571() && iParam4 < func_570())
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
				func_569("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(iParam10);
			}
			func_569(sParam1);
			unk_0x1E1FB49121565EB6(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_569("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(65);
			}
			unk_0x1E1FB49121565EB6(-1);
			func_569("");
			if (uParam3->f_6C == 6)
			{
				func_569("");
			}
			else
			{
				func_569(&sParam5);
			}
			func_560(uParam3, iParam0);
			unk_0x6A664E53A192232C(sParam9);
			unk_0x6A664E53A192232C(sParam9);
			if (func_559(uParam3))
			{
				func_558("DPAD_FRIEND");
			}
			else if (func_557(uParam3))
			{
				func_558("DPAD_FRIEND");
			}
			else if (func_556(uParam3))
			{
				func_558("DPAD_CREW");
			}
			else
			{
				func_558("");
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

bool func_556(var uParam0)//Position - 0x158F3
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 6);
}

bool func_557(var uParam0)//Position - 0x15904
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 5);
}

void func_558(char* sParam0)//Position - 0x15915
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_559(var uParam0)//Position - 0x15927
{
	if (func_557(uParam0) && func_556(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_560(var uParam0, int iParam1)//Position - 0x15948
{
	if (func_568(iParam1))
	{
		unk_0x1E1FB49121565EB6(121);
	}
	else if (func_564(iParam1))
	{
		unk_0x1E1FB49121565EB6(122);
	}
	else if (((unk_0xFA30DFD0084E92FE(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam1 /*406*/].f_195, 0))
	{
		unk_0x1E1FB49121565EB6(123);
	}
	else
	{
		if (func_561())
		{
			uParam0->f_24 = 0;
		}
		unk_0x5E5DBD0A6623969E(uParam0->f_24);
	}
}

int func_561()//Position - 0x159C9
{
	if (unk_0x517823CA390A19F6())
	{
		if (func_562() || func_85())
		{
			return 1;
		}
	}
	return 0;
}

int func_562()//Position - 0x159EE
{
	if (unk_0x517823CA390A19F6())
	{
		return func_85();
	}
	return func_563(Global_440000.f_1EF38);
}

int func_563(int iParam0)//Position - 0x15A12
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

int func_564(int iParam0)//Position - 0x15A4C
{
	if ((func_12(iParam0, 0, 1) && func_565()) && func_244(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_565()//Position - 0x15A79
{
	if (func_369(unk_0xB5CEFD608600A09F()) || func_567())
	{
		if (!func_566(unk_0xB5CEFD608600A09F(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_566(int iParam0, int iParam1)//Position - 0x15AA9
{
	if (func_307(iParam0) == iParam1)
	{
		return func_437(iParam0);
	}
	return 0;
}

int func_567()//Position - 0x15AC6
{
	switch (func_208(unk_0xB5CEFD608600A09F()))
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

int func_568(int iParam0)//Position - 0x15B04
{
	if (func_561())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_565()) && func_246(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_569(char* sParam0)//Position - 0x15B4C
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_570()//Position - 0x15B5A
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

int func_571()//Position - 0x15B76
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_180517)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_572(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x15B8E
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_571() && iParam3 < func_570())
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
					func_569("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					func_558(sParam16);
				}
				else
				{
					func_569(&(uParam2->f_1));
				}
				unk_0x1E1FB49121565EB6(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_569("");
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
				if (func_592())
				{
					func_569("");
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
						func_558(&(uParam2->f_68));
					}
					else
					{
						func_569("");
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
					func_569("");
				}
				if (uParam2->f_6C == 6)
				{
					func_569("");
				}
				else
				{
					func_569(&sParam4);
				}
				func_560(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xF1734B55490E9045(sParam8))
				{
					func_569("");
					func_569("");
				}
				else
				{
					unk_0x6A664E53A192232C(sParam8);
					unk_0x6A664E53A192232C(sParam8);
				}
				if (func_559(uParam2))
				{
					func_558("DPAD_FRIEND");
				}
				else if (func_557(uParam2))
				{
					func_558("DPAD_FRIEND");
				}
				else if (func_556(uParam2))
				{
					func_558("DPAD_CREW");
				}
				else
				{
					func_558("");
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_573(int iParam0)//Position - 0x15EE8
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

int func_574(int iParam0, bool bParam1)//Position - 0x15F0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_369(iParam0)) && !func_95(iParam0))
	{
		iVar0 = func_63();
	}
	iVar1 = func_79(iParam0);
	if (!iVar1 == -1)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

int func_575(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x15F56
{
	if (func_576(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_573(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_576(int iParam0)//Position - 0x15FA6
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

int func_577(int iParam0)//Position - 0x16002
{
	int iVar0;
	
	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		func_578(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_578(int iParam0, bool bParam1)//Position - 0x16038
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_580(iParam0) != -1)
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
	if (func_579(iParam0))
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

int func_579(int iParam0)//Position - 0x160A4
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

int func_580(int iParam0)//Position - 0x160D6
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
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
			func_581(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_581(int iParam0)//Position - 0x16155
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
	func_582(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_582(var uParam0)//Position - 0x1620B
{
	*uParam0 = 0;
	uParam0->f_1 = func_93();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

struct<4> func_583(int iParam0)//Position - 0x16238
{
	char cVar0[32];
	
	if (func_12(iParam0, 0, 1))
	{
		Global_26210D = { func_126(iParam0) };
		if (unk_0xF49912B78E2591B6())
		{
			if (func_547(Global_26210D))
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
		if (func_587(&Global_26210D))
		{
			Global_2620C7 = { func_585(iParam0) };
			func_584(&Global_2620C7, &cVar0);
		}
	}
	return cVar0;
}

void func_584(var uParam0, char* sParam1)//Position - 0x162B9
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

struct<35> func_585(int iParam0)//Position - 0x162CB
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_586(iParam0))
	{
		return Global_140876[unk_0xB5CEFD608600A09F() /*35*/];
	}
	Var0 = { func_126(iParam0) };
	unk_0x24723877416AAAFC(&Var1, 35, &Var0);
	return Var1;
}

int func_586(int iParam0)//Position - 0x16307
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return 1;
	}
	return 0;
}

int func_587(var uParam0)//Position - 0x1631D
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

int func_588(int iParam0, int iParam1)//Position - 0x16343
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_590(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_589(iParam0))
	{
		return 0;
	}
	if ((!func_597(iParam0) && Global_24FB5C[iParam0 /*406*/].f_E8 == -1) && !func_596(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)//Position - 0x163B2
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 22);
}

int func_590(int iParam0)//Position - 0x163CB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10) || unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_591(int iParam0)//Position - 0x16409
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
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

int func_592()//Position - 0x1644E
{
	switch (func_208(unk_0xB5CEFD608600A09F()))
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
	switch (func_307(unk_0xB5CEFD608600A09F()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_95(unk_0xB5CEFD608600A09F()))
	{
		switch (func_208(unk_0xB5CEFD608600A09F()))
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
	if (func_566(unk_0xB5CEFD608600A09F(), 236))
	{
		return 1;
	}
	return 0;
}

void func_593(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1658A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_597(iVar1) || Global_24FB5C[iVar1 /*406*/].f_E8 != -1) || func_596(iVar1))
				{
					if (func_594(iVar1, iParam1, 0))
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

int func_594(int iParam0, int iParam1, bool bParam2)//Position - 0x16614
{
	if (iParam1 != func_93())
	{
		if (!bParam2)
		{
			if (func_595(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_93())
		{
			return iParam1 == Global_18C80F[iParam0 /*558*/].f_B;
		}
	}
	return 0;
}

int func_595(int iParam0, int iParam1)//Position - 0x1665E
{
	if (iParam1 != func_93())
	{
		if (iParam0 != func_93())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_93())
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

bool func_596(int iParam0)//Position - 0x166A3
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_597(int iParam0)//Position - 0x166B8
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (unk_0x75206900382D1E30(iParam0, unk_0xB5CEFD608600A09F()) || func_208(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_598(int iParam0, int iParam1, int iParam2)//Position - 0x166F9
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_599(bool bParam0)//Position - 0x16727
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

void func_600()//Position - 0x16759
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
	{
		if (func_288())
		{
			func_275();
		}
	}
}

int func_601()//Position - 0x1677B
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0) && func_288())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1) && func_288())
	{
		return 1;
	}
	return 0;
}

int func_602()//Position - 0x167BC
{
	if (func_288())
	{
		if (func_52(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_603()//Position - 0x167E3
{
	if (func_288())
	{
		if (func_64(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_604(int iParam0)//Position - 0x1680A
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

int func_605(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x16838
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_647(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_646();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_645())
		{
			if (func_644() > 0 && Global_180517)
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
		if (!func_635())
		{
			func_634(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
	{
		func_634(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_13)))
	{
		if (func_644() == 1)
		{
			func_633(bVar3, iParam0, 0);
			func_2(&(uParam2->f_13), 0, 0);
			func_634(iParam0, uParam2, 0);
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11E1), 5);
		}
	}
	if (func_45(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x39CC55A2108C1AB0();
		}
		unk_0x4E0EC60D119222B1(10);
		if (func_1(&(uParam2->f_13), 10000, 0) || (func_644() == 0 && !bParam5))
		{
			func_634(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_632();
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
					func_632();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xE9DBADA362313538();
					}
					unk_0x4E0EC60D119222B1(18);
				}
				unk_0xE7918A3D05166D98(fVar4);
				if (func_633(bVar3, iParam0, 0))
				{
					func_598(iParam0, 0, 0);
					sVar1 = func_630(iParam1, &(Global_440000.f_1EF3F), bParam4);
					Var0 = { func_628(iParam1) };
					if (bParam4)
					{
						func_625(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_619(iParam0, func_622(uParam2), func_620(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_613(uParam2);
						if (!unk_0xF1734B55490E9045(sParam6))
						{
							sVar5 = sParam6;
						}
						func_611(iParam0, sVar5, func_612(), -1);
					}
					else if (func_561())
					{
						uParam2->f_22 = Global_180516;
						func_625(iParam0, sVar1, &Var0, 1, -1, Global_180516, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180516;
						func_625(iParam0, sVar1, "", 0, -1, Global_180516, 1);
					}
					else
					{
						iVar6 = func_606(iParam1);
						func_625(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
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

int func_606(int iParam0)//Position - 0x16B0B
{
	int iVar0;
	
	iVar0 = -1;
	if (func_610())
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
			if (func_609(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 20;
			}
			if (func_608(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_607(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 2;
	}
	if (func_209())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_607(int iParam0)//Position - 0x16C1B
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 4;
}

bool func_608(int iParam0)//Position - 0x16C30
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_609(int iParam0)//Position - 0x16C45
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_610()//Position - 0x16C5A
{
	return Global_440000.f_1 == 0;
}

void func_611(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x16C6A
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_558(sParam1);
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_558("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_612()//Position - 0x16CC9
{
	switch (func_208(unk_0xB5CEFD608600A09F()))
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

char* func_613(var uParam0)//Position - 0x16D21
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
	switch (func_208(unk_0xB5CEFD608600A09F()))
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
			if (func_615())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_243(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_243(1))
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
			if (func_614(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_614(int iParam0)//Position - 0x1714D
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

bool func_615()//Position - 0x1717F
{
	return (func_618() && func_616(func_617()));
}

int func_616(int iParam0)//Position - 0x17198
{
	return func_246(iParam0, 1);
}

int func_617()//Position - 0x171A7
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23;
}

bool func_618()//Position - 0x171BE
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148;
}

void func_619(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x171D4
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_558(sParam1);
		}
		else if (func_307(unk_0xB5CEFD608600A09F()) == 133)
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
		func_558("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_620(var uParam0)//Position - 0x1725B
{
	int iVar0;
	
	iVar0 = func_307(unk_0xB5CEFD608600A09F());
	if (func_621())
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
			switch (func_306())
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

bool func_621()//Position - 0x17406
{
	return Global_183FAC;
}

char* func_622(var uParam0)//Position - 0x17412
{
	int iVar0;
	
	iVar0 = func_307(unk_0xB5CEFD608600A09F());
	if (func_621())
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
			if (func_624() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_624() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_306())
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
			if (func_623() == 1)
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

int func_623()//Position - 0x17607
{
	return Global_267214.f_12C6;
}

int func_624()//Position - 0x17616
{
	if (func_307(unk_0xB5CEFD608600A09F()) == 132)
	{
		return Global_267214.f_12C1;
	}
	return -1;
}

void func_625(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17639
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_569(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x57016C44F10111F0(sParam1);
			unk_0xAA5C5BF0489E5553(iParam5);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_558(sParam1);
		}
		if (func_645() && iParam6)
		{
			if (func_627())
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
			func_558(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (func_626(unk_0xB5CEFD608600A09F()))
			{
				unk_0x1E1FB49121565EB6(166);
			}
			else if (func_61())
			{
				unk_0x1E1FB49121565EB6(220);
			}
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_626(int iParam0)//Position - 0x176FA
{
	if (func_609(iParam0) || func_608(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_627()//Position - 0x1771C
{
	return Global_180517;
}

struct<4> func_628(int iParam0)//Position - 0x17728
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_629(unk_0xB5CEFD608600A09F()) || func_607(unk_0xB5CEFD608600A09F()))
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
	if (func_561() && unk_0x517823CA390A19F6())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_22, 16);
	}
	return Var0;
}

bool func_629(int iParam0)//Position - 0x177C3
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 5;
}

char* func_630(int iParam0, char* sParam1, bool bParam2)//Position - 0x177D8
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_561() || unk_0xF1734B55490E9045(sParam1)))
	{
		uVar0 = func_631();
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

char* func_631()//Position - 0x17936
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

void func_632()//Position - 0x1797A
{
	Global_8FCD = 1;
}

bool func_633(bool bParam0, int iParam1, bool bParam2)//Position - 0x17986
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

void func_634(int iParam0, var uParam1, bool bParam2)//Position - 0x179C6
{
	unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 7);
	Global_180515 = 0;
	func_551();
	Global_180514 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_13)))
		{
			func_44(&(uParam1->f_13));
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

int func_635()//Position - 0x17A38
{
	if (func_643())
	{
		return 0;
	}
	if (func_537())
	{
		return 0;
	}
	if (!func_641())
	{
		return 0;
	}
	if (!func_525())
	{
		return 0;
	}
	if (func_640(8, -1))
	{
		return 0;
	}
	if (func_644() == 2)
	{
		return 0;
	}
	if (Global_267214.f_11B1)
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	else if (!func_333(unk_0xB5CEFD608600A09F(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_639(1) || func_637(1)) || Global_4336.f_7C) || Global_4336)
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (func_91(unk_0xB5CEFD608600A09F()))
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
	if (func_636(0))
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

bool func_636(int iParam0)//Position - 0x17B80
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_25, iParam0);
}

int func_637(bool bParam0)//Position - 0x17B97
{
	if (unk_0x546584EE3E61A6C6())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_638(unk_0xBC25C936A095B5BA()))
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

int func_638(int iParam0)//Position - 0x17C82
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

bool func_639(bool bParam0)//Position - 0x17CDF
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

bool func_640(int iParam0, int iParam1)//Position - 0x17D08
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

int func_641()//Position - 0x17D43
{
	if (func_642())
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

bool func_642()//Position - 0x17D82
{
	return Global_1406B6;
}

bool func_643()//Position - 0x17D8E
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_644()//Position - 0x17DA3
{
	return Global_14CC81.f_44;
}

int func_645()//Position - 0x17DB1
{
	if (Global_180516 > 16)
	{
		return 1;
	}
	return 0;
}

float func_646()//Position - 0x17DC7
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFAD6B644971DD747()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_647(int iParam0)//Position - 0x17DEB
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

int func_648()//Position - 0x17E14
{
	if (func_651())
	{
		return 1;
	}
	if (func_7(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_621())
	{
		return 1;
	}
	if (func_369(unk_0xB5CEFD608600A09F()))
	{
		switch (func_307(unk_0xB5CEFD608600A09F()))
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
				if (!func_649(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_649(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_649(unk_0xB5CEFD608600A09F()))
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

bool func_649(int iParam0)//Position - 0x17EEF
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 4);
}

int func_650(int iParam0)//Position - 0x17F07
{
	if (iParam0 == 27)
	{
		if ((func_369(unk_0xB5CEFD608600A09F()) && !func_95(unk_0xB5CEFD608600A09F())) && !func_566(unk_0xB5CEFD608600A09F(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_101(unk_0xB5CEFD608600A09F(), 0) && func_95(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
		if (func_530(unk_0xB5CEFD608600A09F()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_651()//Position - 0x17F78
{
	if (func_652(unk_0xB5CEFD608600A09F()))
	{
		return Global_141780;
	}
	return 0;
}

int func_652(int iParam0)//Position - 0x17F93
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xE502970386494D01(iParam0);
		}
	}
	return 0;
}

void func_653()//Position - 0x17FB6
{
	if (Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_3 == 3)
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_135, 8))
		{
			if ((!func_7(unk_0xB5CEFD608600A09F()) && !func_151(unk_0xB5CEFD608600A09F())) && !func_381(unk_0xB5CEFD608600A09F()))
			{
				func_380();
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(iLocal_135, 9))
		{
			if ((func_7(unk_0xB5CEFD608600A09F()) || func_151(unk_0xB5CEFD608600A09F())) || func_381(unk_0xB5CEFD608600A09F()))
			{
				unk_0x992E057EBDE4A46F();
				Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4 = 0;
				unk_0xF0059F27F7BB6680(&iLocal_135, 9);
			}
		}
	}
}

void func_654()//Position - 0x18058
{
	int iVar0;
	
	if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_139)))
	{
		iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_139));
		if (unk_0x96B1061E8F3CBC9A(iVar0))
		{
			func_655(iVar0, 2);
		}
	}
	iLocal_139++;
	if (iLocal_139 >= unk_0x81C86888AEA2F49B())
	{
		iLocal_139 = 0;
	}
}

void func_655(int iParam0, int iParam1)//Position - 0x180A1
{
	bool bVar0;
	
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_180634.f_12)))
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
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_656(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_180634++;
	}
}

bool func_656(int iParam0)//Position - 0x1816F
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10);
}

void func_657(int iParam0, int iParam1)//Position - 0x18188
{
	Local_1530[iParam0 /*12*/] = iParam1;
}

int func_658()//Position - 0x18199
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_185.f_215[iVar0 /*42*/].f_1 = func_93();
		iVar0++;
	}
	return 1;
}

int func_659()//Position - 0x181C5
{
	return Local_164;
}

int func_660(int iParam0)//Position - 0x181D0
{
	return Local_1530[iParam0 /*12*/];
}

void func_661()//Position - 0x181DF
{
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 6))
	{
		func_684();
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 6);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 7))
	{
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 4) || unk_0xFA30DFD0084E92FE(Global_180634.f_1, 16))
		{
			if (((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_288()) && func_12(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 7);
				func_282("FME_PASINT", 30000);
				func_281(1);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 17))
		{
			if (func_154() && !func_153())
			{
				unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 17);
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 16);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 23))
	{
		if (((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0xF16DAFF595E80F7C())
		{
			if (func_682())
			{
				func_282("AMEV_GA_RP", -1);
				if (func_208(unk_0xB5CEFD608600A09F()) != 200)
				{
					func_281(1);
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 23);
			}
		}
	}
	if (unk_0xE186ACC7BE9B244E() && unk_0x0352C1B6B66A87AC() == 15)
	{
		if (func_394(unk_0xB5CEFD608600A09F()))
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
		if ((((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_288()) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && !func_152(unk_0xB5CEFD608600A09F(), 21))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 9);
			func_681(0);
			func_282("FME_TBL00", -1);
			func_281(1);
		}
	}
	if (func_369(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 18))
		{
			if ((func_152(unk_0xB5CEFD608600A09F(), 21) && unk_0xFA30DFD0084E92FE(Global_180634.f_1, 20)) && !unk_0xFA30DFD0084E92FE(Global_180634.f_1, 19))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 18);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 18))
		{
			if (((((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_288()) && func_12(unk_0xB5CEFD608600A09F(), 1, 1)) && unk_0x726D9204B160D23E()) && !Global_267214.f_12CF)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 18);
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 19);
				func_282("AMTT_RPAS", -1);
				func_281(1);
			}
		}
	}
	if (((((func_369(unk_0xB5CEFD608600A09F()) && !func_8(unk_0xB5CEFD608600A09F())) && func_307(unk_0xB5CEFD608600A09F()) != 146) && !func_7(unk_0xB5CEFD608600A09F())) && !func_151(unk_0xB5CEFD608600A09F())) && !func_671())
	{
		if (func_393(func_307(unk_0xB5CEFD608600A09F())))
		{
			unk_0x2C60B9CCB9A13F96(unk_0xB5CEFD608600A09F());
		}
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 22))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 22);
		}
		if (func_437(unk_0xB5CEFD608600A09F()) || func_387())
		{
			if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 10))
			{
				if (func_670(func_307(unk_0xB5CEFD608600A09F())))
				{
					if (func_250(0) && !Global_247C05)
					{
						unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 9);
					}
					if (!Global_247C05)
					{
						func_391(1);
						unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 14);
					}
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 10);
			}
		}
		if (func_394(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 11))
			{
				if (!Global_16B4F.f_8)
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 12);
					func_389(1);
				}
				if (!func_669())
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 13);
					func_388();
				}
				if (!Global_247C05)
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 14);
					if (func_250(0) && !Global_247C05)
					{
						unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 9);
					}
					func_391(1);
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 11);
			}
		}
		else
		{
			func_667(0);
		}
	}
	else
	{
		func_667(1);
	}
	func_662();
	if (func_386(func_307(unk_0xB5CEFD608600A09F())) && !unk_0xFA30DFD0084E92FE(Global_180634.f_1, 21))
	{
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 21);
	}
	if ((func_154() && !func_153()) || func_152(unk_0xB5CEFD608600A09F(), 21))
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

void func_662()//Position - 0x186FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_288())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_515(iVar2))
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
				func_663(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 26))
	{
		func_44(&(Global_180634.f_16));
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 26);
	}
}

void func_663(int iParam0, int iParam1)//Position - 0x187A2
{
	if (!func_45(&(Global_180634.f_16)))
	{
		func_2(&(Global_180634.f_16), 0, 0);
	}
	else if (func_1(&(Global_180634.f_16), iParam1, 0))
	{
		if (func_644() > 0)
		{
			func_666(iParam0);
			if (func_279("AMEV_LBD_HELP"))
			{
				unk_0x7456702622C62EA0(1);
			}
			func_44(&(Global_180634.f_16));
		}
	}
	else
	{
		func_665(0);
		func_664();
	}
}

void func_664()//Position - 0x1880B
{
	Global_267214.f_11A6 = 0;
}

void func_665(int iParam0)//Position - 0x1881B
{
	Global_14CC81.f_44 = iParam0;
}

void func_666(int iParam0)//Position - 0x1882B
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

void func_667(int iParam0)//Position - 0x18877
{
	if ((unk_0xFA30DFD0084E92FE(Global_180634.f_1, 11) || (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 10) && iParam0)) || (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 22) && iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 12))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 12);
			func_389(0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 13))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 13);
			func_668();
		}
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 14) && !func_101(unk_0xB5CEFD608600A09F(), 0))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 14);
			func_391(0);
		}
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 11);
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 10);
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 22);
	}
}

void func_668()//Position - 0x18952
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1270), 0);
}

bool func_669()//Position - 0x18966
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1270, 0);
}

int func_670(int iParam0)//Position - 0x1897A
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
			return func_394(unk_0xB5CEFD608600A09F());
		
		case 133:
			return (func_387() || func_5(func_306()));
		
		default:
	}
	return 0;
}

int func_671()//Position - 0x189EA
{
	if (((((((((func_680() || func_679()) || func_678()) || func_301()) || (func_677() && !unk_0x517823CA390A19F6())) || (func_674() && !func_673())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_672() == 2 && !unk_0x517823CA390A19F6()))
	{
		return 1;
	}
	return 0;
}

int func_672()//Position - 0x18A7E
{
	return Global_EF3AE;
}

bool func_673()//Position - 0x18A8A
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 27);
}

int func_674()//Position - 0x18A9E
{
	if (func_676() || func_675())
	{
		return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_62 == 8;
	}
	return 0;
}

var func_675()//Position - 0x18ACB
{
	return Global_255A46.f_26E;
}

bool func_676()//Position - 0x18ADA
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 11);
}

bool func_677()//Position - 0x18AEE
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 5);
}

bool func_678()//Position - 0x18AFF
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 2);
}

bool func_679()//Position - 0x18B10
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 20);
}

bool func_680()//Position - 0x18B22
{
	return Global_255A46.f_24A;
}

void func_681(int iParam0)//Position - 0x18B31
{
	int iVar0;
	
	iVar0 = func_196(2530, -1, 0);
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
	func_187(2530, iVar0, -1, 1, 0);
}

int func_682()//Position - 0x18C69
{
	int iVar0;
	
	if (!func_45(&(Global_180634.f_F)))
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
				if (func_12(iVar0, 1, 1) && func_683(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_36(unk_0xB5CEFD608600A09F()), func_36(iVar0)) < 80f)
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
			func_44(&(Global_180634.f_F));
		}
	}
	return 0;
}

int func_683(int iParam0, int iParam1)//Position - 0x18D31
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_191(iParam0))
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

void func_684()//Position - 0x18D6A
{
	unk_0xAEC867D0DBB7AFEB(5);
	func_686();
	unk_0xDF53A66AEE1401AA(1f);
	unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 8);
	func_685();
}

void func_685()//Position - 0x18D90
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

void func_686()//Position - 0x18E90
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

int func_687()//Position - 0x18ED7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_267214.f_126E)
	{
		return 0;
	}
	if ((!func_45(&(Local_164.f_27)) && !func_45(&(Local_164.f_29))) && !func_45(&(Local_164.f_2B)))
	{
		return 0;
	}
	iVar2 = unk_0xED678C85A82F0AB9();
	if (func_45(&(Local_164.f_29)))
	{
		iVar0 = func_688(&iVar2, &(Local_164.f_29));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_164.f_27)))
	{
		iVar0 = func_688(&iVar2, &(Local_164.f_27));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_164.f_2B)))
	{
		iVar0 = func_688(&iVar2, &(Local_164.f_2B));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_688(int iParam0, var uParam1)//Position - 0x18F9A
{
	return unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(*iParam0, *uParam1));
}

int func_689()//Position - 0x18FB0
{
	if (func_690())
	{
		return 1;
	}
	return 0;
}

bool func_690()//Position - 0x18FC4
{
	return Global_180634.f_18;
}

int func_691()//Position - 0x18FD2
{
	var uVar0;
	
	func_695(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_694())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_693())
	{
		return 1;
	}
	if (func_692(157))
	{
		if (!func_680())
		{
			return 1;
		}
	}
	if (func_692(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_396() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_396()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_692(int iParam0)//Position - 0x1905C
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_693()//Position - 0x19073
{
	return Global_258063;
}

bool func_694()//Position - 0x1907F
{
	return Global_255A46.f_245;
}

void func_695(var uParam0)//Position - 0x1908E
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
					func_696(iVar0);
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

void func_696(int iParam0)//Position - 0x19101
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_697(iVar2, &bVar3))
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

int func_697(int iParam0, var uParam1)//Position - 0x19182
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

void func_698()//Position - 0x191E1
{
	SYSTEM::WAIT(0);
}

void func_699()//Position - 0x191EE
{
	int iVar0;
	
	if (func_691())
	{
		Local_1531.f_5 = 5;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_164.f_2, 0))
	{
		Local_1531.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1531.f_5 = 1;
	}
	else
	{
		Local_1531.f_5 = 2;
	}
	Local_1531 = Local_164.f_34;
	Local_1531.f_1 = Local_164.f_35;
	Local_1531.f_4 = Local_164.f_42;
	Local_1531.f_3 = Local_164.f_33;
	Local_1531.f_A = (unk_0xB99C193A32DE341D() - Local_1531.f_9);
	if (!Global_40001.f_2A89)
	{
		if (Local_1531.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x6BAA0516CC970D99() != -1)
	{
		func_735(Local_1531, Local_164.f_3, Local_1530[unk_0x6BAA0516CC970D99() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_135, 4))
	{
		unk_0x38FF8CB6377D36F6(iLocal_143);
		unk_0x7CB6FD92BE491AD9(&iLocal_135, 4);
	}
	unk_0x26D344275839A25E(iLocal_143);
	unk_0x26D344275839A25E(iLocal_144);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_160, iVar0) && !unk_0x1BD5EE88F32433CD(iLocal_161[iVar0]))
		{
			unk_0x38FF8CB6377D36F6(iLocal_161[iVar0]);
			unk_0x26D344275839A25E(iLocal_161[iVar0]);
		}
		iVar0++;
	}
	func_377();
	func_449(1, 1);
	unk_0xA9F827A1B59E18D4(0);
	func_517(0);
	func_384(Local_164.f_3, 0);
	func_700(133, 0, Local_164.f_25 == 6);
	func_383(23, 0);
	if (func_293() >= 0f)
	{
		unk_0xCF9877018AE2E3BB(0f, 0, 21);
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_135, 9))
	{
		unk_0x992E057EBDE4A46F();
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_700(int iParam0, bool bParam1, bool bParam2)//Position - 0x19375
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
	func_731();
	unk_0x9B90420B04C07704("DisableFlightMusic", 0);
	unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_730(func_307(unk_0xB5CEFD608600A09F()));
		func_383(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xB5CEFD608600A09F() != -1) && func_729(unk_0xB5CEFD608600A09F()) >= 12)
		{
			func_728(2542, -1);
			iVar1 = func_196(2542, -1, 0);
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
		func_727();
		func_726();
		func_725();
		if ((!func_97(unk_0xB5CEFD608600A09F()) && !func_287(unk_0xB5CEFD608600A09F())) && !func_432())
		{
			func_709();
		}
		func_708();
		if (!unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 0) && !unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 1))
		{
			func_684();
		}
		func_707();
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6C4), 2);
		func_706();
		func_156();
	}
	if (unk_0x7922FBF86CF76430(1344549371))
	{
		unk_0xCB1E3206344A11E1(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xB5CEFD608600A09F() != -1 && !func_152(unk_0xB5CEFD608600A09F(), 21)) && !func_101(unk_0xB5CEFD608600A09F(), 0))
		{
			func_391(0);
			func_389(0);
			func_705();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2588DC = -1;
			func_46(26, -1);
		}
	}
	if (!func_701())
	{
		Global_2620A0 = 1;
	}
}

int func_701()//Position - 0x195C7
{
	if (((((!func_626(unk_0xB5CEFD608600A09F()) && !func_607(unk_0xB5CEFD608600A09F())) && func_307(unk_0xB5CEFD608600A09F()) != 146) && !func_704()) && !func_703()) && !func_702(Global_440000.f_243FE))
	{
		return 0;
	}
	return 1;
}

bool func_702(int iParam0)//Position - 0x19629
{
	return iParam0 == 57;
}

int func_703()//Position - 0x19636
{
	if (Global_440000.f_1EF38 == Global_40001.f_2319)
	{
		return 1;
	}
	return 0;
}

int func_704()//Position - 0x19657
{
	if ((Global_440000 == 0 && unk_0x517823CA390A19F6()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_243FE > 0) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 15)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 18)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 19)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 29)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 28)) || unk_0xFA30DFD0084E92FE(Global_440000.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_705()//Position - 0x19701
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

void func_706()//Position - 0x19757
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

void func_707()//Position - 0x197F5
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Global_180634 = { Var0 };
}

void func_708()//Position - 0x19824
{
	var uVar0;
	
	Global_141780 = uVar0;
}

void func_709()//Position - 0x19832
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C33D, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C33F, 18);
	func_723();
	func_712(1, 1, 0);
	func_710();
}

void func_710()//Position - 0x19868
{
	func_711(0, 0);
}

void func_711(int iParam0, int iParam1)//Position - 0x19876
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_712(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1988E
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
		func_722();
	}
	if (!bParam2)
	{
		func_714(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_713(0);
	func_159();
}

void func_713(bool bParam0)//Position - 0x1992D
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

void func_714(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1994D
{
	if (bParam0)
	{
		if (func_721())
		{
			func_720();
		}
		Global_24B2CE.f_2BE.f_203 = unk_0x8A55B15F4133C912();
		Global_24B2CE.f_2BE.f_1F8 = iParam1;
		Global_24B2CE.f_2BE.f_1F9 = iParam2;
		Global_24B2CE.f_2BE.f_1FA = iParam10;
		func_718();
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
		func_715();
	}
}

void func_715()//Position - 0x19A14
{
	if (func_721() && !func_717())
	{
		func_720();
	}
	if (func_717())
	{
		func_716();
	}
	else
	{
		func_718();
		func_430(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C7 = 0;
		Global_24B2CE.f_6C6 = 0;
	}
}

void func_716()//Position - 0x19A5C
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BE), &(Global_24B2CE.f_4C2), 516);
	Global_24B2CE.f_1E3 = { Global_24B2CE.f_1E9 };
	if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		Global_24B2CE.f_6C6 = 0;
	}
}

int func_717()//Position - 0x19AA4
{
	if ((Global_24B2CE.f_6C6 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_4C2.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_4C2.f_203))
	{
		return 1;
	}
	return 0;
}

void func_718()//Position - 0x19AE3
{
	if (func_721() && !func_717())
	{
		func_720();
	}
	func_719();
	Global_24B2CE.f_2BE = 0;
}

void func_719()//Position - 0x19B0C
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

void func_720()//Position - 0x19B47
{
	if (func_717())
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

int func_721()//Position - 0x19BB5
{
	if ((Global_24B2CE.f_6C7 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_2BE.f_203))
	{
		return 1;
	}
	return 0;
}

void func_722()//Position - 0x19BF4
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_169), &Global_24C48E, 121);
}

void func_723()//Position - 0x19C0D
{
	func_724();
	Global_24B2CE.f_8C4 = 0;
}

void func_724()//Position - 0x19C21
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

void func_725()//Position - 0x19C4D
{
	Global_267214.f_1270 = 0;
}

void func_726()//Position - 0x19C5D
{
	if (unk_0xB5CEFD608600A09F() != -1)
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1 = 0;
	}
}

void func_727()//Position - 0x19C7B
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	if (iVar0 != -1)
	{
		Global_18C80F[iVar0 /*558*/] = -1;
	}
}

void func_728(int iParam0, int iParam1)//Position - 0x19C99
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_192(iParam1), 0);
	iVar0++;
	if (!func_195(iParam0))
	{
		func_187(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam1, 1);
	}
}

int func_729(int iParam0)//Position - 0x19CDA
{
	return Global_18402B[iParam0 /*770*/].f_D3.f_6;
}

int func_730(int iParam0)//Position - 0x19CEF
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
			if (func_394(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_731()//Position - 0x19D51
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
	func_734(0);
	func_733(0);
	func_732(0);
}

void func_732(int iParam0)//Position - 0x19DF2
{
	if (Global_267214.f_119A != iParam0)
	{
		Global_267214.f_119A = iParam0;
	}
}

void func_733(bool bParam0)//Position - 0x19E0F
{
	if (Global_267214.f_1199 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_267214.f_1199 = bParam0;
	}
}

void func_734(int iParam0)//Position - 0x19E34
{
	if (Global_267214.f_1197 != iParam0)
	{
		Global_267214.f_1197 = iParam0;
	}
}

void func_735(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x19E51
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
			Var3.f_F = iParam4;
			Var3.f_10 = iParam5;
			Var3.f_11 = iParam6;
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
			Var8.f_F = iParam4;
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

int func_736(struct<21> Param0)//Position - 0x1A0C6
{
	func_745(func_746(Param0), Param0);
	unk_0x38A34821FCF0B79E(func_744(9));
	unk_0xA6E7E0EC9E48D44C(func_743(9));
	func_740(0, -1, 0);
	func_738(133);
	unk_0x76AE988734CA7760(&Local_164, 88);
	unk_0xE45D6A3FD6454198(&Local_1530, 385);
	if (!func_737())
	{
		func_699();
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		unk_0x498B26CF846D31E2(&(Local_164.f_34), &(Local_164.f_35));
	}
	Local_1531.f_2 = unk_0xB46BE0E79661103C();
	unk_0x6C87EFD58B261C6F(0);
	return 1;
}

int func_737()//Position - 0x1A143
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
		if (func_694())
		{
			return 0;
		}
		if (func_692(155))
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

void func_738(int iParam0)//Position - 0x1A19C
{
	func_707();
	func_739();
	func_725();
	Global_180634.f_4 = iParam0;
	Global_180634.f_5 = iParam0;
	func_401(iParam0, -1);
	func_27(&(Global_180634.f_12), 0, 0);
	Global_267214.f_11DD = 0;
	Global_25848B[0] = func_93();
	Global_25848B[1] = func_93();
	Global_25848B[2] = func_93();
	Global_25848B[3] = func_93();
	Global_25848B[4] = func_93();
	func_156();
	if (!func_528(func_276()))
	{
		func_275();
	}
	if (func_154() && !func_153())
	{
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 16);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 17);
	}
}

void func_739()//Position - 0x1A252
{
	var uVar0;
	
	Global_18064D = uVar0;
}

int func_740(int iParam0, int iParam1, bool bParam2)//Position - 0x1A260
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_742();
			}
			else
			{
				return 0;
			}
		}
		if (!func_741())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_742();
					}
					else
					{
						return 0;
					}
				}
				if (func_694())
				{
					if (!bParam2)
					{
						func_742();
					}
					else
					{
						return 0;
					}
				}
				if (func_692(155))
				{
					if (!bParam2)
					{
						func_742();
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
					func_742();
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
				func_742();
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
			func_742();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_741()//Position - 0x1A375
{
	return Global_14083F;
}

void func_742()//Position - 0x1A381
{
	unk_0x95E4B6F3ED223F5A();
}

int func_743(int iParam0)//Position - 0x1A38D
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

int func_744(int iParam0)//Position - 0x1A467
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
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

void func_745(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1A53F
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_742();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_746(int iParam0)//Position - 0x1A55E
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

