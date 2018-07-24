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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	var uLocal_250 = 0;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	vector3 vLocal_626 = { 0f, 0f, 0f };
	struct<2> Local_627 = { 0, 5 } ;
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
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_81 = { -131.052f, -1627f, 31.1755f };
	vLocal_82 = { 287.888f, -284.603f, 52.967f };
	vLocal_83 = { -319.66f, -832.28f, 31.61f };
	vLocal_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (unk_0xE8A79675302ED812(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_289(25, iLocal_80);
			func_271();
		}
		else
		{
			func_271();
		}
	}
	vLocal_104 = { ScriptParam_627.f_1[0 /*3*/] };
	func_270(&uLocal_349, 3);
	func_269();
	if ((iLocal_80 == 1 && func_268(55)) && !func_267(55))
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (func_226(vLocal_104, 25, iLocal_80, 0, 0))
	{
		func_223(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_220(&uLocal_349);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		}
		func_219(iLocal_63, &uLocal_348);
		if (unk_0x684B06333594F9EA() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_205())
					{
						unk_0x6E52C7765A0F4382(0);
						unk_0xEDAD35A0D81ED3FB(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, false, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_204())
					{
						func_271();
					}
					break;
				
				case 1:
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = unk_0x9C23040DD1853B23(99, vLocal_104, 0f);
						}
						unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
						switch (iLocal_46)
						{
							case 1:
								func_196();
								break;
							
							case 2:
								unk_0xD4E50AEC04C3A55A("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										unk_0xD4E50AEC04C3A55A("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0x36CEFBE9B745A58D(iLocal_61) || unk_0xD9C1758D86688CEA(iLocal_61, unk_0xBC25C936A095B5BA(), 0))
										{
											bVar0 = unk_0x36CEFBE9B745A58D(iLocal_60);
											if (!unk_0xA901403F1DB7A780(iLocal_151))
											{
											}
											if (bVar0 == 0 && iLocal_80 == 1)
											{
												unk_0x50FBC3BBBAC48D06(iLocal_60, 500, 1000, 0, 0, 0, 0);
												unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
												unk_0x22321800954A532E(iLocal_60, true);
												func_195(1);
												func_190();
											}
										}
										else
										{
											func_160();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									
									case 2:
										unk_0xD4E50AEC04C3A55A("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_159();
										if (iLocal_52 && !func_158())
										{
											iLocal_47 = 4;
										}
										break;
									
									case 4:
										unk_0xD4E50AEC04C3A55A("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_157())
										{
											func_156();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (unk_0xF4FCC3C1048FF2AB(iLocal_60, 242628503) == 7)
										{
											unk_0xC5A6DFE2B8987B17(&iLocal_103);
											unk_0x56F2E1B5599188FA(0, iLocal_61, 5000, 0, 2);
											unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 5000);
											unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x535008C596714F9E(iLocal_103);
											unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
											unk_0x02DAF06EA4F08219(&iLocal_103);
										}
										break;
									
									case 5:
										func_153();
										if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
										{
											if (unk_0xF4FCC3C1048FF2AB(iLocal_60, 242628503) == 7)
											{
												unk_0xC5A6DFE2B8987B17(&iLocal_103);
												unk_0x85DB484A637CEAB9(0, iLocal_61, 0);
												unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x535008C596714F9E(iLocal_103);
												unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
												unk_0x02DAF06EA4F08219(&iLocal_103);
											}
										}
										break;
								}
								if (func_152())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_151();
								if (iLocal_47 == 0)
								{
									if (func_149())
									{
										if (iLocal_119 == 4)
										{
											if (unk_0x2DA8CA50A72528FB(iLocal_64))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_64);
											}
											if (unk_0x2DA8CA50A72528FB(iLocal_63))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_63);
											}
											if (!unk_0x2DA8CA50A72528FB(iLocal_65))
											{
												iLocal_65 = func_147(iLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_146())
									{
										func_145();
									}
								}
								if (func_144())
								{
									func_143();
									func_142();
									if (unk_0x4DBCE270B354E123(iLocal_60, vLocal_146, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!unk_0x8F97799512B006B7(iLocal_61, 0))
									{
										func_140(iLocal_64, &uLocal_118);
									}
									else if (unk_0x2DA8CA50A72528FB(iLocal_64))
									{
										if (unk_0x05C02D6192B773AF(iLocal_64) == 1)
										{
										}
										else
										{
											unk_0xF9C2945DB5BAB4BF(iLocal_64, false);
											unk_0x0D5352939CC40C16(iLocal_64, 1);
										}
									}
								}
								if (func_139())
								{
									iLocal_46 = 10;
								}
								break;
							
							case 4:
								unk_0xD4E50AEC04C3A55A("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_138(1);
								if (func_157())
								{
									func_156();
									func_153();
								}
								if (func_152())
								{
									iLocal_46 = 11;
								}
								func_130();
								break;
							
							case 5:
								unk_0xD4E50AEC04C3A55A("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_138(1);
								if (!bLocal_126)
								{
									func_129(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_128();
									func_127();
									func_126();
									if (func_125())
									{
										func_124();
										func_190();
									}
									if (func_118(func_119()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_57();
								break;
							
							case 10:
								unk_0xD4E50AEC04C3A55A("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_56();
								break;
							
							case 3:
								func_55();
								break;
							
							case 11:
								func_54();
								break;
							
							case 6:
								if (func_152())
								{
									iLocal_46 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!unk_0x36CEFBE9B745A58D(iLocal_60))
								{
									if (unk_0xE642C1AC73CE364E(iLocal_60, unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_271();
									}
								}
								break;
							
							case 9:
								unk_0xD4E50AEC04C3A55A("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0x724D816EA203A79E(iLocal_61))
								{
									if (unk_0x36CEFBE9B745A58D(iLocal_61))
									{
										if (unk_0x2DA8CA50A72528FB(iLocal_64))
										{
											unk_0x07B8ECB35A4ED3AC(&iLocal_64);
										}
										if (!unk_0x724D816EA203A79E(iLocal_60))
										{
											if (unk_0x724D816EA203A79E(iLocal_62))
											{
												unk_0xA35241BCE4C1A24B(&iLocal_62);
											}
											func_40();
											iLocal_54 = 1;
											func_130();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0x724D816EA203A79E(iLocal_62))
								{
									unk_0xA35241BCE4C1A24B(&iLocal_62);
								}
								unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
								func_190();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (unk_0xA901403F1DB7A780(iLocal_151))
						{
							if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
							{
								if (SYSTEM::VDIST(vLocal_146, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 150f)
								{
									func_271();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(unk_0xBC25C936A095B5BA(), iLocal_61, 1) > 150f && (!unk_0xD1DC4B08247A4317(iLocal_61) || unk_0x41A5D6415E2CC10E(iLocal_61)))
								{
									func_37(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_336, 0, 0);
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_60))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							if (unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 1))
							{
								if (unk_0x724D816EA203A79E(iLocal_62))
								{
									if (unk_0xB6A16B5E7EB81F9B(iLocal_62, iLocal_60))
									{
										unk_0x17175087F2DB6AC8(iLocal_62, 1, true);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0) && !unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
							{
								if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_61, true), unk_0x541C2AEF053615BC(iLocal_60, true), true) > 100f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_61, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) < 100f)
								{
									unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_61))
						{
							if (iLocal_80 == 3)
							{
								if (unk_0xF4FCC3C1048FF2AB(iLocal_61, 1805844857) != 1)
								{
									unk_0xD999D66C5AFA4BE3(iLocal_61);
									unk_0x5558ED6D4A2DEC93(iLocal_61, iLocal_60, 200f, -1, 0, 0);
									unk_0x3E2B7D349B5735D3(iLocal_61, -530524, true, 0, 0);
									iLocal_124 = 1;
								}
							}
							else if (unk_0xF4FCC3C1048FF2AB(iLocal_61, 1805844857) != 1)
							{
								unk_0xD999D66C5AFA4BE3(iLocal_61);
								unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
								unk_0x3E2B7D349B5735D3(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (unk_0x619CCA1A6FD0BC87(iLocal_61, -2134635134))
							{
								unk_0x5558ED6D4A2DEC93(iLocal_61, iLocal_60, 200f, -1, 0, 0);
								unk_0x3E2B7D349B5735D3(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (iLocal_80 == 1 || iLocal_80 == 4)
							{
								if (unk_0x96044E39418AAF17(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (unk_0x4A3B2CF8BADDD74E(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
										unk_0x3E2B7D349B5735D3(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
								if (unk_0x96044E39418AAF17(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (unk_0x4A3B2CF8BADDD74E(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
										unk_0x3E2B7D349B5735D3(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_271();
		}
	}
}

void func_1()//Position - 0xA1E
{
	if (unk_0x724D816EA203A79E(iLocal_60))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_60))
		{
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					func_271();
				}
			}
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_63))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_63);
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_61))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_64))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_61))
		{
			func_2(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_60))
		{
			func_2(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)//Position - 0xAB0
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0xACD
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
						unk_0x7A6BBF86FCBBCF7E(iParam0, 1);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, 0);
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
						unk_0x7A6BBF86FCBBCF7E(iParam0, 1);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, 0);
						unk_0x7781946F1FC054FA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0xC26
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_336, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xC5B
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xC75
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xC92
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xCCA
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
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
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_29(uParam0, bParam5, bParam7, 0))
			{
				func_25(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAEFBBEC1AEA464B(sParam3))
			{
				if (func_36(sParam3))
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
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)//Position - 0x1033
{
	if (func_34(unk_0xBC25C936A095B5BA()))
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

int func_10(var uParam0)//Position - 0x109C
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

int func_11(bool bParam0)//Position - 0x10C7
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

void func_12(char* sParam0, int iParam1)//Position - 0x1171
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_13(char* sParam0)//Position - 0x1188
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1220
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
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
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
	if ((func_22() || func_21(Global_440000.f_243FE)) || func_20())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_19(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_18(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_15(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)//Position - 0x146E
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_16(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)//Position - 0x14D4
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

int func_17()//Position - 0x151E
{
	return -1;
}

int func_18(int iParam0, int iParam1)//Position - 0x1527
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

int func_19(int iParam0, int iParam1)//Position - 0x1589
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

var func_20()//Position - 0x160E
{
	return Global_255A46.f_10;
}

bool func_21(int iParam0)//Position - 0x161C
{
	return iParam0 == 51;
}

var func_22()//Position - 0x1629
{
	return Global_255A46.f_F;
}

bool func_23()//Position - 0x1637
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_24(int iParam0)//Position - 0x164C
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

void func_25(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x16A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1417C1 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_37(uParam0, 0, 0);
	}
	if (func_28(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_26())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x1DE00CFB4CAEB978(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_B = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_26()//Position - 0x17B6
{
	return func_27(unk_0xB5CEFD608600A09F());
}

int func_27(int iParam0)//Position - 0x17C6
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x17E5
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x182C
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
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
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
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
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
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_33(bParam1, bParam2, bParam3))
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
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_30(bParam1, bParam2, bParam3))
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
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1B98
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_31(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BEA
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_32(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C33
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_33(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C92
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_34(int iParam0)//Position - 0x1CE8
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

void func_35()//Position - 0x1D43
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

int func_36(char* sParam0)//Position - 0x1D53
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_37(var uParam0, int iParam1, int iParam2)//Position - 0x1D66
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
		if (func_36(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_36(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

float func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x1E41
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

void func_39()//Position - 0x1E9F
{
	func_271();
}

void func_40()//Position - 0x1EAB
{
	if (!unk_0xA901403F1DB7A780(iLocal_151))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_61))
		{
			vLocal_146 = { unk_0x733A3EDEC245A3D2(iLocal_61, 1067030938, 1069547520) };
		}
		else
		{
			vLocal_146 = { unk_0xEFF59CF8CAAFA23E(unk_0x541C2AEF053615BC(iLocal_61, true), 1067030938, 1069547520) };
		}
		iLocal_151 = unk_0x249B372087B496EC(joaat("pickup_money_wallet"), vLocal_146, iLocal_120, iLocal_152, 1, iLocal_77);
		iLocal_65 = func_147(iLocal_151);
		func_37(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_41()//Position - 0x1F20
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
		else if (unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
		func_42(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		unk_0x22321800954A532E(iLocal_60, true);
		SYSTEM::WAIT(0);
		func_271();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1FFD
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)//Position - 0x204B
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_50();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_44();
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
		func_52();
	}
	return 0;
}

void func_44()//Position - 0x2317
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

void func_45()//Position - 0x2347
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

int func_46()//Position - 0x23DC
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0x2403
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

void func_48()//Position - 0x249C
{
	if (func_49(14))
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
		Global_389D = func_119();
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

bool func_49(int iParam0)//Position - 0x253E
{
	return Global_8C41 == iParam0;
}

void func_50()//Position - 0x254C
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

bool func_51(int iParam0, int iParam1)//Position - 0x25A2
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

void func_52()//Position - 0x25DD
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2634
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

void func_54()//Position - 0x268A
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_60);
		unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_60, true);
		if (unk_0x724D816EA203A79E(iLocal_62))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_62);
		}
		SYSTEM::WAIT(0);
		if (unk_0x2DA8CA50A72528FB(iLocal_63))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_63);
		}
		unk_0x02537C8C1BEEB477(&iLocal_60);
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_61) || unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_64))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_64);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_63))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_63);
		}
		if (unk_0xA901403F1DB7A780(iLocal_151))
		{
			if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
			{
				iLocal_54 = 1;
				func_130();
			}
			else
			{
				func_138(0);
				func_271();
			}
		}
		else
		{
			func_271();
		}
	}
}

void func_55()//Position - 0x2743
{
	bool bVar0;
	
	func_130();
	if (unk_0xA901403F1DB7A780(iLocal_151))
	{
		if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_61);
				unk_0xB8CBD998685C0685(iLocal_61, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_61, true);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				if (unk_0xA901403F1DB7A780(iLocal_151))
				{
					if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_60);
						unk_0xC5A6DFE2B8987B17(&iLocal_103);
						unk_0x346129B364057FF6(0, unk_0x85EA1A40FC3A6769(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0x535008C596714F9E(iLocal_103);
						unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
						unk_0x02DAF06EA4F08219(&iLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_61);
				unk_0xB8CBD998685C0685(iLocal_61, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_61, true);
				unk_0xB71D41C0310C93DE(iLocal_61, false, 1);
				unk_0x02537C8C1BEEB477(&iLocal_61);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				if (unk_0xA901403F1DB7A780(iLocal_151))
				{
					if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
					{
						if (unk_0x4DBCE270B354E123(iLocal_60, unk_0x85EA1A40FC3A6769(iLocal_151), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_80 == 3)
							{
								if ((!unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_60);
									unk_0xC5A6DFE2B8987B17(&iLocal_103);
									unk_0x346129B364057FF6(0, unk_0x85EA1A40FC3A6769(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x535008C596714F9E(iLocal_103);
									unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
									unk_0x02DAF06EA4F08219(&iLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!unk_0x96044E39418AAF17(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								unk_0xA4E856A8CD53B8DF(iLocal_60);
								unk_0xC5A6DFE2B8987B17(&iLocal_103);
								unk_0x346129B364057FF6(0, unk_0x85EA1A40FC3A6769(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0x535008C596714F9E(iLocal_103);
								unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
								unk_0x02DAF06EA4F08219(&iLocal_103);
								iLocal_49 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
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
					if (iLocal_80 == 3)
					{
						if ((!unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_60);
							unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
							unk_0x22321800954A532E(iLocal_60, true);
							if (unk_0x2DA8CA50A72528FB(iLocal_63))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_63);
							}
							unk_0x02537C8C1BEEB477(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!unk_0x96044E39418AAF17(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0x96044E39418AAF17(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_60);
						unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_60, true);
						if (unk_0x2DA8CA50A72528FB(iLocal_63))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_63);
						}
						unk_0x02537C8C1BEEB477(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_61);
				unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_61, true);
				unk_0xB71D41C0310C93DE(iLocal_61, false, 1);
				unk_0x02537C8C1BEEB477(&iLocal_61);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_60);
				unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_60, true);
				unk_0x02537C8C1BEEB477(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_60))
		{
			if (iLocal_49)
			{
				if (unk_0xA901403F1DB7A780(iLocal_151))
				{
					if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
					{
						if (unk_0x96044E39418AAF17(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (unk_0x4A3B2CF8BADDD74E(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (unk_0xA901403F1DB7A780(iLocal_151))
								{
									if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
									{
										func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										unk_0x9680DF46F29C0428(iLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (unk_0xF4FCC3C1048FF2AB(iLocal_60, 242628503) == 7)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_60);
							unk_0xC5A6DFE2B8987B17(&iLocal_103);
							unk_0xE896C0AD02364F2A(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_103);
							unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
							unk_0x02DAF06EA4F08219(&iLocal_103);
							unk_0x22321800954A532E(iLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						unk_0x8EF3D958386640FE(iLocal_60, iLocal_152);
						unk_0x02537C8C1BEEB477(&iLocal_60);
						func_195(3);
						func_190();
					}
					else
					{
						unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_60, true);
						if (unk_0x2DA8CA50A72528FB(iLocal_63))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_63);
						}
						unk_0x02537C8C1BEEB477(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					unk_0x8EF3D958386640FE(iLocal_60, iLocal_152);
					unk_0x02537C8C1BEEB477(&iLocal_60);
					func_195(3);
					func_190();
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_60, true);
					if (unk_0x2DA8CA50A72528FB(iLocal_63))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_63);
					}
					unk_0x02537C8C1BEEB477(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_56()//Position - 0x2C76
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_60);
		unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_60, true);
		unk_0x02537C8C1BEEB477(&iLocal_60);
	}
}

void func_57()//Position - 0x2CAD
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	struct<2> Var3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				vVar7 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				iVar8 = 1;
				if (iLocal_80 == 1)
				{
					if (vVar7.z > 33.5f)
					{
						iVar8 = 0;
					}
				}
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 5f, 5f, 5f, 0, 1, 0) && iVar8 == 1)
				{
					if (func_116(2))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
					{
						if (func_115(1, 0, 1))
						{
							if (!func_114())
							{
								if (!unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
								{
									func_106(1, 1, 1, 0, 0);
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										while (!func_104(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_71, 1, 1056964608, 0, 1, 0) || func_158())
										{
											unk_0xDE7B9CB38D019BF0();
											SYSTEM::WAIT(0);
										}
										if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
										{
											unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
										}
									}
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
									if (!unk_0x36CEFBE9B745A58D(iLocal_60))
									{
										unk_0xF1FC2182A76AD7FC(iLocal_60, 0);
									}
									unk_0xDE7B9CB38D019BF0();
									unk_0x878261FFF1AA7E94(0);
									unk_0x9A172FCB057ABAEF(iLocal_117);
									if (unk_0xE6711F601F11B66B())
									{
										func_102();
									}
									bLocal_126 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_100(unk_0x541C2AEF053615BC(iLocal_60, true), &uLocal_70, &fLocal_71);
				}
			}
			else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_103);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					unk_0xE896C0AD02364F2A(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0x535008C596714F9E(iLocal_103);
				unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
				unk_0x02DAF06EA4F08219(&iLocal_103);
				unk_0x3E2B7D349B5735D3(iLocal_60, -668482597, false, 0, 0);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					unk_0xDE7B9CB38D019BF0();
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							func_97(iLocal_60, &vLocal_105, &vLocal_106, cLocal_321, sLocal_323);
							if (iLocal_80 == 1)
							{
								if (vLocal_106.z > 225f && vLocal_106.z < 265f)
								{
									if (vLocal_106.z < 245f)
									{
										vLocal_106.z = 225f;
									}
									else
									{
										vLocal_106.z = 265f;
									}
								}
								else if (vLocal_106.z > 45f && vLocal_106.z < 85f)
								{
									if (vLocal_106.z < 65f)
									{
										vLocal_106.z = 45f;
									}
									else
									{
										vLocal_106.z = 85f;
									}
								}
							}
							vLocal_105.z = (vLocal_105.z + 2f);
							unk_0x2084D4C6C2DF616F(vLocal_105, &(vLocal_105.f_2), 0, 0);
							vVar1 = { unk_0x883FF674F22D1F7C(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0f, 2) };
							vVar4 = { vVar1 - vLocal_105 };
							vVar4.z = 0f;
							fVar5 = SYSTEM::VMAG(vVar4);
							unk_0x2084D4C6C2DF616F(vVar1, &(vVar1.f_2), 0, 0);
							fVar6 = (vLocal_105.z - vVar1.z);
							vLocal_106.x = unk_0xE8CFCB6B2165523B(fVar6, fVar5);
							if (vLocal_106.x > 30f || vLocal_106.x < -30f)
							{
								vLocal_106.x = 0f;
							}
						}
						if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
						{
							if (!unk_0xE59B7F5A03335350(iVar0, 0))
							{
								iVar0 = unk_0x3E12B546F3F2597A();
								unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &uVar2, &Var3);
								if (unk_0x4DBCE270B354E123(iVar0, vLocal_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, false, true, 0) || unk_0x4DBCE270B354E123(iVar0, unk_0x883FF674F22D1F7C(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, false, true, 0))
								{
									if (iLocal_80 == 1)
									{
										if (vLocal_106.z > 40f && vLocal_106.z < 220f)
										{
											vLocal_74 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											vLocal_74 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (iLocal_80 == 3)
									{
										if (vLocal_106.z > 160f && vLocal_106.z < 340f)
										{
											vLocal_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											vLocal_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (iLocal_80 == 4)
									{
										if (vLocal_106.z > 240f || vLocal_106.z < 60f)
										{
											vLocal_74 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											vLocal_74 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = unk_0x349C94FFF43E2979(iVar0);
										vLocal_74 = { func_95(vLocal_105, unk_0x883FF674F22D1F7C(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2)) };
									}
									if (unk_0xE59B7F5A03335350(iVar0, 0))
									{
										unk_0x641B19E156645A92(iVar0, vLocal_74, 1, false, 0, 1);
										unk_0x019CE76D5286C95C(iVar0, fLocal_73);
										unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
										unk_0x127F627F30266DD9(iVar0, 1);
									}
								}
							}
						}
						unk_0x4516EDD0A096FB5B(vLocal_105, 20f, 2);
						unk_0xADC7E88690E324EB(vLocal_105, 20f, 0);
						unk_0x6C5F5B5F6894CCE3(vLocal_105, 2f, 1, 1, 0, false);
						unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), true);
						iLocal_62 = unk_0xB6896943DA475493(iLocal_77, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true, true, false);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x5DBE04849460E608(iLocal_62, unk_0xBC25C936A095B5BA(), unk_0xFA18E720A39243D0(unk_0xBC25C936A095B5BA(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_107 = unk_0xD0D858E538FD01C3(vLocal_105, vLocal_106, 2);
						unk_0x69D4A898629B0BDA(iLocal_107, false);
						iLocal_108 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xA4DB448107C6D171(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							unk_0x49D46EE47C9CCB66(iLocal_60);
							unk_0xB62398E536F695FC(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0x348665177DBFB93B(iLocal_108, true);
						unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
						func_42(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_125++;
					}
					unk_0xDE7B9CB38D019BF0();
					break;
				
				case 1:
					if ((unk_0x77FC50899603581D(iLocal_107) && unk_0x8FD30584EB38411B(iLocal_107) > 0.9f) || func_93(1000))
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x348665177DBFB93B(iLocal_108, false);
						unk_0x4EC087603E1DEF9C(iLocal_108, 0);
						func_92();
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							unk_0x49D46EE47C9CCB66(iLocal_60);
							unk_0x8EF3D958386640FE(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							vVar1 = { unk_0x883FF674F22D1F7C(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							unk_0x2084D4C6C2DF616F(vVar1, &(vVar1.f_2), 0, 0);
							unk_0x641B19E156645A92(iLocal_60, vVar1, 1, false, 0, 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_60, false);
							vVar1 = { unk_0xBFDD14D0A09BE0FA(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							unk_0x019CE76D5286C95C(iLocal_60, vVar1.z);
							if (iLocal_80 == 4)
							{
								if (func_91(vVar1.z, 0f, 90f))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_103);
									unk_0x346129B364057FF6(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_60), 1);
									unk_0x535008C596714F9E(iLocal_103);
									unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
									unk_0x02DAF06EA4F08219(&iLocal_103);
								}
								else
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_103);
									unk_0x346129B364057FF6(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_60), 1);
									unk_0x535008C596714F9E(iLocal_103);
									unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
									unk_0x02DAF06EA4F08219(&iLocal_103);
								}
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_103);
								unk_0x8CE2798B9A7027EC(0, vVar1.z, 1);
								unk_0x535008C596714F9E(iLocal_103);
								unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
								unk_0x02DAF06EA4F08219(&iLocal_103);
							}
							unk_0x43B967881C60631D(iLocal_60, cLocal_334, 1048576000);
							unk_0x3E2B7D349B5735D3(iLocal_60, -668482597, true, 0, 0);
							unk_0x22321800954A532E(iLocal_60, true);
						}
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
							unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						}
						if (unk_0x724D816EA203A79E(iLocal_62))
						{
							unk_0xA35241BCE4C1A24B(&iLocal_62);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							unk_0x8EF3D958386640FE(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							unk_0xF1FC2182A76AD7FC(iLocal_60, 1);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						SYSTEM::WAIT(0);
						unk_0x9CB4DD3D88846081(0, 0, 3, 0);
						func_60(func_119(), 1, iVar9);
						func_59(joaat("rc_wallets_returned"), 1);
						func_195(3);
						func_190();
					}
					else if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), -3856156))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_60) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (unk_0xB6A16B5E7EB81F9B(iLocal_62, unk_0xBC25C936A095B5BA()))
							{
								unk_0x17175087F2DB6AC8(iLocal_62, 0, true);
								if (unk_0xB6FD7D587FE0A1B4(iLocal_60))
								{
									unk_0x5DBE04849460E608(iLocal_62, iLocal_60, unk_0xFA18E720A39243D0(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0x5DBE04849460E608(iLocal_62, iLocal_60, unk_0xFA18E720A39243D0(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_59)
								{
									if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_58())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_58())
						{
							iLocal_59 = 1;
						}
					}
					unk_0xDE7B9CB38D019BF0();
					break;
				}
		}
	}
	else
	{
		func_271();
	}
}

int func_58()//Position - 0x360D
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

void func_59(int iParam0, int iParam1)//Position - 0x3632
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

int func_60(int iParam0, int iParam1, int iParam2)//Position - 0x3655
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_61(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x369E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_89(99, 1);
					func_59(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_59(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_59(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_74(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_70(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_59(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_70(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_59(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_59(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_59(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_59(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_59(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_70(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_59(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_59(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_59(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_69(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_64(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_64(iVar1);
	}
	iVar5 = (Global_CF95[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CF95[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CF95[iVar2] = 2147483647;
				}
				else
				{
					Global_CF95[iVar2] = (Global_CF95[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_59(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_59(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_59(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CF95[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CF95[iVar2];
			Global_CF95[iVar2] = (Global_CF95[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/]++;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_63(iParam0);
	if (Global_8C41 == 15)
	{
		func_62(0);
	}
	return 1;
}

void func_62(bool bParam0)//Position - 0x3C9D
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

void func_63(int iParam0)//Position - 0x3F1F
{
	int iVar0;
	
	iVar0 = Global_CF95[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_64(int iParam0)//Position - 0x3F79
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_67(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_66() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_66() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_65(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_65(int iParam0)//Position - 0x404F
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_66()//Position - 0x40D5
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_67(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x40E2
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
		iParam2 = func_68();
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

int func_68()//Position - 0x45FC
{
	return Global_1407E0;
}

void func_69(int iParam0)//Position - 0x4608
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

bool func_70(int iParam0)//Position - 0x4628
{
	if (iParam0 == 8)
	{
		return func_71(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_66() /*12171*/].f_1E08.f_A, iParam0);
}

int func_71(int iParam0, int iParam1, int iParam2)//Position - 0x4676
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_68();
	}
	iVar1 = func_73(iParam0, iParam1);
	uVar2 = func_72(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_72(int iParam0)//Position - 0x46B3
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

int func_73(int iParam0, int iParam1)//Position - 0x499F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_68();
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

int func_74(bool bParam0)//Position - 0x4C6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_88(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_75(27, 1);
	return 1;
}

int func_75(int iParam0, int iParam1)//Position - 0x4D23
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_76(iParam0, iParam1);
}

int func_76(int iParam0, int iParam1)//Position - 0x4D3E
{
	if (func_49(14) && !func_87(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_63B4 != 0 && !Global_11542)
	{
		return 0;
	}
	if (func_86(&Global_411EB6))
	{
		if (func_84(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_77(&Global_411EB6, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_77(var uParam0, int iParam1)//Position - 0x4DDB
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_49(14) && !func_87(iParam1))
	{
		return 0;
	}
	if (func_84(uParam0, iParam1))
	{
		return 0;
	}
	if (func_83(uParam0) < 0f)
	{
		func_82(uParam0, 0);
	}
	func_80(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_78(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_78(var uParam0, int iParam1)//Position - 0x4E8C
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_49(14) && !func_87(iParam1))
	{
		return 0;
	}
	if (func_84(uParam0, iParam1))
	{
		return 0;
	}
	if (func_83(uParam0) < 0f)
	{
		func_82(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_79(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_79(var uParam0, int iParam1)//Position - 0x4F07
{
	return (*uParam0)[iParam1] == 78;
}

void func_80(var uParam0)//Position - 0x4F18
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_81(uParam0, iVar0);
		iVar0++;
	}
	func_82(uParam0, (Global_411EB5 - 0.5f));
}

void func_81(var uParam0, int iParam1)//Position - 0x4F4C
{
	(*uParam0)[iParam1] = 78;
}

void func_82(var uParam0, float fParam1)//Position - 0x4F5C
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_83(var uParam0)//Position - 0x4F79
{
	return uParam0->f_50;
}

bool func_84(var uParam0, int iParam1)//Position - 0x4F85
{
	return func_85(uParam0, iParam1) != -1;
}

int func_85(var uParam0, int iParam1)//Position - 0x4F97
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_86(var uParam0)//Position - 0x4FC4
{
	return uParam0->f_4F == 1;
}

int func_87(int iParam0)//Position - 0x4FD2
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_88(int iParam0, int iParam1)//Position - 0x5022
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

void func_89(int iParam0, int iParam1)//Position - 0x5073
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_C9FD[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_C9FD[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_90()//Position - 0x50D0
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CF95[0] == iVar0)
		{
			Global_CF95[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CF95[1] == iVar0)
		{
			Global_CF95[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CF95[2] == iVar0)
		{
			Global_CF95[2] = iVar0;
		}
	}
}

int func_91(float fParam0, float fParam1, float fParam2)//Position - 0x5145
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_92()//Position - 0x51BA
{
	int iVar0;
	
	iVar0 = unk_0x585DE1CBEEB2D27D(26379945, unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), 65f, 1, 2);
	unk_0x348665177DBFB93B(iVar0, true);
}

int func_93(int iParam0)//Position - 0x51F8
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
			if (func_94())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_94()//Position - 0x5242
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

Vector3 func_95(vector3 vParam0, vector3 vParam1)//Position - 0x5274
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0x3E12B546F3F2597A();
	if (!unk_0x5CAE759AE8219D20(iVar0))
	{
		unk_0x77815D3407C6700D(iVar0, true, 0);
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &vVar3, &vVar4);
	unk_0x29EBF830A072263F(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_96(vVar1, 0f, vVar4) };
						vVar11 = { func_96(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_96(vVar1, 0f, vVar4) };
						vVar11 = { func_96(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_96(vVar1, 0f, vVar4) };
						vVar11 = { func_96(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_96(vVar1, 0f, vVar4) };
						vVar11 = { func_96(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return vVar1;
}

Vector3 func_96(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x5875
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_97(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x58C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	uParam2->f_2 = func_99(iParam0, unk_0xBC25C936A095B5BA(), 1);
	fVar3 = func_99(iParam0, unk_0xBC25C936A095B5BA(), 1);
	fVar4 = func_99(iParam0, unk_0xBC25C936A095B5BA(), 1);
	vVar10 = { unk_0x541C2AEF053615BC(iParam0, false) - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	if (unk_0xF9E082857622D91E(sParam3))
	{
		vVar9 = { unk_0x883FF674F22D1F7C(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_98(unk_0x541C2AEF053615BC(iParam0, false), *uParam1, 1);
					*uParam1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(iParam0, false), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = unk_0xEDB5D06AC6E2D672(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xB0695CD48A28A3A9(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_98(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_98(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x5A7A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xE8CFCB6B2165523B(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_99(int iParam0, int iParam1, int iParam2)//Position - 0x5ADF
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	return func_98(vVar0, vVar1, iParam2);
}

void func_100(vector3 vParam0, var uParam1, float fParam2)//Position - 0x5B0B
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - vParam0 };
		fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
		if (func_101(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
		if (func_101(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

int func_101(int iParam0, float fParam1, float fParam2)//Position - 0x5C0C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		fVar0 = unk_0x349C94FFF43E2979(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_102()//Position - 0x5C93
{
	Global_394A = 0;
	func_103();
}

void func_103()//Position - 0x5CA3
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_104(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5CC4
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_105(iParam0);
	if ((unk_0x105601648511CC64() - Global_1D) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_105(int iParam0)//Position - 0x5E53
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_106(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5E7F
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_113(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_46())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_112(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_113(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_112(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_110(unk_0xB5CEFD608600A09F())) && !func_108(unk_0xB5CEFD608600A09F(), 0)) && !func_107()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_110(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_107()//Position - 0x5FA8
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_108(int iParam0, int iParam1)//Position - 0x5FC5
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_109(-1, 0) == 8;
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

int func_109(int iParam0, bool bParam1)//Position - 0x6010
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_68();
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

int func_110(int iParam0)//Position - 0x6051
{
	if (func_108(iParam0, 0))
	{
		return 1;
	}
	if (func_111())
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

bool func_111()//Position - 0x6093
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_112(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x60A4
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

void func_113(int iParam0)//Position - 0x60D7
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

int func_114()//Position - 0x60FA
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_158())
		{
			return 1;
		}
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)//Position - 0x611B
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

bool func_116(int iParam0)//Position - 0x6200
{
	return func_36(func_117(iParam0));
}

char* func_117(int iParam0)//Position - 0x6212
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_118(int iParam0)//Position - 0x6254
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_119()//Position - 0x62AC
{
	func_120();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_120()//Position - 0x62C5
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_123(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_122(unk_0xBC25C936A095B5BA());
			if (func_121(iVar0) && (!func_49(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_121(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_121(int iParam0)//Position - 0x63C2
{
	return iParam0 < 3;
}

int func_122(int iParam0)//Position - 0x63CE
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_123(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_123(int iParam0)//Position - 0x640B
{
	if (func_121(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_124()//Position - 0x6435
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_60, true);
		SYSTEM::WAIT(0);
	}
}

int func_125()//Position - 0x6465
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
		if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		vVar0 = { vVar0 + unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f) };
		vVar1 = { vVar1 + unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_126()//Position - 0x654E
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
	{
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_60, true)) > (fLocal_139 + 50f))
		{
			func_190();
		}
		else if (func_118(func_119()) < iLocal_152)
		{
			func_190();
		}
	}
}

void func_127()//Position - 0x6599
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, Global_13, 0, 1, 0))
		{
			unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_60, 3000, 0, 2);
			unk_0x56F2E1B5599188FA(iLocal_60, unk_0xBC25C936A095B5BA(), 3000, 0, 2);
		}
	}
}

void func_128()//Position - 0x65DE
{
	float fVar0;
	
	if (iLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_80 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_140, vLocal_141, fVar0, 0, true, 0))
		{
			if (!iLocal_131)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_60))
				{
					unk_0x85DB484A637CEAB9(iLocal_60, unk_0xBC25C936A095B5BA(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_142, vLocal_143, fVar0, 0, true, 0))
		{
			if (!iLocal_132)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_60))
				{
					unk_0x85DB484A637CEAB9(iLocal_60, unk_0xBC25C936A095B5BA(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_144, vLocal_145, fVar0, 0, true, 0))
		{
			if (!iLocal_133)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_60))
		{
			if (unk_0xE642C1AC73CE364E(iLocal_60, unk_0xBC25C936A095B5BA(), 25f, 25f, 5f, 0, 1, 0) && unk_0x4833C1F1F1364989(iLocal_60, unk_0xBC25C936A095B5BA(), 17))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || func_58())
				{
					if (!unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_103);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						if (iLocal_45 == 2)
						{
							unk_0xE896C0AD02364F2A(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x535008C596714F9E(iLocal_103);
						unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
						unk_0x02DAF06EA4F08219(&iLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_129(int iParam0, var uParam1)//Position - 0x6760
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_103);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0x535008C596714F9E(iLocal_103);
				unk_0xA8E6405305C0D7DF(iParam0, iLocal_103);
				unk_0x02DAF06EA4F08219(&iLocal_103);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				if (!unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_130()//Position - 0x6818
{
	if (unk_0xF1B911222059B1A1(iLocal_151))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
		{
			fLocal_139 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_60, true));
		}
		func_59(joaat("rc_wallets_recovered"), 1);
		unk_0xF715C239F71B95D6(0, 200, 250);
		if (unk_0x724D816EA203A79E(iLocal_62))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_62);
		}
		func_133();
		func_132(&uLocal_348);
		if (unk_0x724D816EA203A79E(iLocal_60))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				unk_0x12D2D85EBAC186AA(iLocal_60, 0);
			}
		}
		func_138(0);
		unk_0x9680DF46F29C0428(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			func_131(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_131(int iParam0)//Position - 0x68B0
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_12(func_117(iParam0), -1);
					Global_19B04.f_6186.f_2++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_12(func_117(iParam0), -1);
					Global_19B04.f_6186.f_3++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_12(func_117(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_132(var uParam0)//Position - 0x6991
{
	*uParam0 = -99;
}

void func_133()//Position - 0x699F
{
	iLocal_65 = 0;
	if (!unk_0x2DA8CA50A72528FB(iLocal_63))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
		{
			iLocal_63 = func_134(iLocal_60, 0, 0);
		}
	}
}

int func_134(int iParam0, bool bParam1, int iParam2)//Position - 0x69C9
{
	iParam2 = iParam2;
	return func_135(iParam0, bParam1, 145);
}

int func_135(int iParam0, bool bParam1, int iParam2)//Position - 0x69DF
{
	int iVar0;
	
	iVar0 = func_136(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_136(int iParam0, bool bParam1, bool bParam2)//Position - 0x6A31
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_137(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_137(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_137(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_137(bool bParam0, float fParam1, float fParam2)//Position - 0x6AD5
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_138(bool bParam0)//Position - 0x6AEC
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60) && iLocal_80 == 4)
	{
		if (unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
			if (bParam0)
			{
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA4E856A8CD53B8DF(iLocal_60);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
	}
}

int func_139()//Position - 0x6BD2
{
	if (unk_0x724D816EA203A79E(iLocal_62))
	{
		if (unk_0xE7E55F7532DEE345(iLocal_62))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				if (unk_0xB6A16B5E7EB81F9B(iLocal_62, iLocal_60))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_140(int iParam0, var uParam1)//Position - 0x6C30
{
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		if (unk_0x105601648511CC64() > *uParam1 + 500)
		{
			if (unk_0x05C02D6192B773AF(iParam0) == 1)
			{
				unk_0xF9C2945DB5BAB4BF(iParam0, true);
			}
			else
			{
				unk_0xF9C2945DB5BAB4BF(iParam0, false);
				unk_0x0D5352939CC40C16(iParam0, 1);
			}
			*uParam1 = unk_0x105601648511CC64();
		}
		if (!unk_0xF16DAFF595E80F7C() && func_141(0))
		{
			func_131(1);
		}
	}
}

bool func_141(int iParam0)//Position - 0x6C8E
{
	return unk_0xFA30DFD0084E92FE(Global_19B00, iParam0);
}

void func_142()//Position - 0x6CA0
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 8f, 8f, 18f, 0, 1, 0) || unk_0xD1DC4B08247A4317(iLocal_60))
		{
			unk_0xEB233A3B7635D2AC();
		}
	}
}

void func_143()//Position - 0x6CE1
{
	if (unk_0x2DA8CA50A72528FB(iLocal_64))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_64);
	}
	if (unk_0x724D816EA203A79E(iLocal_62))
	{
		if (unk_0xE7E55F7532DEE345(iLocal_62))
		{
			unk_0x17175087F2DB6AC8(iLocal_62, 1, true);
			unk_0xA35241BCE4C1A24B(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_61))
	{
		if (func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_58())
		{
			if (iLocal_45 == 2)
			{
				unk_0xABA7AE40608505F2(iLocal_61, 128, true);
				unk_0xABA7AE40608505F2(iLocal_61, 2, true);
				unk_0xABA7AE40608505F2(iLocal_61, 1, false);
				unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
			}
			unk_0x22321800954A532E(iLocal_61, true);
		}
	}
}

int func_144()//Position - 0x6D80
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_61, unk_0xBC25C936A095B5BA(), 1))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_145()//Position - 0x6DB7
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_60);
		unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_60, true);
		SYSTEM::WAIT(0);
		unk_0x02537C8C1BEEB477(&iLocal_60);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_61))
	{
		func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		unk_0xC5A6DFE2B8987B17(&iLocal_103);
		unk_0x44C98C11ED6DD327(0);
		unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
		unk_0x535008C596714F9E(iLocal_103);
		unk_0xA8E6405305C0D7DF(iLocal_61, iLocal_103);
		unk_0x02DAF06EA4F08219(&iLocal_103);
		unk_0x22321800954A532E(iLocal_61, true);
		SYSTEM::WAIT(0);
		unk_0xB71D41C0310C93DE(iLocal_61, false, 1);
		unk_0x02537C8C1BEEB477(&iLocal_61);
	}
}

int func_146()//Position - 0x6E51
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0x2CDE18D6C89522AD(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x6E71
{
	return func_148(iParam0);
}

int func_148(int iParam0)//Position - 0x6E7F
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_137(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

int func_149()//Position - 0x6EB7
{
	if (unk_0xA901403F1DB7A780(iLocal_151))
	{
		if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
		{
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
				{
					if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 18f, 18f, 18f, 0, 1, 0) || unk_0xD9C1758D86688CEA(iLocal_61, unk_0xBC25C936A095B5BA(), 1))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_150())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					return 1;
				}
				if (unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					if (unk_0xD9C1758D86688CEA(iLocal_61, unk_0xBC25C936A095B5BA(), 1))
					{
						if (unk_0x724D816EA203A79E(iLocal_60))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_60))
							{
								unk_0xA4E856A8CD53B8DF(iLocal_60);
								unk_0x12D2D85EBAC186AA(iLocal_60, 0);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (unk_0xD9C1758D86688CEA(iLocal_61, unk_0xBC25C936A095B5BA(), 1))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					if (unk_0x724D816EA203A79E(iLocal_60))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_60);
							unk_0x12D2D85EBAC186AA(iLocal_60, 0);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_61))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_61);
						unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_61, true);
						unk_0xB71D41C0310C93DE(iLocal_61, false, 1);
						unk_0x02537C8C1BEEB477(&iLocal_61);
					}
					return 1;
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_60))
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
						{
							if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_60) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_119 = 3;
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

int func_150()//Position - 0x705B
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_61))
	{
		if (unk_0x1028B6250119A74B(iLocal_61, unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_61) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
		{
			return 1;
		}
		if (unk_0x2CDE18D6C89522AD(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_151()//Position - 0x70E5
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				if (unk_0x72C9157015C2151B(iLocal_61, 4))
				{
					if ((func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || func_58()) || func_58())
					{
						iLocal_57 = 1;
					}
				}
				else if ((func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_58()) || func_58())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_150())
	{
		if ((func_42(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || func_58()) || func_58())
		{
			if (unk_0x72C9157015C2151B(iLocal_61, 4))
			{
				unk_0xB8CBD998685C0685(iLocal_61, unk_0xBC25C936A095B5BA(), 0, 16);
			}
			else
			{
				func_143();
			}
			iLocal_56 = 1;
		}
	}
}

int func_152()//Position - 0x71AF
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_60) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x3D3F3014B0F74446(iLocal_60, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_153()//Position - 0x726B
{
	if (iLocal_45 == 2)
	{
	}
	if (!func_158())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				if (!unk_0x8C2668F45F2BB3F2(iLocal_60))
				{
					func_154(iLocal_60, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_38(unk_0xBC25C936A095B5BA(), iLocal_61, 1) > 200f)
		{
			if (!unk_0xD1DC4B08247A4317(iLocal_61) || unk_0x41A5D6415E2CC10E(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_154(int iParam0, char* sParam1, int iParam2)//Position - 0x72E4
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_155(iParam2), 1);
}

int func_155(int iParam0)//Position - 0x72FB
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

void func_156()//Position - 0x74F0
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_103);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_103);
				unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
				unk_0x02DAF06EA4F08219(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (unk_0x96044E39418AAF17(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_103);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_103);
				unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
				unk_0x02DAF06EA4F08219(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_60, 242628503) == 1)
					{
						if (unk_0xD62938026B30481A(iLocal_60) == iLocal_138)
						{
							unk_0x56F2E1B5599188FA(iLocal_60, unk_0xBC25C936A095B5BA(), 9000, 0, 2);
							func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						unk_0x0DEF5E53360637F2(iLocal_60, 1);
						func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						unk_0xC5A6DFE2B8987B17(&iLocal_103);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 7000, 0, 2);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 7000);
						unk_0x535008C596714F9E(iLocal_103);
						unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
						unk_0x02DAF06EA4F08219(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_157()//Position - 0x7751
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158()//Position - 0x7783
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_159()//Position - 0x77A5
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = unk_0x105601648511CC64();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = unk_0x105601648511CC64();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!func_158())
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || func_58())
						{
							if (iLocal_45 == 2)
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_60))
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_60))
								{
								}
							}
							if (unk_0x2DA8CA50A72528FB(iLocal_63))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_160()//Position - 0x7841
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (iLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_80 != 2)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60) && !unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				if (!func_187())
				{
					if (func_174())
					{
						func_271();
					}
				}
				if (func_173())
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_66))
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
						{
							iLocal_66 = func_134(iLocal_61, 1, 0);
						}
						func_165(1);
					}
				}
				if (func_164())
				{
					func_163();
					if (iLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_103);
							unk_0x56F2E1B5599188FA(0, iLocal_61, 16000, 0, 2);
							unk_0x346129B364057FF6(0, vLocal_79, 1f, 20000, fVar0, 4, 1193033728);
							unk_0x535008C596714F9E(iLocal_103);
							unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
							unk_0x02DAF06EA4F08219(&iLocal_103);
							iLocal_55 = 1;
						}
						unk_0xC5A6DFE2B8987B17(&iLocal_103);
						unk_0x56F2E1B5599188FA(0, iLocal_60, -1, 0, 2);
						unk_0xE896C0AD02364F2A(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0x8744E2AAA4C44FDC(0, vLocal_79, iLocal_60, 1f, false, 1.5f, 4f, true, 0, 0, -957453492, 20000);
						unk_0x57D65255D3D3B6A7(0, iLocal_60, -1, 1);
						unk_0x535008C596714F9E(iLocal_103);
						unk_0xA8E6405305C0D7DF(iLocal_61, iLocal_103);
						unk_0x02DAF06EA4F08219(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_53 = true;
						unk_0xDF53A66AEE1401AA(0f);
					}
					else
					{
						if (iLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_162();
						bLocal_53 = true;
						bLocal_123 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
					{
						unk_0x85DB484A637CEAB9(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60) && !unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || func_58())
				{
					unk_0xA4E856A8CD53B8DF(iLocal_60);
					unk_0xC5A6DFE2B8987B17(&iLocal_103);
					unk_0xE896C0AD02364F2A(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x535008C596714F9E(iLocal_103);
					unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
					unk_0x02DAF06EA4F08219(&iLocal_103);
					func_163();
					iLocal_151 = unk_0x249B372087B496EC(joaat("pickup_money_purse"), unk_0xEFF59CF8CAAFA23E(unk_0xA4455714F3DCE207(iLocal_60, 0f, 2.5f, 0f), 1067030938, 1069547520), iLocal_120, iLocal_152, 1, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				func_161();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						vLocal_626 = { unk_0x85EA1A40FC3A6769(iLocal_151) - Vector(0f, 0f, 0.75f) };
						if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_61);
							unk_0xC5A6DFE2B8987B17(&iLocal_103);
							unk_0x8744E2AAA4C44FDC(0, vLocal_626, iLocal_60, 2f, false, 0.1f, 4f, true, 0, 0, -957453492, 20000);
							unk_0x535008C596714F9E(iLocal_103);
							unk_0xA8E6405305C0D7DF(iLocal_61, iLocal_103);
							unk_0x02DAF06EA4F08219(&iLocal_103);
							iLocal_624 = unk_0x105601648511CC64();
						}
						iLocal_623 = 1;
						break;
					
					case 1:
						if (unk_0xF4FCC3C1048FF2AB(iLocal_61, 242628503) == 7)
						{
							vLocal_626 = { unk_0x85EA1A40FC3A6769(iLocal_151) - Vector(0f, 0f, 0.75f) };
							if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
							{
								if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_61, true), vLocal_626, true) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									unk_0xA4E856A8CD53B8DF(iLocal_61);
									unk_0xC5A6DFE2B8987B17(&iLocal_103);
									unk_0xE896C0AD02364F2A(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0x535008C596714F9E(iLocal_103);
									unk_0xA8E6405305C0D7DF(iLocal_61, iLocal_103);
									unk_0x02DAF06EA4F08219(&iLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((unk_0x105601648511CC64() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					
					case 2:
						if (unk_0x4A3B2CF8BADDD74E(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (unk_0x0C1FBBAF5CF75B09(iLocal_151))
							{
								unk_0x9680DF46F29C0428(iLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0x96044E39418AAF17(iLocal_61, cLocal_320, "pickup_low", 3) && unk_0x4A3B2CF8BADDD74E(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !unk_0x96044E39418AAF17(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					
					case 4:
						unk_0xB71D41C0310C93DE(iLocal_61, true, 1);
						unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 50f, -1, 0, 0);
						unk_0x2EB4D46478766D87(iLocal_61, 0, 0);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_161()//Position - 0x7CD7
{
	if (unk_0x2DA8CA50A72528FB(iLocal_63))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_63);
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_65))
	{
		if (unk_0xA901403F1DB7A780(iLocal_151))
		{
			iLocal_65 = func_147(iLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_162()//Position - 0x7D0C
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
	}
	if (unk_0xC5B8A5F778E321DD(iLocal_61, unk_0xBC25C936A095B5BA(), 90f))
	{
		unk_0xE896C0AD02364F2A(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			iLocal_335 = unk_0x3F15B158E03C72E5(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
		else
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
	}
	else
	{
		unk_0xE896C0AD02364F2A(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0xCF4C6C235CD09F4F(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
		else
		{
			unk_0xC5A6DFE2B8987B17(&iLocal_103);
			unk_0xE896C0AD02364F2A(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_103);
			unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
			unk_0x02DAF06EA4F08219(&iLocal_103);
		}
	}
}

void func_163()//Position - 0x817E
{
	if (unk_0x2DA8CA50A72528FB(iLocal_66))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_66);
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_64))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
		{
			iLocal_64 = func_134(iLocal_61, 1, 0);
		}
	}
}

int func_164()//Position - 0x81B4
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_61, true), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 4)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_165(int iParam0)//Position - 0x828E
{
	if (func_167())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_166(Global_19AF9))
		{
			func_131(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_166(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x82E1
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_167()//Position - 0x8310
{
	switch (func_168(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_168(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8346
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_161D2.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_172(0))
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *uParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_170(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_169(uParam0, iParam4);
		}
	}
	return 2;
}

void func_169(var uParam0, int iParam1)//Position - 0x847D
{
	int iVar0;
	
	if (Global_8C1A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8C1A)
	{
		if (Global_8C20[iVar0 /*4*/] == *uParam0)
		{
			Global_8C20[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_170(int iParam0)//Position - 0x84CC
{
	return func_171(iParam0, Global_8C41);
}

int func_171(int iParam0, int iParam1)//Position - 0x84DD
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

int func_172(int iParam0)//Position - 0x86BE
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_170(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_173()//Position - 0x86E0
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 3)
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_174()//Position - 0x8796
{
	if (!func_170(5))
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_182())
		{
			return 0;
		}
	}
	if (func_175(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_175(float fParam0, bool bParam1)//Position - 0x87F8
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_121(func_119()))
		{
			iVar5 = func_181();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_176(iVar1, &Var0);
					fVar4 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_176(int iParam0, var uParam1)//Position - 0x88AF
{
	switch (iParam0)
	{
		case 0:
			func_177(uParam1, "Abigail1", func_179(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 1:
			func_177(uParam1, "Abigail2", func_179(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 2:
			func_177(uParam1, "Barry1", func_179(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 3:
			func_177(uParam1, "Barry2", func_179(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 4:
			func_177(uParam1, "Barry3", func_179(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 5:
			func_177(uParam1, "Barry3A", func_179(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 6:
			func_177(uParam1, "Barry3C", func_179(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 7:
			func_177(uParam1, "Barry4", func_179(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_178(iParam0), 0, 0);
			break;
		
		case 8:
			func_177(uParam1, "Dreyfuss1", func_179(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 9:
			func_177(uParam1, "Epsilon1", func_179(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 10:
			func_177(uParam1, "Epsilon2", func_179(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 11:
			func_177(uParam1, "Epsilon3", func_179(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 12:
			func_177(uParam1, "Epsilon4", func_179(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 13:
			func_177(uParam1, "Epsilon5", func_179(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 14:
			func_177(uParam1, "Epsilon6", func_179(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 15:
			func_177(uParam1, "Epsilon7", func_179(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 16:
			func_177(uParam1, "Epsilon8", func_179(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 17:
			func_177(uParam1, "Extreme1", func_179(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 18:
			func_177(uParam1, "Extreme2", func_179(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 19:
			func_177(uParam1, "Extreme3", func_179(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 20:
			func_177(uParam1, "Extreme4", func_179(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 21:
			func_177(uParam1, "Fanatic1", func_179(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_178(iParam0), 1, 0);
			break;
		
		case 22:
			func_177(uParam1, "Fanatic2", func_179(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_178(iParam0), 1, 0);
			break;
		
		case 23:
			func_177(uParam1, "Fanatic3", func_179(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_178(iParam0), 0, 1);
			break;
		
		case 24:
			func_177(uParam1, "Hao1", func_179(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_178(iParam0), 0, 1);
			break;
		
		case 25:
			func_177(uParam1, "Hunting1", func_179(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 26:
			func_177(uParam1, "Hunting2", func_179(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 27:
			func_177(uParam1, "Josh1", func_179(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 28:
			func_177(uParam1, "Josh2", func_179(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 29:
			func_177(uParam1, "Josh3", func_179(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 30:
			func_177(uParam1, "Josh4", func_179(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 31:
			func_177(uParam1, "Maude1", func_179(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 32:
			func_177(uParam1, "Minute1", func_179(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 33:
			func_177(uParam1, "Minute2", func_179(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 34:
			func_177(uParam1, "Minute3", func_179(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 35:
			func_177(uParam1, "MrsPhilips1", func_179(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 36:
			func_177(uParam1, "MrsPhilips2", func_179(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 37:
			func_177(uParam1, "Nigel1", func_179(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 38:
			func_177(uParam1, "Nigel1A", func_179(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 39:
			func_177(uParam1, "Nigel1B", func_179(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_178(iParam0), 1, 1);
			break;
		
		case 40:
			func_177(uParam1, "Nigel1C", func_179(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_178(iParam0), 1, 1);
			break;
		
		case 41:
			func_177(uParam1, "Nigel1D", func_179(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_178(iParam0), 1, 1);
			break;
		
		case 42:
			func_177(uParam1, "Nigel2", func_179(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 43:
			func_177(uParam1, "Nigel3", func_179(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 1);
			break;
		
		case 44:
			func_177(uParam1, "Omega1", func_179(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 45:
			func_177(uParam1, "Omega2", func_179(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 46:
			func_177(uParam1, "Paparazzo1", func_179(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 47:
			func_177(uParam1, "Paparazzo2", func_179(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 48:
			func_177(uParam1, "Paparazzo3", func_179(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 49:
			func_177(uParam1, "Paparazzo3A", func_179(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 50:
			func_177(uParam1, "Paparazzo3B", func_179(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 51:
			func_177(uParam1, "Paparazzo4", func_179(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 52:
			func_177(uParam1, "Rampage1", func_179(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 54:
			func_177(uParam1, "Rampage3", func_179(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 55:
			func_177(uParam1, "Rampage4", func_179(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 56:
			func_177(uParam1, "Rampage5", func_179(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_178(iParam0), 0, 0);
			break;
		
		case 53:
			func_177(uParam1, "Rampage2", func_179(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_178(iParam0), 1, 0);
			break;
		
		case 57:
			func_177(uParam1, "TheLastOne", func_179(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 58:
			func_177(uParam1, "Tonya1", func_179(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 59:
			func_177(uParam1, "Tonya2", func_179(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 60:
			func_177(uParam1, "Tonya3", func_179(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 61:
			func_177(uParam1, "Tonya4", func_179(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		case 62:
			func_177(uParam1, "Tonya5", func_179(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_178(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_177(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9A24
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

int func_178(int iParam0)//Position - 0x9AB5
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

struct<2> func_179(int iParam0)//Position - 0x9DFB
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_180(iParam0) };
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

struct<2> func_180(int iParam0)//Position - 0x9E31
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

int func_181()//Position - 0xA27C
{
	func_120();
	switch (Global_19B04.f_932.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_182()//Position - 0xA2C2
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_183()//Position - 0xA2DF
{
	if (func_186() && !func_182())
	{
		return 1;
	}
	if (func_185() && func_184())
	{
		return 1;
	}
	return 0;
}

bool func_184()//Position - 0xA311
{
	return Global_199EA > 0;
}

int func_185()//Position - 0xA31F
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_186()//Position - 0xA334
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_187()//Position - 0xA35A
{
	if ((Global_19AF9 == func_188() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0xA385
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_189(Var0);
	return uVar1;
}

int func_189(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xA3A2
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_190()//Position - 0xA57C
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xA250DC6A7CADB56D(unk_0xB5CEFD608600A09F(), 1);
	}
	func_289(25, iLocal_80);
	func_194();
	func_191();
	func_271();
}

void func_191()//Position - 0xA5AD
{
	func_192();
}

int func_192()//Position - 0xA5BA
{
	if (func_193(0))
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

bool func_193(bool bParam0)//Position - 0xA605
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_194()//Position - 0xA630
{
	return 1;
}

void func_195(int iParam0)//Position - 0xA639
{
	Global_19AF6 = iParam0;
}

void func_196()//Position - 0xA647
{
	switch (iLocal_116)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				unk_0xE896C0AD02364F2A(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				unk_0xE896C0AD02364F2A(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_116++;
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					if (func_173())
					{
						if (!unk_0x2DA8CA50A72528FB(iLocal_66))
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
							{
								iLocal_66 = func_134(iLocal_61, 1, 0);
							}
							if (!func_187())
							{
								func_165(1);
							}
						}
					}
					if (func_164())
					{
						func_42(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_163();
						iLocal_147 = unk_0x105601648511CC64();
						unk_0xDF53A66AEE1401AA(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_60))
				{
					unk_0xAB43C54784946B9F(iLocal_60, vLocal_121, 250f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_202();
				}
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (func_201())
				{
					iLocal_116 = 4;
				}
				if (func_150())
				{
					iLocal_116 = 9;
				}
				if (func_200())
				{
					iLocal_116 = 6;
				}
				if (func_199())
				{
					iLocal_116 = 4;
				}
			}
			if (!func_187())
			{
				if (func_174())
				{
					func_271();
				}
			}
			break;
		
		case 2:
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0x1028B6250119A74B(iLocal_61, unk_0xBC25C936A095B5BA()) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_61, 65f))
							{
								iLocal_149 = unk_0x105601648511CC64();
								unk_0x56F2E1B5599188FA(iLocal_61, unk_0xBC25C936A095B5BA(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = unk_0x105601648511CC64();
								unk_0x56F2E1B5599188FA(iLocal_61, unk_0xBC25C936A095B5BA(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_201() || func_199())
			{
				iLocal_116 = 4;
			}
			if (func_150())
			{
				iLocal_116 = 9;
			}
			if (func_200())
			{
				iLocal_116 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (unk_0x724D816EA203A79E(iLocal_61))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0xB8CBD998685C0685(iLocal_61, unk_0xBC25C936A095B5BA(), 0, 16);
							bLocal_113 = true;
							if (unk_0x724D816EA203A79E(iLocal_60))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_60))
								{
									unk_0xAB43C54784946B9F(iLocal_60, vLocal_121, 250f, -1, 0, 0);
									unk_0x22321800954A532E(iLocal_60, true);
									SYSTEM::WAIT(0);
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_60))
								{
								}
								if (unk_0x2DA8CA50A72528FB(iLocal_63))
								{
									unk_0x07B8ECB35A4ED3AC(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_201())
				{
					iLocal_116 = 4;
				}
				if (func_150())
				{
					iLocal_116 = 9;
				}
				if (func_200())
				{
					iLocal_116 = 6;
				}
				if (func_198())
				{
					iLocal_116 = 9;
				}
				if (func_199())
				{
					iLocal_116 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_61) || func_38(unk_0xBC25C936A095B5BA(), iLocal_61, 1) > 100f)
				{
					func_197();
					func_202();
				}
			}
			break;
		
		case 4:
			if (unk_0x724D816EA203A79E(iLocal_60))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_60))
				{
					if (!unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 1))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_60);
						if (!unk_0x36CEFBE9B745A58D(iLocal_61))
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_103);
							unk_0xAB43C54784946B9F(0, unk_0x541C2AEF053615BC(iLocal_61, false), 150f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_103);
							unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
							unk_0x02DAF06EA4F08219(&iLocal_103);
							unk_0x22321800954A532E(iLocal_60, true);
						}
						iLocal_122 = 1;
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(iLocal_60);
						unk_0x5558ED6D4A2DEC93(iLocal_60, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_60, true);
						if (unk_0x2DA8CA50A72528FB(iLocal_63))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_63);
						}
					}
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_61);
					unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_61, true);
					if (unk_0x2DA8CA50A72528FB(iLocal_64))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_64);
					}
				}
			}
			if (unk_0xE6711F601F11B66B())
			{
				func_102();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_122)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_271();
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (unk_0x724D816EA203A79E(iLocal_61))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_61))
					{
						unk_0x91629AC1E1F78419(iLocal_61, 17, true);
						unk_0x2E9860A2B72187F5(iLocal_61, 156, true);
						unk_0xC5A6DFE2B8987B17(&iLocal_103);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_103);
						unk_0xA8E6405305C0D7DF(iLocal_61, iLocal_103);
						unk_0x02DAF06EA4F08219(&iLocal_103);
						unk_0x22321800954A532E(iLocal_61, true);
						SYSTEM::WAIT(0);
						unk_0xB71D41C0310C93DE(iLocal_61, false, 1);
						unk_0x02537C8C1BEEB477(&iLocal_61);
						func_42(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_60))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_60))
					{
						if (!unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 1))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					SYSTEM::WAIT(0);
					func_271();
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x724D816EA203A79E(iLocal_60))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_60))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_60);
							unk_0xC5A6DFE2B8987B17(&iLocal_103);
							unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 0, 2);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_103);
							unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
							unk_0x02DAF06EA4F08219(&iLocal_103);
							unk_0x22321800954A532E(iLocal_60, true);
							unk_0x02537C8C1BEEB477(&iLocal_60);
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_61))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0xA4E856A8CD53B8DF(iLocal_61);
							unk_0xC5A6DFE2B8987B17(&iLocal_103);
							unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 0, 2);
							unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_103);
							unk_0xA8E6405305C0D7DF(iLocal_61, iLocal_103);
							unk_0x02DAF06EA4F08219(&iLocal_103);
							unk_0x22321800954A532E(iLocal_61, true);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_271();
			}
			break;
		
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_116++;
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_202();
			}
			break;
		
		case 9:
			if (unk_0x724D816EA203A79E(iLocal_61))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_61))
				{
					unk_0x2E9860A2B72187F5(iLocal_61, 156, true);
					unk_0xB90F3BE2A1EF63DB(iLocal_61, 50f, 0);
					if (unk_0xE6711F601F11B66B())
					{
						func_102();
					}
					SYSTEM::WAIT(0);
					func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_60))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_60))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_60);
					unk_0xEE7131C3C73E7282(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = unk_0x105601648511CC64();
	if (iLocal_150 && !bLocal_113)
	{
		if (unk_0x724D816EA203A79E(iLocal_61) && unk_0x724D816EA203A79E(iLocal_61))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60) && !unk_0x36CEFBE9B745A58D(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 3f, 3f, 35f, 0, 1, 0)) && unk_0xD1DC4B08247A4317(iLocal_61)) && !func_158())
				{
					if ((func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || func_58()) || func_58())
					{
						unk_0x2E9860A2B72187F5(iLocal_61, 156, true);
						unk_0x876593D39059C175(iLocal_61, unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f), 0);
						unk_0xA4E856A8CD53B8DF(iLocal_60);
						unk_0x65E471E4A2D56226(iLocal_60, 99, 0);
						unk_0xAB43C54784946B9F(iLocal_61, vLocal_121, 250f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_61, true);
						func_271();
					}
				}
			}
		}
	}
}

void func_197()//Position - 0xAE3A
{
	Global_394A = 0;
	func_52();
}

int func_198()//Position - 0xAE4A
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60) && !unk_0x36CEFBE9B745A58D(iLocal_61))
	{
		if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_61) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_60))
		{
			return 1;
		}
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_61, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_199()//Position - 0xAE9D
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_60) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_60))
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
	{
		if (func_150())
		{
			if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0xAF2B
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0x4833C1F1F1364989(iLocal_60, unk_0xBC25C936A095B5BA(), 17))
			{
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && !unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_61))
					{
						if (!unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_61))
						{
							if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_60) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								return 1;
							}
						}
					}
					else if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_60) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_60))
					{
						SYSTEM::SETTIMERB(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_201()//Position - 0xAFE9
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
	{
		if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_202()//Position - 0xB021
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_60))
	{
		if (!unk_0x2CDE18D6C89522AD(iLocal_60))
		{
			if (func_187())
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_60, 242628503) == 7 || unk_0xF4FCC3C1048FF2AB(iLocal_60, 474215631) == 7)
				{
					if (unk_0xE6711F601F11B66B())
					{
						func_102();
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_61))
					{
						if (!unk_0x889DA6CE8E4DB344(iLocal_60))
						{
							unk_0x5558ED6D4A2DEC93(iLocal_60, iLocal_61, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!unk_0x889DA6CE8E4DB344(iLocal_60))
						{
							unk_0xAB43C54784946B9F(iLocal_60, vLocal_104, 150f, -1, 0, 0);
						}
					}
					unk_0x22321800954A532E(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_152 > 0)
					{
						unk_0x8EF3D958386640FE(unk_0xBC25C936A095B5BA(), (iLocal_152 / 100) * 90);
						func_60(func_119(), 1, iLocal_152);
						SYSTEM::WAIT(0);
						func_203(func_119(), 1, (iLocal_152 / 10), 0, 1);
					}
					func_195(3);
					func_190();
				}
			}
			else
			{
				func_271();
			}
		}
		else
		{
			func_271();
		}
	}
	else
	{
		func_271();
	}
}

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB12F
{
	int iVar0;
	int iVar1;
	
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_61(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_204()//Position - 0xB216
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_182())
		{
			return 0;
		}
	}
	if (func_183())
	{
		return 1;
	}
	if (func_175(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_205()//Position - 0xB29C
{
	func_216();
	func_215(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_215(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_215(&uLocal_349, cLocal_333);
	func_215(&uLocal_349, cLocal_321);
	func_213(&uLocal_349, iLocal_75);
	func_213(&uLocal_349, iLocal_76);
	func_213(&uLocal_349, iLocal_77);
	func_215(&uLocal_349, cLocal_320);
	func_215(&uLocal_349, cLocal_319);
	func_215(&uLocal_349, cLocal_334);
	func_215(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_209(&uLocal_349))
	{
		func_206();
		return 1;
	}
	return 0;
}

void func_206()//Position - 0xB329
{
	iLocal_60 = unk_0x01B3635C3E8EDD81(26, iLocal_75, vLocal_67, fLocal_69, 1, true);
	unk_0x2E35C4FA5F0ED22F(iLocal_60, true);
	unk_0xB105531EDD3DE51B(iLocal_60, false);
	unk_0xABA7AE40608505F2(iLocal_60, 8, true);
	unk_0xABA7AE40608505F2(iLocal_60, 128, true);
	unk_0xABA7AE40608505F2(iLocal_60, 512, true);
	unk_0x0DEF5E53360637F2(iLocal_60, 1);
	unk_0xA6F1FD44F99BFE36(iLocal_60);
	unk_0x8EF3D958386640FE(iLocal_60, 0);
	unk_0xF82197F205B9D8FD(iLocal_60, true);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 0, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 3, 0, 3, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 0, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 2, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 3, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 4, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_60, 8, 0, 0, 0);
	}
	unk_0xB2CB6EAA6B280A84("theAssailant", &iLocal_78);
	iLocal_61 = unk_0x01B3635C3E8EDD81(26, iLocal_76, vLocal_68, fLocal_72, 1, true);
	unk_0xB71D41C0310C93DE(iLocal_61, true, 1);
	unk_0x2E35C4FA5F0ED22F(iLocal_61, true);
	unk_0xE43AD8CB1B4DDED9(iLocal_61, 1, 0);
	unk_0x7A535CE1F001F3FE(iLocal_61, joaat("weapon_pistol"), -1, true, true);
	unk_0x91629AC1E1F78419(iLocal_61, 13, false);
	unk_0x91629AC1E1F78419(iLocal_61, 17, false);
	unk_0x566684DB6DAC0531(iLocal_61, true);
	unk_0xC8FD3EBBB90E8D7F(iLocal_61, 42, true);
	unk_0xC8FD3EBBB90E8D7F(iLocal_61, 137, true);
	unk_0xABA7AE40608505F2(iLocal_61, 128, true);
	unk_0xABA7AE40608505F2(iLocal_61, 2, false);
	unk_0x4106FAF8AA1D69D5(iLocal_61, iLocal_78);
	unk_0x0DEF5E53360637F2(iLocal_61, 1);
	if (!unk_0xEAEFBBEC1AEA464B(sLocal_102))
	{
		unk_0x36C3B58DA78A2679(iLocal_60, sLocal_102);
	}
	unk_0x36C3B58DA78A2679(iLocal_61, sLocal_101);
	unk_0xA902E18EDF6FA0C8(2, 45677184, iLocal_78);
	unk_0xA902E18EDF6FA0C8(2, 1191392768, iLocal_78);
	unk_0xA902E18EDF6FA0C8(2, iLocal_78, 45677184);
	unk_0xA902E18EDF6FA0C8(2, iLocal_78, 1191392768);
	unk_0xA902E18EDF6FA0C8(5, iLocal_78, 1862763509);
	switch (func_119())
	{
		case 0:
			func_208(&uLocal_154, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_208(&uLocal_154, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_208(&uLocal_154, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			break;
	}
	func_208(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	func_208(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		unk_0xABA7AE40608505F2(iLocal_61, 1, false);
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		func_207();
	}
	if (iLocal_80 == 3)
	{
		vLocal_105 = { -325.4189f, -828.8596f, 31.1f };
		vLocal_106 = { 0f, 0f, 180f };
		iLocal_107 = unk_0xD0D858E538FD01C3(vLocal_105, vLocal_106, 2);
		unk_0xB62398E536F695FC(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_80 == 4)
	{
		unk_0xE54A8F6E1EA693FF(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_207()//Position - 0xB5EA
{
	vector3 vVar0;
	
	unk_0xD5874E4A4BF782FC(iLocal_61, unk_0x883FF674F22D1F7C(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { unk_0xBFDD14D0A09BE0FA(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0x019CE76D5286C95C(iLocal_61, vVar0.z);
	unk_0xD5874E4A4BF782FC(iLocal_60, unk_0x883FF674F22D1F7C(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { unk_0xBFDD14D0A09BE0FA(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0x019CE76D5286C95C(iLocal_60, vVar0.z);
	unk_0xE896C0AD02364F2A(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_208(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xB6E0
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

int func_209(var uParam0)//Position - 0xB77B
{
	int iVar0;
	
	if (!uParam0->f_10F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_210(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_10F = 0;
	return 1;
}

bool func_210(var uParam0)//Position - 0xB7DF
{
	return func_211(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_211(int iParam0, char* sParam1, int iParam2)//Position - 0xB7F6
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_212(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(iParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(sParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(iParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(iParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xB8EA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_213(var uParam0, int iParam1)//Position - 0xB916
{
	func_214(uParam0, 0, iParam1, "NULL", 0);
}

void func_214(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB92A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x3362CDE8460ED38B(sParam3, "NULL"))
					{
						if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_10F)
	{
		uParam0->f_10F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_215(var uParam0, char* sParam1)//Position - 0xBA14
{
	func_214(uParam0, 1, -1, sParam1, 0);
}

void func_216()//Position - 0xBA27
{
	func_269();
	unk_0xF0059F27F7BB6680(&iLocal_120, 3);
	unk_0xF0059F27F7BB6680(&iLocal_120, 4);
	unk_0xF0059F27F7BB6680(&iLocal_120, 1);
	if (iLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_218();
		iLocal_152 = 200;
		iLocal_46 = 2;
		vLocal_121 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { -138.814f, -1635.975f, 31.357f };
		fLocal_69 = 318.519f;
		vLocal_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		vLocal_331 = { vLocal_67 };
		vLocal_332 = { 0f, 0f, fLocal_69 };
		vLocal_140 = { -103.8951f, -1593.239f, 30.49198f };
		vLocal_141 = { -89.29615f, -1575.444f, 32.30938f };
		vLocal_142 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_143 = { -169.8183f, -1669.556f, 33.94173f };
		vLocal_144 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_145 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_73 = 340.0645f;
		vLocal_74 = { -151.0793f, -1650.322f, 31.6504f };
		vLocal_79 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_119())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		vLocal_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		vLocal_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		vLocal_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_119())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_217();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (iLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			vLocal_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			vLocal_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			vLocal_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			vLocal_74 = { -322.3941f, -835.7213f, 30.6001f };
			vLocal_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_119())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (iLocal_80 == 4)
		{
			func_217();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			vLocal_121 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			vLocal_67 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_69 = 159.1445f;
			vLocal_331 = { vLocal_67 };
			vLocal_332 = { 0f, 0f, fLocal_69 };
			vLocal_68 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			vLocal_74 = { 42.5323f, -990.353f, 28.248f };
			vLocal_140 = { 38.15186f, -1001.485f, 28.42276f };
			vLocal_141 = { 40.13669f, -995.2711f, 30.37197f };
			vLocal_142 = { 37.21758f, -1040.354f, 28.41506f };
			vLocal_143 = { 19.91492f, -1036.814f, 30.28045f };
			vLocal_144 = { 28.4511f, -1035.718f, 28.3329f };
			vLocal_145 = { 38.6536f, -1001.073f, 28.407f };
			vLocal_79 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_119())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_217()//Position - 0xC0B7
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x491B2241281A03B7(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_218()//Position - 0xC12B
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x491B2241281A03B7(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_219(int iParam0, var uParam1)//Position - 0xC19F
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x105601648511CC64();
	}
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		iVar0 = (unk_0x105601648511CC64() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
				{
					unk_0x7781946F1FC054FA(iParam0, 255);
				}
			}
			else if (unk_0xB1D6718ACE798CBB(iParam0) != 0)
			{
				unk_0x7781946F1FC054FA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
			{
				unk_0x7781946F1FC054FA(iParam0, 255);
			}
		}
	}
}

void func_220(var uParam0)//Position - 0xC23E
{
	int iVar0;
	
	if (uParam0->f_10F)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_110 + uParam0->f_111) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2)) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_221(uParam0[iVar0 /*18*/]);
						uParam0->f_110 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_221(int iParam0)//Position - 0xC2CC
{
	func_222(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_222(int iParam0, char* sParam1, int iParam2)//Position - 0xC2E2
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_212(*iParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(iParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(sParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(iParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(iParam0, 29);
	}
}

void func_223(int iParam0)//Position - 0xC3BC
{
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_225(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_224();
}

void func_224()//Position - 0xC3F2
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), true);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	}
}

void func_225(int iParam0)//Position - 0xC42F
{
	Global_19AF9 = iParam0;
}

int func_226(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC43D
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_230F1)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_188();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_266())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_182())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_193(0))
		{
			return 0;
		}
		if (func_183())
		{
			return 0;
		}
		if (func_265())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_121(func_119()))
		{
			if (func_175(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_264(iParam1))
		{
			return 0;
		}
		if (func_121(func_119()))
		{
			if (func_263(func_119()) == 4 || func_263(func_119()) == 5)
			{
				return 0;
			}
		}
		if (func_121(func_119()))
		{
			if (!func_262(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_261(Global_19B04.f_6186.f_2B[iParam1]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_19AFB) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_260())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_251(4))
		{
			return 0;
		}
		if (!func_170(5))
		{
			return 0;
		}
		if (func_250(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_250(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_264(30) && !func_250(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_121(func_119()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_249(iVar4))
				{
					if (func_227(iVar2))
					{
						if (!func_28(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_119() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_227(int iParam0)//Position - 0xC7D7
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_228(iVar0);
}

int func_228(int iParam0)//Position - 0xC7F8
{
	return func_229(iParam0, 1);
}

int func_229(int iParam0, int iParam1)//Position - 0xC807
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_249(iParam0))
	{
		return 0;
	}
	func_230(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_230(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC85A
{
	func_231(func_242(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_231(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC878
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_241(iParam0, iParam1))
	{
		iVar0 = func_240(iParam1);
		iVar1 = func_238(iParam0);
		iVar2 = (func_238(iParam0) - func_238(iParam1));
		iVar3 = (func_240(iParam0) - func_240(iParam1));
		iVar4 = (func_237(iParam0) - func_237(iParam1));
		iVar5 = (func_236(iParam0) - func_236(iParam1));
		iVar6 = (func_235(iParam0) - func_235(iParam1));
		iVar7 = (func_234(iParam0) - func_234(iParam1));
	}
	else
	{
		iVar0 = func_240(iParam0);
		iVar1 = func_238(iParam1);
		iVar2 = (func_238(iParam1) - func_238(iParam0));
		iVar3 = (func_240(iParam1) - func_240(iParam0));
		iVar4 = (func_237(iParam1) - func_237(iParam0));
		iVar5 = (func_236(iParam1) - func_236(iParam0));
		iVar6 = (func_235(iParam1) - func_235(iParam0));
		iVar7 = (func_234(iParam1) - func_234(iParam0));
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
		iVar4 = (iVar4 + func_233(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_232(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_232(float fParam0, float fParam1, float fParam2)//Position - 0xCA79
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

int func_233(int iParam0, int iParam1)//Position - 0xCABB
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

int func_234(int iParam0)//Position - 0xCB5D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_235(int iParam0)//Position - 0xCB70
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_236(int iParam0)//Position - 0xCB83
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_237(int iParam0)//Position - 0xCB96
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_238(int iParam0)//Position - 0xCBA8
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_239(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_239(bool bParam0, int iParam1, int iParam2)//Position - 0xCBCD
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_240(int iParam0)//Position - 0xCBE4
{
	return iParam0 & 15;
}

int func_241(int iParam0, int iParam1)//Position - 0xCBF1
{
	int iVar0;
	int iVar1;
	
	if (!func_249(iParam1) || !func_249(iParam0))
	{
		return 1;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_242()//Position - 0xCCFD
{
	var uVar0;
	
	func_248(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_247(&uVar0, unk_0x7E09057438B9D216());
	func_246(&uVar0, unk_0x6E06C0DB9B43570D());
	func_245(&uVar0, unk_0xBE14F159908E4EE5());
	func_244(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_243(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_243(var uParam0, int iParam1)//Position - 0xCD43
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

void func_244(var uParam0, int iParam1)//Position - 0xCDC9
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_245(var uParam0, int iParam1)//Position - 0xCDFC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_240(*uParam0);
	iVar1 = func_238(*uParam0);
	if (iParam1 < 1 || iParam1 > func_233(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_246(var uParam0, int iParam1)//Position - 0xCE4D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_247(var uParam0, int iParam1)//Position - 0xCE87
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_248(var uParam0, int iParam1)//Position - 0xCEC2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_249(int iParam0)//Position - 0xCEFE
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
	iVar0 = func_234(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_235(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_236(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_238(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_240(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_237(iParam0);
	if (iVar5 < 1 || iVar5 > func_233(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_250(int iParam0, int iParam1)//Position - 0xCFDA
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)//Position - 0xCFFD
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_119();
				if (!func_121(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_259()) || Global_1974B) || Global_62BF) || func_258()) || func_51(8, -1)) || func_257()) || func_256()) || func_255()) || func_254()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_259()) || Global_62BF) || func_258()) || func_51(8, -1)) || func_255()) || func_257()) || func_256()) || func_254()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_259()) || Global_1974B) || Global_62BF) || func_258()) || func_51(8, -1)) || func_255()) || func_257()) || func_256()) || func_254()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_259()) || Global_1974B) || Global_62BF) || func_258()) || func_51(8, -1)) || func_257()) || func_256()) || func_254()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_259() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_51(8, -1)) || func_254()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_257()) || func_256()) || func_253()) || func_252())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_259()) || Global_62BF) || func_258()) || func_51(8, -1)) || func_256()) || func_255()) || func_254()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_259()) || func_256()) || Global_1974B) || Global_62BF) || func_258()) || Global_90C1) || func_51(8, -1)) || func_255()) || func_253()) || func_254()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_259()) || Global_1974B) || Global_62BF) || func_258()) || func_51(8, -1)) || func_255()) || func_253()) || func_257()) || func_256()) || func_254())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_252()//Position - 0xD71A
{
	return Global_16B42.f_1;
}

int func_253()//Position - 0xD728
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_254()//Position - 0xD74E
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_255()//Position - 0xD768
{
	if (Global_11646)
	{
		return 1;
	}
	else if (Global_DA99 && !Global_DA9F)
	{
		return 1;
	}
	return 0;
}

bool func_256()//Position - 0xD792
{
	return Global_16B4F.f_142 > 0;
}

bool func_257()//Position - 0xD7A3
{
	return Global_16B4F.f_141 > 0;
}

var func_258()//Position - 0xD7B4
{
	return Global_140856;
}

int func_259()//Position - 0xD7C0
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_260()//Position - 0xD7DC
{
	func_48();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_261(int iParam0)//Position - 0xD804
{
	return func_241(func_242(), iParam0);
}

int func_262(int iParam0, int iParam1, int iParam2)//Position - 0xD816
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_119();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_263(int iParam0)//Position - 0xD8FA
{
	if (!func_121(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_264(int iParam0)//Position - 0xD91E
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_266())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_1, iVar0);
	}
	return bVar1;
}

int func_265()//Position - 0xD97C
{
	int iVar0;
	
	if (Global_6353)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_266()//Position - 0xD9C0
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

bool func_267(int iParam0)//Position - 0xDA7B
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 3);
}

bool func_268(int iParam0)//Position - 0xDAA9
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 0);
}

void func_269()//Position - 0xDAD7
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (SYSTEM::VDIST(vLocal_104, vLocal_81) < 20f)
		{
			iLocal_80 = 1;
			iLocal_45 = 2;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_82) < 20f)
		{
			iLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_83) < 20f)
		{
			iLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_84) < 20f)
		{
			iLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_270(var uParam0, int iParam1)//Position - 0xDB56
{
	if (iParam1 > 0)
	{
		uParam0->f_111 = iParam1;
	}
}

void func_271()//Position - 0xDB6E
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			unk_0x2CA123B0622F495C(iLocal_75);
			unk_0x2CA123B0622F495C(iLocal_76);
			unk_0x2CA123B0622F495C(iLocal_77);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_61))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x5558ED6D4A2DEC93(iLocal_61, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
			}
			unk_0x22321800954A532E(iLocal_61, true);
			if (!bLocal_58)
			{
				unk_0x8EF3D958386640FE(iLocal_61, iLocal_152);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_60))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_60))
			{
				unk_0xB105531EDD3DE51B(iLocal_60, true);
				if (unk_0xF4FCC3C1048FF2AB(iLocal_60, -1146898486) == 7 && unk_0xF4FCC3C1048FF2AB(iLocal_60, 242628503) == 7)
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_103);
					if (unk_0xFC1354EC06B3E9F8(iLocal_60))
					{
						unk_0xDEB7D4A51A8D0580(0, 0);
					}
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 9000, 0, 2);
					unk_0xAB43C54784946B9F(0, vLocal_104, 250f, -1, 0, 0);
					unk_0x535008C596714F9E(iLocal_103);
					unk_0xA8E6405305C0D7DF(iLocal_60, iLocal_103);
					unk_0x02DAF06EA4F08219(&iLocal_103);
					unk_0x22321800954A532E(iLocal_60, true);
					if (!iLocal_128 && !iLocal_122)
					{
						if (unk_0xE6711F601F11B66B())
						{
							func_102();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (unk_0x2DA8CA50A72528FB(iLocal_64))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_64);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_63))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_63);
		}
		if (unk_0x724D816EA203A79E(iLocal_62))
		{
			unk_0xF8ED8988FAF2823F(&iLocal_62);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_65))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (unk_0x2A0D5F9585271A68(iLocal_335))
		{
			unk_0x5BF83EEC9AFDCD0E(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (func_187())
	{
		unk_0x6E52C7765A0F4382(1);
		unk_0xDF53A66AEE1401AA(1f);
	}
	func_37(&uLocal_336, 0, 0);
	func_106(0, 1, 1, 0, 0);
	func_277(-1);
	func_272(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		unk_0x9A172FCB057ABAEF(iLocal_117);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_272(var uParam0, bool bParam1)//Position - 0xDD11
{
	int iVar0;
	
	if (!bParam1)
	{
		func_274(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_273(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_10F = 0;
	uParam0->f_110 = -1;
	uParam0->f_111 = 1;
}

void func_273(var uParam0)//Position - 0xDD54
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_274(var uParam0)//Position - 0xDD6D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_275(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_10F = 1;
}

void func_275(var uParam0)//Position - 0xDDA7
{
	func_276(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_276(int iParam0, char* sParam1, int iParam2)//Position - 0xDDBE
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_212(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(iParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(sParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(sParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(sParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(iParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(iParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

void func_277(int iParam0)//Position - 0xDE7E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_187())
	{
		func_282(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_281(30000);
		StringCopy(&cVar0, func_280(Global_19AF9, 1), 64);
		if (func_279(Global_19AF9) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19AF8, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_19AF6, (unk_0x105601648511CC64() - Global_19AF7), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B00, 0) && Global_19B04.f_6186.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_19B00, 0);
	}
	func_278(&Global_62F8);
	Global_19AFA = 0;
	func_225(-1);
}

void func_278(var uParam0)//Position - 0xDF33
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_8C1B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

int func_279(int iParam0)//Position - 0xDF70
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_280(int iParam0, bool bParam1)//Position - 0xE021
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_281(int iParam0)//Position - 0xE26A
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_282(int iParam0)//Position - 0xE27C
{
	func_283(iParam0, 0, func_288(iParam0));
}

void func_283(int iParam0, int iParam1, int iParam2)//Position - 0xE291
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_242();
	func_286(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_285(iParam0, &uVar0);
	Var1 = { func_284(&uVar0) };
}

struct<16> func_284(var uParam0)//Position - 0xE2C0
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_236(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_235(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_234(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_237(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_238(*uParam0), 64);
	return Var0;
}

void func_285(int iParam0, var uParam1)//Position - 0xE38F
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE3A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_238(*uParam0);
	iVar1 = func_240(*uParam0);
	iVar2 = func_237(*uParam0);
	iVar3 = func_236(*uParam0);
	iVar4 = func_235(*uParam0);
	iVar5 = func_234(*uParam0);
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
	iVar6 = func_233(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_233(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_287(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_287(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE529
{
	func_248(uParam0, iParam1);
	func_247(uParam0, iParam2);
	func_246(uParam0, iParam3);
	func_244(uParam0, iParam5);
	func_245(uParam0, iParam4);
	func_243(uParam0, iParam6);
}

int func_288(int iParam0)//Position - 0xE561
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_289(int iParam0, int iParam1)//Position - 0xE704
{
	if (iParam0 == -1)
	{
		iParam0 = func_188();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_279(iParam0))
	{
		func_299(iParam0, iParam1);
		if (!func_298(51))
		{
			func_295("RE_REWARD", 1, 0, 4000, 10000, func_181(), 0, 138, 0);
			func_294(51);
		}
		if (func_166(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_293(iParam0, iParam1) != 322)
		{
			func_290(func_293(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_195(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_195(7);
			}
			else
			{
				func_195(1);
			}
		}
	}
}

void func_290(int iParam0, var uParam1, var uParam2)//Position - 0xE808
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
		func_67((891 + iParam0), 1, -1, 1);
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
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = uParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = uParam2;
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
		func_291();
	}
}

void func_291()//Position - 0xE8F0
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
		func_88(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_292() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_192();
				}
			}
		}
	}
}

int func_292()//Position - 0xEDB1
{
	return Global_62BD;
}

int func_293(int iParam0, int iParam1)//Position - 0xEDBC
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_294(int iParam0)//Position - 0xF130
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_4F9D.f_96[iVar1]), iVar0);
	}
}

void func_295(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xF172
{
	func_296(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_296(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xF192
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19B04.f_4F9D.f_91 < 9)
	{
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_4), sParam1, 16);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_9 = iParam5;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_B = iParam6;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_C = uParam2;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_D = iParam7;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_E = iParam8;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = -1;
		}
		Global_19B04.f_4F9D.f_91++;
		func_297();
	}
}

void func_297()//Position - 0xF364
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19B04.f_4F9D.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[0])
			{
				Global_19B04.f_4F9D.f_92[0] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[1])
			{
				Global_19B04.f_4F9D.f_92[1] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[2])
			{
				Global_19B04.f_4F9D.f_92[2] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_298(int iParam0)//Position - 0xF484
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_299(int iParam0, int iParam1)//Position - 0xF4C7
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

