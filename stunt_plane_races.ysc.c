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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	vector3 vLocal_30 = { 0f, 0f, 0f };
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	struct<328> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
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
	var uLocal_76 = 4;
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
	var uLocal_91 = 4;
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
	var uLocal_106 = 4;
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
	var uLocal_121 = 4;
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
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	vector3 vLocal_184 = { 0f, 0f, 0f };
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196[5] = { 0, 0, 0, 0, 0 };
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
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
	var uLocal_217 = 10;
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
	var uLocal_228 = 2;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 8;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 8;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	float fLocal_250 = 0f;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	var uLocal_255 = 35;
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
	var uLocal_292 = 0;
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
	var uLocal_334 = 0;
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
	var uLocal_376 = 0;
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
	var uLocal_418 = 0;
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
	var uLocal_460 = 0;
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
	var uLocal_571 = 50;
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
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 40;
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
	var uLocal_712 = 0;
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
	var uLocal_754 = 0;
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
	var uLocal_796 = 0;
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
	var uLocal_838 = 0;
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
	var uLocal_880 = 0;
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
	var uLocal_922 = 0;
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
	var uLocal_964 = 0;
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
	var uLocal_1006 = 0;
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
	var uLocal_1048 = 0;
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
	var uLocal_1090 = 0;
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
	var uLocal_1132 = 0;
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
	var uLocal_1174 = 0;
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
	var uLocal_1216 = 0;
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
	var uLocal_1231 = 1;
	var uLocal_1232 = 0;
	var uLocal_1233 = 1;
	var uLocal_1234 = 1;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 1;
	var uLocal_1239 = 1;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 3;
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
	var uLocal_1258 = 0;
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
	var uLocal_1290 = 4;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
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
	var uLocal_1342 = 0;
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
	var uLocal_1355 = 2;
	var uLocal_1356 = 0;
	var uLocal_1357 = 4;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
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
	var uLocal_1384 = 0;
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
	var uLocal_1423 = 4;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
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
	var uLocal_1468 = 0;
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
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 12;
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
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
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
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 3;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	int iLocal_1679 = 0;
	var uLocal_1680 = 0;
	int iLocal_1681 = 0;
	int iLocal_1682 = 0;
	int iLocal_1683 = 0;
	int iLocal_1684 = 0;
	int iLocal_1685 = 0;
	int iLocal_1686 = 0;
	int iLocal_1687 = 0;
	int iLocal_1688 = 0;
	int iLocal_1689 = 0;
	int iLocal_1690 = 0;
	int iLocal_1691 = 0;
	int iLocal_1692 = 0;
	int iLocal_1693 = 0;
	int iLocal_1694 = 0;
	int iLocal_1695 = 0;
	int iLocal_1696 = 0;
	int iLocal_1697 = 0;
	int iLocal_1698 = 0;
	int iLocal_1699 = 0;
	int iLocal_1700 = 0;
	int iLocal_1701 = 0;
	int iLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	int iLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	int iLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	int iLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	int iLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	int iLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	int iLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	int iLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	int iLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	int iLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	int iLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	int iLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	int iLocal_1738 = 0;
	int iLocal_1739 = 0;
	int iLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	int iLocal_1745[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1746[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1747[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	int iLocal_1750 = 0;
	float fLocal_1751 = 0f;
	int iLocal_1752 = 0;
	int iLocal_1753 = 0;
	int iLocal_1754 = 0;
	int iLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 16;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	char* sLocal_1924 = NULL;
	float fLocal_1925 = 0f;
	float fLocal_1926 = 0f;
	bool bLocal_1927 = 0;
	bool bLocal_1928 = 0;
	vector3 vLocal_1929 = { 0f, 0f, 0f };
	vector3 vLocal_1930 = { 0f, 0f, 0f };
	vector3 vLocal_1931 = { 0f, 0f, 0f };
	float fLocal_1932 = 0f;
	float fLocal_1933 = 0f;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = -1;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 1000;
	var uLocal_1944 = 1000;
	var uLocal_1945 = 0;
	char[] cLocal_1946[8] = 0;
	char* sLocal_1947 = NULL;
	bool bLocal_1948 = 0;
	int iLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	int iLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	int iLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	bool bLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	struct<7> Local_1961 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	int iLocal_1967 = 0;
	int iLocal_1968 = 0;
	char* sLocal_1969 = NULL;
	char* sLocal_1970 = NULL;
	char* sLocal_1971 = NULL;
	vector3 vLocal_1972 = { 0f, 0f, 0f };
	vector3 vLocal_1973 = { 0f, 0f, 0f };
	int iLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	struct<7> Local_1982 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 1132396544;
	var uLocal_1987 = 1132396544;
	var uLocal_1988 = 1132396544;
	var uLocal_1989 = 0;
	var uLocal_1990 = -1082130432;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 8;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = -1;
	var uLocal_2051 = 1092616192;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	int iLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	int iLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	int iLocal_2060 = 0;
	int iLocal_2061 = 0;
	bool bLocal_2062 = 0;
	bool bLocal_2063 = 0;
	int iLocal_2064 = 0;
	bool bLocal_2065 = 0;
	int iLocal_2066 = 0;
	struct<2863> Local_2067 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2068 = 1;
	var uLocal_2069 = 0;
	int iLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	vector3 vLocal_2073 = { 0f, 0f, 0f };
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	vLocal_43 = { 1691.228f, 3251.785f, 44.2574f };
	vLocal_44 = { 2.5652f, 0f, -4.1481f };
	vLocal_184 = { 500f, 500f, 500f };
	iLocal_185 = -1;
	iLocal_194 = 1;
	fLocal_197 = 0.008f;
	fLocal_198 = 0.013f;
	fLocal_250 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1751 = -1f;
	iLocal_1752 = 1;
	fLocal_1925 = 0.2f;
	fLocal_1926 = 0.2f;
	fLocal_1933 = 0f;
	cLocal_1946 = "SPR_UI_FAILD";
	sLocal_1947 = "SPR_UI_FRETRY";
	sLocal_1969 = "CHECKPOINT_NORMAL";
	sLocal_1970 = "CHECKPOINT_MISSED";
	sLocal_1971 = "CHECKPOINT_PERFECT";
	vLocal_1972 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_1973 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2062 = true;
	bLocal_2063 = true;
	bLocal_2065 = true;
	vLocal_2073 = { -1497.708f, -3449.576f, 7.3477f };
	if (unk_0xE8A79675302ED812(114))
	{
		func_593();
	}
	unk_0x25A523E067E06F54(1);
	Local_1982.f_1 = 0;
	Local_1982.f_5 = 0;
	Local_1982.f_6 = 0;
	while (true)
	{
		func_592();
		switch (Local_1982.f_1)
		{
			case 0:
				if (!func_581())
				{
					Local_1982.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_1982.f_1 = 2;
				}
				break;
			
			case 2:
				func_593();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
	}
	if (unk_0x724D816EA203A79E(Local_45.f_1))
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_45.f_1, 0))
		{
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_45.f_1, 0))
			{
				if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
				{
					Local_45.f_1 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
				}
			}
		}
	}
	else if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
	{
		Local_45.f_1 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
	}
	else
	{
		Local_45.f_1 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f, joaat("stunt"), 0);
	}
	if (Local_2067.f_B2D != 0)
	{
		Local_2067.f_B2E = (Local_2067.f_B2E - 25);
		if (Local_2067.f_B2E <= 0)
		{
			unk_0x2A6C7715B55EA005(Local_2067.f_B2D);
			Local_2067.f_B2D = 0;
			bLocal_1948 = false;
		}
		else
		{
			if (bLocal_1948)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_578(func_579(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0xCB8C65281BC495B3(Local_2067.f_B2D, iVar0, iVar1, iVar2, func_577(SYSTEM::CEIL((1.5f * IntToFloat(Local_2067.f_B2E))), 255));
			unk_0xF2BBD9C5DA174296(Local_2067.f_B2D, iVar0, iVar1, iVar2, Local_2067.f_B2E);
		}
	}
	func_576();
	unk_0xD2B4393DB5B1AF90("AMMUNATION");
	unk_0xBBC4195AD74D153D(0, 99, 1);
	unk_0xBBC4195AD74D153D(0, 100, 1);
	if (Local_1982.f_6 == 4)
	{
		unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f);
		if (unk_0xE59B7F5A03335350(Local_45.f_1, 0))
		{
			if (unk_0x7544D2465B934445(Local_45.f_1))
			{
				unk_0x046D954861E89961(Local_45.f_1);
			}
		}
	}
	switch (Local_1982.f_6)
	{
		case 0:
			unk_0x1E08809A5041F85B(false);
			Local_1982 = -1;
			Local_45.f_A = 0;
			unk_0x379ACE23D404525C(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, false, 1);
			if (unk_0x724D816EA203A79E(Local_45.f_1))
			{
				unk_0xD421BC740C5340C3(Local_45.f_1, 1);
				Local_2067.f_B2B = 0;
				Local_1982.f_6 = 3;
			}
			else
			{
				Local_1982.f_6 = 1;
			}
			break;
		
		case 1:
			Local_1982.f_6 = 18;
			break;
		
		case 2:
			if (unk_0x724D816EA203A79E(Local_45.f_1))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 512);
				unk_0xD421BC740C5340C3(Local_45.f_1, 1);
				Local_2067.f_B2B = 0;
				Local_1982.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2067)
			{
			}
			else if ((unk_0xEF0E25DA0CB6E8FF(iLocal_1738) && unk_0xEDEA6C8F42EE05F6(iLocal_1738)) && unk_0x726D9204B160D23E())
			{
				if (unk_0xEF0E25DA0CB6E8FF(Local_2067.f_B2A))
				{
					unk_0x4EC087603E1DEF9C(Local_2067.f_B2A, 0);
				}
				unk_0x1A058EB0D1ACEC78("MinigameTransitionOut");
				unk_0x9216004FAC08D1DC("MinigameTransitionIn", 0, 1);
				Local_2067.f_B2A = unk_0x585DE1CBEEB2D27D(26379945, vLocal_43, vLocal_44, 34.9705f, 1, 2);
				unk_0xCF9DB88DE4E2D5C7(0);
				unk_0x4AED68BFACFB14CB(false);
				unk_0x9216004FAC08D1DC("MinigameTransitionOut", 0, 0);
				unk_0x6125108F6208C1F6(iLocal_1738, vLocal_43.x, vLocal_43.y, (vLocal_43.z + 1000f));
				unk_0x3553F2A72957724E(iLocal_1738, 90f, vLocal_44.y, vLocal_44.z, 2);
				unk_0xAE099C1ADC89C331(Local_2067.f_B2A, iLocal_1738, 500, 1, 1);
				unk_0xC4BA30B532FE260F(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			}
			else
			{
				func_575(500);
				if (unk_0xEF0E25DA0CB6E8FF(Local_2067.f_B2A))
				{
					unk_0x4EC087603E1DEF9C(Local_2067.f_B2A, 0);
				}
				Local_2067.f_B2A = unk_0x585DE1CBEEB2D27D(26379945, vLocal_43, vLocal_44, 34.9705f, 1, 2);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			}
			func_574(&iLocal_1962);
			func_573(1);
			unk_0x7A89E6B582BCD8C2();
			Local_1982.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(Local_45.f_1, 0))
			{
				unk_0x2D655AA68FA1736B(Local_45.f_1, true, false, 0);
			}
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0xBBC4195AD74D153D(2, 199, 1);
			}
			unk_0xBBC4195AD74D153D(2, 200, 1);
			unk_0x43F06392C4EF25E0(false);
			Local_2067.f_2 = Local_2067;
			if (Local_2067)
			{
				if (unk_0x724D816EA203A79E(Local_2067.f_166[0 /*189*/].f_9))
				{
					unk_0xD421BC740C5340C3(Local_2067.f_166[0 /*189*/].f_9, 4);
				}
				iLocal_1682 = 0;
				Local_2067 = 0;
				func_542();
				Local_1982.f_6 = 8;
			}
			else if (Local_2067.f_B2B)
			{
				if (unk_0x97EF4023B86C354F())
				{
					if ((Local_2067.f_B2B && unk_0x093484B35A948BFC(2, 202)) && SYSTEM::TIMERA() > 500)
					{
						unk_0xECA8E2750E0CB3B4(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2067.f_B2B = 0;
						Local_2067.f_B2C = 1;
						func_541(&(Local_45.f_77));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2067.f_B2C && func_540(&uLocal_1242))
					{
						Local_2067.f_B2C = 1;
						func_538(Local_2067.f_B2C);
					}
					func_476(&(Local_45.f_76), Global_1973A, &(Local_45.f_18[Global_1973A /*8*/]));
				}
				else if (func_466(&iLocal_1679, 0))
				{
					Local_2067.f_B2B = 0;
					iLocal_1679 = 0;
					func_541(&(Local_45.f_77));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_429(&Local_2067, 0) && !iLocal_192) && !bLocal_191)
				{
					func_541(&(Local_45.f_77));
				}
				if (iLocal_195 && unk_0x97EF4023B86C354F())
				{
					func_541(&(Local_45.f_77));
					iLocal_195 = 0;
				}
				if ((((!Local_2067.f_B2B && !iLocal_192) && !bLocal_191) && (iLocal_194 || !unk_0x97EF4023B86C354F())) && (unk_0x093484B35A948BFC(2, 211) || unk_0xCB3E71B7B7FACCAF(2, 211)))
				{
					Local_2067.f_B2B = 1;
					unk_0xECA8E2750E0CB3B4(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_428(&uLocal_1242);
					Local_2067.f_B2C = func_540(&uLocal_1242);
					func_538(Local_2067.f_B2C);
					SYSTEM::SETTIMERA(0);
				}
				if (func_369(&uLocal_2068, &(Local_2067.f_1)))
				{
					iLocal_1682 = 0;
					if (Local_45.f_A != -1)
					{
						func_361();
						func_542();
						if (unk_0x4DBCE270B354E123(Local_45.f_1, vLocal_1972, 5f, 5f, 5f, false, true, 0))
						{
							if (!unk_0x1D403DFADBC2DE3C(Local_45.f_1, 0))
							{
								func_360(&iLocal_2070);
								Local_1982.f_6 = 8;
							}
						}
						else if (!unk_0x1D403DFADBC2DE3C(Local_45.f_1, 0))
						{
							Local_1982.f_6 = 8;
						}
					}
					else
					{
						Local_1982.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0xDE7B9CB38D019BF0();
			if (unk_0xE59B7F5A03335350(Local_45.f_1, 0))
			{
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				Local_1982.f_6 = 18;
			}
			else
			{
				if (unk_0x724D816EA203A79E(Local_2067.f_166[0 /*189*/].f_9))
				{
					unk_0x346478B12F69D4E3(Local_2067.f_166[0 /*189*/].f_9, false);
				}
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vLocal_1972, 1, false, 0, 1);
				unk_0x784C605D172817C8(unk_0xBC25C936A095B5BA(), vLocal_1973, 2, 1);
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xF0A40F19AAB79E88(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1084227584);
				}
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				if (unk_0x724D816EA203A79E(Local_2067.f_166[0 /*189*/].f_9))
				{
					if (!unk_0x719413B40BB63D86())
					{
						unk_0x5C4048C4641BDB16(vLocal_1972, unk_0xF90427F311003E57(unk_0xBC25C936A095B5BA()), 500f, 0);
					}
					if (unk_0xF220370B0C08EC20())
					{
						unk_0x13D5880CBA449AA9();
						Local_1982.f_6 = 18;
					}
				}
				else
				{
					Local_1982.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0xE9B1C9E275C24095();
			if (Local_45.f_A == 0)
			{
				unk_0xD87F0F9CDF39238A(Local_45.f_1);
				if (func_359(iLocal_1959, 16))
				{
					func_357(&iLocal_1959, 16);
				}
				unk_0x2D655AA68FA1736B(Local_45.f_1, true, true, 0);
				unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_45.f_1, -1);
				unk_0x3F91283C7E2D2183(Local_45.f_1);
				func_356();
				iLocal_1738 = unk_0x585DE1CBEEB2D27D(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				unk_0x348665177DBFB93B(Local_2067.f_B2A, false);
				Local_1982.f_6 = 9;
			}
			else if (func_355(1000))
			{
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				unk_0xF3F01A78937DC905(0f);
				unk_0x3F91283C7E2D2183(Local_45.f_1);
				unk_0xD87F0F9CDF39238A(Local_45.f_1);
				if (unk_0x17FAADF9916EF741())
				{
					func_356();
					Local_1982.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0xEDEA6C8F42EE05F6(iLocal_1738) && unk_0x16BE1286447174A9(iLocal_1738)) || (unk_0xEDEA6C8F42EE05F6(Local_2067.f_B2A) && unk_0x16BE1286447174A9(Local_2067.f_B2A))))
			{
				unk_0x9CB4DD3D88846081(1, 0, 3, 0);
				func_356();
				Local_1982.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2067.f_19 = 0;
			Local_1982.f_6 = 11;
			break;
		
		case 11:
			if (!func_341(&Local_2067))
			{
				func_573(1);
				if (Local_2067.f_2)
				{
					unk_0x5C4048C4641BDB16(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0xF90427F311003E57(unk_0xBC25C936A095B5BA()), 500f, 0);
				}
				if (Local_45.f_A == 0)
				{
					func_340("SPR_TAXI_GATE", 10000, 1);
					if (!func_359(iLocal_1959, 16))
					{
						func_332(&Local_2067, 0, 1);
						func_331(&iLocal_1959, 16);
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0x346478B12F69D4E3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false);
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					}
					unk_0x59B038076F830627(true);
					unk_0x43F06392C4EF25E0(true);
					Local_1982.f_6 = 13;
				}
				else
				{
					Local_1982.f_6 = 13;
				}
				Local_2067.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0x719413B40BB63D86() || unk_0xF220370B0C08EC20())
			{
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				unk_0xCF9DB88DE4E2D5C7(0);
				unk_0x4AED68BFACFB14CB(true);
				unk_0x346478B12F69D4E3(Local_2067.f_166[0 /*189*/].f_9, false);
				func_356();
				if (func_359(iLocal_1959, 16))
				{
					func_357(&iLocal_1959, 16);
				}
				if (Local_45.f_A == 0)
				{
					if (func_575(500))
					{
						Local_2067.f_1A = 0;
						Local_1982.f_6 = 14;
					}
				}
				else
				{
					func_330(&Local_2067);
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					if (func_575(500))
					{
						Local_2067.f_1A = 0;
						Local_1982.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_1982 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2067))
			{
				return 1;
			}
			iLocal_1682 = 3;
			func_23();
			func_13();
			if (!Local_2067)
			{
				func_10(&(Local_2067.f_6));
				func_9(&(Local_2067.f_166[0 /*189*/]), Local_45.f_3, Local_45.f_6, 0f);
				if (unk_0x724D816EA203A79E(Local_2067.f_166[0 /*189*/].f_9))
				{
					unk_0xF0A40F19AAB79E88(Local_2067.f_166[0 /*189*/].f_9, 1084227584);
				}
				if (unk_0x5C4048C4641BDB16(vLocal_43, func_8(vLocal_44), 4500f, 0))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					while (!unk_0xF220370B0C08EC20() && func_5(&(Local_2067.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					unk_0x13D5880CBA449AA9();
					unk_0x220E291081F3885D(vLocal_43, func_8(vLocal_44));
					func_4(&(Local_2067.f_6));
					Local_1982.f_6 = 15;
				}
				else if (func_2(&(Local_2067.f_6), 20f))
				{
					func_4(&(Local_2067.f_6));
					Local_1982.f_6 = 15;
				}
			}
			else
			{
				Local_1982.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
			}
			Local_2067.f_B2B = 0;
			Local_1982.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
			}
			func_429(&Local_2067, 1);
			if (unk_0x17FAADF9916EF741())
			{
				func_575(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(int iParam0, float fParam1)//Position - 0xCE2
{
	if (func_3(iParam0))
	{
		if (func_5(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(int iParam0)//Position - 0xD04
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

void func_4(var uParam0)//Position - 0xD14
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(int iParam0)//Position - 0xD2A
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_6(bool bParam0)//Position - 0xD69
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

bool func_7(int iParam0)//Position - 0xDC1
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

Vector3 func_8(vector3 vParam0)//Position - 0xDD1
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

void func_9(var uParam0, vector3 vParam1, float fParam2, float fParam3)//Position - 0xDFE
{
	unk_0x641B19E156645A92(uParam0->f_9, vParam1, 1, false, 0, 1);
	unk_0x019CE76D5286C95C(uParam0->f_9, fParam2);
	unk_0xA4DFFFD5B234240D(uParam0->f_9, fParam3);
}

void func_10(int iParam0)//Position - 0xE2A
{
	if (!func_3(iParam0))
	{
		func_360(iParam0);
	}
	else
	{
		func_11(iParam0);
	}
}

void func_11(int iParam0)//Position - 0xE4B
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)//Position - 0xE5A
{
	iParam0->f_1 = (func_6(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_13()//Position - 0xE88
{
	if (Global_19B04.f_4A46.f_C[4 /*8*/].f_4 == 1)
	{
		if (Global_19B04.f_4A46.f_6[4] > 0f)
		{
			if (Global_19B04.f_4A46.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0xED9
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_19B04.f_27B5[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 11 || Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19B04.f_27B5[iParam0 /*12*/].f_5 = 1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = iParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_15();
	}
}

void func_15()//Position - 0xFC1
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_199FC = 0;
	Global_199FD = 0;
	Global_199FE = 0;
	Global_199FF = 0;
	Global_19A00 = 0;
	Global_19A01 = 0;
	Global_19A02 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19B04.f_27B5.f_F0D;
	Global_19B04.f_27B5.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19B04.f_27B5[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19B04.f_27B5[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_199FC++;
					fVar1 = (fVar1 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_199FD++;
					fVar2 = (fVar2 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_199FE++;
					fVar3 = (fVar3 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_199FF++;
					fVar4 = (fVar4 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19A00++;
					fVar5 = (fVar5 + (Global_19B04.f_27B5[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19A01++;
					fVar6 = (fVar6 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19A02++;
					fVar7 = (fVar7 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_199EB > 0)
	{
		if (Global_199FC == Global_199EB)
		{
			fVar1 = 55f;
		}
	}
	if (Global_199EC > 0)
	{
		if (Global_199FD == Global_199EC)
		{
			fVar2 = 10f;
		}
	}
	if (Global_199ED > 0)
	{
		if (Global_199FE == Global_199ED)
		{
			fVar3 = 0f;
		}
	}
	if (Global_199EE > 0)
	{
		if (Global_199FF == Global_199EE)
		{
			fVar4 = 10f;
		}
	}
	if (Global_199EF > 0)
	{
		if (((Global_19A00 == Global_199EF || (Global_199EF * 10 / Global_19A00) < 41) || Global_19A00 > Global_199F2) || Global_19A00 == Global_199F2)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_27B5.f_F10, 14))
			{
				if (Global_19A00 == Global_199EF)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_199EF, 0);
					unk_0xF0059F27F7BB6680(&(Global_19B04.f_27B5.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_199F0 > 0)
	{
		if (Global_19A01 == Global_199F0)
		{
			fVar6 = 15f;
		}
	}
	if (Global_199F1 > 0)
	{
		if (Global_19A02 == Global_199F1)
		{
			fVar7 = 5f;
		}
	}
	Global_19B04.f_27B5.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19A00 > Global_199F2 || Global_19A00 == Global_199F2)
	{
		iVar9 = Global_199F2;
	}
	else
	{
		iVar9 = Global_19A00;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_199FC, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_199EB, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_199FD, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_199EC, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_199FE, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_199ED, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_199FF, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_199EE, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_199F2, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_19A02 + Global_19A01), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_199F1 + Global_199F0), 1);
	Global_19A03 = (Global_199FC * 100 / Global_199EB);
	Global_19A05 = ((Global_199FE + Global_199FD) * 100 / (Global_199ED + Global_199EC));
	Global_19A04 = ((Global_199FF + iVar9) * 100 / (Global_199EE + Global_199F2));
	Global_19A06 = ((Global_19A01 + Global_19A02) * 100 / (Global_199F0 + Global_199F1));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_19B04.f_27B5.f_F0D, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_19A03, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_19A04, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_19A05, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D))
	{
		func_19(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_18() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()//Position - 0x1482
{
	if (func_17(0))
	{
		return 0;
	}
	if (Global_16B42.f_8)
	{
		if (Global_16B42.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16B42.f_A > 1)
	{
		return 0;
	}
	Global_16B42.f_A++;
	return 1;
}

bool func_17(bool bParam0)//Position - 0x14CD
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_18()//Position - 0x14F8
{
	return Global_62BD;
}

int func_19(int iParam0, int iParam1)//Position - 0x1503
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1554
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
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()//Position - 0x1A68
{
	return Global_1407E0;
}

float func_22(int iParam0)//Position - 0x1A74
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()//Position - 0x1AD9
{
	iLocal_1974 = 0;
	iLocal_1975 = 0;
	iLocal_1976 = 0;
	iLocal_1977 = 0;
	iLocal_1978 = 0;
	iLocal_1979 = 0;
	iLocal_1980 = 0;
	iLocal_1981 = 0;
}

int func_24(var uParam0)//Position - 0x1B01
{
	switch (uParam0->f_1A)
	{
		case 0:
			func_357(&iLocal_1959, 4);
			unk_0x4E0EC60D119222B1(2);
			func_329(uParam0);
			uParam0->f_11 = func_328();
			if (Local_45.f_A == 0)
			{
				if (!func_359(iLocal_1959, 16))
				{
					func_332(uParam0, 0, 1);
					func_332(uParam0, 1, 0);
					func_331(&iLocal_1959, 16);
				}
			}
			else
			{
				func_330(uParam0);
				if (!func_359(iLocal_1959, 16))
				{
					func_332(uParam0, 0, 1);
					func_332(uParam0, 1, 0);
					func_331(&iLocal_1959, 16);
				}
			}
			func_4(&(uParam0->f_E));
			iLocal_1967 = 0;
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
			uParam0->f_1A = 1;
			break;
		
		case 1:
			unk_0x4E0EC60D119222B1(2);
			if (Local_45.f_A == 0)
			{
				if (func_359(iLocal_1959, 16))
				{
					func_357(&iLocal_1959, 16);
				}
				func_326(uParam0);
				uParam0->f_1A = 7;
			}
			else
			{
				func_330(uParam0);
				if (!func_301(&(uParam0->f_E)))
				{
					if (!unk_0x4DAE8F727552BD64())
					{
						unk_0x062C9995BFD27B2A(false, true, 3000, 1, 0, 0);
					}
					if (func_359(iLocal_1959, 16))
					{
						func_357(&iLocal_1959, 16);
					}
					unk_0x59B038076F830627(true);
					func_326(uParam0);
					if (Local_45.f_A == 0 && (Global_19B04.f_4A46.f_6[0] > Local_45.f_70[0] || Global_19B04.f_4A46.f_6[0] == 0f))
					{
						func_300("SPR_HELP_GATE", 10000);
					}
					uParam0->f_1A = 7;
				}
			}
			break;
		
		case 2:
			if (!func_359(iLocal_1959, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_261(uParam0);
				func_260(&(Local_45.f_77), 0, 0, 1, 1);
				func_259(&(Local_45.f_77), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_258(&(Local_45.f_77), 1);
				func_331(&iLocal_1959, 1);
			}
			if (unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
			if (func_257("SPR_RETR_FAIL", 0, 0))
			{
				unk_0xEB233A3B7635D2AC();
			}
			if (unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
			if (func_257("SPR_RETR_FAIL", 0, 0))
			{
				unk_0xEB233A3B7635D2AC();
			}
			SYSTEM::SETTIMERA(0);
			func_255();
			func_254(0);
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			unk_0xE2BA4D3ADF5C0E62(unk_0xB5CEFD608600A09F(), 0);
			unk_0xBBC4195AD74D153D(0, 75, 1);
			func_253(1);
			uParam0->f_1A = 4;
			break;
		
		case 4:
			unk_0xBBC4195AD74D153D(0, 75, 1);
			func_251();
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
			{
				if (!unk_0xD1DC4B08247A4317(uParam0->f_166[0 /*189*/].f_9) && unk_0xEF0E25DA0CB6E8FF(iLocal_1739))
				{
					unk_0x0311C47C0F630BCF(iLocal_1739, 2);
					unk_0xDC078F87049ECECE(uParam0->f_166[0 /*189*/].f_9, false, 0);
					unk_0x346478B12F69D4E3(uParam0->f_166[0 /*189*/].f_9, true);
					func_250();
				}
			}
			if (!func_236(uParam0, bLocal_2062, bLocal_2063))
			{
				func_250();
				func_235(0);
				unk_0x7456702622C62EA0(1);
				if (func_359(iLocal_1959, 1))
				{
					func_357(&iLocal_1959, 1);
				}
				func_234(0, 0);
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				}
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0xF3F01A78937DC905(0f);
				unk_0x1E08809A5041F85B(false);
				iLocal_2066 = unk_0x2F079D1FC5F6CB99();
				unk_0xC4BA30B532FE260F(iLocal_2066, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				func_4(&iLocal_1949);
				uParam0->f_1A = 5;
			}
			break;
		
		case 5:
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
			{
				unk_0x641B19E156645A92(uParam0->f_166[0 /*189*/].f_9, vLocal_1972, 1, false, 0, 1);
				unk_0x784C605D172817C8(uParam0->f_166[0 /*189*/].f_9, vLocal_1973, 2, 1);
				unk_0xDC078F87049ECECE(uParam0->f_166[0 /*189*/].f_9, true, 0);
				unk_0xBBC4195AD74D153D(0, 75, 1);
				unk_0xF0A40F19AAB79E88(uParam0->f_166[0 /*189*/].f_9, 1084227584);
				unk_0x1E5C2A1EAB944289(uParam0->f_166[0 /*189*/].f_9, false);
			}
			iLocal_2061 = 0;
			uParam0->f_1A = 6;
			uParam0->f_166[0 /*189*/].f_17 = 7;
			break;
		
		case 6:
			uParam0->f_1A = 8;
			break;
		
		case 7:
			unk_0x65E432C782E7E702(iLocal_1962, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_359(iLocal_1959, 16))
			{
				func_332(uParam0, 0, 1);
				func_332(uParam0, 1, 0);
				func_331(&iLocal_1959, 16);
				func_254(1);
				func_233(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_199(uParam0);
				func_197(uParam0);
			}
			else
			{
				func_194(&uLocal_1934, 0);
				func_250();
				unk_0x4AED68BFACFB14CB(false);
			}
			if (!func_41(uParam0, Local_45))
			{
				unk_0x3857DADBD6EC8A54("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_E));
				uParam0->f_1A = 2;
				func_4(&(uParam0->f_16));
			}
			break;
		
		case 8:
			unk_0xBBC4195AD74D153D(0, 75, 1);
			func_27(&(uParam0->f_11));
			func_250();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()//Position - 0x1FB2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_359(uLocal_1748, iVar0))
		{
			func_357(&uLocal_1748, iVar0);
		}
		if (func_359(uLocal_1749, iVar0))
		{
			func_357(&uLocal_1749, iVar0);
		}
		if (unk_0x724D816EA203A79E(iLocal_1746[iVar0]))
		{
			unk_0xCF6040807CC0E4A5(&(iLocal_1746[iVar0]));
		}
		if (unk_0x724D816EA203A79E(iLocal_1747[iVar0]))
		{
			unk_0xF845620A03C7425B(&(iLocal_1747[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_1745);
	iVar0 = 0;
	while (iVar0 < iLocal_1745)
	{
		iLocal_1745[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)//Position - 0x204B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x2CA123B0622F495C((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int iParam0)//Position - 0x207B
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0xB0B0FE33F4F22679(iParam0);
		*iParam0 = 0;
	}
}

void func_28(var uParam0)//Position - 0x2097
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	unk_0x1E5C2A1EAB944289(uParam0->f_166[0 /*189*/].f_9, true);
	unk_0xBBC4195AD74D153D(0, 75, 1);
	func_39(uParam0);
	if (Local_45 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_30(&(uParam0->f_166[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_166[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)//Position - 0x2117
{
}

void func_30(var uParam0)//Position - 0x211F
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
	{
		if (Local_45 != 0)
		{
			func_31();
		}
	}
}

void func_31()//Position - 0x213E
{
}

void func_32(var uParam0)//Position - 0x2146
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar0 /*189*/].f_8, 0))
		{
			if (uParam0->f_166[iVar0 /*189*/].f_8 == unk_0xBC25C936A095B5BA())
			{
				iVar1 = func_37(Local_45.f_A);
				if (iVar1 <= 0 || iVar1 > uParam0->f_166[iVar0 /*189*/].f_C)
				{
					func_36(Local_45.f_A, uParam0->f_166[iVar0 /*189*/].f_C);
				}
				fVar2 = func_35(Local_45.f_A);
				func_34(Local_45.f_A, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_166[0 /*189*/].f_D)));
				if (fVar2 == 0f || fVar2 > uParam0->f_166[0 /*189*/].f_D)
				{
					func_33(Local_45.f_A, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_166[0 /*189*/].f_D)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)//Position - 0x221C
{
	Global_19B04.f_4A46.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)//Position - 0x2233
{
	Local_45.f_12[iParam0] = fParam1;
}

var func_35(int iParam0)//Position - 0x2245
{
	var uVar0;
	
	uVar0 = Global_19B04.f_4A46.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)//Position - 0x225E
{
	Global_19B04.f_4A46[iParam0] = uParam1;
}

int func_37(int iParam0)//Position - 0x2273
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_19B04.f_4A46[iParam0];
	return iVar0;
}

void func_38(var uParam0)//Position - 0x228D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_D)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_166[iVar0 /*189*/].f_D > uParam0->f_166[iVar1 /*189*/].f_D)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_166[iVar0 /*189*/].f_C = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x22F6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (uParam0->f_166[iVar0 /*189*/].f_B != uParam0->f_C)
		{
			uParam0->f_166[iVar0 /*189*/].f_D = (uParam0->f_166[0 /*189*/].f_D + (IntToFloat((uParam0->f_C - uParam0->f_166[iVar0 /*189*/].f_B)) * unk_0x55AEFCD285ECC0F2(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(int iParam0)//Position - 0x235B
{
	if (func_3(iParam0))
	{
		if (!func_7(iParam0))
		{
			iParam0->f_2 = (func_6(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
			unk_0xF0059F27F7BB6680(iParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)//Position - 0x2395
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	
	if (Local_45.f_A == 0)
	{
		if (uParam0->f_166[0 /*189*/].f_B == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_359(iLocal_1960, 131072))
			{
				unk_0xA2944E19D58108C8(uParam0->f_166[0 /*189*/].f_9, 4);
				func_357(&iLocal_1960, 131072);
			}
		}
		else if (uParam0->f_166[0 /*189*/].f_B == 1 && !func_359(iLocal_1960, 131072))
		{
			func_300("SPR_INFO_BON", 10000);
			func_331(&iLocal_1960, 131072);
			if (func_359(iLocal_1960, 262144))
			{
				func_357(&iLocal_1960, 262144);
			}
		}
		else if (uParam0->f_166[0 /*189*/].f_B == 4 && !func_359(iLocal_1960, 262144))
		{
			func_300("SPR_INFO_RESET", 10000);
			func_331(&iLocal_1960, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_176(uParam0->f_166[0 /*189*/].f_B, uParam0->f_1);
	unk_0xBBC4195AD74D153D(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_D)
	{
		if (uParam0->f_166[iVar1 /*189*/].f_B < uParam0->f_C)
		{
			bVar5 = false;
			if (uParam0->f_166[iVar1 /*189*/].f_8 == unk_0xBC25C936A095B5BA())
			{
				bVar5 = true;
			}
			iVar4 = uParam0->f_166[iVar1 /*189*/].f_B;
			if (uParam0->f_166[iVar1 /*189*/].f_B >= uParam0->f_C)
			{
				Var2 = { uParam0->f_1B[(uParam0->f_C - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_1B[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_C - 1))
			{
				Var3 = { uParam0->f_1B[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_C)
			{
				uParam0->f_166[iVar1 /*189*/].f_D = (fVar0 - uParam0->f_166[iVar1 /*189*/].f_F);
				if (uParam0->f_166[iVar1 /*189*/].f_D < 0f)
				{
					uParam0->f_166[iVar1 /*189*/].f_D = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_166[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_45.f_A != 0 || uParam0->f_166[0 /*189*/].f_B > 0))
				{
					if (!func_3(&iLocal_2054))
					{
						func_360(&iLocal_2054);
					}
					if (func_5(&iLocal_2057) >= 6.5f)
					{
						if (!unk_0x8FCEEB789599BD9B(2, 222))
						{
							func_11(&iLocal_2054);
						}
						else if (func_5(&iLocal_2054) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_357(&iLocal_1960, 32768);
							uParam0->f_166[0 /*189*/].f_17 = 6;
						}
					}
					else if (unk_0x8FCEEB789599BD9B(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1960, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1960, 32768, 0);
						}
					}
				}
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_166[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_45 == 0 && func_3(&iLocal_1955))
					{
						return 1;
					}
					if (bVar5)
					{
						if (uParam0->f_166[iVar1 /*189*/].f_E != 0f)
						{
							func_360(&(uParam0->f_E));
						}
						if (func_359(iLocal_1959, 8))
						{
							func_332(uParam0, iVar4, 1);
							if (iVar4 < (uParam0->f_C - 1))
							{
								func_332(uParam0, iVar4 + 1, 0);
							}
							func_357(&iLocal_1959, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_B = func_93(uParam0, &Var2, &Var3, uParam0->f_166[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_B != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_166[iVar1 /*189*/]), bVar5, uParam0->f_B);
						}
						bLocal_1948 = func_84(uParam0->f_B);
						uParam0->f_166[iVar1 /*189*/].f_B++;
						iVar4 = uParam0->f_166[iVar1 /*189*/].f_B;
						if (iVar4 >= (uParam0->f_C - 1))
						{
							Var2 = { uParam0->f_1B[(uParam0->f_C - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_1B[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 1));
							if (iVar4 == uParam0->f_C)
							{
								iVar6 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_166[0 /*189*/].f_D > 0f)
									{
										if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
										{
											iVar6 = 1;
										}
										else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]))
										{
											iVar6 = 2;
										}
										else if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
										{
											iVar6 = 3;
										}
									}
								}
								if (iVar6 == 0)
								{
								}
								if (iVar6 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_166[iVar1 /*189*/].f_B = (uParam0->f_166[iVar1 /*189*/].f_B - 1);
									unk_0xEB233A3B7635D2AC();
									sLocal_1947 = "SPR_TIME_FAIL";
									uParam0->f_166[0 /*189*/].f_17 = 0;
								}
							}
							else
							{
								func_332(uParam0, iVar4, 1);
								if (iVar4 < (uParam0->f_C - 1))
								{
									func_332(uParam0, iVar4 + 1, 0);
								}
							}
							if (uParam0->f_166[iVar1 /*189*/].f_E == 0f)
							{
								if (func_3(&(uParam0->f_E)))
								{
									func_4(&(uParam0->f_E));
								}
							}
							if (uParam0->f_C > 0)
							{
								if (uParam0->f_A > 0f)
								{
									if (iVar4 == SYSTEM::ROUND((IntToFloat(uParam0->f_C) / 2f)))
									{
										uParam0->f_166[iVar1 /*189*/].f_E = 0f;
										func_11(&(uParam0->f_E));
									}
								}
							}
						}
						else if (uParam0->f_166[iVar1 /*189*/].f_B >= uParam0->f_C)
						{
							if (Local_45 != 2)
							{
								if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar1 /*189*/].f_8, 0))
								{
									func_29(&(uParam0->f_166[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_45 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_45.f_A + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2065)
									{
										if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar1 /*189*/].f_8, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar1 /*189*/].f_9, 0))
										{
											if (unk_0xF4FCC3C1048FF2AB(uParam0->f_166[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0xEB469C5B92ADC7B0(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, &cVar7, 262144, 0, 8, -1, unk_0x2D175DF90F6F05C3(uParam0->f_166[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_45 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar5)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2064);
		func_64(uParam0, &iLocal_2064);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_166[0 /*189*/].f_17 != 0)
		{
			if (Local_45.f_A == 0)
			{
				if (uParam0->f_166[0 /*189*/].f_B > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)//Position - 0x2B25
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x7382A6B79BD5F585())
	{
		unk_0x43F06392C4EF25E0(true);
	}
	if (!func_3(&iLocal_1755))
	{
		iLocal_1753 = 0;
		iLocal_1754 = 0;
		func_360(&iLocal_1755);
	}
	if (SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f)) != iLocal_1754)
	{
		iLocal_1753 = (SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f)) - iLocal_1754);
		iLocal_1754 = SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f));
		func_11(&iLocal_1755);
	}
	iVar0 = (SYSTEM::FLOOR((func_5(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_166[0 /*189*/].f_F * 1000f)));
	iVar1 = 0;
	if (func_5(&iLocal_1755) <= 2f)
	{
		if (uParam0->f_166[0 /*189*/].f_B > 0)
		{
			iVar1 = -iLocal_1753;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_19B04.f_4A46.f_6[Local_45.f_A] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_45.f_6A[Local_45.f_A] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_45.f_6A[Local_45.f_A] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_45.f_70[Local_45.f_A] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_45.f_70[Local_45.f_A] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)//Position - 0x2D52
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar7;
	
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	func_44(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2F00
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_45(7, iVar0);
		Global_14D262.f_1124[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_1124.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_1124.f_AC[iVar0] = iParam2;
		Global_14D262.f_1124.f_D8[iVar0] = iParam3;
		Global_14D262.f_1124.f_B7[iVar0] = uParam4;
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

void func_45(int iParam0, int iParam1)//Position - 0x304E
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)//Position - 0x3067
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3080
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_45(5, iVar0);
		Global_14D262.f_D80[iVar0] = iParam0;
		Global_14D262.f_D80.f_AC[iVar0] = uParam1;
		StringCopy(&(Global_14D262.f_D80.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_14D262.f_D80.f_C2[iVar0] = uParam3;
		Global_14D262.f_D80.f_B7[iVar0] = uParam4;
		Global_14D262.f_D80.f_D8[iVar0] = iParam5;
		Global_14D262.f_D80.f_E3[iVar0] = iParam6;
		Global_14D262.f_D80.f_10E[iVar0] = iParam7;
		Global_14D262.f_D80.f_119[iVar0] = iParam8;
		Global_14D262.f_D80.f_124[iVar0] = iParam9;
		Global_14D262.f_D80.f_12F[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3170
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_45(3, iVar0);
		Global_14D262.f_A3F[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_A3F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_A3F.f_B7[iVar0] = uParam3;
		Global_14D262.f_A3F.f_AC[iVar0] = uParam2;
		Global_14D262.f_A3F.f_CD[iVar0] = iParam4;
		Global_14D262.f_A3F.f_D8[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_A3F.f_103[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_A3F.f_1A4[iVar0] = iParam7;
		Global_14D262.f_A3F.f_1C5[iVar0] = iParam8;
		Global_14D262.f_A3F.f_1AF[iVar0] = iParam9;
		Global_14D262.f_A3F.f_1BA[iVar0] = iParam10;
		Global_14D262.f_A3F.f_1D0[iVar0] = iParam11;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)//Position - 0x3282
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_45(0, iVar0);
		Global_14D262.f_445[iVar0] = iParam0;
		Global_14D262.f_445.f_B[iVar0] = uParam1;
		StringCopy(&(Global_14D262.f_445.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_14D262.f_445.f_C2[iVar0] = uParam3;
		Global_14D262.f_445.f_B7[iVar0] = uParam4;
		Global_14D262.f_445.f_D8[iVar0] = iParam5;
		Global_14D262.f_445.f_E3[iVar0 /*3*/] = fParam6;
		Global_14D262.f_445.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_14D262.f_445.f_102[iVar0] = iParam8;
		Global_14D262.f_445.f_10D[iVar0] = iParam9;
		Global_14D262.f_445.f_138[iVar0] = iParam10;
		Global_14D262.f_445.f_143[iVar0] = iParam11;
		Global_14D262.f_445.f_14E[iVar0] = iParam12;
		Global_14D262.f_445.f_159[iVar0] = iParam13;
		Global_14D262.f_440 = 1;
		Global_14D262.f_445.f_164[iVar0] = iParam14;
		Global_14D262.f_445.f_16F[iVar0] = iParam15;
		Global_14D262.f_445.f_17A[iVar0] = iParam16;
		Global_14D262.f_445.f_185[iVar0] = iParam17;
		Global_14D262.f_445.f_190[iVar0] = iParam18;
		Global_14D262.f_445.f_19B[iVar0] = iParam19;
		Global_14D262.f_445.f_1A6[iVar0] = iParam20;
		Global_14D262.f_445.f_1B1[iVar0] = iParam21;
		Global_14D262.f_445.f_1BC[iVar0] = iParam22;
		Global_14D262.f_445.f_1C7[iVar0] = iParam23;
	}
}

int func_50(char* sParam0)//Position - 0x344B
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

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x3485
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
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_45(6, iVar0);
		Global_14D262.f_EBA[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_EBA.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_EBA.f_B7[iVar0] = uParam3;
		Global_14D262.f_EBA.f_AC[iVar0] = uParam2;
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
		if (iParam15 == 5 && func_53())
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
			if (func_52())
			{
				Global_14D262.f_444 = 1;
			}
		}
	}
}

int func_52()//Position - 0x36E7
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

int func_53()//Position - 0x370B
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x3749
{
	return iLocal_1752;
}

void func_55()//Position - 0x3754
{
	Global_14D262.f_440 = 1;
}

void func_56(var uParam0)//Position - 0x3764
{
	if (uParam0->f_D == -1)
	{
	}
}

void func_57()//Position - 0x3774
{
	if (Local_45 == 0)
	{
		unk_0xF6A0278DBC4BF32C(0, 0, -1);
		unk_0xF6A0278DBC4BF32C(1, 0, -1);
		unk_0xF6A0278DBC4BF32C(2, 0, -1);
		unk_0xF6A0278DBC4BF32C(3, 0, -1);
	}
}

void func_58(var uParam0)//Position - 0x37A2
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0x8910237449BB6F79(uParam0->f_166[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&iLocal_1952))
			{
				func_10(&iLocal_1952);
			}
			else if (func_5(&iLocal_1952) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_1960, 8192);
				if (uParam0->f_166[0 /*189*/].f_B <= (uParam0->f_C - 1))
				{
					if (unk_0x2DA8CA50A72528FB(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5))
					{
						unk_0x2E9308F22ABD4DF5(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_166[0 /*189*/].f_B + 1 <= (uParam0->f_C - 2))
				{
					if (unk_0x2DA8CA50A72528FB(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5))
					{
						unk_0x2E9308F22ABD4DF5(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&iLocal_1952);
				func_11(&iLocal_1949);
				uParam0->f_1 = 0;
				unk_0xEB233A3B7635D2AC();
				sLocal_1947 = "SPR_RETR_IDLE";
				uParam0->f_166[0 /*189*/].f_17 = 0;
			}
			else if (func_5(&iLocal_1952) > 30f)
			{
				if (!func_359(iLocal_1959, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1959, 32, 0);
				}
			}
		}
		else if (func_3(&iLocal_1952))
		{
			func_357(&iLocal_1959, 32);
			func_11(&iLocal_1952);
		}
	}
	else if (func_3(&iLocal_1952))
	{
		func_357(&iLocal_1959, 32);
		func_11(&iLocal_1952);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3922
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)//Position - 0x394B
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)//Position - 0x395C
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)//Position - 0x3975
{
	return (uParam0 && uParam1) != 0;
}

void func_63()//Position - 0x3984
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	}
}

void func_64(var uParam0, int iParam1)//Position - 0x39A0
{
	if (uParam0->f_1)
	{
		if ((!unk_0xE59B7F5A03335350(uParam0->f_166[0 /*189*/].f_9, 0) || unk_0x8D66276473ABD7CC(uParam0->f_166[0 /*189*/].f_9) < 5) || unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			func_11(&iLocal_1949);
			if (unk_0x2DA8CA50A72528FB(*iParam1))
			{
				unk_0x07B8ECB35A4ED3AC(iParam1);
			}
			if (uParam0->f_166[0 /*189*/].f_B <= (uParam0->f_C - 1))
			{
				if (unk_0x2DA8CA50A72528FB(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5))
				{
					unk_0x2E9308F22ABD4DF5(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_166[0 /*189*/].f_B + 1 <= (uParam0->f_C - 2))
			{
				if (unk_0x2DA8CA50A72528FB(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5))
				{
					unk_0x2E9308F22ABD4DF5(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0xEB233A3B7635D2AC();
			sLocal_1947 = "SPR_RETR_DES";
			uParam0->f_166[0 /*189*/].f_17 = 0;
		}
		return;
	}
}

void func_65(var uParam0, int iParam1)//Position - 0x3AA7
{
	if (Local_45 == 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
		{
			if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
			{
				unk_0xEB233A3B7635D2AC();
				unk_0x1E08809A5041F85B(false);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				if (unk_0x2DA8CA50A72528FB(*iParam1))
				{
					unk_0x07B8ECB35A4ED3AC(iParam1);
					if (uParam0->f_166[0 /*189*/].f_B <= (uParam0->f_C - 1))
					{
						if (unk_0x2DA8CA50A72528FB(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5))
						{
							unk_0x2E9308F22ABD4DF5(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_166[0 /*189*/].f_B + 1 <= (uParam0->f_C - 2))
					{
						if (unk_0x2DA8CA50A72528FB(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5))
						{
							unk_0x2E9308F22ABD4DF5(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0xEB233A3B7635D2AC();
				sLocal_1947 = "SPR_RETR_DES";
				func_66(&(Local_45.f_141), 1);
				uParam0->f_166[0 /*189*/].f_17 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x3BA9
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x284F2ACE6839D3C0("OFFMISSION_WASTED", false, -1);
}

void func_67(var uParam0)//Position - 0x3BCB
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x3BE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8D66276473ABD7CC(uParam0->f_166[0 /*189*/].f_9);
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
	{
		iVar1 = SYSTEM::ROUND(unk_0x77F5C030D3238E26(uParam0->f_166[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_45 == 2)
		{
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), uParam0->f_166[0 /*189*/].f_9, 0))
				{
					bLocal_1958 = true;
				}
			}
			if (bLocal_1958)
			{
				if (uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_7 == 6 || uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/].f_7 == 10)
				{
					if (!unk_0x4B8E3E5901E59EB8())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1960, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0x4B8E3E5901E59EB8())
			{
				unk_0xEB233A3B7635D2AC();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1960, 2);
		}
	}
	if (Local_45 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0x4B8E3E5901E59EB8())
			{
				unk_0xEB233A3B7635D2AC();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1960, 2);
		}
	}
}

void func_69()//Position - 0x3D19
{
	Global_394A = 0;
	func_70();
}

void func_70()//Position - 0x3D29
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

int func_71()//Position - 0x3D80
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)//Position - 0x3DA2
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	
	vVar0 = { uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/] };
	if (uParam0->f_166[0 /*189*/].f_B > 0)
	{
		vVar1 = { uParam0->f_1B[(uParam0->f_166[0 /*189*/].f_B - 1) /*10*/] };
	}
	else
	{
		vVar1 = { 0f, 0f, 0f };
	}
	fVar2 = unk_0xF0F2FC9DE291567F(vVar0, vVar1, true);
	fVar3 = fVar2;
	if (uParam0->f_166[0 /*189*/].f_B == 0)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	vVar4 = { unk_0x541C2AEF053615BC(uParam0->f_166[0 /*189*/].f_8, true) };
	if (func_73(vVar1, 0f, 0f, 0f, 1056964608, 0))
	{
		vVar5 = { vVar0 };
	}
	else
	{
		vVar5 = { unk_0x6A1001313D072F7B(vVar4, vVar1, vVar0, 1) };
	}
	fVar6 = unk_0xF0F2FC9DE291567F(vVar5, vVar4, true);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_45 == 1)
	{
		if (unk_0x357058E632979E65((vVar5.z - vVar4.z)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		func_11(&iLocal_1949);
		uParam0->f_1 = 0;
		unk_0xEB233A3B7635D2AC();
		func_253(1);
		uParam0->f_166[0 /*189*/].f_17 = 0;
		func_260(&(Local_45.f_77), 0, 0, 1, 1);
		func_259(&(Local_45.f_77), "IB_RETRY", 2, 201, 1, 1, 0);
		func_259(&(Local_45.f_77), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0x3857DADBD6EC8A54("MGSP_FAIL");
		sLocal_1947 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			func_300("SPR_HELP_RESET", -1);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_1960, 4);
		}
	}
	else
	{
		unk_0xBB5629E7D44054AE("SPR_HELP_WARN");
		if (func_359(iLocal_1960, 4))
		{
			func_357(&iLocal_1960, 4);
		}
	}
}

int func_73(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x3F81
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

void func_74()//Position - 0x3FFC
{
	if (iLocal_1684 == 1)
	{
		if (func_3(&iLocal_1714))
		{
			if (func_5(&iLocal_1714) <= 2.5f)
			{
				iLocal_1750 = "GATEMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1684 = 0;
			}
		}
	}
	if (iLocal_1685 == 1)
	{
		if (func_3(&iLocal_1720))
		{
			if (func_5(&iLocal_1720) <= 2.5f)
			{
				iLocal_1750 = "GATEINNER";
				fLocal_1751 = 1f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1685 = 0;
			}
		}
	}
	if (iLocal_1686 == 1)
	{
		if (func_3(&iLocal_1717))
		{
			if (func_5(&iLocal_1717) <= 2.5f)
			{
				iLocal_1750 = "GATEOUTTER";
				fLocal_1751 = 0f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1686 = 0;
			}
		}
	}
	if (iLocal_1687 == 1)
	{
		if (func_3(&iLocal_1729))
		{
			if (func_5(&iLocal_1729) <= 2.5f)
			{
				iLocal_1750 = "GATEKNIFEINNER";
				fLocal_1751 = 2.5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1687 = 0;
			}
		}
	}
	if (iLocal_1688 == 1)
	{
		if (func_3(&iLocal_1732))
		{
			if (func_5(&iLocal_1732) <= 2.5f)
			{
				iLocal_1750 = "GATEINVERTEDIN";
				fLocal_1751 = 3f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1688 = 0;
			}
		}
	}
	if (iLocal_1689 == 1)
	{
		if (func_3(&iLocal_1723))
		{
			if (func_5(&iLocal_1723) <= 2.5f)
			{
				iLocal_1750 = "GATEKNIFEOUTTER";
				fLocal_1751 = 1.5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1689 = 0;
			}
		}
	}
	if (iLocal_1690 == 1)
	{
		if (func_3(&iLocal_1726))
		{
			if (func_5(&iLocal_1726) <= 2.5f)
			{
				iLocal_1750 = "GATEINVERTEDOUT";
				fLocal_1751 = 2f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1690 = 0;
			}
		}
	}
	if (iLocal_1691 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2.5f)
			{
				iLocal_1750 = "STUNTKNIFELEFT";
				fLocal_1751 = 4f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1691 = 0;
			}
		}
	}
	if (iLocal_1692 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2.5f)
			{
				iLocal_1750 = "STUNTKNIFELEFTHIT";
				fLocal_1751 = 1.5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1692 = 0;
			}
		}
	}
	if (iLocal_1693 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2.5f)
			{
				iLocal_1750 = "STUNTKNIFELEFTMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1693 = 0;
			}
		}
	}
	if (iLocal_1694 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2.5f)
			{
				iLocal_1750 = "STUNTKNIFERIGHT";
				fLocal_1751 = 4f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1694 = 0;
			}
		}
	}
	if (iLocal_1695 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2.5f)
			{
				iLocal_1750 = "STUNTKNIFERIGHTHIT";
				fLocal_1751 = 1.5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1695 = 0;
			}
		}
	}
	if (iLocal_1696 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2.5f)
			{
				iLocal_1750 = "STUNTKNIFERIGHTMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1696 = 0;
			}
		}
	}
	if (iLocal_1697 == 1)
	{
		if (func_3(&iLocal_1705))
		{
			if (func_5(&iLocal_1705) <= 2.5f)
			{
				iLocal_1750 = "STUNTINVERTED";
				fLocal_1751 = 4f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1697 = 0;
			}
		}
	}
	if (iLocal_1698 == 1)
	{
		if (func_3(&iLocal_1705))
		{
			if (func_5(&iLocal_1705) <= 2.5f)
			{
				iLocal_1750 = "STUNTINVERTEDHIT";
				fLocal_1751 = 1.5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1698 = 0;
			}
		}
	}
	if (iLocal_1699 == 1)
	{
		if (func_3(&iLocal_1705))
		{
			if (func_5(&iLocal_1705) <= 2.5f)
			{
				iLocal_1750 = "STUNTINVERTEDMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1699 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x444C
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_166)
	{
		return;
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iParam1 /*189*/].f_8, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iParam1 /*189*/].f_9, 0))
		{
			if (unk_0x62F3A07C43FFB568(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0x2D175DF90F6F05C3(uParam0->f_166[iParam1 /*189*/].f_9);
				if (uParam0->f_166[0 /*189*/].f_B == uParam0->f_166[iParam1 /*189*/].f_B)
				{
				}
				else if (uParam0->f_166[iParam1 /*189*/].f_B > uParam0->f_166[0 /*189*/].f_B)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (unk_0x25EF720B1CAB1E23(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9))
				{
					if (unk_0x1AAF0C23233C57AF(uParam0->f_166[iParam1 /*189*/].f_9, -1, 0))
					{
						unk_0xBD53A029D0155A42(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9, -1);
						unk_0xE36D78F8D1781255(uParam0->f_166[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam4, int iParam5)//Position - 0x4566
{
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (Local_45 == 1)
		{
			if (!unk_0x1D403DFADBC2DE3C(iParam2, 0))
			{
				unk_0x509F549022512095(iParam1, iParam2, vParam3, unk_0x2D175DF90F6F05C3(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_45 == 2)
		{
			uParam4 = uParam4;
			func_77(uParam0, vParam3, iParam5);
		}
	}
}

void func_77(var uParam0, vector3 vParam1, var uParam2)//Position - 0x45BD
{
	uParam0->f_C = uParam0->f_C;
	vParam1 = { vParam1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)//Position - 0x45D9
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_1B[iParam1 /*10*/]));
	func_81(&(uParam0->f_1B[iParam1 /*10*/].f_6), &(uParam0->f_B2D), &(uParam0->f_B2E), uParam0->f_1B[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_C)
	{
		func_82(&(uParam0->f_1B[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_1B[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)//Position - 0x464D
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)//Position - 0x465D
{
	if (*uParam0 != 0)
	{
		unk_0x2A6C7715B55EA005(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x4677
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_1948)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_578(func_579(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		unk_0xCB8C65281BC495B3(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		unk_0xF2BBD9C5DA174296(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(var uParam0)//Position - 0x46E5
{
	func_83(&(uParam0->f_5));
}

void func_83(int iParam0)//Position - 0x46F5
{
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

int func_84(int iParam0)//Position - 0x470D
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x4763
{
	if (bParam1)
	{
		if (Local_45 == 0)
		{
			if (func_3(&iLocal_1714))
			{
				func_89(&iLocal_1714, 3f);
			}
			if (func_3(&iLocal_1708))
			{
				func_89(&iLocal_1708, 3f);
			}
			if (func_3(&iLocal_1702))
			{
				func_89(&iLocal_1702, 3f);
			}
			if (func_3(&iLocal_1711))
			{
				func_89(&iLocal_1711, 3f);
			}
			if (func_3(&iLocal_1705))
			{
				func_89(&iLocal_1705, 3f);
			}
			if (func_3(&iLocal_1717))
			{
				func_89(&iLocal_1717, 3f);
			}
			if (func_3(&iLocal_1720))
			{
				func_89(&iLocal_1720, 3f);
			}
			if (func_3(&iLocal_1723))
			{
				func_89(&iLocal_1723, 3f);
			}
			if (func_3(&iLocal_1726))
			{
				func_89(&iLocal_1726, 3f);
			}
			if (func_3(&iLocal_1729))
			{
				func_89(&iLocal_1729, 3f);
			}
			if (func_3(&iLocal_1732))
			{
				func_89(&iLocal_1732, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1684 = 1;
					func_11(&iLocal_1714);
					break;
				
				case 1:
					iLocal_1685 = 1;
					func_11(&iLocal_1720);
					break;
				
				case 2:
					iLocal_1686 = 1;
					func_11(&iLocal_1717);
					break;
				
				case 3:
					iLocal_1687 = 1;
					func_11(&iLocal_1729);
					break;
				
				case 4:
					iLocal_1688 = 1;
					func_11(&iLocal_1732);
					break;
				
				case 5:
					iLocal_1689 = 1;
					func_11(&iLocal_1723);
					break;
				
				case 6:
					iLocal_1690 = 1;
					func_11(&iLocal_1726);
					break;
				
				case 8:
					iLocal_1691 = 1;
					func_11(&iLocal_1702);
					break;
				
				case 9:
					iLocal_1692 = 1;
					func_11(&iLocal_1711);
					break;
				
				case 10:
					iLocal_1693 = 1;
					func_11(&iLocal_1714);
					break;
				
				case 11:
					iLocal_1694 = 1;
					func_11(&iLocal_1702);
					break;
				
				case 12:
					iLocal_1695 = 1;
					func_11(&iLocal_1711);
					break;
				
				case 13:
					iLocal_1696 = 1;
					func_11(&iLocal_1714);
					break;
				
				case 14:
					iLocal_1697 = 1;
					func_11(&iLocal_1705);
					break;
				
				case 15:
					iLocal_1698 = 1;
					func_11(&iLocal_1711);
					break;
				
				case 16:
					iLocal_1699 = 1;
					func_11(&iLocal_1714);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x498B
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)//Position - 0x4AB7
{
	uParam0->f_E = fParam1;
	uParam0->f_F = (uParam0->f_F + uParam0->f_E);
}

void func_88(var uParam0, float fParam1)//Position - 0x4AD2
{
	uParam0->f_E = -fParam1;
	uParam0->f_F = (uParam0->f_F + uParam0->f_E);
}

void func_89(int iParam0, float fParam1)//Position - 0x4AEE
{
	if (func_3(iParam0))
	{
		func_12(iParam0, (func_5(iParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)//Position - 0x4B11
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_578(func_579(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xCB8C65281BC495B3(uParam0->f_6, iVar0, iVar1, iVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_578(func_579(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xCB8C65281BC495B3(uParam1->f_6, iVar0, iVar1, iVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(vector3 vParam0, int iParam1, int iParam2)//Position - 0x4BDB
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		fVar2 = unk_0xF0F2FC9DE291567F(vParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_92()//Position - 0x4C47
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4C51
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
	{
		return -1;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_45 == 0)
	{
		if (iVar4 != 17)
		{
			if (iVar4 == 1)
			{
				if (func_99(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_359(iLocal_1981, 262144))
						{
							func_98("Gate_PK", &iLocal_1980);
							iLocal_1981 = 0;
							func_331(&iLocal_1981, 262144);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 524288))
						{
							func_98("Con_PK", &iLocal_1980);
							func_331(&iLocal_1981, 524288);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 1048576))
						{
							func_98("Con_PK", &iLocal_1980);
							func_331(&iLocal_1981, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1980);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_359(iLocal_1981, 262144))
						{
							func_98("Gate_PK", &iLocal_1980);
							iLocal_1981 = 0;
							func_331(&iLocal_1981, 262144);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 524288))
						{
							func_98("Con_PK", &iLocal_1980);
							func_331(&iLocal_1981, 524288);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 1048576))
						{
							func_98("Con_PK", &iLocal_1980);
							func_331(&iLocal_1981, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1980);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0x14C662D0A4B959CE(uParam0->f_166[0 /*189*/].f_9, &uVar0, &uVar1, &vVar2, &uVar3);
					if (vVar2.z <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 9;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 4;
							if (!func_359(iLocal_1981, 32768))
							{
								func_98("Gate_PI", &iLocal_1979);
								iLocal_1981 = 0;
								func_331(&iLocal_1981, 32768);
								return iVar4;
							}
							else if (!func_359(iLocal_1981, 65536))
							{
								func_98("Con_PI", &iLocal_1979);
								func_331(&iLocal_1981, 65536);
								return iVar4;
							}
							else if (!func_359(iLocal_1981, 131072))
							{
								func_98("Con_PI", &iLocal_1979);
								func_331(&iLocal_1981, 131072);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1979);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 1;
						if (!func_359(iLocal_1981, 4096))
						{
							func_98("Get_Perf", &iLocal_1976);
							iLocal_1981 = 0;
							func_331(&iLocal_1981, 4096);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 8192))
						{
							func_98("Con_Perf", &iLocal_1976);
							func_331(&iLocal_1981, 8192);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 16384))
						{
							func_98("Con_Perf", &iLocal_1976);
							func_331(&iLocal_1981, 16384);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1976);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 2)
			{
				if (func_99(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_359(iLocal_1981, 64))
						{
							func_98("Gate_Kni", &iLocal_1978);
							iLocal_1981 = 0;
							func_331(&iLocal_1981, 64);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 128))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_331(&iLocal_1981, 128);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 256))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_331(&iLocal_1981, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1978);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_166[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_359(iLocal_1981, 64))
						{
							func_98("Gate_Kni", &iLocal_1978);
							iLocal_1981 = 0;
							func_331(&iLocal_1981, 64);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 128))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_331(&iLocal_1981, 128);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 256))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_331(&iLocal_1981, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1978);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0x14C662D0A4B959CE(uParam0->f_166[0 /*189*/].f_9, &uVar0, &uVar1, &vVar2, &uVar3);
					if (vVar2.z <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 8;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 6;
							if (!func_359(iLocal_1981, 512))
							{
								func_98("Gate_Inv", &iLocal_1977);
								iLocal_1981 = 0;
								func_331(&iLocal_1981, 512);
								return iVar4;
							}
							else if (!func_359(iLocal_1981, 1024))
							{
								func_98("Con_Inv", &iLocal_1977);
								func_331(&iLocal_1981, 1024);
								return iVar4;
							}
							else if (!func_359(iLocal_1981, 2048))
							{
								func_98("Con_Inv", &iLocal_1977);
								func_331(&iLocal_1981, 2048);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1977);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 2;
						if (!func_359(iLocal_1981, 8))
						{
							func_98("Gate_Hit", &iLocal_1975);
							iLocal_1981 = 0;
							func_331(&iLocal_1981, 8);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 16))
						{
							func_98("Con_Hit", &iLocal_1975);
							func_331(&iLocal_1981, 16);
							return iVar4;
						}
						else if (!func_359(iLocal_1981, 32))
						{
							func_98("Con_Hit", &iLocal_1975);
							func_331(&iLocal_1981, 32);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1975);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar4 = 10;
						return iVar4;
					}
					if (uParam1->f_8 == 3)
					{
						iVar4 = 13;
						return iVar4;
					}
					if (uParam1->f_8 == 1)
					{
						iVar4 = 16;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 7;
					if (!func_359(iLocal_1981, 1))
					{
						func_98("Gate_Miss", &iLocal_1974);
						iLocal_1981 = 0;
						func_331(&iLocal_1981, 1);
						return iVar4;
					}
					else if (!func_359(iLocal_1981, 2))
					{
						func_98("Con_Miss", &iLocal_1974);
						func_331(&iLocal_1981, 2);
						return iVar4;
					}
					else if (!func_359(iLocal_1981, 4))
					{
						func_98("Con_Miss", &iLocal_1974);
						func_331(&iLocal_1981, 4);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1974);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar4 = 10;
					return iVar4;
				}
				if (uParam1->f_8 == 3)
				{
					iVar4 = 13;
					return iVar4;
				}
				if (uParam1->f_8 == 1)
				{
					iVar4 = 16;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 7;
				if (!func_359(iLocal_1981, 1))
				{
					func_98("Gate_Miss", &iLocal_1974);
					iLocal_1981 = 0;
					func_331(&iLocal_1981, 1);
					return iVar4;
				}
				else if (!func_359(iLocal_1981, 2))
				{
					func_98("Con_Miss", &iLocal_1974);
					func_331(&iLocal_1981, 2);
					return iVar4;
				}
				else if (!func_359(iLocal_1981, 4))
				{
					func_98("Con_Miss", &iLocal_1974);
					func_331(&iLocal_1981, 4);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1974);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 17)
	{
		return iVar4;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)//Position - 0x55B6
{
	float fVar0;
	vector3 vVar1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x4DBCE270B354E123(iParam2, *uParam0, fVar0, fVar0, fVar0, false, true, 0))
		{
			vVar1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0x541C2AEF053615BC(iParam2, true), vVar1) - func_95(*uParam0, vVar1)) > 15f)
			{
				unk_0xC4BA30B532FE260F(-1, sLocal_1970, "HUD_MINI_GAME_SOUNDSET", true);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(vector3 vParam0, vector3 vParam1)//Position - 0x5639
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_96(vector3 vParam0)//Position - 0x565A
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

bool func_97(int iParam0)//Position - 0x5699
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	unk_0x14C662D0A4B959CE(iParam0, &uVar0, &vVar1, &vVar2, &uVar3);
	if (unk_0x357058E632979E65(vVar2.z) > 0.342f)
	{
		return 0;
	}
	return vVar1.z < 0f;
}

void func_98(char* sParam0, var uParam1)//Position - 0x56D8
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_359(*uParam1, 1))
	{
		if (!iLocal_1683)
		{
			iLocal_1683 = 1;
			func_331(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1683 = 0;
			if (unk_0x3362CDE8460ED38B(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_359(*uParam1, 1))
	{
		if (!func_359(*uParam1, 2))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_331(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x3362CDE8460ED38B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_359(*uParam1, 2))
	{
		if (!func_359(*uParam1, 4))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_331(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x3362CDE8460ED38B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_359(*uParam1, 4))
	{
		if (!func_359(*uParam1, 8))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_331(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x3362CDE8460ED38B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_359(*uParam1, 8))
	{
		if (!func_359(*uParam1, 16))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_331(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x3362CDE8460ED38B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)//Position - 0x5863
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	unk_0x14C662D0A4B959CE(iParam0, &uVar0, &vVar1, &vVar2, &uVar3);
	if (unk_0x357058E632979E65(vVar2.z) > 0.342f)
	{
		return 0;
	}
	return vVar1.z > 0f;
}

int func_100(var uParam0, int iParam1)//Position - 0x58A2
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vVar0 = { *uParam0 };
	unk_0x14C662D0A4B959CE(iParam1, &vVar4, &vVar2, &vVar3, &vVar1);
	vVar5 = { vVar0 - vVar1 };
	fVar6 = unk_0x357058E632979E65(func_95(vVar5, vVar4));
	fVar7 = unk_0x357058E632979E65(func_95(vVar5, vVar3));
	fVar8 = unk_0x357058E632979E65(func_95(vVar5, vVar2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == unk_0xBC25C936A095B5BA())
			{
				func_194(&uLocal_1934, 0);
			}
			return 17;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == unk_0xBC25C936A095B5BA())
			{
				func_194(&uLocal_1934, 0);
			}
			unk_0xC4BA30B532FE260F(-1, sLocal_1969, "HUD_MINI_GAME_SOUNDSET", true);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0xBC25C936A095B5BA())
			{
				func_194(&uLocal_1934, 0);
			}
			unk_0xC4BA30B532FE260F(-1, sLocal_1969, "HUD_MINI_GAME_SOUNDSET", true);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)//Position - 0x5995
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_D - 1))
	{
		return;
	}
	iVar0 = uParam0->f_D;
	Var2 = { uParam0->f_166[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_D)
	{
		if (Var2.f_8 != uParam0->f_166[iVar1 /*189*/].f_8)
		{
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar1 /*189*/].f_8, 0) && !unk_0x1D403DFADBC2DE3C(Var2.f_8, 0))
			{
				if (Var2.f_B > uParam0->f_166[iVar1 /*189*/].f_B)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_B == uParam0->f_166[iVar1 /*189*/].f_B)
				{
					fVar3 = func_102(Var2.f_8, uParam0->f_1B[Var2.f_B /*10*/], 1);
					fVar4 = func_102(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_166[iParam1 /*189*/].f_C = iVar0;
}

float func_102(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x5AA4
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), vParam1, bParam2);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5ACE
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_300(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)//Position - 0x5B03
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)//Position - 0x5B19
{
	int iVar0;
	
	switch (uParam1->f_17)
	{
		case 0:
			func_175(uParam0);
			func_250();
			func_260(&(Local_45.f_77), 0, 0, 1, 1);
			func_259(&(Local_45.f_77), "IB_RETRY", 2, 201, 1, 1, 0);
			func_259(&(Local_45.f_77), "FE_HLP16", 2, 202, 1, 1, 0);
			func_253(1);
			unk_0x3857DADBD6EC8A54("MGSP_FAIL");
			uParam1->f_17 = 1;
			break;
		
		case 1:
			if (func_169(&(Local_45.f_141), &(Local_45.f_147), &(uParam0->f_11), cLocal_1946, sLocal_1947, uParam0, 78))
			{
				iLocal_2061 = 0;
				if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
				{
					unk_0xD421BC740C5340C3(uParam0->f_166[0 /*189*/].f_9, 4);
				}
				if (func_257("SPR_HELP_DAMG", 0, 0))
				{
					unk_0xBB5629E7D44054AE("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_45.f_141), 1);
				if (*uParam0)
				{
					func_162(0, 0);
					func_161(0, 0);
					func_160();
					if (func_257("SPR_RETR_DES", 0, 0))
					{
						unk_0xBB5629E7D44054AE("SPR_RETR_DES");
					}
					func_253(0);
					*uParam0 = 1;
					uParam1->f_17 = 6;
				}
				else
				{
					func_162(0, 0);
					func_161(0, 0);
					func_160();
					func_89(&iLocal_1949, 10f);
					func_253(0);
					*uParam0 = 0;
					uParam1->f_17 = 7;
				}
			}
			break;
		
		case 2:
			func_152(&(Local_45.f_77), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0x694514BD37EC4E94(2, 201))
			{
				func_162(0, 0);
				func_161(0, 0);
				func_160();
				iLocal_2066 = unk_0x2F079D1FC5F6CB99();
				unk_0xC4BA30B532FE260F(iLocal_2066, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				if (func_257("SPR_RETR_DES", 0, 0))
				{
					unk_0xBB5629E7D44054AE("SPR_RETR_DES");
				}
				func_253(0);
				*uParam0 = 1;
				uParam1->f_17 = 6;
			}
			else if (unk_0x694514BD37EC4E94(2, 202))
			{
				func_162(0, 0);
				func_161(0, 0);
				func_160();
				iLocal_2066 = unk_0x2F079D1FC5F6CB99();
				unk_0xC4BA30B532FE260F(iLocal_2066, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
				func_89(&iLocal_1949, 10f);
				func_253(0);
				*uParam0 = 0;
				uParam1->f_17 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_B > 0)
			{
				uParam1->f_10 = { uParam0->f_1B[uParam1->f_B /*10*/] };
			}
			if (bParam2)
			{
				if (unk_0xE59B7F5A03335350(uParam0->f_166[0 /*189*/].f_9, 0))
				{
					unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					func_260(&(Local_45.f_77), 0, 0, 1, 1);
					func_259(&(Local_45.f_77), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_259(&(Local_45.f_77), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0xE59B7F5A03335350(uParam0->f_166[0 /*189*/].f_9, 0))
				{
					uParam1->f_17 = 5;
				}
			}
			else
			{
				uParam1->f_17 = 8;
			}
			break;
		
		case 5:
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
			{
				unk_0xD421BC740C5340C3(uParam0->f_166[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&iLocal_1949) <= 10f)
			{
				if (bParam2)
				{
					unk_0x4E0EC60D119222B1(9);
					unk_0x4E0EC60D119222B1(7);
					unk_0xBBC4195AD74D153D(0, 99, 1);
					unk_0xBBC4195AD74D153D(0, 100, 1);
					func_152(&(Local_45.f_77), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0x694514BD37EC4E94(2, 201))
					{
						*uParam0 = 1;
						iLocal_2066 = unk_0x2F079D1FC5F6CB99();
						unk_0xC4BA30B532FE260F(iLocal_2066, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_17 = 6;
					}
					else if (unk_0x694514BD37EC4E94(2, 202))
					{
						*uParam0 = 0;
						func_89(&iLocal_1949, 10f);
						iLocal_2066 = unk_0x2F079D1FC5F6CB99();
						unk_0xC4BA30B532FE260F(iLocal_2066, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_17 = 6;
					}
				}
			}
			else
			{
				unk_0xEB233A3B7635D2AC();
				sLocal_1947 = "SPR_RETR_DES";
				func_66(&(Local_45.f_141), 1);
				uParam1->f_17 = 14;
			}
			break;
		
		case 6:
			if (func_355(500))
			{
				unk_0xEB233A3B7635D2AC();
				unk_0x7456702622C62EA0(1);
				uParam1->f_17 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_135())
			{
				if (unk_0x17FAADF9916EF741())
				{
					func_175(uParam0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					if (unk_0x724D816EA203A79E(uParam0->f_166[0 /*189*/].f_9))
					{
						unk_0x3A8D19D7D434A741(uParam0->f_166[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0x65E471E4A2D56226(uParam0->f_166[0 /*189*/].f_9, unk_0x0992793998FBCE2B(uParam0->f_166[0 /*189*/].f_9), 0);
					}
					uParam1->f_17 = 10;
				}
			}
			break;
		
		case 8:
			if (func_133(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_1A = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						if (Local_45 == 0)
						{
							unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
						}
					}
					uParam1->f_17 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_D)
			{
				if (uParam0->f_166[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_131(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0) && uParam0->f_166[0 /*189*/].f_B != -1)
				{
					func_130(uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/], uParam0->f_166[0 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B /*10*/], uParam0->f_166[0 /*189*/].f_B == 0);
				}
				unk_0xF3F01A78937DC905(0f);
				func_11(&iLocal_2057);
				uParam1->f_17 = 11;
			}
			else
			{
				uParam1->f_17 = 13;
			}
			break;
		
		case 10:
			func_162(0, 0);
			func_161(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_45.f_3, Local_45.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_17 = 12;
			break;
		
		case 11:
			if (!unk_0x719413B40BB63D86() || unk_0xF220370B0C08EC20())
			{
				uParam0->f_1 = 1;
				func_11(&iLocal_2057);
				func_108(&(uParam0->f_166[iVar0 /*189*/]), 60f, 0);
				if (func_575(500))
				{
					unk_0x13D5880CBA449AA9();
					if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[0 /*189*/].f_9, 0))
					{
						unk_0xBD53A029D0155A42(uParam0->f_166[0 /*189*/].f_8, uParam0->f_166[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_45 == 0)
					{
						func_88(&(uParam0->f_166[0 /*189*/]), 5f);
					}
					uParam1->f_17 = 13;
				}
				return 0;
			}
			else if (unk_0x719413B40BB63D86())
			{
				if (uParam0->f_166[0 /*189*/].f_B < uParam0->f_C)
				{
					if (func_3(&iLocal_2057))
					{
						if (func_107(&iLocal_2057) >= 3f)
						{
							unk_0x13D5880CBA449AA9();
						}
					}
					else
					{
						func_10(&iLocal_2057);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_1A = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_16 != 0)
			{
				if (!unk_0x1D403DFADBC2DE3C(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&iLocal_1949);
						sLocal_1947 = "SPR_RETR_STUK";
						uParam1->f_17 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_175(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_1A = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)//Position - 0x61EB
{
	if (uParam0->f_16 != 0)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), uParam0->f_9, 0))
			{
				if (unk_0x8910237449BB6F79(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_16 == joaat("stunt"))
					{
						if (unk_0xDB5C848CD9F1133E(uParam0->f_9) < 3f || unk_0x8B2EFFDCF3FE7E80(uParam0->f_9))
						{
							if (unk_0x8730A01B72F31307(uParam0->f_9) && unk_0xDB5C848CD9F1133E(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0xBCDD4514E5CAE591(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0xBCDD4514E5CAE591(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0xBCDD4514E5CAE591(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0xBCDD4514E5CAE591(uParam0->f_9, 3, 10000))
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

float func_107(int iParam0)//Position - 0x62BA
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)//Position - 0x62F6
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
	{
		if (unk_0xA19D269B4B5A1532(uParam0->f_16))
		{
			vVar0 = { unk_0xD7490CDEF40F3DA2(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, vVar0.x, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x6332
{
	vector3 vVar0;
	bool bVar1;
	float fVar2;
	
	unk_0xBBC4195AD74D153D(0, 75, 1);
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	if (unk_0x8910237449BB6F79(iParam0) < fParam1)
	{
		unk_0xA4DFFFD5B234240D(iParam0, fParam1);
	}
	vVar0 = { unk_0xD7490CDEF40F3DA2(iParam0, 2) };
	bVar1 = false;
	if (bParam2)
	{
		fVar2 = (unk_0x11F9F9006143871A() * 45f);
		if (vVar0.x < -fVar2)
		{
			bVar1 = true;
			vVar0.x = (vVar0.x + fVar2);
		}
		else if (vVar0.x < fParam3)
		{
			bVar1 = true;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar2)
		{
			bVar1 = true;
			vVar0.x = (vVar0.x - fVar2);
		}
		else if (vVar0.x > fParam3)
		{
			bVar1 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar2)
		{
			bVar1 = true;
			vVar0.y = (vVar0.y + fVar2);
		}
		else if (vVar0.y < fParam4)
		{
			bVar1 = true;
			vVar0.y = fParam4;
		}
		else if (vVar0.y > fVar2)
		{
			bVar1 = true;
			vVar0.y = (vVar0.y - fVar2);
		}
		else if (vVar0.y > fParam4)
		{
			bVar1 = true;
			vVar0.y = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			bVar1 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			bVar1 = true;
			vVar0.y = fParam4;
		}
	}
	if (bVar1)
	{
		unk_0x784C605D172817C8(iParam0, vVar0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)//Position - 0x6464
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_9))
		{
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0) || !unk_0xE59B7F5A03335350(uParam0->f_9, 0))
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x49D46EE47C9CCB66(uParam0->f_8);
					unk_0x77815D3407C6700D(uParam0->f_9, true, 1);
					unk_0xCF6040807CC0E4A5(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x641B19E156645A92(uParam0->f_8, uParam0->f_10, 1, false, 0, 1);
				}
				if (unk_0x62F3A07C43FFB568(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0x77815D3407C6700D(uParam0->f_9, true, 1);
					unk_0xCF6040807CC0E4A5(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
	{
		unk_0x65E471E4A2D56226(uParam0->f_9, 1000, 0);
		unk_0x3F91283C7E2D2183(uParam0->f_9);
		unk_0xE6E403909F4BF47F(uParam0->f_9, 1000f);
		unk_0x641B19E156645A92(uParam0->f_9, uParam0->f_10, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(uParam0->f_9, uParam0->f_13);
		unk_0xF0A40F19AAB79E88(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_16 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0x61C05BF08A1E0EFE(joaat("stunt"), uParam0->f_10, uParam0->f_13, true, true, false);
		if (unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
		{
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 4);
		}
		unk_0xA73D1278857991A2(uParam0->f_9, true);
		func_111(uParam0->f_9, &(Local_45.f_F3), 0, 1);
	}
	unk_0xCEFB19216B0651AB(uParam0->f_9, 0);
	unk_0x2D655AA68FA1736B(uParam0->f_9, true, true, 0);
	unk_0x251A179731E0D207(uParam0->f_9);
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_8, 0))
	{
		if (!unk_0x25EF720B1CAB1E23(uParam0->f_8, uParam0->f_9))
		{
			unk_0xBD53A029D0155A42(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0x5CAE759AE8219D20(uParam0->f_9))
	{
		unk_0x77815D3407C6700D(uParam0->f_9, true, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0xE71E3D3EEE5CF489(uParam0->f_9, &cVar0);
	if (uParam0->f_14 <= 3)
	{
		unk_0x6441847E99AED19A(uParam0->f_9, 0);
		Local_45.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6664
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_122(iParam0))
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_121(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_121(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_121(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_121(iVar1 + 1));
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
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_120(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_119())
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
		if (uParam1->f_41 == -1 && !func_118(uParam1->f_42))
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
						func_117(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_117(iParam0, uParam1->f_45);
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
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_121(iVar2 + 1)))
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

int func_112(int iParam0, var uParam1, var uParam2)//Position - 0x6BB4
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
	if (func_116(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, true);
		unk_0xA73D1278857991A2(*iParam0, true);
	}
	return 1;
}

int func_113(int iParam0)//Position - 0x6D32
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

void func_114(var uParam0)//Position - 0x6E0E
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

int func_115(int iParam0, int iParam1)//Position - 0x6E4E
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

int func_116(int iParam0, int iParam1)//Position - 0x6F33
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

void func_117(int iParam0, int iParam1)//Position - 0x71A6
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

int func_118(int iParam0)//Position - 0x720B
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

bool func_119()//Position - 0x722B
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_120(int iParam0)//Position - 0x723C
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

int func_121(int iParam0)//Position - 0x7287
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

int func_122(int iParam0)//Position - 0x7337
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_128(unk_0xB5CEFD608600A09F(), -1))
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
	if (func_124(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_123(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x73BE
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

int func_124(int iParam0)//Position - 0x73ED
{
	if (func_127(iParam0) == 233)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_125(int iParam0)//Position - 0x740A
{
	if (func_126(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_126(int iParam0, int iParam1)//Position - 0x742D
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x7468
{
	if (func_126(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_128(int iParam0, int iParam1)//Position - 0x748B
{
	int iVar0;
	
	if (func_129(iParam0, 1, 1))
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

int func_129(int iParam0, bool bParam1, bool bParam2)//Position - 0x74D8
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

void func_130(vector3 vParam0, int iParam1, vector3 vParam2, bool bParam3)//Position - 0x7522
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (bParam3 && Local_45.f_A == 0)
		{
			unk_0x641B19E156645A92(iParam1, 1705.039f, 3251.13f, 40.0016f, 1, false, 0, 1);
		}
		vVar6 = { unk_0x541C2AEF053615BC(iParam1, true) };
		unk_0xAEF1F12C42859E39(vVar6);
		unk_0x2084D4C6C2DF616F(vVar6, &fVar5, 0, 0);
		vVar3 = { unk_0x541C2AEF053615BC(iParam1, true) };
		if (bParam3)
		{
			vVar4 = { vParam0 - vParam2 };
		}
		else
		{
			vVar4 = { vParam2 - vVar3 };
		}
		fVar0 = unk_0xFDC254CE02DB0919(vVar4.x, vVar4.y);
		fVar1 = (unk_0xFDC254CE02DB0919(vVar4.x, vVar4.z) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - unk_0x357058E632979E65(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x357058E632979E65(fVar1));
		}
		if (unk_0x357058E632979E65((vVar6.z - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			vVar6.z = (fVar5 + 25f);
			unk_0x641B19E156645A92(iParam1, vVar6, 1, false, 0, 1);
		}
		unk_0x346478B12F69D4E3(iParam1, true);
		vVar2 = { unk_0xD7490CDEF40F3DA2(iParam1, 2) };
		vVar2.x = fVar1;
		vVar2.z = fVar0;
		unk_0x784C605D172817C8(iParam1, vVar2, 2, 1);
		unk_0x346478B12F69D4E3(iParam1, false);
		unk_0x5C4048C4641BDB16(vVar6, unk_0xF90427F311003E57(iParam1), 500f, 0);
	}
}

void func_131(var uParam0, int iParam1, bool bParam2)//Position - 0x76B9
{
	func_132(uParam0, iParam1, (uParam0->f_166[iParam1 /*189*/].f_B - 1), bParam2);
}

void func_132(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x76D8
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_C - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_D - 1))
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(uParam0->f_166[iParam1 /*189*/].f_8, 0))
	{
		return;
	}
	if (uParam0->f_166[iParam1 /*189*/].f_16 != 0)
	{
		if (unk_0x1D403DFADBC2DE3C(uParam0->f_166[iParam1 /*189*/].f_9, 0))
		{
			return;
		}
	}
	vVar0 = { uParam0->f_1B[iParam2 + 1 /*10*/] - uParam0->f_1B[iParam2 /*10*/] };
	fVar1 = unk_0xFDC254CE02DB0919(vVar0.x, vVar0.y);
	fVar2 = 0f;
	if (unk_0x7512ED01F3F46714(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 0f;
	}
	else if (unk_0x7C28D15641461C68(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 25f;
	}
	else if (unk_0xA19D269B4B5A1532(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_166[iParam1 /*189*/]), uParam0->f_1B[iParam2 /*10*/], fVar1, fVar2);
}

int func_133(var uParam0, bool bParam1)//Position - 0x77E4
{
	if (!func_110(uParam0, bParam1) || !func_134(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_134(var uParam0)//Position - 0x780A
{
	char cVar0[16];
	
	if (uParam0->f_15 == 0)
	{
		return 0;
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_8, 0))
	{
		unk_0x65E471E4A2D56226(uParam0->f_8, 1000, 0);
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
		{
			if (!unk_0x25EF720B1CAB1E23(uParam0->f_8, uParam0->f_9))
			{
				unk_0xBD53A029D0155A42(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0x641B19E156645A92(uParam0->f_8, uParam0->f_10, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(uParam0->f_8, uParam0->f_13);
		}
	}
	else if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
	{
		uParam0->f_8 = unk_0xFD8987C090669BD5(uParam0->f_9, uParam0->f_14, uParam0->f_15, -1, 1, true);
		if (unk_0x1D403DFADBC2DE3C(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x01B3635C3E8EDD81(uParam0->f_14, uParam0->f_15, uParam0->f_10, uParam0->f_13, 1, true);
		if (unk_0x1D403DFADBC2DE3C(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_14 > 3)
	{
		if (!unk_0x5CAE759AE8219D20(uParam0->f_8))
		{
			unk_0x77815D3407C6700D(uParam0->f_8, true, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0xF85FAED5BA864282(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_135()//Position - 0x7924
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_41, 0) && !unk_0xFA30DFD0084E92FE(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_162(1, 0);
	}
	if (!unk_0x866EAD7E27D8D0F8())
	{
		unk_0xEB233A3B7635D2AC();
	}
	unk_0xBBC4195AD74D153D(2, 199, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0x9684558EA44C8D99();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_41, 1))
		{
			func_161(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || unk_0x17FAADF9916EF741())
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(1500);
				}
			}
			else if (iLocal_42 == 0)
			{
				iLocal_42 = unk_0x105601648511CC64() + 1000;
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				func_151(0, 2, 1);
				func_143(1, 1, 1, 0, 0);
				func_137(1);
				unk_0xD941904CB477C7EE(0);
				unk_0xD2EDBB43BBCA0E8B(0);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				func_162(0, 0);
				func_136(0);
			}
			else if (unk_0x105601648511CC64() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_136(int iParam0)//Position - 0x7A69
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_41, 3))
			{
				unk_0x121BBDEFA4F0C22B(1);
				unk_0xF0059F27F7BB6680(&iLocal_41, 3);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_41, 3))
		{
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x7CB6FD92BE491AD9(&iLocal_41, 3);
		}
	}
}

void func_137(bool bParam0)//Position - 0x7AB0
{
	if (bParam0)
	{
		func_142();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_141(0))
		{
			func_138(0);
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

void func_138(int iParam0)//Position - 0x7B13
{
	if (Global_3943)
	{
		func_140(0, 0);
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
	if (!func_139())
	{
		Global_389D.f_1 = 3;
	}
}

int func_139()//Position - 0x7B83
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_140(bool bParam0, bool bParam1)//Position - 0x7BAA
{
	if (bParam0)
	{
		if (func_141(0))
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

int func_141(int iParam0)//Position - 0x7C1E
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

void func_142()//Position - 0x7C78
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_143(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7CA1
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_150(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_139())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_149(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_150(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_149(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_147(unk_0xB5CEFD608600A09F())) && !func_145(unk_0xB5CEFD608600A09F(), 0)) && !func_144()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_147(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_144()//Position - 0x7DCA
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_145(int iParam0, int iParam1)//Position - 0x7DE7
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_146(-1, 0) == 8;
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

int func_146(int iParam0, bool bParam1)//Position - 0x7E32
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_147(int iParam0)//Position - 0x7E73
{
	if (func_145(iParam0, 0))
	{
		return 1;
	}
	if (func_148())
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

bool func_148()//Position - 0x7EB5
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_149(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x7EC6
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_150(int iParam0)//Position - 0x7EF9
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

void func_151(int iParam0, int iParam1, int iParam2)//Position - 0x7F1C
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&iLocal_41, 2);
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (iParam1 == 1)
			{
				unk_0x2991B7F8ABC4BB0C(0.2f);
			}
			else
			{
				unk_0x2991B7F8ABC4BB0C(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_41, 2) || iParam2)
		{
			if (!unk_0x7AF0088ABFA713B6())
			{
				unk_0x2991B7F8ABC4BB0C(1f);
			}
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_41, 2);
	}
}

void func_152(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x7F7D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC()) || unk_0x17FAADF9916EF741()) || unk_0xF6023EB13558345B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_159(uParam0))
	{
		return;
	}
	unk_0x37CCF3DE21C7FD23();
	unk_0x996AC9A66B2A5A3F(iParam2);
	if (!func_158(uParam0->f_1, 256) || (func_158(uParam0->f_1, 8192) && unk_0x8A0D8839261BAEEF(2)))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD44E04EBBDC4CE88(fParam1);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fParam5);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xF9FBC2F3F73D94C9();
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(func_158(uParam0->f_1, 4096));
			unk_0xF9FBC2F3F73D94C9();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x50465D2C022B9E04(2);
					break;
				
				case 2:
					bVar4 = !unk_0x50465D2C022B9E04(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x1E1FB49121565EB6(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = unk_0xE57EAD1FEA2A6FAF(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xC7CF72D26EA6A227(iVar0, iVar1, bVar2);
						}
						if (!unk_0xF1734B55490E9045(sVar3))
						{
							func_157(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xF1734B55490E9045(uParam0->f_2[iVar6 /*15*/]))
					{
						func_156(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (func_158(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x5E5DBD0A6623969E(true);
								unk_0x1E1FB49121565EB6(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x5E5DBD0A6623969E(false);
								unk_0x1E1FB49121565EB6(-1);
							}
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar6++;
		}
		fVar8 = func_155(bParam4, func_155(func_158(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x29CD142125FE177B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD44E04EBBDC4CE88(fVar8);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(80f);
		unk_0xF9FBC2F3F73D94C9();
		func_154(&(uParam0->f_1), 256);
		func_153(&(uParam0->f_1), 128);
	}
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 0, 0);
}

void func_153(var uParam0, int iParam1)//Position - 0x823E
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_154(var uParam0, int iParam1)//Position - 0x8253
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_155(bool bParam0, float fParam1, float fParam2)//Position - 0x8264
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_156(char* sParam0)//Position - 0x827B
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_157(char* sParam0)//Position - 0x828D
{
	unk_0xCB30200B8055CA57(sParam0);
}

bool func_158(var uParam0, int iParam1)//Position - 0x829B
{
	return (uParam0 && iParam1) != 0;
}

int func_159(var uParam0)//Position - 0x82AA
{
	if (*uParam0 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			func_154(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_160()//Position - 0x82D1
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_143(0, 1, 1, 0, 0);
	func_137(1);
}

void func_161(int iParam0, int iParam1)//Position - 0x82ED
{
	if (iParam0 == 1)
	{
		func_162(0, 0);
		unk_0x9216004FAC08D1DC("DeathFailOut", 0, 0);
		unk_0xF0059F27F7BB6680(&iLocal_41, 1);
		func_151(1, 2, 0);
		unk_0xEBFF48776C732268(2);
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_41, 1) || iParam1)
		{
			unk_0x1A058EB0D1ACEC78("DeathFailOut");
			func_151(0, 2, 1);
			unk_0xEBFF48776C732268(0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_41, 1);
	}
}

void func_162(int iParam0, int iParam1)//Position - 0x834E
{
	char* sVar0;
	
	switch (func_163())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_41, 0) || iParam1)
		{
			unk_0x9216004FAC08D1DC(sVar0, 0, 0);
			unk_0xF0059F27F7BB6680(&iLocal_41, 0);
			func_151(1, 1, 0);
			unk_0xEBFF48776C732268(1);
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_41, 0) || iParam1)
		{
			unk_0x1A058EB0D1ACEC78(sVar0);
			func_151(0, 1, 1);
			unk_0xEBFF48776C732268(0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_41, 0);
	}
}

int func_163()//Position - 0x83EE
{
	func_164();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_164()//Position - 0x8407
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_168(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_167(unk_0xBC25C936A095B5BA());
			if (func_166(iVar0) && (!func_165(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_166(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_165(int iParam0)//Position - 0x8504
{
	return Global_8C41 == iParam0;
}

bool func_166(int iParam0)//Position - 0x8512
{
	return iParam0 < 3;
}

int func_167(int iParam0)//Position - 0x851E
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_168(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_168(int iParam0)//Position - 0x855B
{
	if (func_166(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_169(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x8585
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xD6423910AAD8A379("DEATH_SCENE");
			unk_0xC4BA30B532FE260F(-1, "ScreenFlash", "WastedSounds", true);
			func_10(&(uParam0->f_1));
			func_160();
			func_174(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xC4248B71D9B26306(true);
			break;
		
		case 1:
			if (func_135() || unk_0x17FAADF9916EF741())
			{
				*uParam0 = 2;
			}
			if (!func_359(uParam0->f_4, 4))
			{
				if (unk_0x284F2ACE6839D3C0("OFFMISSION_WASTED", false, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "Bed", "WastedSounds", true);
					func_331(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_359(uParam0->f_4, 2))
				{
					unk_0xC4BA30B532FE260F(-1, "TextHit", "WastedSounds", true);
					func_331(&(uParam0->f_4), 2);
				}
				func_171(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_171(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_162(0, 1);
				func_161(0, 1);
				func_160();
				if (*uParam5)
				{
					unk_0xE44AD04338101C64(1);
				}
				else if (!uParam0->f_5)
				{
					func_170(0);
				}
				unk_0xC4248B71D9B26306(false);
				unk_0x720260ACC9BD334E(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xC63520BF0B3FB162(1);
				func_162(0, 1);
				func_161(0, 1);
				unk_0xC1300D0F3A74E20B("DEATH_SCENE");
				unk_0xC4248B71D9B26306(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC4248B71D9B26306(false);
			return 1;
			break;
	}
	return 0;
}

void func_170(bool bParam0)//Position - 0x8746
{
	if ((Global_8C41 == 9 || Global_8C41 == 10) || Global_8C41 == 5)
	{
		Global_195BD = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_195BD = 0;
	}
}

int func_171(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x878C
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
			{
				unk_0x7A41D32A383895D8(2500);
				unk_0x2423B13D9CFAD1DD();
			}
			if (bParam9)
			{
				unk_0xC4248B71D9B26306(true);
			}
			unk_0x2991B7F8ABC4BB0C(0.2f);
			if (func_158(iParam5, 4))
			{
				if (unk_0x284F2ACE6839D3C0("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x29CD142125FE177B(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x57016C44F10111F0("STRING");
			unk_0x449F0674640D94C0(6);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
			func_156(sParam3);
			unk_0x1E1FB49121565EB6(100);
			unk_0x5E5DBD0A6623969E(true);
			unk_0xC27A95D32A8160C0();
			if (func_158(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x29CD142125FE177B(*uParam0, "TRANSITION_UP");
					unk_0xD44E04EBBDC4CE88(uParam1->f_86);
					unk_0xF9FBC2F3F73D94C9();
					uParam1->f_88 = 1;
				}
			}
			if (!func_158(iParam5, 1))
			{
				unk_0xE93D261B305E994A(0);
			}
			func_260(&(uParam1->f_A), 0, 1, 1, 1);
			func_259(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_259(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_158(iParam5, 4))
			{
				unk_0xC4BA30B532FE260F(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_158(iParam5, 8))
			{
				switch (func_163())
				{
					case 0:
						unk_0x9216004FAC08D1DC("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x9216004FAC08D1DC("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x9216004FAC08D1DC("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_360(&(uParam1->f_1));
			}
			if (func_158(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_360(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x37CCF3DE21C7FD23();
			if (func_158(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x29CD142125FE177B(*uParam0, "TRANSITION_UP");
					unk_0xD44E04EBBDC4CE88(uParam1->f_86);
					unk_0xF9FBC2F3F73D94C9();
					uParam1->f_88 = 1;
				}
			}
			unk_0x996AC9A66B2A5A3F(iParam6);
			func_173(uParam0, 0, 0);
			if (!func_158(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x17FAADF9916EF741()))
			{
				func_152(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x08009E53F6E7E15C();
				if (unk_0x093484B35A948BFC(2, 201))
				{
					uParam1->f_8A = 1;
					unk_0xC4BA30B532FE260F(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_158(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_172(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x093484B35A948BFC(2, 202))
				{
					uParam1->f_8A = 0;
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_158(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_172(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_158(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_158(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_172(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_173(uParam0, 0, 0);
			unk_0x2991B7F8ABC4BB0C(1f);
			if (uParam1->f_8A || !((unk_0x3362CDE8460ED38B("stunt_plane_races", unk_0x1377080E9B0BD993()) || unk_0x3362CDE8460ED38B("pilot_school", unk_0x1377080E9B0BD993())) || (unk_0x3362CDE8460ED38B("bj", unk_0x1377080E9B0BD993()) && unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))))
			{
				unk_0x829FA4611BD56B44(2500);
			}
			if (func_158(iParam5, 64) && uParam1->f_8A)
			{
				unk_0x7A41D32A383895D8(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xC4248B71D9B26306(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_173(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_172(int iParam0)//Position - 0x8B6F
{
	if (*iParam0 != 0)
	{
		unk_0xB0B0FE33F4F22679(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_7B = 0;
}

int func_173(var uParam0, bool bParam1, bool bParam2)//Position - 0x8B92
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	if (!bParam2)
	{
		unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_174(var uParam0, float fParam1, float fParam2)//Position - 0x8C24
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_172(&(uParam0->f_A));
	uParam0->f_86 = fParam1;
	uParam0->f_87 = fParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_175(var uParam0)//Position - 0x8C74
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_C)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_176(int iParam0, bool bParam1)//Position - 0x8C99
{
	switch (iLocal_1682)
	{
		case 0:
			func_25();
			func_193();
			func_189();
			iLocal_1682 = 1;
			break;
		
		case 1:
			if (func_188())
			{
				iLocal_1682 = 2;
			}
			break;
		
		case 2:
			func_177(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1682 = 0;
			}
			break;
	}
}

void func_177(int iParam0)//Position - 0x8CF7
{
	switch (Local_45.f_A)
	{
		case 3:
			func_187(iParam0);
			func_186(iParam0);
			break;
		
		case 0:
			func_185(iParam0);
			func_184(iParam0);
			break;
		
		case 1:
			func_183(iParam0);
			func_181(iParam0);
			break;
		
		case 2:
			func_180(iParam0);
			func_179(iParam0);
			break;
		
		case 4:
			func_178(iParam0);
			break;
	}
}

void func_178(int iParam0)//Position - 0x8D6B
{
	if (iParam0 == 5)
	{
		if (!func_359(uLocal_1758, 1))
		{
			func_331(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_359(uLocal_1758, 2))
		{
			func_331(&uLocal_1758, 2);
		}
	}
}

void func_179(int iParam0)//Position - 0x8DA8
{
	if (iParam0 >= 4)
	{
		if (!unk_0x724D816EA203A79E(iLocal_1746[0]) && !func_359(uLocal_1748, 1))
		{
			iLocal_1746[0] = unk_0x61C05BF08A1E0EFE(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, true, true, false);
			iLocal_1746[1] = unk_0x61C05BF08A1E0EFE(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, true, true, false);
			unk_0x0A0AE625CFB21683(iLocal_1746[0], iLocal_1746[1], 1065353216);
			iLocal_1747[0] = unk_0xFD8987C090669BD5(iLocal_1746[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, true);
			func_331(&uLocal_1748, 1);
		}
		if (unk_0x1E8349F219AC5AF9("SPR_Fluff_01"))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_1747[0], 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_1747[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0xEB469C5B92ADC7B0(iLocal_1747[0], iLocal_1746[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0x2D175DF90F6F05C3(iLocal_1746[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_180(int iParam0)//Position - 0x8EC4
{
	if (iParam0 == 4)
	{
		if (!func_359(uLocal_1758, 1))
		{
			func_331(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_359(uLocal_1758, 2))
		{
			func_331(&uLocal_1758, 2);
		}
	}
}

void func_181(int iParam0)//Position - 0x8F01
{
	if (iParam0 >= 1)
	{
		if (!unk_0x724D816EA203A79E(iLocal_1746[0]))
		{
			if (!func_359(uLocal_1748, 1))
			{
				if (func_182(&iLocal_1745))
				{
					iLocal_1746[0] = unk_0x61C05BF08A1E0EFE(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, true, true, false);
					func_331(&uLocal_1748, 1);
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_1746[0]))
		{
			if (!unk_0x724D816EA203A79E(iLocal_1747[0]))
			{
				if (!func_359(uLocal_1748, 2))
				{
					iLocal_1747[0] = unk_0xFD8987C090669BD5(iLocal_1746[0], 4, joaat("a_m_y_motox_01"), -1, 1, true);
					func_331(&uLocal_1748, 2);
				}
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_1746[0]) && !unk_0x724D816EA203A79E(iLocal_1747[0]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_1747[0], 0))
			{
				if (!unk_0x4DBCE270B354E123(iLocal_1746[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_1747[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x509F549022512095(iLocal_1747[0], iLocal_1746[0], -2530.873f, 608.701f, 238.9111f, unk_0x2D175DF90F6F05C3(iLocal_1746[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0x724D816EA203A79E(iLocal_1746[1]))
		{
			if (!func_359(uLocal_1749, 1))
			{
				if (func_182(&iLocal_1745))
				{
					iLocal_1746[1] = unk_0x61C05BF08A1E0EFE(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, true, true, false);
					func_331(&uLocal_1749, 1);
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_1746[1]))
		{
			if (!unk_0x724D816EA203A79E(iLocal_1747[1]))
			{
				if (!func_359(uLocal_1749, 2))
				{
					iLocal_1747[1] = unk_0xFD8987C090669BD5(iLocal_1746[1], 4, joaat("a_m_y_motox_01"), -1, 1, true);
					func_331(&uLocal_1749, 2);
				}
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_1746[1]) && !unk_0x724D816EA203A79E(iLocal_1747[1]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[1], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_1747[1], 0))
			{
				if (!unk_0x4DBCE270B354E123(iLocal_1746[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_1747[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x509F549022512095(iLocal_1747[1], iLocal_1746[1], -2527.712f, 609.6833f, 239.2568f, unk_0x2D175DF90F6F05C3(iLocal_1746[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_182(int iParam0)//Position - 0x91A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0xD6513D668481290A((*iParam0)[iVar0]))
			{
				if (!unk_0xD6513D668481290A((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_183(int iParam0)//Position - 0x91EC
{
	if (iParam0 == 9)
	{
		if (!func_359(uLocal_1758, 1))
		{
			func_331(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_359(uLocal_1758, 2))
		{
			func_331(&uLocal_1758, 2);
		}
	}
}

void func_184(int iParam0)//Position - 0x922A
{
	if (iParam0 == 6)
	{
		if (!unk_0x724D816EA203A79E(iLocal_1746[0]) && !func_359(uLocal_1748, 1))
		{
			iLocal_1746[0] = unk_0x61C05BF08A1E0EFE(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, true, true, false);
			iLocal_1747[0] = unk_0xFD8987C090669BD5(iLocal_1746[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, true);
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_1747[0], 0))
			{
				if (!unk_0x4DBCE270B354E123(iLocal_1746[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_1747[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0x827661D9AAD4A354(iLocal_1747[0], iLocal_1746[0], -1552.281f, 2641.609f, -0.8283f, 4, unk_0x2D175DF90F6F05C3(iLocal_1746[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_331(&uLocal_1748, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_359(uLocal_1748, 1))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1747[0], 0))
			{
				unk_0xF845620A03C7425B(&(iLocal_1747[0]));
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_1746[0]));
			}
		}
	}
}

void func_185(int iParam0)//Position - 0x936F
{
	if (iParam0 == 7)
	{
		if (!func_359(uLocal_1758, 1))
		{
			func_331(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_359(uLocal_1758, 2))
		{
			func_331(&uLocal_1758, 2);
		}
	}
}

void func_186(int iParam0)//Position - 0x93AC
{
	if (!func_359(uLocal_1748, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x00D24B3F2A5CD22C(101, "SPRStuntAF"))
			{
				unk_0xAEF1F12C42859E39(-943.8105f, -3173.692f, 12.9445f);
				if (!unk_0x724D816EA203A79E(iLocal_1746[0]))
				{
					iLocal_1746[0] = unk_0x61C05BF08A1E0EFE(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, true, true, false);
					unk_0xF0A40F19AAB79E88(iLocal_1746[0], 1084227584);
					unk_0x2D655AA68FA1736B(iLocal_1746[0], true, true, 0);
					if (Local_45 == 0)
					{
						unk_0x251A179731E0D207(iLocal_1746[0]);
					}
					iLocal_1747[0] = unk_0xFD8987C090669BD5(iLocal_1746[0], 4, joaat("s_m_m_highsec_01"), -1, 1, true);
				}
				if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0))
				{
					if (unk_0x4DBCE270B354E123(iLocal_1746[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_1746[0]))
						{
							unk_0x9E6D037EC3389728(iLocal_1746[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0xB34E411B0A4BF096(iLocal_1746[0]))
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_1747[0], 0))
						{
							if (!unk_0xF4FCC3C1048FF2AB(iLocal_1747[0], -1817882002) == 1)
							{
								unk_0x509F549022512095(iLocal_1747[0], iLocal_1746[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_1746[0]))
			{
				unk_0xD87F0F9CDF39238A(iLocal_1746[0]);
			}
			else
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_1746[0]));
				func_331(&uLocal_1748, 1);
			}
		}
	}
	else if (!unk_0x1D403DFADBC2DE3C(iLocal_1746[0], 0))
	{
		unk_0xAEF1F12C42859E39(unk_0x541C2AEF053615BC(iLocal_1746[0], true));
	}
}

void func_187(int iParam0)//Position - 0x9580
{
	if (iParam0 == 6)
	{
		if (!func_359(uLocal_1758, 1))
		{
			func_331(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_359(uLocal_1758, 2))
		{
			func_331(&uLocal_1758, 2);
		}
	}
}

int func_188()//Position - 0x95BD
{
	switch (Local_45.f_A)
	{
		case 3:
			if (func_182(&iLocal_1745) && unk_0x00D24B3F2A5CD22C(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_182(&iLocal_1745))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_182(&iLocal_1745))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_182(&iLocal_1745) && unk_0x1E8349F219AC5AF9("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_189()//Position - 0x966C
{
	switch (Local_45.f_A)
	{
		case 3:
			func_191(&iLocal_1745, joaat("jet"));
			func_191(&iLocal_1745, joaat("s_m_m_highsec_01"));
			unk_0x1B2A7C8188ADBE04(101, "SPRStuntAF");
			break;
		
		case 0:
			func_191(&iLocal_1745, joaat("jetmax"));
			func_191(&iLocal_1745, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_191(&iLocal_1745, joaat("sanchez"));
			func_191(&iLocal_1745, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_191(&iLocal_1745, joaat("hauler"));
			func_191(&iLocal_1745, joaat("tanker"));
			func_191(&iLocal_1745, joaat("s_m_m_dockwork_01"));
			unk_0x44840FD68E426678("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_190(&iLocal_1745);
}

void func_190(int iParam0)//Position - 0x9738
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0xF243B7A14FCFD0F4((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_191(int iParam0, int iParam1)//Position - 0x9768
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_192(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_192(var uParam0)//Position - 0x97C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_193()//Position - 0x97F1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_359(uLocal_1758, iVar0))
		{
			func_357(&uLocal_1758, iVar0);
		}
		iVar0++;
	}
}

void func_194(var uParam0, int iParam1)//Position - 0x9820
{
	func_195(uParam0, iParam1, 0);
}

void func_195(var uParam0, int iParam1, int iParam2)//Position - 0x9831
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
		if (func_196(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_196(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_196(char* sParam0)//Position - 0x990E
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_197(var uParam0)//Position - 0x9921
{
	float fVar0;
	
	if (uParam0->f_166[0 /*189*/].f_B >= (uParam0->f_C - 2))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_1B[(uParam0->f_C - 2) /*10*/], func_198());
		if (!unk_0x4EF7F52E5396B43C(iLocal_1968))
		{
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), func_198()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				iLocal_1968 = unk_0x9FEA2B77D52983D8(func_198(), uParam0->f_1B[(uParam0->f_C - 1) /*10*/] - func_198(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), func_198()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_250();
		}
	}
}

Vector3 func_198()//Position - 0x99D1
{
	switch (Local_45.f_A)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0)//Position - 0x9A6C
{
	if (func_232())
	{
		if (!Local_1961)
		{
			Local_1961 = 1;
			Local_1961.f_1 = 1;
		}
		else
		{
			Local_1961.f_1 = 0;
		}
	}
	else if (func_231())
	{
		if (!Local_1961.f_1 || func_230() >= 1f)
		{
			if (Local_1961)
			{
				Local_1961 = 0;
			}
		}
	}
	if (func_231())
	{
		func_229();
	}
	else
	{
		func_228();
	}
	if (Local_1961)
	{
		if (!func_227(Local_1961.f_2) && !func_225(Local_1961.f_2))
		{
			func_201(&uLocal_1934, Local_1961.f_2);
		}
		else
		{
			if (unk_0xEF0E25DA0CB6E8FF(Local_1961.f_6))
			{
				unk_0x4EC087603E1DEF9C(Local_1961.f_6, 0);
			}
			if (func_225(Local_1961.f_2))
			{
				Local_1961.f_2 = { func_200(uParam0) };
			}
			func_194(&uLocal_1934, 0);
			Local_1961 = 0;
		}
	}
	else if (unk_0xEF0E25DA0CB6E8FF(Local_1961.f_6))
	{
		unk_0x4EC087603E1DEF9C(Local_1961.f_6, 0);
	}
	else
	{
		if (func_225(Local_1961.f_2))
		{
			Local_1961.f_2 = { func_200(uParam0) };
		}
		func_194(&uLocal_1934, 0);
		Local_1961 = 0;
	}
}

Vector3 func_200(var uParam0)//Position - 0x9B87
{
	if (uParam0->f_166[0 /*189*/].f_B < (Local_45.f_B - 1))
	{
		return uParam0->f_1B[uParam0->f_166[0 /*189*/].f_B + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_201(var uParam0, vector3 vParam1)//Position - 0x9BBC
{
	func_202(uParam0, vParam1, 0, 0, 1, 1, 1);
}

void func_202(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x9BD3
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_195(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_203(uParam0, vParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_203(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x9C09
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_196(iVar0))
	{
		func_224();
	}
	if (!unk_0xBFFAD293E2DA992B())
	{
		if (func_219(uParam0, bParam4, bParam6, 0))
		{
			func_218(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_208(iVar0))
			{
				if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if ((unk_0x33CC9445B2DF9387(vParam1, 1f) && !unk_0xF16DAFF595E80F7C()) && uParam5)
					{
						if (!func_196(iVar0))
						{
							func_300(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_207(1);
							}
						}
					}
				}
			}
		}
		else if (func_208(iVar0))
		{
			if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
			{
				if ((unk_0x33CC9445B2DF9387(vParam1, 1f) && !unk_0xF16DAFF595E80F7C()) && uParam5)
				{
					if (!func_196(iVar0))
					{
						func_300(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
						{
							func_207(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xEAEFBBEC1AEA464B(iVar0))
		{
			if (func_196(iVar0) && unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				func_195(uParam0, iVar0, 1);
			}
		}
		if (!func_219(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_206(uParam0))
			{
				func_204(uParam0);
			}
		}
	}
}

void func_204(var uParam0)//Position - 0x9EE3
{
	if (func_205(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(true);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_205(int iParam0)//Position - 0x9F4C
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(var uParam0)//Position - 0x9FA7
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

int func_207(bool bParam0)//Position - 0x9FD2
{
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_19B04.f_2724.f_64++;
			}
			return Global_19B04.f_2724.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_19B04.f_2724.f_65++;
			}
			return Global_19B04.f_2724.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_19B04.f_2724.f_66++;
			}
			return Global_19B04.f_2724.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_208(char* sParam0)//Position - 0xA07C
{
	if (!func_209(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_196(sParam0)) || func_196("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_207(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_207(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_207(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_209(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA115
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
	if (func_141(0))
	{
		return 0;
	}
	if (func_217())
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
	if ((func_216() || func_215(Global_440000.f_243FE)) || func_214())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_213(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_212(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_210(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0)//Position - 0xA363
{
	if (iParam0 != func_211())
	{
		if (func_129(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_129(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_211()//Position - 0xA3C9
{
	return -1;
}

int func_212(int iParam0, int iParam1)//Position - 0xA3D2
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

int func_213(int iParam0, int iParam1)//Position - 0xA434
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

var func_214()//Position - 0xA4B9
{
	return Global_255A46.f_10;
}

bool func_215(int iParam0)//Position - 0xA4C7
{
	return iParam0 == 51;
}

var func_216()//Position - 0xA4D4
{
	return Global_255A46.f_F;
}

bool func_217()//Position - 0xA4E2
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_218(var uParam0, vector3 vParam1, int iParam2)//Position - 0xA4F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x4AED68BFACFB14CB(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_A;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x7EA10E956229CFA8(vParam1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), vParam1, -1, iVar2, iVar3);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_B = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_219(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA593
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
					if (func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_222(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_222(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_223(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_206(uParam0))
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
						if (!func_223(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_222(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_222(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_223(bParam1, bParam2, bParam3))
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
					if (!func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_222(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_222(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_223(bParam1, bParam2, bParam3))
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
						if (func_221(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_220(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_220(bParam1, bParam2, bParam3))
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
					else if (func_221(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_206(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_209(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_224();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_220(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA8FF
{
	if (!func_209(bParam0, bParam1, bParam2))
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

int func_221(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA951
{
	if (!func_209(bParam0, bParam1, bParam2))
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

int func_222(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA99A
{
	if (!func_209(bParam0, bParam1, bParam2))
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

int func_223(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA9F9
{
	if (!func_209(bParam0, bParam1, bParam2))
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

void func_224()//Position - 0xAA4F
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

int func_225(vector3 vParam0)//Position - 0xAA5F
{
	float fVar0;
	
	fVar0 = unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA());
	if (SYSTEM::VDIST2(vParam0, func_226(unk_0xB5CEFD608600A09F())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_226(int iParam0)//Position - 0xAA95
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_227(vector3 vParam0)//Position - 0xAAA8
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_228()//Position - 0xAAD2
{
	Local_1961.f_5 = 0f;
}

void func_229()//Position - 0xAAE0
{
	Local_1961.f_5 = (Local_1961.f_5 + unk_0x11F9F9006143871A());
}

float func_230()//Position - 0xAAF7
{
	return Local_1961.f_5;
}

bool func_231()//Position - 0xAB04
{
	return unk_0x093484B35A948BFC(0, 80);
}

bool func_232()//Position - 0xAB13
{
	return unk_0x8FCEEB789599BD9B(0, 80);
}

void func_233(vector3 vParam0)//Position - 0xAB22
{
	func_194(&uLocal_1934, 0);
	Local_1961.f_2 = { vParam0 };
}

void func_234(int iParam0, int iParam1)//Position - 0xAB3D
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

void func_235(int iParam0)//Position - 0xAB55
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

int func_236(var uParam0, bool bParam1, bool bParam2)//Position - 0xAB69
{
	unk_0xB64B4A29A6FE90F2(0);
	switch (iLocal_1681)
	{
		case 0:
			iLocal_194 = 0;
			vLocal_1930 = { func_198() };
			vLocal_1931 = { func_249() };
			fLocal_1932 = func_248();
			unk_0x43F06392C4EF25E0(false);
			unk_0x7456702622C62EA0(1);
			unk_0xEB233A3B7635D2AC();
			iLocal_1681 = 1;
			break;
		
		case 1:
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (func_163() == 0)
				{
					unk_0x9216004FAC08D1DC("MinigameEndMichael", 0, 0);
				}
				else if (func_163() == 1)
				{
					unk_0x9216004FAC08D1DC("MinigameEndFranklin", 0, 0);
				}
				else if (func_163() == 2)
				{
					unk_0x9216004FAC08D1DC("MinigameEndTrevor", 0, 0);
				}
				iLocal_1739 = unk_0x585DE1CBEEB2D27D(26379945, vLocal_1930, vLocal_1931, fLocal_1932, 1, 2);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0x2FB83B8BD6C05FD2(iLocal_1739, "HAND_SHAKE", 0.07f);
				}
				if (unk_0xE59B7F5A03335350(uParam0->f_166[0 /*189*/].f_9, 0) && unk_0x2A348A3A98B80B13(uParam0->f_166[0 /*189*/].f_9))
				{
					unk_0x827661D9AAD4A354(unk_0xBC25C936A095B5BA(), uParam0->f_166[0 /*189*/].f_9, vLocal_1930.x, vLocal_1930.y, (vLocal_1930.z + 15f), 4, unk_0x8910237449BB6F79(uParam0->f_166[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0xAA42EF74E7662EE7(iLocal_1739, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
				iLocal_1681 = 2;
			}
			break;
		
		case 2:
			unk_0x4E12C92FF3A1C1D1(iLocal_1739);
			func_247(iLocal_1739);
			func_10(&iLocal_1735);
			iLocal_1681 = 3;
			break;
		
		case 3:
			if (func_246(&iLocal_1735, fLocal_1933))
			{
				func_10(&iLocal_1735);
				func_247(iLocal_1739);
				iLocal_1681 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0xD1DC4B08247A4317(uParam0->f_166[0 /*189*/].f_9) && unk_0x2A348A3A98B80B13(uParam0->f_166[0 /*189*/].f_9))
				{
					vLocal_1929 = { unk_0x541C2AEF053615BC(uParam0->f_166[0 /*189*/].f_9, true) };
					func_10(&iLocal_1735);
				}
				func_243(iLocal_1739, vLocal_1929);
			}
			if (func_107(&iLocal_1735) >= 1f)
			{
				iLocal_1681 = 5;
			}
			break;
		
		case 5:
			func_11(&iLocal_1735);
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_1738))
			{
				unk_0x4EC087603E1DEF9C(iLocal_1738, 0);
			}
			unk_0x9216004FAC08D1DC("MinigameTransitionIn", 0, 1);
			unk_0x2880294117B40FE9(iLocal_1739, 0);
			vLocal_1930 = { unk_0x4BE5AF1A5ACF14E5(iLocal_1739) };
			vLocal_1931 = { unk_0x0311C47C0F630BCF(iLocal_1739, 2) };
			iLocal_1738 = unk_0x585DE1CBEEB2D27D(26379945, vLocal_1930.x, vLocal_1930.y, (vLocal_1930.z + 1000f), 90f, vLocal_1931.y, vLocal_1931.z, fLocal_1932, 0, 2);
			unk_0xAE099C1ADC89C331(iLocal_1738, iLocal_1739, 500, 1, 1);
			unk_0xC4BA30B532FE260F(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_1681 = 6;
			break;
		
		case 6:
			if (!unk_0x16BE1286447174A9(iLocal_1738) && !unk_0x16BE1286447174A9(iLocal_1739))
			{
				if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
				{
					unk_0xC4BA30B532FE260F(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_45.f_6A[Local_45.f_A] - Local_45.f_70[Local_45.f_A]) / 2f) + Local_45.f_70[Local_45.f_A]))
				{
					unk_0xC4BA30B532FE260F(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
				{
					unk_0xC4BA30B532FE260F(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
				}
				else
				{
					func_242(1);
				}
				iLocal_1681 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
			}
			func_240(uParam0);
			func_66(&(Local_45.f_141), 1);
			func_11(&iLocal_1735);
			if (unk_0xE59B7F5A03335350(uParam0->f_166[0 /*189*/].f_9, 0))
			{
				sLocal_1924 = unk_0x6451F9ED1F8684A5();
				unk_0x4E87F356DA56EB3F(uParam0->f_166[0 /*189*/].f_9, false);
			}
			iLocal_1681 = 8;
			break;
		
		case 8:
			if (func_239(uParam0))
			{
				iLocal_1681 = 9;
			}
			break;
		
		case 9:
			unk_0x9216004FAC08D1DC("MinigameTransitionOut", 0, 0);
			func_238(&iLocal_1740);
			func_234(1, 0);
			func_237(uParam0);
			func_16();
			func_234(0, 0);
			iLocal_1681 = 0;
			return 0;
			break;
	}
	func_429(uParam0, 0);
	return 1;
}

int func_237(var uParam0)//Position - 0xAF86
{
	if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
	{
		unk_0x2E94302CFF011F2E(&(Local_45.f_18[Local_45.f_A /*8*/]));
		return unk_0x1CC53093C5776C27("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_45.f_6A[Local_45.f_A] - Local_45.f_70[Local_45.f_A]) / 2f) + Local_45.f_70[Local_45.f_A]))
	{
		unk_0x2E94302CFF011F2E(&(Local_45.f_18[Local_45.f_A /*8*/]));
		return unk_0x1CC53093C5776C27("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
	{
		unk_0x2E94302CFF011F2E(&(Local_45.f_18[Local_45.f_A /*8*/]));
		return unk_0x1CC53093C5776C27("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_238(int iParam0)//Position - 0xB061
{
	unk_0xB0B0FE33F4F22679(iParam0);
	*iParam0 = 0;
}

int func_239(var uParam0)//Position - 0xB073
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_11.f_2)))
	{
		func_11(&(uParam0->f_11.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_11.f_2));
	}
	if (!iLocal_1700)
	{
		if (fVar0 > 1f)
		{
			iLocal_1700 = 1;
		}
	}
	if (!iLocal_1701)
	{
		if (fVar0 > 4.25f)
		{
			unk_0x29CD142125FE177B(uParam0->f_11, "TRANSITION_OUT");
			unk_0xD44E04EBBDC4CE88(0.5f);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_1701 = 1;
		}
	}
	unk_0x4B6031094354FED6(uParam0->f_11, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_11.f_2));
		iLocal_1700 = 0;
		iLocal_1701 = 0;
		return 1;
	}
	return 0;
}

void func_240(var uParam0)//Position - 0xB114
{
	char* sVar0;
	
	sVar0 = func_241(2);
	unk_0x29CD142125FE177B(uParam0->f_11, "RESET_MOVIE");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_11, sVar0);
	unk_0x57016C44F10111F0("STRING");
	unk_0xC9C304D0AABE1335("SPR_UI_PASS");
	unk_0x64989E60CF560CA1();
	unk_0x57016C44F10111F0(&(Local_45.f_18[Local_45.f_A /*8*/]));
	unk_0x64989E60CF560CA1();
	unk_0xD44E04EBBDC4CE88(100f);
	unk_0x5E5DBD0A6623969E(true);
	unk_0xF9FBC2F3F73D94C9();
	uParam0->f_11.f_1 = 5000;
	func_4(&(uParam0->f_11.f_2));
	iLocal_1700 = 0;
	iLocal_1701 = 0;
}

char* func_241(int iParam0)//Position - 0xB192
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_242(bool bParam0)//Position - 0xB20D
{
	char* sVar0;
	
	unk_0xCB8EEC006EBFC1E7(0);
	switch (func_163())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xC432586F5C2E5AA5(sVar0);
}

void func_243(int iParam0, vector3 vParam1)//Position - 0xB280
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!unk_0xEF0E25DA0CB6E8FF(iParam0))
	{
		return;
	}
	if (!unk_0xEDEA6C8F42EE05F6(iParam0))
	{
		return;
	}
	vVar1 = { unk_0x0311C47C0F630BCF(iParam0, 2) };
	vVar2 = { unk_0x4BE5AF1A5ACF14E5(iParam0) };
	vVar3 = { func_8(vVar1.x, vVar1.y, (vVar1.z + 90f)) };
	vVar4 = { vParam1 - vVar2 };
	vVar4 = { func_96(vVar4) };
	fVar5 = unk_0xE8CFCB6B2165523B((vParam1.z - vVar2.z), unk_0xF0F2FC9DE291567F(vParam1, vVar2, false));
	fVar6 = unk_0xFDC254CE02DB0919((vParam1.x - vVar2.x), (vParam1.y - vVar2.y));
	fVar6 = func_245(fVar6, -180f, 180f);
	fVar0 = func_95(func_8(fVar5, vVar1.y, vVar1.z), vVar3);
	fVar7 = (fVar5 - vVar1.x);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (vVar1.x + fVar7);
	if ((bLocal_1928 && fVar5 > vVar1.x) || (!bLocal_1928 && fVar5 < vVar1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1925 = (fLocal_1925 * 0.9f);
		vVar1.x = func_244(vVar1.x, fVar5, fLocal_1925);
	}
	fVar8 = (fVar6 - vVar1.z);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (vVar1.z + fVar8);
	if ((bLocal_1927 && (vVar1.z - fVar6) < 0f) || (!bLocal_1927 && (vVar1.z - fVar6) > 0f))
	{
		if (!bLocal_1927 && (vVar1.z - fVar6) > 0f)
		{
		}
		else if (bLocal_1927 && (vVar1.z - fVar6) < 0f)
		{
		}
		fLocal_1926 = (fLocal_1926 * 0.9f);
		vVar1.z = func_244(vVar1.z, fVar6, fLocal_1926);
	}
	unk_0x3553F2A72957724E(iParam0, vVar1, 2);
}

float func_244(float fParam0, float fParam1, float fParam2)//Position - 0xB496
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_245(float fParam0, float fParam1, float fParam2)//Position - 0xB4AB
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

int func_246(int iParam0, float fParam1)//Position - 0xB4ED
{
	if (func_2(iParam0, fParam1))
	{
		func_4(iParam0);
		return 1;
	}
	return 0;
}

void func_247(int iParam0)//Position - 0xB50B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	
	unk_0x14C662D0A4B959CE(unk_0xBC25C936A095B5BA(), &vVar0, &uVar6, &uVar6, &vVar1);
	vVar5 = { unk_0x0311C47C0F630BCF(iParam0, 2) };
	vVar4 = { unk_0x4BE5AF1A5ACF14E5(iParam0) };
	vVar2 = { func_8((vVar5.x + 90f), vVar5.y, vVar5.z) };
	vVar3 = { func_8(vVar5.x, vVar5.y, (vVar5.z + 90f)) };
	fLocal_1925 = 0.2f;
	fLocal_1926 = 0.5f;
	vVar7 = { unk_0x4BE5AF1A5ACF14E5(iParam0) - vVar1 };
	vVar8 = { vVar1 + FtoV(func_95(vVar7, vVar0)) * vVar0 };
	if (vVar8.z > vVar4.z)
	{
		bLocal_1928 = true;
	}
	else
	{
		bLocal_1928 = false;
	}
	fVar9 = func_95(vVar8, vVar2);
	fVar10 = func_95(vVar8, vVar3);
	if (fVar9 < 0f)
	{
		bLocal_1927 = true;
	}
	else
	{
		bLocal_1927 = false;
	}
}

float func_248()//Position - 0xB5E7
{
	switch (Local_45.f_A)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_249()//Position - 0xB64E
{
	switch (Local_45.f_A)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_250()//Position - 0xB6E1
{
	unk_0x13D5880CBA449AA9();
	if (unk_0x4EF7F52E5396B43C(iLocal_1968))
	{
		unk_0xFD35AC7E0C27D42B(iLocal_1968);
	}
}

void func_251()//Position - 0xB6FE
{
	unk_0x2423B13D9CFAD1DD();
	func_252();
}

void func_252()//Position - 0xB70E
{
	Global_4336.f_86 = 1;
}

void func_253(int iParam0)//Position - 0xB71C
{
	if (Global_8C41 == 9 || Global_8C41 == 10)
	{
		Global_195BE = iParam0;
	}
	else
	{
		Global_195BE = 0;
	}
}

void func_254(bool bParam0)//Position - 0xB747
{
	unk_0x4AED68BFACFB14CB(!bParam0);
}

void func_255()//Position - 0xB756
{
	func_256();
	unk_0x4AED68BFACFB14CB(true);
}

void func_256()//Position - 0xB767
{
	Local_1961 = 0;
	Local_1961.f_1 = 0;
	Local_1961.f_2 = { 0f, 0f, 0f };
	Local_1961.f_6 = 0;
	Local_1961.f_5 = 0f;
}

bool func_257(char* sParam0, int iParam1, char* sParam2)//Position - 0xB78F
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_258(var uParam0, bool bParam1)//Position - 0xB7AD
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 16);
	}
	else
	{
		func_153(&(uParam0->f_1), 16);
	}
}

int func_259(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB7D1
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_260(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB89A
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4B4A22319BB70CD6("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 32);
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		func_154(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xAD45B3B464AA7C2E(*uParam0, 1);
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (bParam3)
		{
			func_154(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_154(&(uParam0->f_1), 8192);
	}
}

void func_261(var uParam0)//Position - 0xB914
{
	func_262(uParam0);
	SYSTEM::SETTIMERA(0);
	func_234(1, 0);
	func_16();
}

void func_262(var uParam0)//Position - 0xB932
{
	func_299(&(uParam0->f_74F));
	func_277(&(uParam0->f_74F.f_2E5));
	func_263(&(uParam0->f_74F));
}

void func_263(var uParam0)//Position - 0xB958
{
	func_276(&(uParam0->f_13C[0 /*2*/]), 254f, 74f, 1);
	func_276(&(uParam0->f_13C[1 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 127f, 1);
	func_276(&(uParam0->f_13C[2 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 297f, 1);
	func_276(&(uParam0->f_13C[3 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 324f, 1);
	func_276(&(uParam0->f_13C[4 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 351f, 1);
	func_276(&(uParam0->f_13C[5 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 378f, 1);
	func_276(&(uParam0->f_13C[6 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 405f, 1);
	func_276(&(uParam0->f_13C[11 /*2*/]), 257f, 297f, 1);
	func_276(&(uParam0->f_13C[12 /*2*/]), 257f, 324f, 1);
	func_276(&(uParam0->f_13C[13 /*2*/]), 257f, 351f, 1);
	func_276(&(uParam0->f_13C[14 /*2*/]), 257f, 378f, 1);
	func_276(&(uParam0->f_13C[15 /*2*/]), 257f, 405f, 1);
	func_276(&(uParam0->f_13C[18 /*2*/]), 298f, 567f, 1);
	func_276(&(uParam0->f_13C[17 /*2*/]), 384f, 567f, 1);
	func_276(&(uParam0->f_13C[16 /*2*/]), 470f, 567f, 1);
	func_272(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_271(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_272(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_271(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_271(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_271(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_271(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_271(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_266(&(uParam0->f_1A4[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_265(&(uParam0->f_1A4[1 /*8*/]), 70, 70, 130, 255);
	func_266(&(uParam0->f_1A4[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_265(&(uParam0->f_1A4[0 /*8*/]), 255, 255, 255, 255);
	func_266(&(uParam0->f_1A4[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_264(&(uParam0->f_1A4[2 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[3 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[4 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[5 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[6 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[7 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_264(&(uParam0->f_1A4[8 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_264(&(uParam0->f_1A4[11 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_264(&(uParam0->f_1A4[12 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_264(&(uParam0->f_1A4[13 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_264(&(uParam0->f_1A4[14 /*8*/]), 107, 1);
	func_266(&(uParam0->f_1A4[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_264(&(uParam0->f_1A4[15 /*8*/]), 108, 1);
	func_266(&(uParam0->f_1A4[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_264(&(uParam0->f_1A4[16 /*8*/]), 109, 1);
	uParam0->f_3DA = 1;
}

void func_264(var uParam0, int iParam1, bool bParam2)//Position - 0xBF08
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xE45648BDBF3441F5(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBF3B
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_266(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xBF5B
{
	func_270(uParam0, fParam3, fParam4);
	func_267(uParam0, fParam1, fParam2, bParam5);
}

void func_267(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xBF79
{
	*uParam0 = func_269(fParam1, 1280);
	uParam0->f_1 = func_268(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_268(float fParam0, int iParam1)//Position - 0xBFBB
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x7A569F3885B2E08A(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_269(float fParam0, int iParam1)//Position - 0xBFD7
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x7A569F3885B2E08A(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_270(var uParam0, float fParam1, float fParam2)//Position - 0xBFF3
{
	uParam0->f_2 = func_269(fParam1, 1280);
	uParam0->f_3 = func_268(fParam2, 720);
}

void func_271(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC018
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_272(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xC038
{
	func_274(fParam0, fParam3, fParam4);
	func_273(fParam0, fParam1, fParam2, bParam5);
}

void func_273(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xC056
{
	*uParam0 = func_269(fParam1, 1280);
	uParam0->f_1 = func_268(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_274(var uParam0, float fParam1, float fParam2)//Position - 0xC098
{
	uParam0->f_2 = func_269(fParam1, 1280);
	uParam0->f_3 = func_268(fParam2, 720);
}

float func_275(float fParam0, int iParam1, bool bParam2)//Position - 0xC0BA
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x7A569F3885B2E08A(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_276(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xC0EC
{
	*uParam0 = func_269(fParam1, 1280);
	uParam0->f_1 = func_268(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_277(var uParam0)//Position - 0xC113
{
	func_298(uParam0, 0);
	func_297(&(uParam0->f_B), 0);
	func_296(&(uParam0->f_42), 0);
	func_295(&(uParam0->f_4D), 0);
	func_294(&(uParam0->f_21), 0);
	func_293(&(uParam0->f_2C), 0);
	func_292(&(uParam0->f_37), 0);
	func_291(&(uParam0->f_8F), 0);
	func_290(&(uParam0->f_16), 0);
	func_289(&(uParam0->f_9A), 0);
	func_288(&(uParam0->f_58), 0, 0);
	func_287(&(uParam0->f_63), 0, 5);
	func_286(&(uParam0->f_6E), 0);
	func_285(&(uParam0->f_79), 0);
	func_284(&(uParam0->f_84), 0);
	func_283(&(uParam0->f_A5), 0);
	func_282(&(uParam0->f_B0), 0);
	func_281(&(uParam0->f_BB), 0);
	func_280(&(uParam0->f_C6), 0);
	func_279(&(uParam0->f_D1), 0);
	func_278(&(uParam0->f_DC), 0);
}

void func_278(var uParam0, int iParam1)//Position - 0xC1D8
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 29;
}

void func_279(var uParam0, int iParam1)//Position - 0xC221
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 28;
}

void func_280(var uParam0, int iParam1)//Position - 0xC26A
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 27;
}

void func_281(var uParam0, int iParam1)//Position - 0xC2B3
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 26;
}

void func_282(var uParam0, int iParam1)//Position - 0xC2FC
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 25;
}

void func_283(var uParam0, int iParam1)//Position - 0xC345
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 24;
}

void func_284(var uParam0, int iParam1)//Position - 0xC391
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 15;
}

void func_285(var uParam0, int iParam1)//Position - 0xC3E3
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 13;
}

void func_286(var uParam0, int iParam1)//Position - 0xC435
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 12;
}

void func_287(var uParam0, int iParam1, int iParam2)//Position - 0xC48D
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 10;
}

void func_288(var uParam0, int iParam1, int iParam2)//Position - 0xC4E0
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 9;
}

void func_289(var uParam0, int iParam1)//Position - 0xC551
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 23;
}

void func_290(var uParam0, int iParam1)//Position - 0xC59D
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 2;
}

void func_291(var uParam0, int iParam1)//Position - 0xC5E8
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 22;
}

void func_292(var uParam0, int iParam1)//Position - 0xC634
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 5;
}

void func_293(var uParam0, int iParam1)//Position - 0xC67F
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 4;
}

void func_294(var uParam0, int iParam1)//Position - 0xC6CA
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 3;
}

void func_295(var uParam0, int iParam1)//Position - 0xC715
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 8;
}

void func_296(var uParam0, int iParam1)//Position - 0xC761
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 7;
}

void func_297(var uParam0, int iParam1)//Position - 0xC7AC
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 1;
}

void func_298(var uParam0, int iParam1)//Position - 0xC7F7
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0;
}

void func_299(var uParam0)//Position - 0xC842
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_300(char* sParam0, int iParam1)//Position - 0xC8AD
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_301(int iParam0)//Position - 0xC8C4
{
	func_306();
	switch (iLocal_1967)
	{
		case 0:
			func_10(iParam0);
			func_305(&iLocal_1962, 3);
			iLocal_1967 = 1;
			break;
		
		case 1:
			if (func_2(iParam0, 1f))
			{
				func_302(&iLocal_1962, 1, 0, 1, 3, 1, 0, 0);
				iLocal_1967 = 2;
			}
			break;
		
		case 2:
			if (func_302(&iLocal_1962, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_302(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC93C
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_304(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x996AC9A66B2A5A3F(1);
	unk_0x65E432C782E7E702(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_359(uParam0->f_1, 1))
					{
						func_331(&(uParam0->f_1), 8);
						unk_0xE45648BDBF3441F5(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x29CD142125FE177B(*uParam0, "SET_MESSAGE");
						func_156("CNTDWN_GO");
						unk_0x1E1FB49121565EB6(iVar5);
						unk_0x1E1FB49121565EB6(iVar6);
						unk_0x1E1FB49121565EB6(iVar7);
						unk_0x5E5DBD0A6623969E(true);
						unk_0xF9FBC2F3F73D94C9();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_359(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_359(uParam0->f_1, 1))
		{
			func_331(&(uParam0->f_1), 1);
			unk_0xC4BA30B532FE260F(-1, sVar0, sVar2, true);
			func_305(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_359(uParam0->f_1, 2))
		{
			func_331(&(uParam0->f_1), 2);
			unk_0xC4BA30B532FE260F(-1, sVar0, sVar2, true);
			func_305(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_359(uParam0->f_1, 4))
		{
			func_331(&(uParam0->f_1), 4);
			unk_0xC4BA30B532FE260F(-1, sVar0, sVar2, true);
			func_305(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_359(uParam0->f_1, 16))
		{
			if (unk_0x357058E632979E65((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_331(&(uParam0->f_1), 16);
					unk_0xC4BA30B532FE260F(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !func_359(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0xC4BA30B532FE260F(-1, sVar1, sVar2, true);
			}
			func_331(&(uParam0->f_1), 8);
			unk_0xE45648BDBF3441F5(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x29CD142125FE177B(*uParam0, "SET_MESSAGE");
			func_156("CNTDWN_GO");
			unk_0x1E1FB49121565EB6(iVar11);
			unk_0x1E1FB49121565EB6(iVar12);
			unk_0x1E1FB49121565EB6(iVar13);
			unk_0x5E5DBD0A6623969E(true);
			unk_0xF9FBC2F3F73D94C9();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_303()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_303()//Position - 0xCC5C
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x8FCEEB789599BD9B(0, 18) || unk_0x8FCEEB789599BD9B(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_304(int iParam0, bool bParam1)//Position - 0xCC8E
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(iParam0, 4);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(iParam0, 4);
	}
	if (unk_0xFA30DFD0084E92FE(*iParam0, 4))
	{
	}
}

void func_305(var uParam0, int iParam1)//Position - 0xCCBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x29CD142125FE177B(*uParam0, "SET_MESSAGE");
	unk_0x449F0674640D94C0(-1);
	unk_0x57016C44F10111F0("NUMBER");
	unk_0xAA5C5BF0489E5553(unk_0xC40EDFF7541407A8(iParam1));
	unk_0x64989E60CF560CA1();
	unk_0x1E1FB49121565EB6(iVar0);
	unk_0x1E1FB49121565EB6(iVar1);
	unk_0x1E1FB49121565EB6(iVar2);
	unk_0x5E5DBD0A6623969E(true);
	unk_0xF9FBC2F3F73D94C9();
}

void func_306()//Position - 0xCD12
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_1973A;
	func_307(Var0, 0, 0, 0, 0, iVar1);
}

void func_307(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCD2E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_11640 != 6)
	{
		if (Global_11642 == -1)
		{
			if (func_321(1, Param0))
			{
				if (Global_11643 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_11642 = unk_0x105601648511CC64();
					vLocal_30 = { unk_0xF24CFCD50F696B24(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + unk_0x11F9F9006143871A());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_321(0, Param0))
			{
				Global_11642 = (unk_0x105601648511CC64() - 9000);
			}
			unk_0x4E0EC60D119222B1(7);
			unk_0x4E0EC60D119222B1(6);
			unk_0x4E0EC60D119222B1(8);
			unk_0x4E0EC60D119222B1(9);
			iVar1 = (unk_0x105601648511CC64() - Global_11642);
			if (iVar1 < 9000 && !unk_0x17FAADF9916EF741())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_11640)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				unk_0xC2EAD30963BDAA47(82, 66);
				unk_0xC8793973D4960AC4(1);
				unk_0x567A3300A78B3D65(2);
				iVar11 = func_163();
				if (Global_11643 == 1 && Global_11641 == 62)
				{
					iVar11 = Global_19B04.f_932.f_21B.f_10CE;
				}
				switch (iVar11)
				{
					case 0:
						unk_0xE45648BDBF3441F5(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0xE45648BDBF3441F5(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0xE45648BDBF3441F5(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0xCC4FE6A016BA0765(iVar7, iVar8, iVar9, iVar2);
				unk_0x35651880D804F42B();
				Var4 = { func_310(Global_11641, Global_11643, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0xF6A6FFB73848BF82(fVar5, fVar6, 0f, 0.01f);
				unk_0xB8F3C51875F7BEA3(0.67f, 0.67f);
				if (!unk_0x877E3741B282A35F() && !unk_0xC558637882D21203())
				{
					fLocal_32 = 0.14f;
				}
				else
				{
					fLocal_32 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_309(&Var4) > fLocal_32)
					{
						if (unk_0xB6AACEDA0127F076(15))
						{
							unk_0x6DB77F071B43C870(15, vLocal_30.x, (vLocal_30.y + fLocal_31));
							Global_11645 = 1;
						}
					}
				}
				unk_0x8B371195127AACF2(&Var4);
				unk_0x3A8B9C7B1C825123(fVar5, fVar6, 0);
				unk_0x2A025E7CEBB76D14();
				if (Global_11644 == 1)
				{
					func_308();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_308();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_308()//Position - 0xD013
{
	if (Global_11640 != 6)
	{
	}
	if (Global_11645)
	{
		unk_0xC0404835F30391BB(15);
		Global_11645 = 0;
		Global_43C1.f_1EFB = 0;
	}
	Global_11640 = 6;
	Global_11642 = -1;
	Global_11641 = -1;
}

float func_309(char* sParam0)//Position - 0xD04B
{
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

struct<2> func_310(int iParam0, int iParam1, int iParam2)//Position - 0xD05E
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_320(iParam0) };
			break;
		
		case 7:
			Var0 = { func_318(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_317(iParam2) };
					break;
				
				case 8:
					Var0 = { func_316(iParam2) };
					break;
				
				case 7:
					Var0 = { func_315(iParam2) };
					break;
				
				case 10:
					Var0 = { func_314(iParam2) };
					break;
				
				case 5:
					Var0 = { func_313(iParam2) };
					break;
				
				case 4:
					Var0 = { func_312(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_311(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_311(int iParam0)//Position - 0xD135
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_312(int iParam0)//Position - 0xD288
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_313(int iParam0)//Position - 0xD2BC
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_314(int iParam0)//Position - 0xD2F0
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_315(int iParam0)//Position - 0xD324
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)//Position - 0xD358
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xF1734B55490E9045(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)//Position - 0xD396
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_318(int iParam0)//Position - 0xD3CA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_319(iParam0) };
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

struct<2> func_319(int iParam0)//Position - 0xD402
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

struct<2> func_320(int iParam0)//Position - 0xD84F
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_147B0[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_19B04.f_2360.f_63.f_CD[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_321(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xD8B8
{
	if (((!func_323(0) || Global_1164F) || Global_11644 == 1) || !unk_0x726D9204B160D23E())
	{
		return 0;
	}
	switch (Global_11640)
	{
		case 0:
			if (unk_0x3362CDE8460ED38B(&uParam1, "NONE") || unk_0xF1734B55490E9045(&uParam1))
			{
				Global_11640 = 3;
			}
			else
			{
				Global_11640 = 1;
			}
			break;
		
		case 1:
			if (unk_0xDC9E16E99286F31D())
			{
				Global_11640 = 2;
			}
			break;
		
		case 2:
			if (unk_0x866EAD7E27D8D0F8())
			{
				Global_11640 = 4;
				return 1;
			}
			else if (!unk_0x102F1A3BD4B68933())
			{
				Global_11640 = 3;
			}
			break;
		
		case 3:
			if (unk_0x866EAD7E27D8D0F8())
			{
			}
			else
			{
				Global_11640 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x866EAD7E27D8D0F8())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_11640 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x866EAD7E27D8D0F8() || func_141(0)) || func_322(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_322(bool bParam0)//Position - 0xD9D0
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_323(int iParam0)//Position - 0xD9F9
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_324(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_324(int iParam0)//Position - 0xDA1B
{
	return func_325(iParam0, Global_8C41);
}

int func_325(int iParam0, int iParam1)//Position - 0xDA2C
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_326(var uParam0)//Position - 0xDC0D
{
	char cVar0[16];
	int iVar1;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_45.f_A + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_166[0 /*189*/].f_F = 0f;
	iLocal_1754 = 0;
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (Local_45 == 0)
	{
		unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&iLocal_2057);
	iVar1 = 0;
	while (iVar1 < uParam0->f_D)
	{
		func_327(&(uParam0->f_166[iVar1 /*189*/]));
		if (Local_45 != 1)
		{
			if (iVar1 != 0)
			{
				func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2065)
		{
			if (iVar1 > 0)
			{
				if (!unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar1 /*189*/].f_8, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_166[iVar1 /*189*/].f_9, 0))
				{
					if (iVar1 == 1 && Local_45.f_A == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0xEB469C5B92ADC7B0(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0x2D175DF90F6F05C3(uParam0->f_166[iVar1 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar1 != 0)
		{
			func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (unk_0xE59B7F5A03335350(uParam0->f_166[0 /*189*/].f_9, 0))
	{
		unk_0x4E87F356DA56EB3F(uParam0->f_166[0 /*189*/].f_9, true);
		if (!unk_0xF1734B55490E9045(sLocal_1924))
		{
			unk_0x4F9069EB2310944B(sLocal_1924);
			unk_0x004811915F93A42D(uParam0->f_166[0 /*189*/].f_9, sLocal_1924);
		}
	}
}

void func_327(var uParam0)//Position - 0xDDF2
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_8, 0))
		{
			if (unk_0xB34E411B0A4BF096(uParam0->f_9))
			{
				unk_0xD87F0F9CDF39238A(uParam0->f_9);
			}
			unk_0x2E35C4FA5F0ED22F(uParam0->f_8, true);
		}
	}
	uParam0->f_B = 0;
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0))
	{
		if (!unk_0x7512ED01F3F46714(uParam0->f_16))
		{
			unk_0x2D655AA68FA1736B(uParam0->f_9, true, true, 0);
		}
	}
}

int func_328()//Position - 0xDE59
{
	return unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
}

void func_329(var uParam0)//Position - 0xDE69
{
	uParam0->f_C = uParam0->f_C;
}

void func_330(var uParam0)//Position - 0xDE79
{
	int iVar0;
	
	if (unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_108(&(uParam0->f_166[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_331(int iParam0, int iParam1)//Position - 0xDEC0
{
	func_60(iParam0, iParam1);
}

int func_332(var uParam0, int iParam1, bool bParam2)//Position - 0xDED0
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (uParam0->f_C - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1.2f;
	if (!bParam2)
	{
		fVar2 = 0.7f;
	}
	if (!func_338(&(uParam0->f_1B[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_C))
	{
		return 0;
	}
	if (bParam2)
	{
		vVar3 = { uParam0->f_1B[iParam1 /*10*/] };
		vVar4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_C - 1))
		{
			if (!func_73(uParam0->f_1B[iParam1 /*10*/], uParam0->f_1B[iParam1 + 1 /*10*/], 1056964608, 0))
			{
				vVar3 = { uParam0->f_1B[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_45 == 1)
		{
			if (Local_45.f_A == 1)
			{
				if (func_359(uParam0->f_1B[8 /*10*/].f_9, 4))
				{
					func_357(&(uParam0->f_1B[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			vVar4 = { uParam0->f_1B[(iParam1 - 1) /*10*/] };
		}
		if (!func_333(vVar4, &(uParam0->f_1B[iParam1 /*10*/]), vVar3, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_C)
		{
			if (iParam1 + 2 >= 33)
			{
				vVar0 = { uParam0->f_1B[0 /*10*/] };
			}
			else
			{
				vVar0 = { uParam0->f_1B[iParam1 + 2 /*10*/] };
			}
			if (!func_333(uParam0->f_1B[iParam1 /*10*/], &(uParam0->f_1B[iParam1 + 1 /*10*/]), vVar0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_333(vector3 vParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0xE04F
{
	if (!func_334(vParam0, uParam1, vParam2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_334(vector3 vParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0xE070
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	vParam0 = { vParam0 };
	func_80(&(uParam1->f_6));
	if (uParam1->f_7 == 2)
	{
		iVar0 = func_336(uParam1->f_7, vParam0, *uParam1, vParam2);
		func_578(func_579(func_92()), &iVar1, &iVar2, &iVar3, &uVar4);
		uParam1->f_6 = unk_0x36B796513B03DD2D(iVar0, *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
	}
	else if (uParam1->f_7 == 3)
	{
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			func_578(func_579(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0x36B796513B03DD2D(func_335(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
		else if (uParam1->f_8 == 1)
		{
			func_578(func_579(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0x36B796513B03DD2D(func_335(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
	}
	else
	{
		uParam1->f_6 = unk_0x36B796513B03DD2D(func_335(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, 254, 207, 12, func_91(*uParam1, 25, 200), 0);
	}
	if (uParam1->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_335(int iParam0, int iParam1)//Position - 0xE1CD
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}

int func_336(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xE298
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0)
	{
		iVar6 = 5;
		iVar7 = 6;
		iVar8 = 7;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 10;
		iVar7 = 11;
		iVar8 = 12;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 25;
		iVar7 = 26;
		iVar8 = 27;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 30;
		iVar7 = 31;
		iVar8 = 32;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 20;
		iVar7 = 21;
		iVar8 = 22;
	}
	if (!func_337(vParam1, 0f, 0f, 0f, 0))
	{
		vVar0 = { vParam1 - vParam2 };
		vVar1 = { vParam3 - vParam2 };
		fVar2 = unk_0x77211CE25DED4FDB(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

bool func_337(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xE398
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_338(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0xE3DF
{
	if (!func_339(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_339(int iParam0, vector3 vParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE408
{
	func_83(iParam0);
	*iParam0 = unk_0x390CF6C8AD6903B7(vParam1);
	if (!unk_0x2DA8CA50A72528FB(*iParam0))
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		unk_0xBF0E22F3E083C33D(*iParam0, iParam2);
	}
	unk_0x3F5F1772D71D5EC4(*iParam0, fParam3);
	unk_0x2E9308F22ABD4DF5(*iParam0, 4);
	if (iParam6 == 2 || iParam6 == 3)
	{
		unk_0x0D5352939CC40C16(*iParam0, 2);
	}
	if (iParam6 == 1)
	{
		unk_0x0D5352939CC40C16(*iParam0, 3);
	}
	if (iParam4 == (iParam5 - 1))
	{
		unk_0xB53F9D0C08974999("GATEBLIPFIN");
		unk_0x2E02627BEA5751E0(*iParam0);
	}
	else
	{
		if (iParam6 == 1)
		{
			unk_0xB53F9D0C08974999("GATEBLIPINV");
		}
		else if (iParam6 == 2 || iParam6 == 3)
		{
			unk_0xB53F9D0C08974999("GATEBLIPKNF");
		}
		else
		{
			unk_0xB53F9D0C08974999("GATEBLIPDEF");
		}
		unk_0x2E02627BEA5751E0(*iParam0);
	}
	return 1;
}

void func_340(char* sParam0, int iParam1, int iParam2)//Position - 0xE4CF
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 0);
}

int func_341(var uParam0)//Position - 0xE4E8
{
	switch (uParam0->f_19)
	{
		case 0:
			func_137(1);
			unk_0x8AA3F48A15444B98("MPHUD", false);
			Local_45.f_76 = func_354();
			switch (Local_45)
			{
				case 0:
					unk_0x8AA3F48A15444B98("SPRRaces", false);
					unk_0x8AA3F48A15444B98("MPMedals_FEED", false);
					break;
				
				case 1:
					unk_0x8AA3F48A15444B98("SPROffroad", false);
					break;
				
				case 2:
					unk_0x8AA3F48A15444B98("Triathlon", false);
					unk_0x8AA3F48A15444B98("MPMedals_FEED", false);
					break;
			}
			uParam0->f_19 = 1;
			break;
		
		case 1:
			func_349(uParam0);
			uParam0->f_19 = 2;
			break;
		
		case 2:
			if (func_344(uParam0))
			{
				if (unk_0x499783D01578C2D2("MPHUD"))
				{
					if (unk_0xA7F138B5B1AB2CF6(Local_45.f_76))
					{
						switch (Local_45)
						{
							case 0:
								if (unk_0x499783D01578C2D2("SPRRaces") && unk_0x499783D01578C2D2("MPMedals_FEED"))
								{
									uParam0->f_19 = 3;
								}
								break;
							
							case 1:
								if (unk_0x499783D01578C2D2("SPROffroad"))
								{
									uParam0->f_19 = 3;
								}
								break;
							
							case 2:
								if (unk_0x499783D01578C2D2("Triathlon") && unk_0x499783D01578C2D2("MPMedals_FEED"))
								{
									uParam0->f_19 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			if (Local_45.f_A == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_342(uParam0);
			}
			uParam0->f_19 = 4;
			break;
		
		case 4:
			if (Local_45.f_A == 0)
			{
				return 0;
			}
			else
			{
				if (unk_0x724D816EA203A79E(uParam0->f_166[0 /*189*/].f_9))
				{
					unk_0x346478B12F69D4E3(uParam0->f_166[0 /*189*/].f_9, true);
				}
				if (!unk_0x719413B40BB63D86())
				{
					unk_0xAEF1F12C42859E39(uParam0->f_166[0 /*189*/].f_10);
					unk_0x5C4048C4641BDB16(uParam0->f_166[0 /*189*/].f_10, unk_0xF90427F311003E57(uParam0->f_166[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0xF220370B0C08EC20())
				{
					unk_0x13D5880CBA449AA9();
					if (unk_0x724D816EA203A79E(uParam0->f_166[0 /*189*/].f_9))
					{
						unk_0x346478B12F69D4E3(uParam0->f_166[0 /*189*/].f_9, false);
					}
					func_330(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_342(var uParam0)//Position - 0xE70C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (!func_343(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_343(var uParam0, int iParam1)//Position - 0xE73D
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_133(&(uParam0->f_166[iParam1 /*189*/]), 1);
	}
	return func_133(&(uParam0->f_166[iParam1 /*189*/]), 0);
}

int func_344(var uParam0)//Position - 0xE782
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		if (!func_345(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_345(var uParam0, int iParam1)//Position - 0xE7B3
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_346(&(uParam0->f_166[iParam1 /*189*/]));
}

int func_346(var uParam0)//Position - 0xE7DD
{
	if (!func_348(uParam0) || !func_347(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_347(var uParam0)//Position - 0xE801
{
	if (uParam0->f_16 == 0)
	{
		return 1;
	}
	return unk_0xD6513D668481290A(uParam0->f_16);
}

bool func_348(var uParam0)//Position - 0xE81D
{
	if (uParam0->f_15 == 0)
	{
		return 0;
	}
	return unk_0xD6513D668481290A(uParam0->f_15);
}

void func_349(var uParam0)//Position - 0xE839
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_350(uParam0, iVar0);
		iVar0++;
	}
}

void func_350(var uParam0, int iParam1)//Position - 0xE85E
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_351(&(uParam0->f_166[iParam1 /*189*/]));
}

void func_351(var uParam0)//Position - 0xE887
{
	func_353(uParam0);
	func_352(uParam0);
}

void func_352(var uParam0)//Position - 0xE89B
{
	if (uParam0->f_16 == 0)
	{
		return;
	}
	unk_0xF243B7A14FCFD0F4(uParam0->f_16);
}

void func_353(var uParam0)//Position - 0xE8B6
{
	if (uParam0->f_15 == 0)
	{
		return;
	}
	unk_0xF243B7A14FCFD0F4(uParam0->f_15);
}

int func_354()//Position - 0xE8D1
{
	return unk_0x9934FEFB3B8C6DB8("SC_LEADERBOARD");
}

int func_355(int iParam0)//Position - 0xE8E1
{
	if (unk_0x726D9204B160D23E())
	{
		unk_0x7A41D32A383895D8(iParam0);
	}
	else if (unk_0x17FAADF9916EF741())
	{
		return 1;
	}
	return 0;
}

void func_356()//Position - 0xE905
{
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_1738))
	{
		if (unk_0xEDEA6C8F42EE05F6(iLocal_1738))
		{
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0x348665177DBFB93B(iLocal_1738, false);
		}
		unk_0x4EC087603E1DEF9C(iLocal_1738, 0);
	}
}

void func_357(int iParam0, int iParam1)//Position - 0xE93D
{
	func_358(iParam0, iParam1);
}

void func_358(var uParam0, var uParam1)//Position - 0xE94D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_359(int iParam0, int iParam1)//Position - 0xE962
{
	return (iParam0 && iParam1) != 0;
}

void func_360(int iParam0)//Position - 0xE971
{
	if (!func_3(iParam0))
	{
		func_11(iParam0);
	}
}

void func_361()//Position - 0xE989
{
	func_362(&uLocal_1242);
}

void func_362(var uParam0)//Position - 0xE998
{
	if (uParam0->f_4 != 0)
	{
		func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_428(uParam0);
		func_367(uParam0);
		func_366(&Global_1C1269);
	}
	if (Global_1C017E.f_A94 != 0 || Global_1C017E.f_C70)
	{
		func_364();
	}
	if (unk_0x144E80F5C46A6B75("LEADERBOARD_SCENE"))
	{
		unk_0xC1300D0F3A74E20B("LEADERBOARD_SCENE");
	}
	if (unk_0x57D316754A262B34())
	{
		func_363(&(Global_1C171A.f_31));
	}
	Global_267214.f_F71 = 0;
}

void func_363(var uParam0)//Position - 0xEA39
{
	uParam0->f_1 = 0;
}

void func_364()//Position - 0xEA46
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C017E[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C017E.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_A94 = 0;
	Global_1C017E.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C017E.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C017E.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C017E.f_AC2[iVar0] = 0;
		Global_1C017E.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_AD0 = 0;
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_AD3[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_ADB = 0;
	func_365(&(Global_1C017E.f_ADC));
	func_363(&(Global_1C017E.f_B07));
	Global_1C017E.f_B09 = -1;
	Global_1C017E.f_B0A = 0;
	func_363(&(Global_1C017E.f_B0B));
	Global_1C017E.f_B0D = 0;
	func_363(&(Global_1C017E.f_B0E));
	Global_1C017E.f_B10 = 0;
	Global_1C017E.f_ADC.f_1C = 0;
	Global_1C017E.f_ADC.f_1B = 0;
	Global_1C017E.f_C70 = 0;
}

void func_365(var uParam0)//Position - 0xEBB2
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_366(var uParam0)//Position - 0xEC0A
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_363(&(Global_1C017E.f_B0E));
}

void func_367(var uParam0)//Position - 0xECEC
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = -1;
	uParam0->f_F6.f_2 = 0;
	func_363(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = -1;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_368(var uParam0, var uParam1, var uParam2)//Position - 0xED74
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_363(&(Global_1C0000.f_1));
	unk_0xA94A29B5BBA15E49(*uParam2, uParam2->f_1, -1);
}

int func_369(var uParam0, var uParam1)//Position - 0xEDA0
{
	if (!func_420())
	{
		return 0;
	}
	if (func_414(&bLocal_190, uParam0))
	{
		if (iLocal_192 || bLocal_191)
		{
			UI::_SET_WARNING_MESSAGE_2("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1, 0);
			if (!*uParam1)
			{
				if (iLocal_192)
				{
					if (func_3(&iLocal_187))
					{
						if (func_246(&iLocal_187, SYSTEM::TO_FLOAT(0)))
						{
							iLocal_192 = 0;
							bLocal_191 = !bLocal_191;
						}
					}
					else
					{
						func_11(&iLocal_187);
					}
				}
				else
				{
					unk_0x4E0EC60D119222B1(9);
					unk_0x4E0EC60D119222B1(7);
					func_152(&(Local_45.f_77), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_374();
		}
		return 0;
	}
	if (bLocal_190)
	{
		func_373();
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x30034548191398D0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), true);
		}
	}
	else
	{
		Local_45.f_A = -1;
	}
	func_370();
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x30034548191398D0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), true);
	}
	return 1;
}

void func_370()//Position - 0xEE9C
{
	unk_0x7456702622C62EA0(1);
	unk_0x841D233D3CE81152(3, true);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	if (unk_0xF2E8BA66AD4CCC0E("MinigameTransitionIn"))
	{
		unk_0x1A058EB0D1ACEC78("MinigameTransitionIn");
	}
	unk_0x9216004FAC08D1DC("MinigameTransitionOut", 0, 0);
	iLocal_186 = 0;
	unk_0x121BBDEFA4F0C22B(0);
	func_137(0);
	func_371();
}

void func_371()//Position - 0xEEF1
{
	Global_394A = 0;
	func_372();
}

void func_372()//Position - 0xEF01
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_41AB = 0;
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_373()//Position - 0xEF25
{
	switch (Global_1973A)
	{
		case 0:
			Local_45.f_A = 0;
			break;
		
		case 1:
			Local_45.f_A = 1;
			break;
		
		case 2:
			Local_45.f_A = 2;
			break;
		
		case 3:
			Local_45.f_A = 3;
			break;
		
		case 4:
			Local_45.f_A = 4;
			break;
	}
}

void func_374()//Position - 0xEF7C
{
	unk_0xDE7B9CB38D019BF0();
	func_375(&uLocal_255);
}

void func_375(var uParam0)//Position - 0xEF8F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var6;
	int iVar7;
	struct<2> Var8;
	struct<11> Var9;
	struct<2> Var10;
	char cVar11[16];
	struct<2> Var12;
	struct<11> Var13;
	
	if (!bLocal_254)
	{
		if (!unk_0x8ACB0C3FACC09467())
		{
			unk_0x7183F4ED262032FF(1);
		}
	}
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(7);
	func_152(&(Local_45.f_77), 1128792064, 1, 0, 1, 1065353216);
	func_406("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_401(uParam0->f_1A4[0 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[1 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[2 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[3 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[4 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[5 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[6 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[7 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[8 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[6 /*8*/], 0, 0);
	unk_0x996AC9A66B2A5A3F(1);
	func_400(&(uParam0->f_2E5.f_A5));
	func_399(&(uParam0->f_13C[0 /*2*/]), &(uParam0->f_2E5.f_A5), "SPR_TITLE", 0);
	unk_0x996AC9A66B2A5A3F(4);
	func_397(&(uParam0->f_2E5.f_B0));
	func_396(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[0 /*8*/]), 0f, 0f);
	func_394(&(uParam0->f_13C[1 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_CHALLENGES", 1, 0);
	func_393(&(uParam0->f_2E5.f_B0));
	func_396(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[1 /*8*/]), 0f, 0f);
	func_394(&(uParam0->f_13C[2 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_INFO", 1, 0);
	func_393(&(uParam0->f_2E5.f_B0));
	func_396(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[5 /*8*/]), 0f, 0f);
	func_394(&(uParam0->f_13C[3 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_AWARD_TITLE", 1, 0);
	func_393(&(uParam0->f_2E5.f_B0));
	func_400(&(uParam0->f_2E5.f_C6));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_401(uParam0->f_1A4[16 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[17 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[18 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[19 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[20 /*8*/], 0, 0);
	func_401(uParam0->f_1A4[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var6 = { uParam0->f_13C[iVar2 /*2*/] };
			if (Global_19B04.f_4A46.f_6[iVar0] > 0f)
			{
				iLocal_196[iVar0] = SYSTEM::CEIL(Global_19B04.f_4A46.f_6[iVar0]);
			}
			else
			{
				iLocal_196[iVar0] = -1;
			}
			if (iVar0 == Global_1973A)
			{
				func_264(&(uParam0->f_1A4[iVar1 /*8*/]), 1, 1);
				func_401(uParam0->f_1A4[iVar1 /*8*/], 0, 0);
				func_397(&(uParam0->f_2E5.f_C6));
				switch (Global_19B04.f_4A46.f_C[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_19B04.f_4A46.f_6[iVar0] <= 0f)
							{
								func_272(&Var5, 269f, 0f, 32f, 32f, 0);
								func_271(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_13C[iVar2 /*2*/].f_1 + fLocal_198);
								Var6 = (Var5 + fLocal_197);
								if (!bLocal_254)
								{
									func_392(&Var5, 0);
								}
								func_391(&Var5, 1);
								func_406("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_254)
								{
									func_390(&Var6, &(uParam0->f_2E5.f_C6));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_1973A)
				{
					func_397(&(uParam0->f_2E5.f_C6));
				}
				func_393(&(uParam0->f_2E5.f_C6));
				func_399(&Var6, &(uParam0->f_2E5.f_C6), &(Local_45.f_18[iVar0 /*8*/]), 0);
				func_400(&(uParam0->f_2E5.f_C6));
				func_391(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_400(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_400(&(uParam0->f_2E5.f_C6));
				}
				func_400(&(uParam0->f_2E5.f_C6));
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_6A[iVar0] && iLocal_196[iVar0] > 1)
				{
					func_391(uParam0[iVar3 /*9*/], 1);
					func_391(uParam0[9 /*9*/], 1);
					func_406("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_399(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sGOLD", 0);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]) && IntToFloat(iLocal_196[iVar0]) > Local_45.f_6A[iVar0])
				{
					func_391(uParam0[iVar3 /*9*/], 1);
					func_391(uParam0[9 /*9*/], 1);
					func_406("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_399(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sSILVER", 0);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0] && IntToFloat(iLocal_196[iVar0]) > (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]))
				{
					func_391(uParam0[iVar3 /*9*/], 1);
					func_391(uParam0[9 /*9*/], 1);
					func_406("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_399(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sBRONZE", 0);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_196[iVar0]) > Local_45.f_70[iVar0] || iLocal_196[iVar0] == -1)
				{
					func_391(uParam0[iVar3 /*9*/], 1);
					func_391(uParam0[9 /*9*/], 1);
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_399(&(uParam0->f_13C[5 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0);
					unk_0x171A3CC6B0AA3874(0);
					func_406("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_389(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_6A[iVar0] && !iLocal_196[iVar0] == -1)
				{
					func_391(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]) && !iLocal_196[iVar0] == -1)
				{
					func_391(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0] && !iLocal_196[iVar0] == -1)
				{
					func_391(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_406("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_406("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_406("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_400(&(uParam0->f_2E5.f_C6));
				if (Global_19B04.f_4A46.f_6[Global_1973A] > 0f)
				{
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_384(&(uParam0->f_13C[9 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((Global_19B04.f_4A46.f_6[Global_1973A] * 1000f)), 6, "", 0, 1);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_399(&(uParam0->f_13C[9 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
				}
				func_399(&(uParam0->f_13C[6 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_RTIME", 0);
				if (Local_45.f_12[Global_1973A] > 0f)
				{
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_384(&(uParam0->f_13C[7 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((Local_45.f_12[Global_1973A] * 1000f)), 6, "", 0, 1);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
					func_400(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x171A3CC6B0AA3874(1);
					func_394(&(uParam0->f_13C[7 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0, 1);
					unk_0x171A3CC6B0AA3874(0);
					func_393(&(uParam0->f_2E5.f_C6));
					func_400(&(uParam0->f_2E5.f_C6));
				}
			}
			else
			{
				func_383(&(uParam0->f_1A4[iVar1 /*8*/]));
				func_264(&(uParam0->f_1A4[iVar1 /*8*/]), 117, 1);
				func_401(uParam0->f_1A4[iVar1 /*8*/], 0, 0);
				func_391(uParam0[iVar3 /*9*/], 1);
				switch (Global_19B04.f_4A46.f_C[iVar0 /*8*/].f_4)
				{
					case 0:
						func_391(uParam0[iVar3 /*9*/], 1);
						func_400(&(uParam0->f_2E5.f_C6));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_400(&(uParam0->f_2E5.f_C6));
							if (Global_19B04.f_4A46.f_6[iVar0] <= 0f)
							{
								func_272(&Var5, 269f, 0f, 32f, 32f, 0);
								func_271(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_13C[iVar2 /*2*/].f_1 + fLocal_198);
								Var6 = (Var5 + fLocal_197);
								if (!bLocal_254)
								{
									func_392(&Var5, 0);
								}
								func_391(&Var5, 1);
								func_406("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_254)
								{
									func_390(&Var6, &(uParam0->f_2E5.f_C6));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_1973A)
				{
					func_397(&(uParam0->f_2E5.f_C6));
				}
				func_393(&(uParam0->f_2E5.f_C6));
				func_399(&Var6, &(uParam0->f_2E5.f_C6), &(Local_45.f_18[iVar0 /*8*/]), 0);
				func_400(&(uParam0->f_2E5.f_C6));
				func_391(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_19B04.f_4A46.f_C[iVar0 /*8*/].f_4 == 0)
			{
				func_406("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_196[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_6A[iVar0] && IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0])
				{
					func_382(uParam0[iVar3 /*9*/]);
					func_406("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]))
				{
					func_381(uParam0[iVar3 /*9*/]);
					func_406("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0])
				{
					func_379(uParam0[iVar3 /*9*/]);
					func_406("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0;
	if (func_378(0))
	{
		unk_0x6CB99B97664C3727(joaat("sp0_flying_ability"), &iVar7, -1);
	}
	else if (func_378(1))
	{
		unk_0x6CB99B97664C3727(joaat("sp1_flying_ability"), &iVar7, -1);
	}
	else if (func_378(2))
	{
		unk_0x6CB99B97664C3727(joaat("sp2_flying_ability"), &iVar7, -1);
	}
	if (iVar7 < 40)
	{
		func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[15 /*8*/]), 0.0047f, 0.0055f);
		unk_0xB1B2D2C9D47D1278(1);
		Var8 = { uParam0->f_13C[22 /*2*/] };
		Var9 = { uParam0->f_2E5.f_C6 };
		if (!bLocal_254)
		{
			Var9.f_9 = (Var9.f_9 - 0.08f);
			func_390(&Var8, &Var9);
		}
		if (bLocal_254)
		{
			func_376(&(uParam0->f_1A4[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 5, 159f);
		}
		else
		{
			func_376(&(uParam0->f_1A4[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1.55f, 5, 106f);
		}
		func_401(uParam0->f_1A4[14 /*8*/], 0, 0);
		func_406("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_399(&(uParam0->f_13C[22 /*2*/]), &(uParam0->f_2E5.f_C6), "FLY_STAT_WARN", 0);
		func_393(&(uParam0->f_2E5.f_C6));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_1973A + 1, 16);
	func_391(uParam0[7 /*9*/], 1);
	func_406("SPRRaces", &Var10, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[25 /*8*/]), 0.0047f, 0.0055f);
	unk_0xB1B2D2C9D47D1278(1);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_1973A + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0, 16);
	}
	Var12 = { uParam0->f_13C[16 /*2*/] };
	Var13 = { uParam0->f_2E5.f_C6 };
	if (!bLocal_254)
	{
		Var13.f_9 = (Var13.f_9 - 0.108f);
		func_390(&Var12, &Var13);
	}
	if (bLocal_254)
	{
		func_376(&(uParam0->f_1A4[25 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 5, 159f);
	}
	else
	{
		func_376(&(uParam0->f_1A4[25 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1.55f, 5, 106f);
	}
	func_401(uParam0->f_1A4[25 /*8*/], 0, 0);
	func_399(&(uParam0->f_13C[16 /*2*/]), &(uParam0->f_2E5.f_C6), &cVar11, 0);
	func_393(&(uParam0->f_2E5.f_C6));
	func_400(&(uParam0->f_2E5.f_C6));
	func_399(&(uParam0->f_13C[4 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_AWARDS_SUB", 0);
	func_399(&(uParam0->f_13C[8 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_BEST", 0);
	func_397(&(uParam0->f_2E5.f_C6));
	func_401(uParam0->f_1A4[22 /*8*/], 0, 0);
	func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[22 /*8*/]), 0, 0);
	func_384(&(uParam0->f_13C[13 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR(Local_45.f_70[Global_1973A]) * 1000, 6, "", 1, 0);
	func_393(&(uParam0->f_2E5.f_C6));
	func_401(uParam0->f_1A4[23 /*8*/], 0, 0);
	func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[23 /*8*/]), 0, 0);
	func_384(&(uParam0->f_13C[14 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((((Local_45.f_70[Global_1973A] - Local_45.f_6A[Global_1973A]) / 2f) + Local_45.f_6A[Global_1973A])) * 1000, 6, "", 1, 0);
	func_393(&(uParam0->f_2E5.f_C6));
	func_401(uParam0->f_1A4[24 /*8*/], 0, 0);
	func_396(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[24 /*8*/]), 0, 0);
	func_384(&(uParam0->f_13C[15 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR(Local_45.f_6A[Global_1973A]) * 1000, 6, "", 1, 0);
	func_393(&(uParam0->f_2E5.f_C6));
	func_400(&(uParam0->f_2E5.f_C6));
}

float func_376(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0xFFBF
{
	int iVar0;
	int iVar1;
	
	func_377(uParam3, 0);
	unk_0xD8C1258D4AB3DD08(sParam1);
	iVar0 = unk_0xD7347ECB614BEFFC(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x877E3741B282A35F())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_268(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_268(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_377(var uParam0, bool bParam1)//Position - 0x10038
{
	unk_0xC8793973D4960AC4(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0x666751E43D377EAA(uParam0->f_8, uParam0->f_9);
	}
	unk_0xB8F3C51875F7BEA3(uParam0->f_1, uParam0->f_2);
	unk_0xCC4FE6A016BA0765(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x918F022E4C3A47C2();
			unk_0x35651880D804F42B();
			break;
		
		case 3:
			unk_0x35651880D804F42B();
			break;
		
		case 2:
			unk_0x918F022E4C3A47C2();
			break;
	}
	if (bParam1)
	{
		unk_0x996AC9A66B2A5A3F(4);
	}
}

bool func_378(int iParam0)//Position - 0x100D1
{
	func_164();
	return iParam0 == Global_19B04.f_932.f_21B.f_10CD;
}

void func_379(var uParam0)//Position - 0x100ED
{
	func_380(uParam0, 107);
}

void func_380(var uParam0, int iParam1)//Position - 0x100FD
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xE45648BDBF3441F5(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_381(var uParam0)//Position - 0x10125
{
	func_380(uParam0, 108);
}

void func_382(var uParam0)//Position - 0x10135
{
	func_380(uParam0, 109);
}

void func_383(var uParam0)//Position - 0x10145
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_384(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x10162
{
	char* sVar0;
	
	if (func_387())
	{
		func_377(uParam1, 0);
		unk_0x171A3CC6B0AA3874(iParam6);
		unk_0x8F62A12BC2768BE8(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x8B371195127AACF2(sVar0);
		unk_0x4C36886AAFD04CF8(iParam2, iParam3);
		unk_0x3A8B9C7B1C825123(func_386(*uParam0), func_385(uParam0->f_1), 0);
	}
}

float func_385(float fParam0)//Position - 0x101BC
{
	return (fParam0 + fLocal_13);
}

float func_386(float fParam0)//Position - 0x101C9
{
	return (fParam0 + fLocal_12);
}

int func_387()//Position - 0x101D6
{
	if (func_388())
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

bool func_388()//Position - 0x10215
{
	return Global_1406B6;
}

void func_389(var uParam0)//Position - 0x10221
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_390(float fParam0, var uParam1)//Position - 0x1023E
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_391(float fParam0, int iParam1)//Position - 0x10292
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_392(float fParam0, bool bParam1)//Position - 0x102B8
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_393(var uParam0)//Position - 0x102EC
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_394(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x102FE
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_50(sVar0))
	{
		if (func_387())
		{
			func_377(uParam1, 0);
			unk_0x171A3CC6B0AA3874(iParam4);
			unk_0x8F62A12BC2768BE8(iParam3);
			func_395(func_386(*uParam0), func_385(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_395(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x10344
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

void func_396(var uParam0, var uParam1, float fParam2, float fParam3)//Position - 0x1035C
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_397(var uParam0)//Position - 0x10396
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_398(uParam0, 2);
}

void func_398(var uParam0, int iParam1)//Position - 0x103B4
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xE45648BDBF3441F5(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_399(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x103DC
{
	if (bParam3)
	{
		unk_0x996AC9A66B2A5A3F(1);
	}
	func_394(fParam0, uParam1, sParam2, 0, 0);
}

void func_400(var uParam0)//Position - 0x103FA
{
	func_398(uParam0, 1);
}

void func_401(struct<8> Param0, int iParam1, int iParam2)//Position - 0x10409
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_405(&Var0);
			break;
		
		case 1:
			func_404(&Var0);
			break;
		
		case 3:
			func_403(&Var0);
			break;
		
		case 4:
			func_402(&Var0);
			break;
	}
	if (func_387())
	{
		if (iParam2 == 1)
		{
			unk_0xF7EBEC3FF57AEC65(func_386(Var0), func_385(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0xF7EBEC3FF57AEC65(func_386(Var0), func_385(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_402(var uParam0)//Position - 0x104C4
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_403(var uParam0)//Position - 0x104E4
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_404(var uParam0)//Position - 0x10504
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_405(var uParam0)//Position - 0x1052D
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_406(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1054A
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_413(&Var0);
			break;
		
		case 1:
			func_412(&Var0);
			break;
		
		case 5:
			func_411(&Var0);
			break;
		
		case 6:
			func_410(&Var0);
			break;
		
		case 7:
			func_409(&Var0);
			break;
		
		case 8:
			func_408(&Var0);
			break;
		
		case 9:
			func_407(&Var0);
			break;
	}
	if (func_387())
	{
		unk_0x996AC9A66B2A5A3F(iParam5);
		if (iParam3 == 1)
		{
			unk_0x51DA985AC0B70E2E(sParam0, sParam1, func_386(Var0), func_385(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x51DA985AC0B70E2E(sParam0, sParam1, func_386(Var0), func_385(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x996AC9A66B2A5A3F(4);
	}
}

void func_407(var uParam0)//Position - 0x1064F
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_408(var uParam0)//Position - 0x10669
{
	uParam0->f_7 = 2;
}

void func_409(var uParam0)//Position - 0x10676
{
	uParam0->f_7 = 5;
}

void func_410(var uParam0)//Position - 0x10683
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_411(var uParam0)//Position - 0x106A0
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_412(var uParam0)//Position - 0x106BD
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_413(var uParam0)//Position - 0x106E6
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_414(var uParam0, var uParam1)//Position - 0x1070E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_192 == 1)
	{
		return 1;
	}
	if (iLocal_193)
	{
		return 0;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return 1;
	}
	if (bLocal_191)
	{
		if (unk_0x093484B35A948BFC(2, 201))
		{
			iLocal_185 = unk_0x2F079D1FC5F6CB99();
			unk_0xC4BA30B532FE260F(iLocal_185, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_192 = 1;
			iLocal_193 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0x093484B35A948BFC(2, 202))
		{
			iLocal_185 = unk_0x2F079D1FC5F6CB99();
			unk_0xC4BA30B532FE260F(iLocal_185, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			unk_0x7456702622C62EA0(1);
			func_541(&(Local_45.f_77));
			iLocal_192 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
	{
		iLocal_185 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(iLocal_185, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_260(&(Local_45.f_77), 0, 0, 1, 1);
		func_259(&(Local_45.f_77), "FE_HLP29", 2, 201, 1, 1, 0);
		func_259(&(Local_45.f_77), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&iLocal_187);
		iLocal_192 = 1;
		unk_0x7456702622C62EA0(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467() && bLocal_191 == 0)
	{
		if (unk_0x0738078C96634C59(2))
		{
			Global_4118D6 = func_418(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_417(0, Global_1973A, 1);
			if (func_416())
			{
				if (Global_4118D6 == Global_1973A)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_185 = unk_0x2F079D1FC5F6CB99();
					unk_0xECA8E2750E0CB3B4(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_1973A = Global_4118D6;
					func_541(&(Local_45.f_77));
				}
			}
		}
	}
	if (unk_0x093484B35A948BFC(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_19B04.f_4A46.f_C[Global_1973A /*8*/].f_4 == 0)
		{
			iLocal_185 = unk_0x2F079D1FC5F6CB99();
			unk_0xECA8E2750E0CB3B4(iLocal_185, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_185 = unk_0x2F079D1FC5F6CB99();
			unk_0xECA8E2750E0CB3B4(iLocal_185, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0x093484B35A948BFC(2, 188) || func_415(0, uParam1)) || unk_0x694514BD37EC4E94(2, 241))
	{
		iVar1 = (Global_1973A - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_185 = unk_0x2F079D1FC5F6CB99();
		unk_0xECA8E2750E0CB3B4(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_1973A = iVar1;
		func_541(&(Local_45.f_77));
	}
	if ((unk_0x093484B35A948BFC(2, 187) || func_415(1, uParam1)) || unk_0x694514BD37EC4E94(2, 242))
	{
		iVar2 = Global_1973A + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_185 = unk_0x2F079D1FC5F6CB99();
		unk_0xECA8E2750E0CB3B4(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_1973A = iVar2;
		func_541(&(Local_45.f_77));
	}
	return 1;
}

bool func_415(int iParam0, var uParam1)//Position - 0x109CC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1B3AE5B27313855F(2, 195);
	iVar2 = unk_0x1B3AE5B27313855F(2, 196);
	if (unk_0xC40EDFF7541407A8(iVar1) < 28 && unk_0xC40EDFF7541407A8(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x105601648511CC64() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = unk_0x105601648511CC64();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_416()//Position - 0x10A91
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4118D6 > -1)
		{
			if (unk_0x694514BD37EC4E94(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_417(int iParam0, var uParam1, bool bParam2)//Position - 0x10AB8
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x08009E53F6E7E15C();
	}
	if (Global_4118D6 == -6)
	{
		unk_0x5C26A2F0EACA52AB(4);
		if (iParam0 && unk_0x8FCEEB789599BD9B(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4118D6 = -1;
			return 0;
		}
	}
	if (((Global_4118D6 > -1 || Global_4118D6 == -3) || Global_4118D6 == -2) || unk_0x1753B0F1C41FE93F())
	{
		unk_0x5C26A2F0EACA52AB(1);
		return 0;
	}
	if (Global_4118D6 == -1 && iParam0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 237))
		{
			unk_0x5C26A2F0EACA52AB(4);
			Global_4118D6 = -6;
			return 1;
		}
		else
		{
			unk_0x5C26A2F0EACA52AB(3);
			return 0;
		}
	}
	unk_0x5C26A2F0EACA52AB(1);
	return 0;
}

int func_418(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x10B98
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!unk_0x50465D2C022B9E04(2))
	{
		return -1;
	}
	unk_0xBBC4195AD74D153D(2, 200, 1);
	unk_0x08009E53F6E7E15C();
	if (bParam8)
	{
		if (!unk_0x877E3741B282A35F())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		unk_0xC2EAD30963BDAA47(76, 84);
		unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0xC498840061F88232(fParam0, fParam1, &fParam0, &fParam1);
		unk_0x2A025E7CEBB76D14();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x5F9521C8EE73F79F(2, 239);
	fVar3 = unk_0x5F9521C8EE73F79F(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
			func_419(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			func_419(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_419(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x10CD4
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_420()//Position - 0x10D03
{
	int iVar0;
	
	switch (iLocal_186)
	{
		case 0:
			unk_0x7456702622C62EA0(1);
			unk_0x900CF084251DED26("SP_SPR", 3);
			unk_0x8AA3F48A15444B98("SPRRaces", false);
			unk_0x8AA3F48A15444B98("MPHUD", false);
			iLocal_186 = 1;
			break;
		
		case 1:
			if (unk_0x4C7022A83B41D888("SP_SPR", 3))
			{
				if (unk_0x499783D01578C2D2("SPRRaces"))
				{
					if (unk_0x499783D01578C2D2("MPHUD"))
					{
						iLocal_186 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0xB0B0FE33F4F22679(&(Local_45.f_77));
			Local_45.f_77 = 0;
			func_541(&(Local_45.f_77));
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 512);
			}
			func_137(1);
			unk_0xEF23FCC849B5EB47(1);
			unk_0xD421BC740C5340C3(Local_45.f_1, 4);
			func_371();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_45.f_B)
			{
				iLocal_196[iVar0] = -1;
				iVar0++;
			}
			func_424(&uLocal_255);
			func_421();
			unk_0x9216004FAC08D1DC("MinigameTransitionIn", 0, 1);
			iLocal_186 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_421()//Position - 0x10E0B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_19B04.f_4A46.f_C[iVar0 /*8*/] = { func_423(iVar0) };
		MemCopy(&(Local_45.f_18[iVar0 /*8*/]), {Global_19B04.f_4A46.f_C[iVar0 /*8*/]}, 8);
		Local_45.f_6A[iVar0] = func_422(iVar0);
		Local_45.f_70[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_19B04.f_4A46.f_6[iVar0] > Local_45.f_70[iVar0] || Global_19B04.f_4A46.f_6[iVar0] <= 0f)
			{
				Global_19B04.f_4A46.f_C[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_19B04.f_4A46.f_C[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_19B04.f_4A46.f_C[0 /*8*/].f_4 = 1;
}

float func_422(int iParam0)//Position - 0x10EE0
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_423(int iParam0)//Position - 0x10F45
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_424(var uParam0)//Position - 0x10FB5
{
	func_427();
	bLocal_254 = unk_0x877E3741B282A35F();
	func_299(uParam0);
	func_277(&(uParam0->f_2E5));
	func_425(uParam0);
}

void func_425(var uParam0)//Position - 0x10FDD
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x877E3741B282A35F();
	func_276(&(uParam0->f_13C[0 /*2*/]), 262f, (71f - func_426(0.00278f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[1 /*2*/]), (257f + 127f), (125f - func_426(0.00417f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[2 /*2*/]), (513f + 127f), (125f - func_426(0.00417f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[3 /*2*/]), (769f + 127f), (125f - func_426(0.00417f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[17 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 162f, 1);
	func_276(&(uParam0->f_13C[18 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 189f, 1);
	func_276(&(uParam0->f_13C[19 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 216f, 1);
	func_276(&(uParam0->f_13C[20 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 243f, 1);
	func_276(&(uParam0->f_13C[21 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 270f, 1);
	func_276(&(uParam0->f_13C[22 /*2*/]), (257f + func_275(0.0047f, 1280, 1)), 297f, 1);
	func_276(&(uParam0->f_13C[16 /*2*/]), (513f + func_275(0.0047f, 1280, 1)), (299f - func_426(0.00278f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[4 /*2*/]), (769f + func_275(0.0047f, 1280, 1)), 297f, 1);
	func_276(&(uParam0->f_13C[5 /*2*/]), 769f, 297f, 1);
	func_276(&(uParam0->f_13C[8 /*2*/]), (769f + func_275(0.0047f, 1280, 1)), 351f, 1);
	func_276(&(uParam0->f_13C[9 /*2*/]), 324f, 351f, 1);
	func_276(&(uParam0->f_13C[6 /*2*/]), (769f + func_275(0.0047f, 1280, 1)), (324f - func_426(0.00278f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[7 /*2*/]), 324f, (324f - func_426(0.00278f, 720, 1)), 1);
	func_276(&(uParam0->f_13C[15 /*2*/]), 810f, 459f, 1);
	func_276(&(uParam0->f_13C[14 /*2*/]), 896f, 459f, 1);
	func_276(&(uParam0->f_13C[13 /*2*/]), 982f, 459f, 1);
	func_272(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0xE45648BDBF3441F5(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_271(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_272(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_271(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_271(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_271(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_271(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_271(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[6 /*9*/], (486f + func_275(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_271(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_271(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_271(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_271(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_271(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_272(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_271(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_266(&(uParam0->f_1A4[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_265(&(uParam0->f_1A4[3 /*8*/]), 70, 70, 130, 255);
	func_266(&(uParam0->f_1A4[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_265(&(uParam0->f_1A4[4 /*8*/]), 70, 70, 130, 255);
	func_266(&(uParam0->f_1A4[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_265(&(uParam0->f_1A4[5 /*8*/]), 70, 70, 130, 255);
	func_266(&(uParam0->f_1A4[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_264(&(uParam0->f_1A4[0 /*8*/]), 1, 1);
	func_266(&(uParam0->f_1A4[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_264(&(uParam0->f_1A4[1 /*8*/]), 1, 1);
	func_266(&(uParam0->f_1A4[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_264(&(uParam0->f_1A4[2 /*8*/]), 1, 1);
	func_266(&(uParam0->f_1A4[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_264(&(uParam0->f_1A4[7 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_264(&(uParam0->f_1A4[8 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[9 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[10 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[11 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[12 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[13 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_264(&(uParam0->f_1A4[26 /*8*/]), 1, 1);
	func_266(&(uParam0->f_1A4[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_264(&(uParam0->f_1A4[14 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_264(&(uParam0->f_1A4[15 /*8*/]), 1, 1);
	func_266(&(uParam0->f_1A4[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_264(&(uParam0->f_1A4[25 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[16 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[17 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_264(&(uParam0->f_1A4[18 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_264(&(uParam0->f_1A4[21 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_264(&(uParam0->f_1A4[20 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_264(&(uParam0->f_1A4[19 /*8*/]), 117, 1);
	func_266(&(uParam0->f_1A4[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_264(&(uParam0->f_1A4[22 /*8*/]), 109, 1);
	func_266(&(uParam0->f_1A4[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_264(&(uParam0->f_1A4[23 /*8*/]), 108, 1);
	func_266(&(uParam0->f_1A4[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_264(&(uParam0->f_1A4[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_13C[iVar5 /*2*/] = (((uParam0->f_13C[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_1A4[iVar5 /*8*/] = (((uParam0->f_1A4[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_1A4[iVar5 /*8*/].f_2 = (uParam0->f_1A4[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_3DA = 1;
}

float func_426(float fParam0, int iParam1, bool bParam2)//Position - 0x11AE2
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x7A569F3885B2E08A(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_427()//Position - 0x11B14
{
	int iVar0;
	
	unk_0x1E8543FC04D492CE();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DEF.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_428(var uParam0)//Position - 0x11B3D
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_429(var uParam0, bool bParam1)//Position - 0x11C0B
{
	int iVar0;
	
	if (unk_0x97EF4023B86C354F())
	{
		if (!iLocal_194)
		{
			iVar0 = 0;
			if (uParam0->f_166[0 /*189*/].f_D > 0f)
			{
				if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= (((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_166[0 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_457(Local_45.f_A, &(Local_45.f_41[Local_45.f_A /*8*/]));
			if (bParam1)
			{
				func_454(Local_45.f_A, uParam0->f_166[0 /*189*/].f_D, iVar0);
				iLocal_194 = 1;
				return 1;
			}
			else if (func_430(Local_45.f_A, uParam0->f_166[0 /*189*/].f_D, iVar0))
			{
				iLocal_194 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_194 = 1;
	}
	return 0;
}

int func_430(int iParam0, float fParam1, int iParam2)//Position - 0x11D0A
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_454(iParam0, fParam1, iParam2);
		Global_1C0005.f_2 = 1;
	}
	if (func_431(&uLocal_1242))
	{
		Global_1C017C = 1;
		return 1;
	}
	return 0;
}

int func_431(var uParam0)//Position - 0x11D4C
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_453(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_452(unk_0xB5CEFD608600A09F()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_451(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_450(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x8731EA21A98ED1C3(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_449(uParam0->f_2C, iVar4))
					{
						if (func_448(uParam0->f_2C, 4, iVar4))
						{
							unk_0xF0059F27F7BB6680(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xD69860729CF9D123(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_447(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_449(uParam0->f_2C, iVar4))
								{
									if (func_448(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = unk_0x7931D997D70CE9AF(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == -1)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = unk_0xBB9531A49F052904(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					unk_0xF44A1E8325E80FF1();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_446();
				if (Global_1C0005.f_4)
				{
					if (func_445(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x4742E8F1B403C38D(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x7AF0088ABFA713B6() && func_444())
			{
				if (func_443())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_445(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				unk_0x4742E8F1B403C38D(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_432(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_450(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xD69860729CF9D123(0, &Var0);
						if (unk_0x3362CDE8460ED38B(&(Var0.f_D), ""))
						{
							Global_EF2BB.f_1 = -1;
						}
						else
						{
							Global_EF2BB.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_EF2BB.f_1 = -1;
					}
					unk_0xF44A1E8325E80FF1();
				}
				else
				{
					Global_EF2BB.f_1 = -1;
				}
				Global_1C0005 = 999;
				func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_432(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x12170
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_439() && !func_435())
			{
				func_433(*uParam2);
				if (bParam5)
				{
					if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
					{
						if (unk_0xD882700CACC4DD22(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x023467E3E9AB7AD1(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x58DD94F4915586DB(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_433(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0x122A8
{
	Global_1C0000 = 1;
	func_434(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

void func_434(var uParam0, bool bParam1, bool bParam2)//Position - 0x122D3
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

int func_435()//Position - 0x12310
{
	if (unk_0xE186ACC7BE9B244E() && !func_436())
	{
		return 1;
	}
	return 0;
}

bool func_436()//Position - 0x1232E
{
	return func_437(unk_0xB5CEFD608600A09F());
}

int func_437(int iParam0)//Position - 0x1233E
{
	switch (func_438(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_438(int iParam0)//Position - 0x1239E
{
	return Global_18402B[iParam0 /*770*/].f_C4;
}

int func_439()//Position - 0x123B1
{
	if (unk_0x8964C7ACF67E0DA4() || Global_1C0000)
	{
		func_440();
		return 1;
	}
	return 0;
}

void func_440()//Position - 0x123D3
{
	if (func_441(&(Global_1C0000.f_1), 120000, 1))
	{
		unk_0xA94A29B5BBA15E49(Global_1C0000.f_3, Global_1C0000.f_4, -1);
		Global_1C0000 = 0;
		func_363(&(Global_1C0000.f_1));
	}
}

int func_441(var uParam0, int iParam1, bool bParam2)//Position - 0x1240E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_442(uParam0, bParam2, 0);
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

void func_442(var uParam0, bool bParam1, bool bParam2)//Position - 0x1246C
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

bool func_443()//Position - 0x124B1
{
	return unk_0xFA30DFD0084E92FE(Global_ED138.f_8, 1);
}

var func_444()//Position - 0x124C4
{
	return Global_2579BD.f_3;
}

int func_445(int iParam0)//Position - 0x124D2
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_446()//Position - 0x125A3
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

bool func_447(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x12603
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

int func_448(int iParam0, int iParam1, int iParam2)//Position - 0x12613
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xD9423E7C77E9DDD4(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_449(int iParam0, int iParam1)//Position - 0x12715
{
	if (unk_0x9B1E40957BEDC83C(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_450(var uParam0, var uParam1)//Position - 0x12770
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_451(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1278B
{
	switch (*uParam0)
	{
		case 0:
			if (!func_439() && !func_435())
			{
				func_433(*uParam2);
				if (unk_0x460E2F645251EE10(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_452(int iParam0)//Position - 0x1283F
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_453(int iParam0)//Position - 0x12856
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_454(int iParam0, float fParam1, int iParam2)//Position - 0x12878
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[1 /*8*/]), "Location", 32);
	StringCopy(&(Var4[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_456(817, &Var3, &Var4, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_455(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_455(817, 131, 0, 0f, 0);
		}
		func_455(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_455(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_455(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_455(817, 149, 0, 0f, 0);
		func_455(817, 148, 0, 0f, 0);
		func_455(817, 109, 1, 0f, 0);
		func_455(817, 157, iVar0, 0f, 0);
		func_455(817, 158, iVar1, 0f, 0);
		func_455(817, 86, iVar2, 0f, 0);
	}
}

void func_455(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x12A3F
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x18054B9E2612CC6D(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = unk_0x8731EA21A98ED1C3(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_448(iParam0, 4, iVar1))
				{
					unk_0xF0059F27F7BB6680(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x9B1E40957BEDC83C(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0xF0059F27F7BB6680(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_456(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x12B5A
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x57D316754A262B34())
	{
	}
	if ((!unk_0x8BEB5B1064243AE5() && (unk_0x36C1DE668967177B() || !unk_0x11F704A1BA7AC122())) && unk_0x198118F0FE63908B())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xB9ACC1154C623363())
			{
				Var2 = { func_452(unk_0xB5CEFD608600A09F()) };
				if (unk_0xD7F4457CECF10121(&Var2))
				{
					if (unk_0x24723877416AAAFC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x7AF0088ABFA713B6() && Global_2579BD.f_3)
			{
				unk_0xD10ECE53AB296FDB(&Var0, &(Global_193A13.f_A));
			}
			else
			{
				unk_0x2F7E331C1ABCF9E9(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x8BEB5B1064243AE5())
	{
	}
	if (!unk_0x36C1DE668967177B())
	{
	}
	if (unk_0x11F704A1BA7AC122())
	{
	}
	if (!unk_0x198118F0FE63908B())
	{
	}
	return 0;
}

void func_457(int iParam0, char[4] cParam1)//Position - 0x12C8E
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&vVar0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&vVar0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&vVar0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&vVar0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_458(&uLocal_1242, 86, &vVar0, cParam1, -1, -1, 0, 0);
}

void func_458(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x12D21
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xF1734B55490E9045(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	Global_1C017E.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_465())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_465())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 5;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 6;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 5;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 6;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x01F0A11048DC3F30(unk_0xB5CEFD608600A09F(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C017E.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_465())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 4;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_465())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 0;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 0;
					Global_1C017E.f_A94 = 1;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_465())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_465())
				{
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_465())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), "CMSW", 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 4;
			Global_1C017E.f_A96[4] = 6;
			Global_1C017E.f_A94 = 5;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 6;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 6;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A96[2] = 5;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			if (unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C017E.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 2;
			Global_1C017E.f_A96[2] = 1;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C017E.f_ADC.f_9), {func_464(iParam1)}, 16);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A94 = 2;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 0;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 2;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 0;
			Global_1C017E.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 3;
			Global_1C017E.f_A94 = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 5;
				Global_1C017E.f_A96[4] = 6;
				Global_1C017E.f_A94 = 3;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				Global_1C017E.f_ADC.f_1C = 6;
				Global_1C017E.f_ADC.f_1D[0] = 5;
				Global_1C017E.f_ADC.f_1D[1] = 11;
				Global_1C017E.f_ADC.f_1D[2] = 4;
				Global_1C017E.f_ADC.f_1D[3] = 5;
				Global_1C017E.f_ADC.f_1D[4] = 5;
			}
			else if (Global_440000.f_38 == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 2;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A94 = 3;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 2;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_463(Global_440000.f_243FE) || func_460(Global_440000.f_243FE))
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 2;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 5;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 2;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 5;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD0), 1);
			Global_1C017E.f_AC2[1] = -1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 11;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 3;
			Global_1C017E.f_A94 = 2;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 2;
					Global_1C017E.f_A96[3] = 1;
					Global_1C017E.f_A94 = 4;
					unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 12;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 4;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 17;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 4;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 2;
			Global_1C017E.f_A94 = 4;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 10;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 4;
			Global_1C017E.f_A96[5] = 3;
			Global_1C017E.f_A94 = 6;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 9;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			Global_1C017E.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A94 = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 1;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A95 = 6;
				Global_1C017E.f_A94 = 2;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				Global_1C017E.f_ADC.f_1C = 4;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 2;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 1;
				Global_1C017E.f_A95 = 4;
				Global_1C017E.f_A94 = 3;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 1;
				Global_1C017E.f_ADC.f_1D[2] = 3;
			}
			Global_1C017E.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C017E.f_A94)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
		{
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C017E.f_B0A = func_459(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_459(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x171F8
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_453(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x56BEECB328B6D29D(&cVar0);
}

var func_460(int iParam0)//Position - 0x1726A
{
	return (func_462(iParam0) || func_461(iParam0));
}

bool func_461(int iParam0)//Position - 0x17284
{
	return iParam0 == 44;
}

bool func_462(int iParam0)//Position - 0x17291
{
	return iParam0 == 45;
}

bool func_463(int iParam0)//Position - 0x1729E
{
	return iParam0 == 12;
}

struct<6> func_464(int iParam0)//Position - 0x172AB
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_465()//Position - 0x17434
{
	if ((((((((Global_440000.f_C7AE == 1 || Global_440000.f_C7AE == 3) || Global_440000.f_C7AE == 5) || Global_440000.f_C7AE == 7) || Global_440000.f_C7AE == 19) || Global_440000.f_C7AE == 8) || Global_440000.f_C7AE == 9) || Global_440000.f_C7AE == 11) || Global_440000.f_C7AE == 13)
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0, bool bParam1)//Position - 0x174E5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171A.f_2 + 5 < unk_0xC87A57742F7D3C06() && Global_1C171A.f_2 > 0)
	{
		func_363(&Global_1C171A);
		func_363(&(Global_1C171A.f_31));
		*iParam0 = 0;
		Global_1C171A.f_2 = 0;
		func_475(0);
	}
	Global_1C171A.f_2 = unk_0xC87A57742F7D3C06();
	iVar1 = -1;
	if (unk_0xF7E138CFA19B55E7())
	{
		if (unk_0xCC35D66346F68105() == 0)
		{
			iVar1 = unk_0x2C2198F945E56AFE();
		}
	}
	if ((unk_0xF7E138CFA19B55E7() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_473() && unk_0x57D316754A262B34()))
	{
		if (unk_0x87080EF061A795E2())
		{
			func_470(&(Global_1C171A.f_3), func_472(&(Global_1C171A.f_3)));
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 4))
			{
				unk_0xF0059F27F7BB6680(iParam0, 4);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_468(&(Global_1C171A.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_473())
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
			{
				if (!unk_0x8FCEEB789599BD9B(2, 201))
				{
					unk_0xF0059F27F7BB6680(iParam0, 0);
				}
			}
			else if (unk_0x093484B35A948BFC(2, 201))
			{
				func_363(&(Global_1C171A.f_31));
				func_363(&Global_1C171A);
				*iParam0 = 0;
				Global_1C171A.f_2 = 0;
				func_475(0);
				return 1;
			}
		}
	}
	else
	{
		func_470(&(Global_1C171A.f_3), func_472(&(Global_1C171A.f_3)));
		if ((func_467(&(Global_1C171A.f_31)) && !func_441(&(Global_1C171A.f_31), 2000, 1)) && !unk_0x57D316754A262B34())
		{
			unk_0xF0059F27F7BB6680(iParam0, 3);
			StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
			func_468(&(Global_1C171A.f_3), 0);
		}
		else if (!unk_0xFA30DFD0084E92FE(*iParam0, 3))
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 1))
			{
				unk_0xDF332625237EA533(0);
				unk_0xF0059F27F7BB6680(iParam0, 1);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_468(&(Global_1C171A.f_3), 0);
			}
		}
		if (func_467(&Global_1C171A))
		{
			if (!func_441(&Global_1C171A, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x57D316754A262B34())
				{
					if (unk_0x2F74010DB378DFFC())
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x14973A77EAB7E05A())
					{
						if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
						{
							if (!unk_0x8FCEEB789599BD9B(2, 201))
							{
								unk_0xF0059F27F7BB6680(iParam0, 0);
							}
						}
						else if (unk_0x093484B35A948BFC(2, 201))
						{
							func_363(&Global_1C171A);
							*iParam0 = 0;
							Global_1C171A.f_2 = 0;
							func_475(0);
							return 1;
						}
					}
				}
				else
				{
					func_363(&Global_1C171A);
					*iParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_475(0);
					return 1;
				}
			}
			else if (unk_0xFA30DFD0084E92FE(*iParam0, 3))
			{
				if (unk_0x2F74010DB378DFFC())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
				{
					if (!unk_0x8FCEEB789599BD9B(2, 201))
					{
						unk_0xF0059F27F7BB6680(iParam0, 0);
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201))
				{
					func_363(&(Global_1C171A.f_31));
					func_363(&Global_1C171A);
					*iParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_475(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x2F74010DB378DFFC())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x14973A77EAB7E05A())
				{
					if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
					{
						if (!unk_0x8FCEEB789599BD9B(2, 201))
						{
							unk_0xF0059F27F7BB6680(iParam0, 0);
						}
					}
					else if (unk_0x093484B35A948BFC(2, 201))
					{
						func_363(&(Global_1C171A.f_31));
						func_363(&Global_1C171A);
						*iParam0 = 0;
						Global_1C171A.f_2 = 0;
						func_475(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_467(var uParam0)//Position - 0x1795C
{
	return uParam0->f_1;
}

void func_468(var uParam0, bool bParam1)//Position - 0x17968
{
	func_469(uParam0);
	if (bParam1)
	{
		func_475(0);
	}
	uParam0->f_23 = 1;
}

void func_469(var uParam0)//Position - 0x17985
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_470(var uParam0, int iParam1)//Position - 0x179A0
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_471(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0xAA5C5BF0489E5553(uParam0->f_21);
			unk_0xAA5C5BF0489E5553(uParam0->f_22);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0xAA5C5BF0489E5553(uParam0->f_21);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x607C19B90D297FE2(&(uParam0->f_11));
			unk_0xAA5C5BF0489E5553(uParam0->f_21);
			unk_0xAA5C5BF0489E5553(uParam0->f_22);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x607C19B90D297FE2(&(uParam0->f_11));
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x4C36886AAFD04CF8(uParam0->f_21, 70);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_471(var uParam0)//Position - 0x17A9E
{
	uParam0->f_23 = 0;
}

int func_472(var uParam0)//Position - 0x17AAB
{
	return uParam0->f_23;
}

int func_473()//Position - 0x17AB7
{
	if (func_474())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_474()//Position - 0x17AD7
{
	return Global_258255;
}

void func_475(bool bParam0)//Position - 0x17AE3
{
	unk_0x21B00B24BEAA7264();
	if (bParam0)
	{
		unk_0xDC1A2868428162E5();
	}
}

void func_476(var uParam0, int iParam1, char[4] cParam2)//Position - 0x17AF8
{
	func_152(&(Local_45.f_77), 1128792064, 1, 0, 1, 1065353216);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(7);
	func_457(iParam1, cParam2);
	func_477(uParam0, &uLocal_1242);
}

void func_477(var uParam0, var uParam1)//Position - 0x17B31
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_434(&(Global_1C171A.f_31), 1, 0);
	unk_0x39CC55A2108C1AB0();
	func_537();
	func_536(0);
	unk_0xDE7B9CB38D019BF0();
	func_534(1);
	unk_0x4E0EC60D119222B1(10);
	func_533(1);
	func_532(1);
	if (!func_436())
	{
		if (!unk_0x144E80F5C46A6B75("LEADERBOARD_SCENE"))
		{
			unk_0xD6423910AAD8A379("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 3))
	{
		*uParam0 = func_354();
		unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 3);
	}
	Var10 = { func_452(unk_0xB5CEFD608600A09F()) };
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		if (((!unk_0x6EFCE916927099A8() || !unk_0x97EF4023B86C354F()) || (!unk_0x36C1DE668967177B() && unk_0x11F704A1BA7AC122())) || Global_1C017E.f_B10 != 0)
		{
			if (!unk_0x97EF4023B86C354F())
			{
				if (Global_1C017E.f_B0D != 2)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 2;
				}
			}
			else if (!unk_0x36C1DE668967177B() && unk_0x11F704A1BA7AC122())
			{
				if (Global_1C017E.f_B0D != 3)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 3;
				}
			}
			else if (!unk_0x6EFCE916927099A8())
			{
				if (Global_1C017E.f_B0D != 4)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 4;
				}
			}
			else if (Global_1C017E.f_B10 != 0)
			{
				if (Global_1C017E.f_B0D != 5)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 5;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 1))
			{
				unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xF9FBC2F3F73D94C9();
				func_531(*uParam0, Global_1C017E.f_ADC);
				if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
				{
					if (!func_453(uParam1->f_2C))
					{
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							Var6 = { Global_1C017E.f_ADC.f_9 };
							func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else if (!Global_1C017E.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					func_529(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
				}
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 4);
				func_528(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 5);
				func_528(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 6);
				func_528(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 1);
				func_527(*uParam0);
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
				unk_0x7456702622C62EA0(1);
			}
			else
			{
				func_527(*uParam0);
			}
		}
		else
		{
			if (Global_1C017E.f_B0D != 1)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
				Global_1C017E.f_B0D = 1;
			}
			if (!func_499(uParam1))
			{
				uParam1->f_F6.f_1 = -1;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
				if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 0))
				{
					unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xF9FBC2F3F73D94C9();
					func_531(*uParam0, Global_1C017E.f_ADC);
					if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_453(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C017E.f_ADC.f_9 };
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_529(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 0);
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C017E.f_B09 == -1)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 4);
							func_528(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 5);
							func_528(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 6);
							func_528(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 7);
						func_498(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09 = 1;
					func_363(&(Global_1C017E.f_B07));
				}
				else if (func_441(&(Global_1C017E.f_B07), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1C017E.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 4);
							func_528(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 5);
							func_528(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 6);
							func_528(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 7);
						func_498(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09++;
					if (Global_1C017E.f_B09 > 3)
					{
						Global_1C017E.f_B09 = 0;
					}
					func_363(&(Global_1C017E.f_B07));
				}
				func_527(*uParam0);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 0);
				if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xF9FBC2F3F73D94C9();
					func_531(*uParam0, Global_1C017E.f_ADC);
					if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_453(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C017E.f_ADC.f_9 };
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_530(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_529(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 6))
					{
						func_366(&Global_1C1269);
						func_494(uParam1, &Global_1C1269);
						func_493(uParam1, &Global_1C1269);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C017E.f_A90[0] > 1 || (Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_AD7[0] != -1)) || (((Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_ADC.f_1B) && func_453(uParam1->f_2C)) && Global_1C017E.f_AD7[0] != -1))
					{
						uParam1->f_F6.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C1269[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 4);
									func_528(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 5);
									if ((Global_1C017E.f_A90[1] < 1 && Global_1C017E.f_AD7[1] == -1) && !(((Global_1C017E.f_A90[1] > 0 && Global_1C017E.f_ADC.f_1B) && func_453(uParam1->f_2C)) && Global_1C017E.f_AD7[1] != -1))
									{
										func_528(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_528(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 6);
									if (!unk_0xBAF5BEF76386574D())
									{
										bVar14 = true;
									}
									else if (!unk_0x8F0C986A6B5D1E16())
									{
										bVar14 = true;
									}
									if ((Global_1C017E.f_A90[2] < 2 && Global_1C017E.f_AD7[2] == -1) && !(((Global_1C017E.f_A90[2] > 0 && Global_1C017E.f_ADC.f_1B) && func_453(uParam1->f_2C)) && Global_1C017E.f_AD7[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_528(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_528(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_447(Global_1C1269[iVar0 /*100*/].f_20))
							{
								if (func_453(uParam1->f_2C))
								{
									unk_0x01F0A11048DC3F30(unk_0xB5CEFD608600A09F(), &uVar11);
									if (!Global_1C1269[iVar0 /*100*/].f_4A && unk_0x3362CDE8460ED38B(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C017E.f_ADC.f_1B)
									{
										if (func_492(&(Global_1C1269[iVar0 /*100*/].f_20), &Var10))
										{
											unk_0xF0059F27F7BB6680(&iVar9, 1);
											if (uParam1->f_F6.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												unk_0xF0059F27F7BB6680(&iVar9, 3);
											}
										}
									}
									if (func_453(uParam1->f_2C))
									{
										Var6 = { Global_1C1269[iVar0 /*100*/] };
										if (!unk_0xF1734B55490E9045(&(Global_1C1269[iVar0 /*100*/].f_54)) && !unk_0x3362CDE8460ED38B(&(Global_1C1269[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C1269[iVar0 /*100*/].f_54), 64);
										}
										func_491(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &Var6, &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_491(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &(Global_1C1269[iVar0 /*100*/]), &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C017E.f_A94)
									{
										bVar5 = false;
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD2, iVar1))
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC2[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_486(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], 0, Global_1C1269[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_486(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], Global_1C1269[iVar0 /*100*/].f_4A, Global_1C1269[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC9[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_483(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_483(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], Global_1C1269[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_482();
									uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C1269[iVar0 /*100*/].f_3B > 2)
										{
											unk_0xF0059F27F7BB6680(&iVar9, 2);
											unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_481(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 4);
						func_528(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 5);
						func_528(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 6);
						func_528(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 1);
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
					func_527(*uParam0);
					unk_0x7456702622C62EA0(1);
					if (uParam1->f_F6.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1C017E.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_481(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_527(*uParam0);
					func_478(uParam0, uParam1);
				}
			}
		}
	}
}

void func_478(var uParam0, var uParam1)//Position - 0x18B11
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (unk_0x50465D2C022B9E04(2))
	{
		unk_0x08009E53F6E7E15C();
		unk_0xD55638CE45B2B948(2, 239);
		unk_0xD55638CE45B2B948(2, 240);
		unk_0xD55638CE45B2B948(2, 237);
		unk_0xD55638CE45B2B948(2, 238);
		unk_0xBBC4195AD74D153D(2, 200, 1);
		if (unk_0xD3C4A010282C31F2(2, 241))
		{
			unk_0x65F4B4F227B496ED(2, 188, 1f);
		}
		if (unk_0xD3C4A010282C31F2(2, 242))
		{
			unk_0x65F4B4F227B496ED(2, 187, 1f);
		}
		if (unk_0xC84BAADC16C436FB(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					unk_0x65F4B4F227B496ED(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x50465D2C022B9E04(2))
	{
		func_480(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 0))
		{
			if ((unk_0x8FCEEB789599BD9B(2, 188) || unk_0xD3C4A010282C31F2(2, 188)) || iVar6 < -100)
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + -1);
				unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 0);
				func_363(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_479(uParam1, 188))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 0);
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 1))
		{
			if ((unk_0x8FCEEB789599BD9B(2, 187) || unk_0xD3C4A010282C31F2(2, 187)) || iVar6 > 100)
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_F6.f_1++;
				unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 1);
				func_363(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_479(uParam1, 187))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 3))
	{
		if ((unk_0x8FCEEB789599BD9B(2, 204) || unk_0xF7DDAAF0EFDAFA22(2, 204)) || unk_0x694514BD37EC4E94(2, 237))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 3);
			func_363(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_479(uParam1, 204))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_481(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_481(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
		}
		if (func_447(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 2))
			{
				if (unk_0x8FCEEB789599BD9B(2, 217) || unk_0xF7DDAAF0EFDAFA22(2, 217))
				{
					if (!unk_0x14973A77EAB7E05A())
					{
						unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 2);
						unk_0x825CC8F1B61DE3A7(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x8FCEEB789599BD9B(2, 217))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_479(var uParam0, int iParam1)//Position - 0x18EB2
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_480(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x8FCEEB789599BD9B(2, iParam1) && !unk_0xD3C4A010282C31F2(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_441(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x8FCEEB789599BD9B(2, iParam1) && !unk_0xD3C4A010282C31F2(2, iParam1)) || func_441(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_480(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x18F51
{
	*uParam0 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 221) * 127f));
		}
	}
}

void func_481(int iParam0, int iParam1, int iParam2)//Position - 0x19026
{
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT_STATE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0xF9FBC2F3F73D94C9();
}

void func_482()//Position - 0x19049
{
	unk_0xF9FBC2F3F73D94C9();
}

void func_483(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x19055
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0x3AE7CB4034BE212F(fParam15, 2);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(SYSTEM::FLOOR(fParam15));
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x8150E47F9B8C07E2())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_485(fParam15);
					}
					else
					{
						fParam15 = func_484(fParam15);
					}
				}
				unk_0x57016C44F10111F0("NUMBER");
				unk_0x3AE7CB4034BE212F(fParam15, 2);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 0:
			break;
	}
}

float func_484(float fParam0)//Position - 0x19177
{
	return (fParam0 / 0.3048f);
}

float func_485(float fParam0)//Position - 0x19187
{
	return (fParam0 / 1609.344f);
}

void func_486(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x19197
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(iParam15);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(-iParam15);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 14);
					unk_0x64989E60CF560CA1();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 6);
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 2055);
					unk_0x64989E60CF560CA1();
				}
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x57016C44F10111F0("SC_LB_EMPTY");
					unk_0x64989E60CF560CA1();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 14);
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 2055);
					unk_0x64989E60CF560CA1();
				}
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 14);
					unk_0x64989E60CF560CA1();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 6);
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 2055);
					unk_0x64989E60CF560CA1();
				}
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xA4267BD4AB92007E(iParam15))
				{
					unk_0x57016C44F10111F0("SCLB_VEH_CUST");
					unk_0xC9C304D0AABE1335(unk_0xD8D56586882095EE(iParam15));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("SC_LB_EMPTY");
					unk_0x64989E60CF560CA1();
				}
			}
			else if (unk_0xA4267BD4AB92007E(iParam15))
			{
				unk_0x57016C44F10111F0(unk_0xD8D56586882095EE(iParam15));
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 8:
			if (func_490(iParam15) != 0)
			{
				unk_0x57016C44F10111F0(func_487(func_490(iParam15), 0));
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x8150E47F9B8C07E2())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_485(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_484(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(iParam15);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_487(int iParam0, bool bParam1)//Position - 0x19531
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		default:
			if (func_489(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_488(&(Var0.f_1F));
				}
				else
				{
					return func_488(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_488(var uParam0)//Position - 0x1A150
{
	return uParam0;
}

int func_489(int iParam0, var uParam1)//Position - 0x1A15A
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

int func_490(int iParam0)//Position - 0x1A195
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_491(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x1A308
{
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	if (iParam3 > 0)
	{
		unk_0x57016C44F10111F0("NUMBER");
		unk_0xAA5C5BF0489E5553(iParam3);
		unk_0x64989E60CF560CA1();
	}
	else
	{
		unk_0x57016C44F10111F0("SC_LB_EMPTY");
		unk_0x64989E60CF560CA1();
	}
	unk_0xCB30200B8055CA57(sParam4);
	unk_0xCB30200B8055CA57(sParam5);
}

int func_492(var uParam0, var uParam1)//Position - 0x1A35A
{
	if (!func_447(*uParam0))
	{
		return 0;
	}
	if (!func_447(*uParam1))
	{
		return 0;
	}
	if (unk_0x8C3429C475E8DB5D(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_493(var uParam0, var uParam1)//Position - 0x1A394
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 5) && !unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_494(var uParam0, var uParam1)//Position - 0x1A505
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 5) && !unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_497(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_497(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_497(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_495(uParam1);
	}
}

void func_495(var uParam0)//Position - 0x1A5BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_A90[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_452(unk_0xB5CEFD608600A09F()) };
	if (unk_0xA8C9945AE39E6D48(Global_1C017E.f_B0A))
	{
		iVar4 = unk_0xD2159EC8D5CA5847(Global_1C017E.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_496(&Global_1C11E7);
				iVar2 = 0;
				unk_0xBB72C617FBEA1F24(Global_1C017E.f_B0A, iVar0, &Global_1C11E7);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E7.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E7.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E7.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E7.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E7.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E7.f_3C;
				Global_1C017E.f_A94 = Global_1C11E7.f_3E;
				Global_1C017E.f_AD1 = Global_1C11E7.f_3F;
				iVar2 = 0;
				if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C017E.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != -1)
				{
					if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_492(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C017E.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E7.f_3E)
				{
					if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E7.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E7.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_496(var uParam0)//Position - 0x1A7DA
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_497(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1A850
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE[iParam3 /*16*/] = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE.f_31[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_43[Global_1C017E.f_ADB];
			Global_1C11AE.f_35[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C017E.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C017E.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][Global_1C017E.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C017E.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_452(unk_0xB5CEFD608600A09F()) };
				(uParam0[iParam1 /*100*/])->f_3B = -1;
				(uParam0[iParam1 /*100*/])->f_43[0] = -1;
				(uParam0[iParam1 /*100*/])->f_43[1] = -1;
				(uParam0[iParam1 /*100*/])->f_43[2] = -1;
				(uParam0[iParam1 /*100*/])->f_43[3] = -1;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C017E.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C017E.f_AD7[iParam3] + iVar0) < 12 && (Global_1C017E.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_498(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x1AAF9
{
	unk_0xF0059F27F7BB6680(&iParam2, 7);
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0x57016C44F10111F0(sParam3);
	unk_0xCEC028A78CF8885E();
	unk_0xF9FBC2F3F73D94C9();
}

int func_499(var uParam0)//Position - 0x1AB2D
{
	if (!Global_1C017C)
	{
		if (!func_467(&(Global_1C017E.f_B0B)))
		{
			func_442(&(Global_1C017E.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_441(&(Global_1C017E.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x6EFCE916927099A8() || !unk_0x97EF4023B86C354F()) || (!unk_0x36C1DE668967177B() && unk_0x11F704A1BA7AC122())) || Global_1C017E.f_B10 != 0)
	{
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 4))
	{
		func_526(uParam0);
		unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_524(uParam0))
	{
		return 0;
	}
	if (!func_522(uParam0))
	{
		return 0;
	}
	if (!func_515(uParam0))
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		func_366(&Global_1C1269);
		func_494(uParam0, &Global_1C1269);
		func_493(uParam0, &Global_1C1269);
		unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 6);
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 7))
	{
		if (!func_467(&(Global_1C017E.f_B0E)))
		{
			func_442(&(Global_1C017E.f_B0E), 1, 0);
		}
		else if (func_441(&(Global_1C017E.f_B0E), 30000, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 7);
		}
		if (func_512(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_509(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_503(&Global_1C1269))
		{
			func_500(&Global_1C1269);
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 7);
			func_500(&Global_1C1269);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_500(var uParam0)//Position - 0x1ACF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_502(Global_1C017E.f_B0A);
	if (Global_1C0DEF.f_51[iVar2] != 0)
	{
		func_501(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_496(&Global_1C11E7);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E7 = Global_1C017E.f_B0A;
			Global_1C11E7.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E7.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E7.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E7.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_447((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E7.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E7.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E7.f_3E = Global_1C017E.f_A94;
			Global_1C11E7.f_3F = Global_1C017E.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				unk_0xF0059F27F7BB6680(&(Global_1C11E7.f_3D), 0);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_1C11E7.f_3D), 0);
			}
			unk_0xF0059F27F7BB6680(&(Global_1C11E7.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E7.f_3E)
			{
				if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3F, iVar1))
				{
					Global_1C11E7.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E7.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DEF.f_51[iVar2] = Global_1C017E.f_B0A;
			unk_0xEE5625AB4DE2153C(&Global_1C11E7);
		}
		iVar0++;
	}
	Global_1C0DEF.f_57[iVar2 /*3*/] = { func_226(unk_0xB5CEFD608600A09F()) };
}

void func_501(int iParam0, int iParam1)//Position - 0x1AEDC
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xA8C9945AE39E6D48(Global_1C0DEF.f_51[iParam1]))
		{
			unk_0x47B5979E1273FCA7(Global_1C0DEF.f_51[iParam1]);
		}
		Global_1C0DEF.f_51[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xA8C9945AE39E6D48(iParam0))
		{
			unk_0x47B5979E1273FCA7(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DEF.f_51[iVar0] == iParam0)
			{
				Global_1C0DEF.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_502(int iParam0)//Position - 0x1AF58
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xA8C9945AE39E6D48(Global_1C0DEF.f_51[iVar0]))
		{
			iVar3 = unk_0x6C6916B5786D9360(Global_1C0DEF.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_503(var uParam0)//Position - 0x1AFEB
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_507(uParam0);
			if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_447((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_506(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177A))
					{
						Global_1C177A[Global_1C177A.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177A.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177A.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_504(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177A.f_CE), &Global_1C177A, &(Global_1C177A.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177A.f_CE > 12)
			{
				Global_1C177A.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177A.f_CE)
				{
					if (func_447((uParam0[iVar0 /*100*/])->f_20) && func_447(Global_1C177A[iVar1 /*13*/]))
					{
						if (unk_0x8C3429C475E8DB5D(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177A[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177A.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_504(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1B18E
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x1A927941D0EBB398())
			{
			}
			else
			{
				unk_0x78AD70BEE1186469();
				unk_0x84C44F1868801E06(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x1A927941D0EBB398())
			{
				if (unk_0xECE4AB055AC5B99A())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x3B4C5D4C0D509B43(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_505(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x1A927941D0EBB398())
			{
				unk_0xD1F2AC8A90616142();
			}
			else
			{
				unk_0x78AD70BEE1186469();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_505(var uParam0, char* sParam1)//Position - 0x1B247
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

int func_506(var uParam0, var uParam1)//Position - 0x1B259
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_447(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x8C3429C475E8DB5D(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_507(var uParam0)//Position - 0x1B298
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_508(&(Global_1C177A[iVar0 /*13*/]));
		StringCopy(&(Global_1C177A.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!unk_0x1A927941D0EBB398())
		{
			unk_0x78AD70BEE1186469();
		}
	}
	if (unk_0x1A927941D0EBB398())
	{
		unk_0xD1F2AC8A90616142();
	}
	Global_1C177A.f_CE = 0;
}

void func_508(var uParam0)//Position - 0x1B309
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

int func_509(var uParam0)//Position - 0x1B351
{
	int iVar0;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		return 1;
	}
	else if (unk_0xF49912B78E2591B6())
	{
		if (!func_511(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_510(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_510(var uParam0, var uParam1, char* sParam2)//Position - 0x1B3B5
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_447(*uParam1))
			{
				if (!unk_0x25C195432AADB46C(uParam1))
				{
					if (unk_0xF49912B78E2591B6())
					{
						if (unk_0x3C06831BC53A4780(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xA76D65C63ED50F67())
					{
						if (unk_0x3C06831BC53A4780(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x3F78275202D8E949(uParam1), 64);
						if (unk_0x3E9993F328985CCB())
						{
						}
						else if (unk_0xF7E138CFA19B55E7())
						{
						}
						else if (unk_0x8ACB0C3FACC09467())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x25C195432AADB46C(uParam1))
			{
				if (!unk_0xCCEB07853B18E06B())
				{
					if (unk_0x0D7CCCA101B6132E())
					{
						StringCopy(sParam2, unk_0x3F78275202D8E949(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_511(var uParam0)//Position - 0x1B4BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xF49912B78E2591B6())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C017E.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C017E.f_B11[iVar1 /*16*/]), "", 64);
				func_508(&(Global_1C017E.f_BD2[iVar1 /*13*/]));
				if (func_447((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C017E.f_BD2[Global_1C017E.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C017E.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C017E.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = unk_0xF18EB09A1D516C58(&(Global_1C017E.f_BD2), Global_1C017E.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xF7AF812DF8CE7D89((uParam0[0 /*100*/])->f_4F, &(Global_1C017E.f_B11), Global_1C017E.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_447((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C017E.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = -1;
			return 1;
			break;
	}
	return 0;
}

int func_512(var uParam0)//Position - 0x1B648
{
	int iVar0;
	
	if (unk_0xF49912B78E2591B6())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_514(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C017E.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_513(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_513(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0x1B6DB
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xF1734B55490E9045(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE88E4A7234E1EF55(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_447(Var0))
			{
				if (!unk_0x25C195432AADB46C(&Var0))
				{
					if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
					{
						if (unk_0x3C06831BC53A4780(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x3F78275202D8E949(&Var0), 64);
						if (unk_0x3E9993F328985CCB())
						{
						}
						else if (unk_0xF7E138CFA19B55E7())
						{
						}
						else if (unk_0x8ACB0C3FACC09467())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x25C195432AADB46C(&Var0))
			{
				if (!unk_0xCCEB07853B18E06B())
				{
					if (unk_0x0D7CCCA101B6132E())
					{
						StringCopy(sParam17, unk_0x3F78275202D8E949(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_514(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x1B7F3
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xF49912B78E2591B6())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xF1734B55490E9045(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE88E4A7234E1EF55(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_447(Var1[0 /*13*/]))
			{
				if (!unk_0x25C195432AADB46C(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xF18EB09A1D516C58(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xF7AF812DF8CE7D89(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_515(var uParam0)//Position - 0x1B8EF
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_452(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C017E.f_AD7[iVar9] = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = -1;
			if (unk_0xB9ACC1154C623363())
			{
				if (unk_0xD7F4457CECF10121(&Var12))
				{
					if (unk_0x24723877416AAAFC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_432(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_521(), 0, 0, 0))
			{
				func_450(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_521())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xD69860729CF9D123(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_492(&Var0, &Var12) || func_492(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x7931D997D70CE9AF(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0xBB9531A49F052904(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_520(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xD69860729CF9D123(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_521() && iVar5 == 0)
								{
									func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C017E.f_AD7[iVar9] = 0;
									Global_1C017E.f_A90[iVar9]++;
								}
								if (func_521() && (func_492(&Var0, &Var12) || func_492(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_492(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C017E.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_518(uParam0->f_2C))
									{
										iVar4 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_453(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						if (!func_521())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_520(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar7, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_521() && iVar5 == iVar7)
								{
									if (!func_492(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_521() && (func_492(&Var0, &Var12) || func_492(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									if (func_447(Var0) && !func_492(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_492(&Var0, &Var12))
										{
											if (Global_1C017E.f_AD7[iVar9] < 0)
											{
												Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_518(uParam0->f_2C))
										{
											iVar4 = unk_0x7931D997D70CE9AF(iVar7, Global_1C017E.f_A95);
											if (iVar4 == 1)
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_453(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x7931D997D70CE9AF(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0xBB9531A49F052904(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_520(&Var0);
							iVar7++;
						}
						unk_0xF44A1E8325E80FF1();
						func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_521())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						unk_0xF44A1E8325E80FF1();
						func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C017E.f_AD7[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_517(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_450(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xD69860729CF9D123(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C017E.f_A90[iVar9] < 12 || bVar10)
							{
								if (func_521() && (func_492(&Var0, &Var12) || func_492(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_518(uParam0->f_2C))
									{
										iVar4 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_453(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C017E.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C017E.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_518(uParam0->f_2C))
									{
										iVar4 = unk_0x7931D997D70CE9AF(iVar2, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_453(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_520(&Var0);
							iVar2++;
						}
					}
					unk_0xF44A1E8325E80FF1();
					func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xF44A1E8325E80FF1();
					func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar9);
					Global_1C017E.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C017E.f_AD7[iVar9] == -1 && func_521())
				{
					if (Global_1C017E.f_A90[iVar9] >= 1)
					{
						func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
					Global_1C017E.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_516(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_516(int iParam0, int iParam1)//Position - 0x1C725
{
	int iVar0;
	
	if ((func_521() && Global_1C017E.f_A90[iParam0] > Global_1C017E.f_AD7[iParam0]) && Global_1C017E.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C017E.f_A90[iParam0])
			{
				if (iVar0 != Global_1C017E.f_AD7[iParam0])
				{
					if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == -1)
						{
							Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_521())
		{
		}
		if (Global_1C017E.f_A90[iParam0] <= Global_1C017E.f_AD7[iParam0])
		{
		}
		if (Global_1C017E.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_517(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x1C84A
{
	switch (*uParam0)
	{
		case 0:
			if (!func_439() && !func_435())
			{
				func_433(*uParam2);
				if (unk_0xFD605AFF5F99FD18(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x1C900
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_519(var uParam0, char* sParam1, int iParam2)//Position - 0x1C95E
{
	int iVar0;
	int iVar1;
	
	if (func_453(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 64);
		sParam1->f_20 = { func_452(unk_0xB5CEFD608600A09F()) };
	}
	sParam1->f_3B = iParam2;
	if (func_518(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C017E.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C017E.f_A94)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, Global_1C017E.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C017E.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C017E.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_520(var uParam0)//Position - 0x1CA6B
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

int func_521()//Position - 0x1CB19
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_522(var uParam0)//Position - 0x1CB36
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_452(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x0B61CFCE8597AF35();
			Global_1C017E.f_AD7[1] = -1;
			Global_1C0005.f_176 = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_521())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_450(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
					{
						if (func_521())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xD69860729CF9D123(iVar6, &Var0);
									if (func_453(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_492(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x7931D997D70CE9AF(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0xBB9531A49F052904(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_520(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_521() && iVar4 == 0)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								Global_1C017E.f_AD7[iVar9] = 0;
								Global_1C017E.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xD69860729CF9D123(0, &Var0);
							if (func_521() && (func_492(&Var0, &Var10) || func_492(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_447(Var0) && Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_492(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C017E.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_518(uParam0->f_2C))
								{
									iVar7 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
									if (iVar7 == 1)
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_453(uParam0->f_2C))
								{
									MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C017E.f_A94)
								{
									if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar2]);
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C017E.f_A90[1]++;
							}
							else
							{
								func_520(&Var0);
								unk_0xF44A1E8325E80FF1();
								func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C017E.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C017E.f_AD7[iVar9] == -1 && func_521())
								{
									if (Global_1C017E.f_A90[iVar9] >= 1)
									{
										func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
									Global_1C017E.f_A90[iVar9]++;
								}
								return 0;
							}
							func_520(&Var0);
						}
						else
						{
							Global_1C017E.f_A90[1] = 0;
							func_520(&Var0);
							unk_0xF44A1E8325E80FF1();
							func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_521())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_521())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar6, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_521() && iVar4 == iVar6)
								{
									if (!func_492(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_521() && (func_492(&Var0, &Var10) || func_492(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[1] < 12)
								{
									if (func_447(Var0) && !func_492(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_492(&Var0, &Var10))
										{
											if (Global_1C017E.f_AD7[1] < 0)
											{
												Global_1C017E.f_AD7[1] = Global_1C017E.f_A90[1];
											}
										}
										MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_4A = 1;
										if (func_518(uParam0->f_2C))
										{
											iVar7 = unk_0x7931D997D70CE9AF(iVar6, Global_1C017E.f_A95);
											if (iVar7 == 1)
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_453(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_43[iVar2] = unk_0x7931D997D70CE9AF(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3C[iVar2] = unk_0xBB9531A49F052904(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[1]++;
									}
								}
							}
							func_520(&Var0);
							iVar6++;
						}
						unk_0xF44A1E8325E80FF1();
						func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C017E.f_AD7[iVar9] == -1 && func_521())
						{
							if (Global_1C017E.f_A90[iVar9] >= 1)
							{
								func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_519(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
							Global_1C017E.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C017E.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_516(iVar9, Global_1C0005.f_176);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_523(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1D539
{
	switch (*uParam0)
	{
		case 0:
			if (!func_439() && !func_435())
			{
				func_433(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_524(var uParam0)//Position - 0x1D5F5
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_452(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C017E.f_AD7[iVar10] = -1;
			Global_1C017E.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = -1;
			Global_1C017D = 0;
			if (func_525(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_432(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_521(), 0, 0, 0))
			{
				func_450(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_521())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xD69860729CF9D123(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_492(&Var1, &Var0) || func_492(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x7931D997D70CE9AF(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0xBB9531A49F052904(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_520(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xD69860729CF9D123(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar10] < 12)
							{
								if (func_521() && iVar6 == 0)
								{
									func_519(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C017E.f_AD7[iVar10] = 0;
									Global_1C017E.f_A90[iVar10]++;
								}
								if (func_521() && (func_492(&Var1, &Var0) || func_492(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_492(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C017E.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_518(uParam0->f_2C))
									{
										iVar5 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
										if (iVar5 == 1)
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_453(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						if (!func_521())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_520(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar8, &Var1);
							if (Global_1C017E.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_521() && iVar6 == iVar8)
								{
									if (!func_492(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_519(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
										Global_1C017E.f_A90[iVar10]++;
									}
								}
								if (func_521() && (func_492(&Var1, &Var0) || func_492(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar10] < 12)
								{
									if (func_447(Var1) && !func_492(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_492(&Var1, &Var0))
										{
											if (Global_1C017E.f_AD7[iVar10] < 0)
											{
												Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_518(uParam0->f_2C))
										{
											iVar5 = unk_0x7931D997D70CE9AF(iVar8, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_453(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C017E.f_A90[iVar10]++;
									}
								}
							}
							func_520(&Var1);
							iVar8++;
						}
						unk_0xF44A1E8325E80FF1();
						func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C017E.f_AD7[iVar10] == -1 && func_521())
							{
								if (Global_1C017E.f_A90[iVar10] >= 1)
								{
									func_519(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_519(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
								Global_1C017E.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						unk_0xF44A1E8325E80FF1();
						func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C017E.f_AD7[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_517(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_450(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xD69860729CF9D123(iVar3, &Var1);
							if (func_521() && (func_492(&Var1, &Var0) || func_492(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C017E.f_A90[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_518(uParam0->f_2C))
										{
											iVar5 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_453(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = unk_0x7931D997D70CE9AF(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = unk_0xBB9531A49F052904(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C017E.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C017E.f_A90[iVar10]++;
											}
										}
										else if (Global_1C017E.f_A90[iVar10] == 1 && Global_1C017E.f_AD7[iVar10] == -1)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
									else if (Global_1C017E.f_A90[iVar10] < 12)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_518(uParam0->f_2C))
										{
											iVar5 = unk_0x7931D997D70CE9AF(iVar3, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_453(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar4] = unk_0x7931D997D70CE9AF(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar4] = unk_0xBB9531A49F052904(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
								}
							}
							func_520(&Var1);
							iVar3++;
						}
					}
					unk_0xF44A1E8325E80FF1();
					func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar10);
					func_368(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C017E.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C017E.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C017E.f_AD7[iVar10] == -1 && func_521())
			{
				if (Global_1C017E.f_A90[iVar10] >= 1)
				{
					func_519(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_519(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
				Global_1C017E.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_516(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_525(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0x1E430
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x3362CDE8460ED38B(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x3362CDE8460ED38B(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_526(var uParam0)//Position - 0x1E4C8
{
	int iVar0;
	
	if (unk_0xA8C9945AE39E6D48(Global_1C017E.f_B0A))
	{
		iVar0 = unk_0x6C6916B5786D9360(Global_1C017E.f_B0A);
		if (iVar0 < 300000)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 5);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_2A), 5);
			func_501(Global_1C017E.f_B0A, -1);
		}
	}
}

void func_527(int iParam0)//Position - 0x1E518
{
	if (unk_0xA7F138B5B1AB2CF6(iParam0))
	{
		unk_0x4B6031094354FED6(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_528(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1E538
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xFA30DFD0084E92FE(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xFA30DFD0084E92FE(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xFA30DFD0084E92FE(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x57D316754A262B34() && unk_0xB9ACC1154C623363())
		{
			if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_452(unk_0xB5CEFD608600A09F()) };
				if (unk_0xD7F4457CECF10121(&Var4))
				{
					unk_0x24723877416AAAFC(&Var1, 35, &Var4);
					if (!unk_0xF1734B55490E9045(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(*iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	if (bVar3)
	{
		unk_0x57016C44F10111F0(sVar0);
		unk_0xA5CB8AC295293426(&Var2);
		unk_0x64989E60CF560CA1();
	}
	else
	{
		unk_0x57016C44F10111F0(sVar0);
		unk_0x64989E60CF560CA1();
	}
	unk_0xF9FBC2F3F73D94C9();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0xF0059F27F7BB6680(&iVar5, 7);
		unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
		unk_0x1E1FB49121565EB6(*iParam1);
		unk_0x1E1FB49121565EB6(iVar5);
		if (!unk_0x57D316754A262B34())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x6EFCE916927099A8())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C017E.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x57016C44F10111F0(sVar0);
		unk_0xCEC028A78CF8885E();
		unk_0xF9FBC2F3F73D94C9();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xFA30DFD0084E92FE(iParam2, 5))
		{
			if (unk_0x0B61CFCE8597AF35() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iParam2, 6))
		{
			if (unk_0xBAF5BEF76386574D())
			{
				if (unk_0x8F0C986A6B5D1E16())
				{
					if (unk_0x57D316754A262B34() && unk_0xB9ACC1154C623363())
					{
						if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_452(unk_0xB5CEFD608600A09F()) };
							if (unk_0xD7F4457CECF10121(&Var6))
							{
								unk_0x24723877416AAAFC(&Var1, 35, &Var6);
								if (!unk_0xF1734B55490E9045(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0xF0059F27F7BB6680(&iVar7, 7);
		unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
		unk_0x1E1FB49121565EB6(*iParam1);
		unk_0x1E1FB49121565EB6(iVar7);
		if (bVar3)
		{
			unk_0x57016C44F10111F0(sVar0);
			unk_0xA5CB8AC295293426(&Var2);
			unk_0xCEC028A78CF8885E();
		}
		else
		{
			unk_0x57016C44F10111F0(sVar0);
			unk_0xCEC028A78CF8885E();
		}
		unk_0xF9FBC2F3F73D94C9();
		*iParam1++;
	}
}

void func_529(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x1E80E
{
	int iVar0;
	
	unk_0x29CD142125FE177B(iParam0, "SET_TITLE");
	unk_0x57016C44F10111F0(sParam1);
	unk_0x64989E60CF560CA1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x57016C44F10111F0(uParam2[iVar0 /*6*/]);
		unk_0x64989E60CF560CA1();
		iVar0++;
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_530(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x1E850
{
	unk_0x29CD142125FE177B(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x57016C44F10111F0(sParam1);
	if (!unk_0xF1734B55490E9045(sParam2))
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				unk_0xA5CB8AC295293426(sParam3);
			}
		}
		else if (!unk_0xF1734B55490E9045(sParam3))
		{
			unk_0xC9C304D0AABE1335(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				unk_0xA5CB8AC295293426(sParam3);
			}
		}
		else if (!unk_0xF1734B55490E9045(sParam3))
		{
			unk_0xC9C304D0AABE1335(sParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam5);
	}
	unk_0x64989E60CF560CA1();
	unk_0xF9FBC2F3F73D94C9();
}

void func_531(int iParam0, int iParam1)//Position - 0x1E8E0
{
	unk_0x29CD142125FE177B(iParam0, "SET_DISPLAY_TYPE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_532(int iParam0)//Position - 0x1E8FD
{
	Global_14136C = iParam0;
}

void func_533(int iParam0)//Position - 0x1E90B
{
	Global_14D262.f_437 = iParam0;
}

void func_534(bool bParam0)//Position - 0x1E91C
{
	if (bParam0)
	{
		func_537();
	}
	func_535(4, -1);
	func_535(6, -1);
	func_535(7, -1);
	func_535(3, -1);
	func_535(1, -1);
	func_535(2, -1);
	func_535(11, -1);
	func_535(13, -1);
	func_535(14, -1);
	func_535(16, -1);
}

void func_535(int iParam0, int iParam1)//Position - 0x1E96D
{
	unk_0xF0059F27F7BB6680(&(Global_14CC81.f_417), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_14CC81.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_536(int iParam0)//Position - 0x1E9A3
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_141(0))
		{
			func_138(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_537()//Position - 0x1E9CC
{
	Global_267214.f_11A6 = 0;
}

void func_538(bool bParam0)//Position - 0x1E9DC
{
	if (bParam0)
	{
		func_260(&(Local_45.f_77), 0, 0, 1, 1);
		func_259(&(Local_45.f_77), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_259(&(Local_45.f_77), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_539(&(Local_45.f_77), 1);
	}
	else
	{
		func_260(&(Local_45.f_77), 0, 0, 1, 1);
		func_259(&(Local_45.f_77), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_539(&(Local_45.f_77), 1);
	}
}

void func_539(var uParam0, bool bParam1)//Position - 0x1EA4F
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 1024);
	}
	else
	{
		func_153(&(uParam0->f_1), 1024);
	}
}

int func_540(var uParam0)//Position - 0x1EA75
{
	if ((unk_0xFA30DFD0084E92FE(uParam0->f_2A, 1) && Global_1C017E.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_541(var uParam0)//Position - 0x1EAAC
{
	if (Global_1973A != 0 && Global_19B04.f_4A46.f_C[Global_1973A /*8*/].f_4 == 0)
	{
		func_260(uParam0, 0, 0, 1, 1);
		func_259(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x97EF4023B86C354F())
		{
			func_259(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (unk_0x97EF4023B86C354F() && iLocal_194)
		{
			func_259(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	else
	{
		func_260(uParam0, 0, 0, 1, 1);
		func_259(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_259(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x97EF4023B86C354F())
		{
			func_259(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (unk_0x97EF4023B86C354F() && iLocal_194)
		{
			func_259(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	func_539(&(Local_45.f_77), 1);
}

void func_542()//Position - 0x1EBBE
{
	func_571();
	func_427();
	func_570(&(Local_2067.f_166[0 /*189*/].f_18), 0, 0, "PilotDispatch", 0, 1);
	func_570(&uLocal_1759, 0, 0, "PilotDispatch", 0, 1);
	func_559(&Local_2067);
	func_543(&Local_2067, Local_45.f_A);
	if (unk_0x724D816EA203A79E(Local_2067.f_166[0 /*189*/].f_9))
	{
		unk_0xD421BC740C5340C3(Local_2067.f_166[0 /*189*/].f_9, 4);
	}
}

void func_543(var uParam0, int iParam1)//Position - 0x1EC28
{
	switch (iParam1)
	{
		case 0:
			func_558(&Local_2067);
			break;
		
		case 1:
			func_557(&Local_2067);
			break;
		
		case 2:
			func_556(&Local_2067);
			func_555(&(Local_2067.f_1B[2 /*10*/]), 1);
			func_555(&(Local_2067.f_1B[3 /*10*/]), 1);
			break;
		
		case 3:
			func_554(&Local_2067);
			break;
		
		case 4:
			func_544(&Local_2067);
			break;
	}
}

void func_544(var uParam0)//Position - 0x1ECA1
{
	func_559(uParam0);
	uParam0->f_C = 32;
	func_553(&(uParam0->f_1B[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_552(&(uParam0->f_166[0 /*189*/]));
	func_551(&(uParam0->f_166[0 /*189*/]), "Player");
	func_547(&(uParam0->f_166[0 /*189*/]), unk_0xBC25C936A095B5BA(), Local_45.f_1);
	func_546(&(uParam0->f_166[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_545(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_545(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F159
{
	uParam0->f_14 = iParam1;
	uParam0->f_15 = iParam2;
	uParam0->f_16 = iParam3;
}

void func_546(var uParam0, vector3 vParam1, float fParam2)//Position - 0x1F173
{
	uParam0->f_10 = { vParam1 };
	uParam0->f_13 = fParam2;
}

void func_547(var uParam0, int iParam1, int iParam2)//Position - 0x1F18B
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
	func_548(iParam2, &(Local_45.f_F3));
}

void func_548(int iParam0, var uParam1)//Position - 0x1F1A9
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_550(uParam1);
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
		if (uParam1->f_41 == -1 && !func_118(uParam1->f_42))
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
		func_549(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_121(iVar0 + 1));
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

int func_549(int iParam0, var uParam1, var uParam2)//Position - 0x1F454
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

void func_550(var uParam0)//Position - 0x1F52E
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

void func_551(char* sParam0, char* sParam1)//Position - 0x1F5DF
{
	StringCopy(sParam0, sParam1, 32);
}

void func_552(var uParam0)//Position - 0x1F5ED
{
	uParam0->f_A = 0;
	uParam0->f_B = -1;
	uParam0->f_C = 0;
	uParam0->f_D = 0f;
	uParam0->f_17 = 13;
}

void func_553(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)//Position - 0x1F60F
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_554(var uParam0)//Position - 0x1F631
{
	func_559(uParam0);
	uParam0->f_C = 28;
	func_553(&(uParam0->f_1B[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_553(&(uParam0->f_1B[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_552(&(uParam0->f_166[0 /*189*/]));
	func_551(&(uParam0->f_166[0 /*189*/]), "Player");
	func_547(&(uParam0->f_166[0 /*189*/]), unk_0xBC25C936A095B5BA(), Local_45.f_1);
	func_546(&(uParam0->f_166[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_545(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_555(var uParam0, int iParam1)//Position - 0x1FA61
{
	func_331(&(uParam0->f_9), iParam1);
}

void func_556(var uParam0)//Position - 0x1FA73
{
	func_559(uParam0);
	uParam0->f_C = 21;
	func_553(&(uParam0->f_1B[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_553(&(uParam0->f_1B[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_552(&(uParam0->f_166[0 /*189*/]));
	func_551(&(uParam0->f_166[0 /*189*/]), "Player");
	func_547(&(uParam0->f_166[0 /*189*/]), unk_0xBC25C936A095B5BA(), Local_45.f_1);
	func_546(&(uParam0->f_166[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_545(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_557(var uParam0)//Position - 0x1FDB5
{
	func_559(uParam0);
	uParam0->f_C = 19;
	func_553(&(uParam0->f_1B[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_553(&(uParam0->f_1B[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_553(&(uParam0->f_1B[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_552(&(uParam0->f_166[0 /*189*/]));
	func_551(&(uParam0->f_166[0 /*189*/]), "Player");
	func_547(&(uParam0->f_166[0 /*189*/]), unk_0xBC25C936A095B5BA(), Local_45.f_1);
	func_546(&(uParam0->f_166[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_545(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_558(var uParam0)//Position - 0x200AF
{
	func_559(uParam0);
	uParam0->f_C = 18;
	func_553(&(uParam0->f_1B[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_553(&(uParam0->f_1B[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_553(&(uParam0->f_1B[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_553(&(uParam0->f_1B[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_D = 1;
	func_552(&(uParam0->f_166[0 /*189*/]));
	func_551(&(uParam0->f_166[0 /*189*/]), "Player");
	func_547(&(uParam0->f_166[0 /*189*/]), unk_0xBC25C936A095B5BA(), Local_45.f_1);
	func_546(&(uParam0->f_166[0 /*189*/]), vLocal_1972, 154.8464f);
	func_545(&(uParam0->f_166[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_559(var uParam0)//Position - 0x20381
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_45.f_A != -1)
	{
		fVar0 = func_35(Local_45.f_A);
		if (fVar0 <= 0f || fVar0 > Local_45.f_C[Local_45.f_A])
		{
			fVar0 = Local_45.f_C[Local_45.f_A];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_A = (uParam0->f_9 / 2f);
	}
	func_567(uParam0);
	uParam0->f_C = 0;
	func_560(uParam0);
	uParam0->f_D = 0;
}

void func_560(var uParam0)//Position - 0x203EF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_D)
	{
		func_561(uParam0, iVar0);
		iVar0++;
	}
}

void func_561(var uParam0, int iParam1)//Position - 0x20414
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_563(&(uParam0->f_166[iParam1 /*189*/]));
	func_562(&(uParam0->f_166[iParam1 /*189*/]));
}

void func_562(char* sParam0)//Position - 0x2044A
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_A = 0;
	sParam0->f_B = -1;
	sParam0->f_C = 0;
	sParam0->f_D = 0f;
	sParam0->f_E = 0f;
	sParam0->f_F = 0f;
	sParam0->f_17 = 13;
	sParam0->f_10 = { Local_45.f_3 };
	sParam0->f_13 = Local_45.f_6;
	sParam0->f_14 = Local_45.f_7;
	sParam0->f_15 = Local_45.f_8;
	sParam0->f_16 = Local_45.f_9;
}

void func_563(var uParam0)//Position - 0x204B4
{
	func_566(uParam0);
	func_565(uParam0);
	func_564(uParam0);
}

void func_564(var uParam0)//Position - 0x204CE
{
	if (unk_0x724D816EA203A79E(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_45.f_1)
		{
			if (!(unk_0x1D403DFADBC2DE3C(uParam0->f_8, 0) || unk_0x1D403DFADBC2DE3C(uParam0->f_9, 0)))
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x49D46EE47C9CCB66(uParam0->f_8);
				}
			}
			unk_0xCF6040807CC0E4A5(&(uParam0->f_9));
		}
	}
}

void func_565(var uParam0)//Position - 0x20528
{
	if (unk_0x724D816EA203A79E(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0xBC25C936A095B5BA())
		{
			unk_0xF845620A03C7425B(&(uParam0->f_8));
		}
	}
}

void func_566(var uParam0)//Position - 0x2054E
{
	func_83(&(uParam0->f_A));
}

void func_567(var uParam0)//Position - 0x2055E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_C)
	{
		func_568(uParam0, iVar0);
		iVar0++;
	}
}

void func_568(var uParam0, int iParam1)//Position - 0x20583
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_1B[iParam1 /*10*/]));
	func_79(&(uParam0->f_1B[iParam1 /*10*/]));
	func_569(&(uParam0->f_1B[iParam1 /*10*/]));
}

void func_569(var uParam0)//Position - 0x205C4
{
	*uParam0 = { Local_45.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_570(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x205ED
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

void func_571()//Position - 0x20688
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_572(&(Global_1C0005.f_49));
	func_572(&(Global_1C0005.f_8E));
	func_572(&(Global_1C0005.f_D3));
	func_572(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_508(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = -1;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_572(var uParam0)//Position - 0x2072C
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_573(bool bParam0)//Position - 0x20767
{
	if (bParam0)
	{
		unk_0xC63520BF0B3FB162(0);
		unk_0x720260ACC9BD334E(1);
		unk_0x4101DC5C065D2EB5(0);
		func_170(1);
		Global_15926 = 1;
	}
	else
	{
		unk_0xC63520BF0B3FB162(1);
		unk_0x720260ACC9BD334E(0);
		unk_0x4101DC5C065D2EB5(1);
		func_170(0);
		Global_15926 = 0;
	}
}

void func_574(var uParam0)//Position - 0x207A9
{
	*uParam0 = unk_0x9934FEFB3B8C6DB8("COUNTDOWN");
	unk_0x284F2ACE6839D3C0("HUD_321_GO", false, -1);
}

int func_575(int iParam0)//Position - 0x207C7
{
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(iParam0);
	}
	else if (unk_0x726D9204B160D23E())
	{
		return 1;
	}
	return 0;
}

void func_576()//Position - 0x207EB
{
	int iVar0;
	
	if (!iLocal_2061)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0x724D816EA203A79E(iVar0) && !unk_0x1D403DFADBC2DE3C(iVar0, 0))
				{
					if (unk_0x2A348A3A98B80B13(iVar0))
					{
						if (!unk_0x17FAADF9916EF741())
						{
							unk_0x3857DADBD6EC8A54("MGSP_START");
							iLocal_2061 = 1;
						}
					}
				}
			}
		}
	}
}

int func_577(int iParam0, int iParam1)//Position - 0x20852
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_578(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x20868
{
	*iParam1 = unk_0xA7C1E72EF76E439E(iParam0, 24, 31);
	*iParam2 = unk_0xA7C1E72EF76E439E(iParam0, 16, 23);
	*iParam3 = unk_0xA7C1E72EF76E439E(iParam0, 8, 15);
	*uParam4 = unk_0xA7C1E72EF76E439E(iParam0, 0, 7);
}

int func_579(int iParam0)//Position - 0x2089F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_580(iVar0, iVar1, iVar2, iVar3);
}

var func_580(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x208C1
{
	var uVar0;
	
	unk_0xD5210136426F52C2(&uVar0, 24, 31, iParam0);
	unk_0xD5210136426F52C2(&uVar0, 16, 23, iParam1);
	unk_0xD5210136426F52C2(&uVar0, 8, 15, iParam2);
	unk_0xD5210136426F52C2(&uVar0, 0, 7, iParam3);
	return uVar0;
}

int func_581()//Position - 0x208F6
{
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	func_591(23, 1);
	func_590(10);
	switch (Local_1982.f_5)
	{
		case 0:
			unk_0xAEC867D0DBB7AFEB(0);
			unk_0x34DAC25A04E24704("EXTRASUNNY", 10f);
			func_589();
			func_588(2, 0);
			func_588(1, 0);
			func_588(3, 0);
			func_588(4, 0);
			func_588(5, 0);
			func_588(6, 0);
			func_588(7, 0);
			unk_0xADC7E88690E324EB(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f, 0);
			unk_0xEDAD35A0D81ED3FB(vLocal_2073, 600f, 0, 0, 0, 0, false, 0);
			func_582(&Local_2067, Local_45.f_A);
			unk_0xE2BA4D3ADF5C0E62(unk_0xB5CEFD608600A09F(), 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 512);
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
			{
				Local_1982.f_5 = 2;
			}
			else
			{
				Local_1982.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_355(1000))
			{
				Local_1982.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0x900CF084251DED26("SP_SPR", 3);
			unk_0x8AA3F48A15444B98("Shared", false);
			while (!unk_0x499783D01578C2D2("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			unk_0x284F2ACE6839D3C0("HUD_AWARDS", false, -1);
			Local_1982.f_5 = 3;
			break;
		
		case 3:
			if (unk_0xFA9040D29FE330BD(3))
			{
				Local_1982.f_5 = 4;
			}
			break;
		
		case 4:
			Local_1982.f_5 = 5;
			func_11(&(Local_1982.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_1982.f_2), 0.5f))
			{
				Local_1982.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				Local_1982.f_5 = 9;
			}
			else
			{
				Local_1982.f_5 = 7;
				func_11(&(Local_1982.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_1982.f_2), 0.5f))
			{
				Local_1982.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_575(5000))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				Local_1982.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_1982.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_582(var uParam0, int iParam1)//Position - 0x20B1D
{
	Local_45 = 0;
	Local_45.f_1 = 0;
	Local_45.f_2 = 2;
	Local_45.f_3 = { vLocal_1972 };
	Local_45.f_6 = 154.8464f;
	Local_45.f_7 = 4;
	Local_45.f_8 = joaat("a_m_y_genstreet_01");
	Local_45.f_9 = joaat("stunt");
	StringCopy(&(Local_45.f_18[0 /*8*/]), "AIRPORT", 32);
	Local_45.f_C[0] = 165f;
	StringCopy(&(Local_45.f_18[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_45.f_C[1] = 80f;
	StringCopy(&(Local_45.f_18[2 /*8*/]), "VINEWOOD", 32);
	Local_45.f_C[2] = 165f;
	StringCopy(&(Local_45.f_18[3 /*8*/]), "BRIDGEWORK", 32);
	Local_45.f_C[3] = 165f;
	StringCopy(&(Local_45.f_18[4 /*8*/]), "ALTITUDE", 32);
	Local_45.f_C[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_587(&Local_2067);
			break;
		
		case 1:
			func_586(&Local_2067);
			break;
		
		case 2:
			func_585(&Local_2067);
			break;
		
		case 3:
			func_584(&Local_2067);
			break;
		
		case 4:
			func_583(&Local_2067);
			break;
	}
}

void func_583(var uParam0)//Position - 0x20C31
{
}

void func_584(var uParam0)//Position - 0x20C39
{
}

void func_585(var uParam0)//Position - 0x20C41
{
}

void func_586(var uParam0)//Position - 0x20C49
{
}

void func_587(var uParam0)//Position - 0x20C51
{
}

void func_588(int iParam0, int iParam1)//Position - 0x20C59
{
	unk_0xF0059F27F7BB6680(&Global_635B, iParam0);
	StringCopy(&(Global_635C[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_6393[iParam0] = iParam1;
}

void func_589()//Position - 0x20C80
{
	Global_4336.f_5 = 1;
}

void func_590(int iParam0)//Position - 0x20C8E
{
	func_308();
	Global_11641 = iParam0;
	Global_11640 = 0;
	Global_11643 = 3;
}

void func_591(int iParam0, bool bParam1)//Position - 0x20CAA
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_63B2, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_63B2, iParam0);
	}
}

void func_592()//Position - 0x20CCC
{
}

void func_593()//Position - 0x20CD4
{
	unk_0xDE7B9CB38D019BF0();
	func_361();
	func_427();
	func_571();
	func_591(23, 0);
	func_573(0);
	unk_0xAEC867D0DBB7AFEB(5);
	unk_0x7A89E6B582BCD8C2();
	func_308();
	func_235(0);
	func_253(0);
	unk_0x11E7662BFA0E7D15();
	unk_0x748798F6C2AB96B7("MGSP_START");
	unk_0x748798F6C2AB96B7("MGSP_FAIL");
	unk_0x748798F6C2AB96B7("MGTR_COMPLETE");
	unk_0x3857DADBD6EC8A54("MGSP_END");
	unk_0xC32C243942383443();
	func_601(2, 0);
	func_601(1, 0);
	func_601(3, 0);
	func_601(4, 0);
	func_601(5, 0);
	func_601(6, 0);
	func_601(7, 0);
	unk_0xE2BA4D3ADF5C0E62(unk_0xB5CEFD608600A09F(), 1);
	unk_0xF7D229BABED096C4();
	func_599(&(Local_45.f_76));
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 0);
	unk_0x841D233D3CE81152(3, true);
	unk_0x786556581D95BCB2("PilotSchool");
	func_597(&Local_2067, 1);
	unk_0x4F5DAC981AF98536(103, "SPRTaxi");
	unk_0x4F5DAC981AF98536(104, "SPRTaxi");
	unk_0x7456702622C62EA0(1);
	unk_0xEB233A3B7635D2AC();
	func_596();
	unk_0x59B038076F830627(true);
	unk_0x43F06392C4EF25E0(true);
	func_250();
	unk_0x4AED68BFACFB14CB(true);
	func_594();
	unk_0x95E4B6F3ED223F5A();
}

void func_594()//Position - 0x20DDF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15FB1[iVar0 /*17*/] && !Global_15FB1[iVar0 /*17*/].f_1)
		{
			if (Global_15FB1[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15FB1[iVar0 /*17*/].f_5 != 88 && Global_15FB1[iVar0 /*17*/].f_5 != 89) && Global_15FB1[iVar0 /*17*/].f_5 != 92)
				{
					func_595(Global_15FB1[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_595(int iParam0, bool bParam1)//Position - 0x20E66
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

void func_596()//Position - 0x20EA4
{
	Global_4336.f_5 = 0;
}

void func_597(var uParam0, bool bParam1)//Position - 0x20EB2
{
	if (bParam1)
	{
		func_559(uParam0);
	}
	else
	{
		func_598(uParam0);
	}
	func_137(0);
	func_27(&(uParam0->f_11));
	unk_0x7456702622C62EA0(1);
	unk_0xEB233A3B7635D2AC();
	if (iLocal_2060)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2060 = 0;
	}
}

void func_598(var uParam0)//Position - 0x20EFA
{
}

void func_599(var uParam0)//Position - 0x20F02
{
	func_600(*uParam0);
}

void func_600(var uParam0)//Position - 0x20F11
{
	unk_0xB0B0FE33F4F22679(&uParam0);
}

void func_601(int iParam0, bool bParam1)//Position - 0x20F1F
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

