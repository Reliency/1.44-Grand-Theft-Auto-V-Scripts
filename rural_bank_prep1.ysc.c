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
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	struct<8> Local_60 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 1000;
	var uLocal_63 = 1000;
	var uLocal_64 = 0;
	struct<2> Local_65[3];
	struct<2> Local_66[3];
	int iLocal_67[2] = { 0, 0 };
	struct<14> Local_68[9];
	var uLocal_69 = 16;
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
	struct<6> Local_234 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_235 = 0;
	var uLocal_236 = 1092616192;
	var uLocal_237 = 1101004800;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 3;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[3] = { 0, 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	float fLocal_261 = 0f;
	float fLocal_262 = 0f;
	float fLocal_263 = 0f;
	float fLocal_264 = 0f;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
	bool bLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	bool bLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	char cLocal_296[64] = "";
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	char* sLocal_305 = NULL;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	var uLocal_308 = 30;
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
	var uLocal_459 = 10;
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
	var uLocal_510 = 10;
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
	var uLocal_581 = 20;
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
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 20;
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
	var uLocal_783 = 30;
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
	var uLocal_964 = 5;
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
	var uLocal_995 = 7;
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
	var uLocal_1045 = 5;
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
	var uLocal_1087 = 16;
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
	var uLocal_1187 = 10;
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
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 5;
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
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 5;
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
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	bool bLocal_1298 = 0;
	int iLocal_1299 = 0;
	float fLocal_1300[3] = { 0f, 0f, 0f };
	bool bLocal_1301 = 0;
	int iLocal_1302 = 0;
	int iLocal_1303 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = unk_0xD736C0AC62BF73AD();
	iLocal_47 = unk_0x880E0FAC08C6FA65();
	vLocal_49 = { 1358.197f, 3618.234f, 33.89066f };
	vLocal_50 = { 0f, 5f, -0.5f };
	vLocal_51 = { 4f, 3f, -0.5f };
	vLocal_52 = { 4f, -3f, -0.5f };
	vLocal_53 = { 0f, -5f, -0.5f };
	vLocal_54 = { -4f, -3f, -0.5f };
	vLocal_55 = { -4f, 3f, -0.5f };
	vLocal_56 = { 0f, 2f, -0.5f };
	vLocal_57 = { 4f, 0f, -0.5f };
	vLocal_58 = { 0f, -2.2f, -0.5f };
	vLocal_59 = { -4f, 0f, -0.5f };
	iLocal_274 = joaat("weapon_assaultrifle");
	vLocal_283 = { 0f, 0f, 0f };
	iLocal_287 = 30000;
	bLocal_291 = true;
	StringCopy(&cLocal_296, "Rural_prep_trigger1", 64);
	sLocal_305 = "rural_prep_park";
	if (unk_0xE8A79675302ED812(3))
	{
		func_338();
		func_334();
	}
	unk_0x25A523E067E06F54(1);
	func_264();
	unk_0xB5AD2E78802711D6(1);
	while (true)
	{
		unk_0x2E94C9549322098D("M_ThePaletoScorePrep", 0);
		func_263(&uLocal_308);
		if (((((iLocal_1294 == 0 && unk_0x724D816EA203A79E(Local_65[0 /*2*/])) && unk_0xE59B7F5A03335350(Local_65[0 /*2*/], 0)) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0)) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_65[0 /*2*/], true)) < 5625f)
		{
			bVar0 = false;
			if ((!Local_60.f_7 && unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA())) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				iVar1 = 0;
				unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
				if (iVar1 != joaat("weapon_unarmed"))
				{
					iVar2 = 0;
					unk_0x928086F2A5589E20(unk_0xBC25C936A095B5BA(), iVar1, &iVar2);
					if (iVar2 < unk_0xA6867D3A0C79DC86(unk_0xBC25C936A095B5BA(), iVar1, 1))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				func_235(&Local_60, Local_65[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			func_233(&Local_60, 0, 0);
		}
		func_232();
		func_199();
		if (!bLocal_1298)
		{
			func_145();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x27D
{
	switch (iLocal_1294)
	{
		case 0:
			func_143();
			break;
		
		case 1:
			func_109();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x2C1
{
	switch (iLocal_1295)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			unk_0xF3F01A78937DC905(0f);
			iLocal_1295++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x302
{
	if (unk_0xE59B7F5A03335350(Local_65[0 /*2*/], 0))
	{
		unk_0xE9A905ADFD5BC8A0(Local_65[0 /*2*/], "IgnoredByQuickSave", 1);
	}
	func_4(0, 0);
	func_334();
}

void func_4(bool bParam0, int iParam1)//Position - 0x32F
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
		if ((func_7(0) && Global_11638.f_1 == 1) && func_6(Global_11638))
		{
		}
		else
		{
			Global_DA9F = 1;
		}
	}
	if (Global_19B04.f_2360 || func_7(0))
	{
		iVar0 = func_5();
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

int func_5()//Position - 0x405
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

int func_6(int iParam0)//Position - 0x43A
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

bool func_7(bool bParam0)//Position - 0x478
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_8()//Position - 0x4A3
{
	int iVar0;
	
	if (!iLocal_265)
	{
		if ((unk_0x724D816EA203A79E(iLocal_254) && unk_0xE59B7F5A03335350(iLocal_254, 0)) && unk_0xB248FAA35ED47DB9(iLocal_254, 1))
		{
			func_84(iLocal_254, 0, 145);
			unk_0x1E7A09C1710FB071(&iLocal_254);
			iLocal_265 = 1;
		}
	}
	unk_0x4B656426561BA934(-94.3112f, 3003.016f, 2711.273f, 4857.763f);
	switch (iLocal_1295)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			func_83(724, 0);
			unk_0x3857DADBD6EC8A54("RHP1_TRUCK");
			unk_0x1D1C393C7689E5A6(3f, 5f, 4);
			iLocal_1295++;
			break;
		
		case 1:
			if (func_40(&Local_234, vLocal_49, 0.1f, 0.1f, 2f, 1, Local_65[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (unk_0x2DA8CA50A72528FB(Local_234.f_5) && unk_0x0C265B3C448E6954(Local_65[0 /*2*/], 1359.476f, 3614.326f, 36.87141f, 1356.748f, 3621.605f, 33.72731f, 5f, 0, true, 0)))
			{
				func_38(Local_65[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0);
				unk_0x8300C56586249382(Local_65[0 /*2*/], 0);
				func_33(&Local_234, 1, 0);
				func_32(1, 724);
				bLocal_275 = false;
				iLocal_276 = 0;
				iLocal_1295++;
			}
			break;
		
		case 2:
			bLocal_280 = true;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (func_31(Local_68[iVar0 /*14*/]))
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_68[iVar0 /*14*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) < 400f)
					{
						if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
						{
							unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
						}
						bLocal_280 = false;
					}
					else
					{
						unk_0x02537C8C1BEEB477(&(Local_68[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (bLocal_280)
			{
				unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
				iLocal_1295++;
			}
			else if (!bLocal_275)
			{
				unk_0xEB233A3B7635D2AC();
				unk_0x1D1C393C7689E5A6(3f, 5f, 4);
				func_30("RHP_KILL", 7500, 1);
				bLocal_275 = true;
			}
			break;
		
		case 3:
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0))
			{
				if (unk_0x4B8E3E5901E59EB8())
				{
					unk_0xEB233A3B7635D2AC();
				}
				if (func_29(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_28(&uLocal_69, 0, unk_0xBC25C936A095B5BA(), "Trevor", 0, 1);
					if (bLocal_275)
					{
						if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1295 = 4;
						}
					}
					else if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1295 = 4;
					}
				}
				else if (func_29(unk_0xBC25C936A095B5BA()) == 0)
				{
					func_28(&uLocal_69, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					if (bLocal_275)
					{
						if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1295 = 4;
						}
					}
					else if (func_12(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1295 = 4;
					}
				}
				if (iLocal_1295 == 4)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (!iLocal_276 && func_10())
			{
				unk_0x1D1C393C7689E5A6(3f, 7f, 4);
				unk_0x3857DADBD6EC8A54("RHP1_END");
				func_30("RHP_EXIT", 7500, 1);
				iLocal_276 = 1;
			}
			break;
		
		case 4:
			if (!func_9() || SYSTEM::TIMERA() > 6000)
			{
				func_3();
			}
			break;
	}
}

int func_9()//Position - 0x7ED
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x80F
{
	if (unk_0x4B8E3E5901E59EB8())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (func_9() && !func_11())
		{
			return 0;
		}
	}
	return 1;
}

int func_11()//Position - 0x83F
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x856
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_13(sParam2, iParam4, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)//Position - 0x8AA
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
					func_26();
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
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_24();
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
				func_18();
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
				if (func_17())
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
			if (func_16())
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
			func_15();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_14();
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
		func_26();
	}
	return 0;
}

void func_14()//Position - 0xB76
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

void func_15()//Position - 0xBA7
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

int func_16()//Position - 0xC3C
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0xC63
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

void func_18()//Position - 0xCFC
{
	if (func_23(14))
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
		Global_389D = func_19();
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

int func_19()//Position - 0xD9E
{
	func_20();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_20()//Position - 0xDB7
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_22(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_29(unk_0xBC25C936A095B5BA());
			if (func_21(iVar0) && (!func_23(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_21(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_21(int iParam0)//Position - 0xEB4
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0xEC0
{
	if (func_21(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_23(int iParam0)//Position - 0xEEA
{
	return Global_8C41 == iParam0;
}

void func_24()//Position - 0xEF8
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

bool func_25(int iParam0, int iParam1)//Position - 0xF4F
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

void func_26()//Position - 0xF8A
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xFE1
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

void func_28(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1037
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

int func_29(int iParam0)//Position - 0x10D2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_30(char* sParam0, int iParam1, int iParam2)//Position - 0x110F
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_31(int iParam0)//Position - 0x1128
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
	}
	return 0;
}

void func_32(bool bParam0, int iParam1)//Position - 0x1173
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

void func_33(int iParam0, bool bParam1, bool bParam2)//Position - 0x120D
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_37(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(iParam0->f_1[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1[iVar0]));
		}
		func_36(iVar0, iParam0);
		func_35(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), iVar0);
			unk_0x7CB6FD92BE491AD9(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_C = 0;
	iParam0->f_F = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar0]))
		{
			unk_0x8941EA87BBF38C6F(iParam0->f_11[iVar0], 1);
			unk_0xF0B851960DDCE3D8(iParam0->f_11[iVar0], 1);
			if (bParam2)
			{
				unk_0xC8FD3EBBB90E8D7F(iParam0->f_11[iVar0], 32, true);
				unk_0xC8FD3EBBB90E8D7F(iParam0->f_11[iVar0], 305, false);
			}
			unk_0xC8FD3EBBB90E8D7F(iParam0->f_11[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9488E18994C5C83D(iParam0->f_11[iVar0], func_34()) && iParam0->f_11[iVar0] != unk_0xBC25C936A095B5BA())
				{
					unk_0x57EB4CC8F1928A47(iParam0->f_11[iVar0]);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 29))
			{
				unk_0x69194304DB679A9C(iParam0->f_11[iVar0], false, -1, 0);
			}
			iParam0->f_11[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
		unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 1);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (bParam2)
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, true);
		}
	}
	iParam0->f_15 = 0;
}

int func_34()//Position - 0x13BE
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

void func_35(int iParam0, var uParam1)//Position - 0x13CE
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 17);
			break;
		
		case 1:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 18);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 19);
			break;
	}
}

void func_36(int iParam0, var uParam1)//Position - 0x1416
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 14);
			break;
		
		case 1:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 15);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 16);
			break;
	}
}

void func_37(var uParam0)//Position - 0x145E
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
	}
}

int func_38(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1479
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
	func_39(iParam0);
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

void func_39(int iParam0)//Position - 0x1608
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

int func_40(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1634
{
	return func_41(iParam0, vParam1, vParam2, func_82(), func_82(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_81(), func_81(), func_81(), func_81(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_41(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1683
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0] = iParam7;
	iParam0->f_11[1] = iParam8;
	iParam0->f_11[2] = iParam9;
	iParam0->f_10 = iParam7;
	func_80(iParam0);
	func_79(iParam0);
	func_78();
	if (func_62(iParam0, iParam0->f_11[0], iParam0->f_11[1], iParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_61(sParam12);
		func_61(sParam13);
		func_61(sParam14);
		func_61(sParam15);
		if (unk_0x726D9204B160D23E())
		{
			bVar1 = false;
			if (unk_0xE59B7F5A03335350(iParam10, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0))
				{
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
					if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 23))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 23);
					}
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_59(iParam0, iParam21))
				{
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
					if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
					}
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_61(sParam16);
				func_61(sParam19);
				func_61("MORE_SEATS");
				if (bParam18 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						func_61(sParam11);
					}
					if (unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(iParam0);
					}
					if ((!func_57(iParam0, 1) && !func_56(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_55(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_53(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 0);
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						func_61("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_57(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_53(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
						}
					}
					if (!unk_0x2DA8CA50A72528FB(iParam0->f_5))
					{
						if (unk_0x2DA8CA50A72528FB(*iParam0))
						{
							unk_0x07B8ECB35A4ED3AC(iParam0);
						}
						iParam0->f_5 = func_52(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xBF0E22F3E083C33D(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_51(iParam0->f_5, iParam0);
						}
					}
					else if (!func_50(vVar3, unk_0x5DC00ADB7E2FD7C2(iParam0->f_5), 0.1f, 0))
					{
						unk_0x1423825E528B4DE1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_51(iParam0->f_5, iParam0);
						}
					}
					if (!func_57(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 2))
						{
							func_55(iParam0, sParam11, 0);
							unk_0xF0059F27F7BB6680(&(iParam0->f_D), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									if (!unk_0x62F3A07C43FFB568(iParam0->f_11[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0x62F3A07C43FFB568(iParam0->f_11[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9488E18994C5C83D(iParam0->f_11[iVar2], func_34()) || !func_48(iParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_45(iParam0))
							{
								func_61(sParam11);
								func_61(sParam16);
								func_61(sParam12);
								func_61(sParam13);
								func_61(sParam14);
								func_61(sParam15);
								func_61("LOSE_WANTED");
								func_61("MORE_SEATS");
								func_61(sParam19);
								func_33(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x724D816EA203A79E(iParam10))
			{
				if ((bParam18 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 9) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 22)))
				{
					func_61(sParam16);
					func_61(sParam19);
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5) || unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						unk_0x07B8ECB35A4ED3AC(iParam0);
						func_61(sParam11);
					}
					if ((!func_57(iParam0, 1) && !func_56(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_55(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_53(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 0);
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						func_61("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_57(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_53(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
						}
					}
					if (unk_0xE59B7F5A03335350(iParam10, 0))
					{
						if (!unk_0x2DA8CA50A72528FB(*iParam0))
						{
							if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
							{
								unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
								func_61(sParam11);
							}
							*iParam0 = func_42(iParam10, 0, 0);
							unk_0x2E9308F22ABD4DF5(*iParam0, 2);
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_51(*iParam0, iParam0);
							}
						}
						if (!func_57(iParam0, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_55(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
							{
								if (!unk_0xEAEFBBEC1AEA464B(sParam19))
								{
									if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
									{
										func_55(iParam0, sParam19, 0);
										unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
									}
								}
								else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_55(iParam0, sParam16, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 23))
								{
									if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
									{
										func_53(iParam0->f_11[0], "GET_IN_CAR", 3);
									}
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
				{
					unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
					func_61(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_57(iParam0, 2))
						{
							if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
							{
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x491B2241281A03B7(0, iVar6);
									if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar7]))
									{
										func_53(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_55(iParam0, "MORE_SEATS", 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 13);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_55(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
								{
									func_55(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_57(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
						{
							func_55(iParam0, sParam16, 0);
							unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
						}
						else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
						{
							if (!unk_0xEAEFBBEC1AEA464B(sParam19))
							{
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_55(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_55(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
		{
			unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
		}
		func_61(sParam11);
		func_61(sParam16);
		func_61(sParam19);
		func_61(sParam16);
		func_61("LOSE_WANTED");
		if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
		}
		if (unk_0x2DA8CA50A72528FB(*iParam0))
		{
			unk_0x07B8ECB35A4ED3AC(iParam0);
		}
	}
	unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 11);
	unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 12);
	return 0;
}

int func_42(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FDD
{
	return func_43(iParam0, !bParam1, bParam2);
}

int func_43(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FF0
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_44(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_44(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_44(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_44(bool bParam0, float fParam1, float fParam2)//Position - 0x2094
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_45(int iParam0)//Position - 0x20AB
{
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 12))
	{
		if (func_47(unk_0xBC25C936A095B5BA()))
		{
			if (func_46(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_46(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2109
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

int func_47(int iParam0)//Position - 0x21EE
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		fVar0 = unk_0x8910237449BB6F79(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0x2225
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && iParam1)
		{
			if (func_49(unk_0xBC25C936A095B5BA(), iParam0))
			{
				unk_0x567FA6DC2DF8E19A(func_34(), 50f);
				return 1;
			}
		}
		else if (unk_0x9488E18994C5C83D(iParam0, func_34()))
		{
			unk_0x567FA6DC2DF8E19A(func_34(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0x2290
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(iParam0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iParam1))
				{
					if (unk_0x25EF720B1CAB1E23(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_50(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x22D8
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

void func_51(int iParam0, int iParam1)//Position - 0x2353
{
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		if (unk_0x2DA8CA50A72528FB(iParam1->f_6))
		{
			unk_0x0BBAABB52887CF8C(iParam1->f_6, false);
		}
		unk_0xA2F21B9C95E0F635(0);
		unk_0x5499DFC49A11E05F();
		iParam1->f_6 = iParam0;
		unk_0x0BBAABB52887CF8C(iParam0, true);
	}
}

int func_52(vector3 vParam0, bool bParam1)//Position - 0x238E
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_44(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_53(int iParam0, char* sParam1, int iParam2)//Position - 0x23BA
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_54(iParam2), 1);
}

int func_54(int iParam0)//Position - 0x23D1
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

void func_55(int iParam0, char* sParam1, bool bParam2)//Position - 0x25C6
{
	if (!bParam2)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_30(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = unk_0x105601648511CC64();
}

int func_56(int iParam0)//Position - 0x25FD
{
	if (!unk_0x36CEFBE9B745A58D(iParam0->f_10))
	{
		if (unk_0x9986AD62CA3DE747(iParam0->f_10))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1)//Position - 0x2621
{
	if (iParam1 != 1 || unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 1;
		}
		if (func_58(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x11D38424F1DD3B8F())
	{
		if (func_9() && !func_11())
		{
			return 1;
		}
	}
	return 0;
}

int func_58(var uParam0)//Position - 0x2679
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x105601648511CC64();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)//Position - 0x269C
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_60(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, var uParam1, int iParam2)//Position - 0x26CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x524ABB0435146845(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x06F5AA4251CA92EB(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x06F5AA4251CA92EB(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_61(char* sParam0)//Position - 0x2761
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		unk_0xBB5629E7D44054AE(sParam0);
	}
}

int func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2779
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_11[0] = uParam1;
	uParam0->f_11[1] = uParam2;
	uParam0->f_11[2] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 29) && !unk_0xFA30DFD0084E92FE(uParam0->f_D, 28))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					unk_0x69194304DB679A9C(uParam0->f_11[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_D), 28);
				}
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 29) && unk_0xFA30DFD0084E92FE(uParam0->f_D, 28))
		{
			if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
			{
				unk_0x69194304DB679A9C(uParam0->f_11[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 26))
	{
		bVar14 = false;
		if (!unk_0x724D816EA203A79E(uParam0->f_15))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 50f, 0, iVar16);
			if (unk_0xE59B7F5A03335350(iVar15, 0))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (unk_0xE59B7F5A03335350(uParam0->f_15, 0))
		{
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(uParam0->f_15, true)) < 400f)
			{
				if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) || !bParam17)
					{
						if (func_60(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
								{
									unk_0xDBA0F5674ACCE43C(uParam0->f_11[iVar0], 1f);
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
									if (unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470) == 7 && !func_77(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], true);
											unk_0xD179FA0466FA4FE3(uParam0->f_11[iVar0], uParam0->f_15, 60000, iVar0, 1f, 1, 0);
											unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					if (!unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
					}
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						if (func_75(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 26))
	{
		if ((!func_74(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())) && !unk_0x724D816EA203A79E(iParam10))
		{
			iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar10, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_57(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x491B2241281A03B7(0, iVar17);
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar18]))
						{
							func_53(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_55(uParam0, "MORE_SEATS", 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_D), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 13);
			func_61("MORE_SEATS");
		}
		if (!unk_0x724D816EA203A79E(iParam10))
		{
			if ((!unk_0x36CEFBE9B745A58D(uParam0->f_11[0]) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[1])) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[2]))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 31))
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && !func_57(uParam0, 2))
					{
						iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (func_73(iVar10, uParam0))
						{
							func_55(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 31);
					func_61("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xE59B7F5A03335350(iParam10, 0))
		{
			if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
			{
				if (unk_0x694514BD37EC4E94(0, 75))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						unk_0x63ECE17EEAC84602(uParam0->f_11[iVar0], 1);
					}
					else
					{
						unk_0x63ECE17EEAC84602(uParam0->f_11[iVar0], 0);
					}
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (unk_0xE59B7F5A03335350(iVar10, 0))
						{
							if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (!func_74(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
								{
									if (!func_72(uParam0->f_11[iVar0]))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x1D403DFADBC2DE3C(iVar10, 0))
						{
							if (unk_0x25EF720B1CAB1E23(uParam0->f_11[iVar0], iVar10))
							{
								if (unk_0x149E9368A11035DE(iVar10) && !unk_0x58F9E0EA914AEF2C(iVar10))
								{
									vVar19 = { unk_0x541C2AEF053615BC(iVar10, true) };
									if (vVar19.z < -1f)
									{
										unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_11[iVar0]))
						{
							iVar10 = unk_0x9FE9D386222EEE47(uParam0->f_11[iVar0], 0);
							if (!unk_0x1D403DFADBC2DE3C(iVar10, 0))
							{
								if (unk_0xE59B7F5A03335350(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar10))
										{
											if (unk_0x8910237449BB6F79(iVar10) > 5f)
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
									{
										iVar20 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									}
									if (unk_0xE59B7F5A03335350(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x8910237449BB6F79(iVar10) > 5f)
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						iVar21 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
						if (unk_0x724D816EA203A79E(iVar21))
						{
							if (func_60(iVar21, uParam0, 0))
							{
								if (func_71(iVar0, uParam0) || !unk_0xFA30DFD0084E92FE(uParam0->f_D, 27))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
									func_35(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF0059F27F7BB6680(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_71(iVar0, uParam0))
							{
								if (unk_0x6F79ECA8C83E4357(iVar21) == joaat("sentinel2"))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 4);
								}
								else
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 2);
								}
								func_70(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()) && !func_69(uParam0->f_11[iVar0], iParam10)) && !func_68(uParam0->f_11[iVar0], iParam10))
					{
						if (func_75(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (((!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
									}
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x105601648511CC64();
								uParam0->f_1[iVar0] = func_42(uParam0->f_11[iVar0], 0, 0);
								unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_51(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
					{
						if (((func_48(uParam0->f_11[iVar0], 1) || func_69(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xE59B7F5A03335350(iParam10, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
						{
							if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
								func_61(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_51(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xE59B7F5A03335350(iParam10, 0))
					{
						if (!unk_0x25EF720B1CAB1E23(uParam0->f_11[iVar0], iParam10))
						{
							if ((unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xFA30DFD0084E92FE(uParam0->f_D, 11)) && !((bParam17 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
							{
								if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_11[iVar0]))
								{
									if (!unk_0x62F3A07C43FFB568(uParam0->f_11[iVar0], iParam10, 0))
									{
										if (!func_48(uParam0->f_11[iVar0], 1))
										{
											if (func_47(uParam0->f_11[iVar0]))
											{
												iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0xA3981DED4FC2E56E(uParam0->f_11[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7 && !func_77(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0xBF3C2E756849EEF4(unk_0xBC25C936A095B5BA())) && !func_67(uParam0->f_11[iVar0], 2f)) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], true);
											if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 10))
											{
												unk_0xDBA0F5674ACCE43C(uParam0->f_11[iVar0], 1f);
											}
											unk_0xD179FA0466FA4FE3(uParam0->f_11[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x2FEB3A9B7C91A02D(uParam0->f_11[iVar0], 0);
										}
									}
									else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_42(uParam0->f_11[iVar0], 0, 0);
										unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (func_75(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
										}
										unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], false);
										unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
									}
								}
							}
						}
						else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
								{
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
								}
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
							{
								unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
							}
						}
						else if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()) && !unk_0x7544D2465B934445(iParam10))
						{
							unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_61(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_57(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
						{
							if (func_72(uParam0->f_11[iVar0]) || unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
					{
						if (!unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_72(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x105601648511CC64();
			if ((iVar5 - uParam0->f_B) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 5))
							{
								func_55(uParam0, sParam7, 0);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 5);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_66(iVar0, uParam0))
									{
										if (!unk_0xEAEFBBEC1AEA464B(uVar13[iVar0]))
										{
											if (!unk_0x3362CDE8460ED38B(uVar13[iVar0], ""))
											{
												func_64(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_63(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_66(iVar0, uParam0))
										{
											func_55(uParam0, uVar12[iVar0], 0);
											func_63(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0;
				}
			}
		}
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_61(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_61("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_63(int iParam0, var uParam1)//Position - 0x37EA
{
	switch (iParam0)
	{
		case 0:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 14);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 15);
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 16);
			break;
	}
}

void func_64(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3832
{
	if (!bParam3)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_65(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = unk_0x105601648511CC64();
}

void func_65(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x386B
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

int func_66(int iParam0, var uParam1)//Position - 0x388A
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 14);
		
		case 1:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 15);
		
		case 2:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 16);
		
		default:
	}
	return 0;
}

int func_67(int iParam0, float fParam1)//Position - 0x38D3
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x8910237449BB6F79(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1)//Position - 0x390A
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x9488E18994C5C83D(iParam0, func_34()))
		{
			iVar0 = unk_0x25480ACDBB6DB8F1(iParam0);
			if (unk_0xE59B7F5A03335350(iParam1, 0))
			{
				if (unk_0xE642C1AC73CE364E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x3971
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0xE59B7F5A03335350(iParam1, 0))
			{
				if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_70(int iParam0, var uParam1)//Position - 0x39A6
{
	switch (iParam0)
	{
		case 0:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 17);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 18);
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 19);
			break;
	}
}

int func_71(int iParam0, var uParam1)//Position - 0x39EE
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 17);
		
		case 1:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 18);
		
		case 2:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 19);
		
		default:
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x3A37
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				iVar1 = unk_0xD20EBB97FE8799ED(iParam0);
				if (unk_0xE59B7F5A03335350(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xE642C1AC73CE364E(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_73(int iParam0, var uParam1)//Position - 0x3AC4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x36CEFBE9B745A58D(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x3187EF5798B5D209(iParam0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0] || iVar3 == uParam1->f_11[1]) || iVar3 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x3187EF5798B5D209(iParam0, 1, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0] || iVar4 == uParam1->f_11[1]) || iVar4 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x3187EF5798B5D209(iParam0, 2, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0] || iVar5 == uParam1->f_11[1]) || iVar5 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(var uParam0)//Position - 0x3C24
{
	int iVar0;
	
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_60(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3C53
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam1, 0);
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar0))
					{
						if (func_74(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (func_60(iVar0, uParam0, 0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (func_76(iVar0))
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
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x3D31
{
	float fVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar0 = unk_0x8910237449BB6F79(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)//Position - 0x3D69
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			iVar0 = unk_0xD20EBB97FE8799ED(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x3D99
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			iVar1 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar1))
			{
				if (iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						if (!unk_0x1A6AA4082E241660(iVar1, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iVar1, unk_0xBC25C936A095B5BA(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_79(var uParam0)//Position - 0x3E06
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 25))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_11[iVar0], 32, false);
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_11[iVar0], 305, true);
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_11[iVar0], 268, true);
					unk_0x2FEB3A9B7C91A02D(uParam0->f_11[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xF0059F27F7BB6680(&(uParam0->f_D), 25);
	}
}

void func_80(var uParam0)//Position - 0x3EA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
			{
				if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_11[iVar0]))
				{
					unk_0x8941EA87BBF38C6F(uParam0->f_11[iVar0], 0);
					unk_0xF0B851960DDCE3D8(uParam0->f_11[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
			{
				unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 0);
			}
		}
	}
}

var func_81()//Position - 0x3F3F
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_82()//Position - 0x3F49
{
	vector3 vVar0;
	
	return vVar0;
}

void func_83(int iParam0, bool bParam1)//Position - 0x3F55
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

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x3F9F
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x0B00D4CDDAB33814(iParam0, &uVar0);
		if (!unk_0xF1734B55490E9045(sVar1))
		{
			if (unk_0x56BEECB328B6D29D(sVar1) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_85(iParam0, iParam2);
	return 1;
}

void func_85(int iParam0, int iParam1)//Position - 0x3FDF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_91(iParam0))
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
	func_86(iParam0, &(Global_19B04.f_7F22.f_1586));
}

void func_86(int iParam0, var uParam1)//Position - 0x41E2
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_90(uParam1);
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
		if (uParam1->f_41 == -1 && !func_89(uParam1->f_42))
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
		func_88(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_87(iVar0 + 1));
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

int func_87(int iParam0)//Position - 0x448B
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

int func_88(int iParam0, var uParam1, var uParam2)//Position - 0x453B
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

int func_89(int iParam0)//Position - 0x4615
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

void func_90(var uParam0)//Position - 0x4635
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

int func_91(int iParam0)//Position - 0x46E5
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_107(iParam0, 0, 0)) || func_107(iParam0, 1, 0)) || func_107(iParam0, 2, 0)) || func_106(iParam0) != 145) || func_105(iParam0)) || func_104(iParam0)) || func_103(iParam0)) || func_102(iParam0)) || !func_92(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_104(iParam0))
		{
		}
		if (func_104(iParam0))
		{
		}
		if (func_107(iParam0, 0, 0))
		{
		}
		if (func_107(iParam0, 1, 0))
		{
		}
		if (func_107(iParam0, 2, 0))
		{
		}
		if (func_106(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_92(int iParam0)//Position - 0x47C2
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_93(iParam0, 0))
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

int func_93(int iParam0, bool bParam1)//Position - 0x4973
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
		if (!func_101())
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
		if ((((!func_100() && !func_99()) && !func_98()) && !func_97()) && !func_101())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_98())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_96(iParam0))
		{
			return 0;
		}
	}
	if (!func_94(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)//Position - 0x4B01
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_95())
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

int func_95()//Position - 0x4BCD
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x4BE4
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

int func_97()//Position - 0x668B
{
	return 0;
}

int func_98()//Position - 0x6694
{
	return 1;
}

int func_99()//Position - 0x669D
{
	return 1;
}

int func_100()//Position - 0x66A6
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_101()//Position - 0x66BF
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

int func_102(int iParam0)//Position - 0x677A
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_93(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)//Position - 0x67C0
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

int func_104(int iParam0)//Position - 0x67FB
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

int func_105(int iParam0)//Position - 0x6877
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

int func_106(int iParam0)//Position - 0x695F
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

int func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x69C2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_108(iParam1, iVar0, &sVar1, &iVar2))
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

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x6A33
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

void func_109()//Position - 0x6B0B
{
	int iVar0;
	
	switch (iLocal_1295)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (func_31(Local_68[iVar0 /*14*/]))
				{
					if (!iLocal_273)
					{
						func_28(&uLocal_69, 1, Local_68[iVar0 /*14*/], "ArmyPed", 0, 1);
						func_141();
						unk_0x53D8178763EDCE60(Local_68[iVar0 /*14*/], "GENERIC_WAR_CRY", func_54(3), 1);
						iLocal_273 = 1;
					}
				}
				iVar0++;
			}
			unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_307);
			unk_0x1D1C393C7689E5A6(3f, 5f, 4);
			iLocal_1295++;
			break;
		
		case 1:
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0))
			{
				unk_0x1D1C393C7689E5A6(3f, 5f, 4);
				func_112(0f, 0f, 0f, -1f, 0, 145);
				if (unk_0x2DA8CA50A72528FB(Local_65[0 /*2*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_65[0 /*2*/].f_1));
				}
				func_111(2);
				iLocal_1295 = 0;
			}
			else if (func_31(Local_65[0 /*2*/]) && !unk_0x2DA8CA50A72528FB(Local_65[0 /*2*/].f_1))
			{
				Local_65[0 /*2*/].f_1 = func_110(Local_65[0 /*2*/], 0, 0);
			}
			break;
	}
}

int func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x6C25
{
	return func_43(iParam0, !bParam1, bParam2);
}

int func_111(int iParam0)//Position - 0x6C38
{
	if (iLocal_1293 == 0)
	{
		iLocal_1296 = iParam0;
		iLocal_1293 = 1;
		return 1;
	}
	return 0;
}

void func_112(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x6C58
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_140(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_137(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_113(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_113(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x6CD3
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
		func_136(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_86(iParam0, &Var0);
		if (func_135(vParam1, 0f, 0f, 0f, 0))
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
		func_129(iParam3, &Var0, vParam1, fParam2, func_106(iParam0));
		func_114(iParam3, iParam0, 0);
	}
}

void func_114(int iParam0, int iParam1, int iParam2)//Position - 0x6DFC
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_126(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_115();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_140(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_85(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

var func_115()//Position - 0x6F19
{
	var uVar0;
	
	func_125(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_124(&uVar0, unk_0x7E09057438B9D216());
	func_123(&uVar0, unk_0x6E06C0DB9B43570D());
	func_118(&uVar0, unk_0xBE14F159908E4EE5());
	func_117(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_116(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_116(var uParam0, int iParam1)//Position - 0x6F5F
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

void func_117(var uParam0, int iParam1)//Position - 0x6FE5
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)//Position - 0x7018
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_122(*uParam0);
	iVar1 = func_120(*uParam0);
	if (iParam1 < 1 || iParam1 > func_119(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_119(int iParam0, int iParam1)//Position - 0x7069
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

var func_120(int iParam0)//Position - 0x710B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_121(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_121(bool bParam0, int iParam1, int iParam2)//Position - 0x7130
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_122(var uParam0)//Position - 0x7147
{
	return uParam0 & 15;
}

void func_123(var uParam0, int iParam1)//Position - 0x7154
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_124(var uParam0, int iParam1)//Position - 0x718E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_125(var uParam0, int iParam1)//Position - 0x71C9
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_126(var uParam0, int iParam1)//Position - 0x7205
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
			uParam0->f_4 = func_127(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_127(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_127(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_127(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_127(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_127(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_127(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_127(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_127(2, 1);
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
			if (func_101())
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
			if (func_101())
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
		if (!func_135(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_135(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_135(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_127(int iParam0, int iParam1)//Position - 0x88FD
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_128(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_128(int iParam0, var uParam1, int iParam2)//Position - 0x893F
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

void func_129(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x8B9B
{
	if (func_126(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_134(iParam0);
			func_133(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_130(iParam0, 1);
		}
	}
}

void func_130(int iParam0, bool bParam1)//Position - 0x8C9A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_132(iParam0, 0))
		{
			func_131(iParam0, 1, 0);
			func_131(iParam0, 2, 0);
			func_131(iParam0, 3, 0);
			func_131(iParam0, 4, 0);
			func_131(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_131(iParam0, 0, 0);
	}
}

void func_131(int iParam0, int iParam1, bool bParam2)//Position - 0x8CF7
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

bool func_132(int iParam0, int iParam1)//Position - 0x8D32
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_133(var uParam0, var uParam1)//Position - 0x8D55
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

void func_134(int iParam0)//Position - 0x8E21
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_126(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_130(iParam0, 0);
		}
	}
}

bool func_135(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x8E9B
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_136(int iParam0)//Position - 0x8EE2
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_134(iParam0);
	func_130(iParam0, 0);
}

int func_137(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x8F09
{
	int iVar0;
	
	iVar0 = func_138(vParam0, iParam1, 1);
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

int func_138(vector3 vParam0, int iParam1, int iParam2)//Position - 0x901F
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
				if (func_139(iVar0) || iParam2 == 0)
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

bool func_139(int iParam0)//Position - 0x90AE
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_140(int iParam0)//Position - 0x90C6
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

void func_141()//Position - 0x90E2
{
	Global_394A = 0;
	func_142();
}

void func_142()//Position - 0x90F2
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_143()//Position - 0x9113
{
	switch (iLocal_1295)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			while (Global_16B1B == 12)
			{
				SYSTEM::WAIT(0);
			}
			if (func_31(Local_65[0 /*2*/]) && !unk_0x2DA8CA50A72528FB(Local_65[0 /*2*/].f_1))
			{
				if (unk_0x6D01571F8E6286B4(Local_65[0 /*2*/]) != 0)
				{
					Local_65[0 /*2*/].f_1 = unk_0x6D01571F8E6286B4(Local_65[0 /*2*/]);
				}
				else
				{
					Local_65[0 /*2*/].f_1 = func_110(Local_65[0 /*2*/], 0, 0);
				}
			}
			unk_0x1D1C393C7689E5A6(5f, 5f, 4);
			func_30("RHP_GOODS", 7500, 1);
			unk_0x3857DADBD6EC8A54("RHP1_START");
			func_144("RHP_HELP", -1);
			iLocal_257 = 0;
			iLocal_1295++;
			break;
		
		case 1:
			if (bLocal_279)
			{
				iLocal_273 = 0;
				func_111(1);
				iLocal_1295 = 0;
			}
			break;
	}
}

void func_144(char* sParam0, int iParam1)//Position - 0x91E8
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_145()//Position - 0x91FF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_66[iLocal_270 /*2*/]))
		{
			if (unk_0x36CEFBE9B745A58D(Local_66[iLocal_270 /*2*/]))
			{
				func_198(&(Local_66[iLocal_270 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_65[iLocal_270 /*2*/]))
		{
			if (!unk_0xE59B7F5A03335350(Local_65[iLocal_270 /*2*/], 0))
			{
				if (iLocal_270 == 0)
				{
					func_187(3);
				}
				func_186(&(Local_65[iLocal_270 /*2*/]));
			}
			else if (Local_65[iLocal_270 /*2*/] == Local_65[0 /*2*/])
			{
				if (func_185(&(Local_65[0 /*2*/])))
				{
					func_187(4);
					func_186(&(Local_65[0 /*2*/]));
				}
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_68[iLocal_270 /*14*/]))
		{
			if (bLocal_279)
			{
				func_184(Local_68[iLocal_270 /*14*/], &(Local_68[iLocal_270 /*14*/].f_2), -1, 0, 0, 0, 400f, 0, -1, -1, 1);
			}
			if (unk_0x36CEFBE9B745A58D(Local_68[iLocal_270 /*14*/]))
			{
				if (Local_68[iLocal_270 /*14*/].f_A == 0)
				{
					func_183(719, 1, 0);
					Local_68[iLocal_270 /*14*/].f_A = 1;
				}
				unk_0x02537C8C1BEEB477(&(Local_68[iLocal_270 /*14*/]));
			}
		}
		if ((((func_31(Local_68[iLocal_270 /*14*/]) && (unk_0x105601648511CC64() - iLocal_278) > 8000) && bLocal_279) && !unk_0x9986AD62CA3DE747(Local_68[iLocal_270 /*14*/])) && !unk_0x5237AF95232D78C5(Local_68[iLocal_270 /*14*/], 0))
		{
			if (unk_0x8D66276473ABD7CC(Local_68[iLocal_270 /*14*/]) < 110)
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "DYING_MOAN", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
			else if (unk_0x8D66276473ABD7CC(Local_68[iLocal_270 /*14*/]) < 140)
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "DYING_HELP", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
			else if (unk_0xA2CA746F2255F6B7(Local_68[iLocal_270 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "TAKE_COVER", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
			else if (unk_0x226A1FD8C273ADE9(Local_68[iLocal_270 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "COVER_ME", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
			else if (unk_0x32E373675659FDB0(Local_68[iLocal_270 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "COVER_YOU", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
			else if (!unk_0x0D14122360FAC5C8(Local_68[iLocal_270 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "RELOADING", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
			else if (func_182(Local_68[iLocal_270 /*14*/], -828834893, 1) || func_182(Local_68[iLocal_270 /*14*/], 451360105, 1))
			{
				unk_0x53D8178763EDCE60(Local_68[iLocal_270 /*14*/], "GENERIC_WAR_CRY", func_54(3), 1);
				iLocal_278 = unk_0x105601648511CC64();
			}
		}
		iLocal_270++;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		unk_0x9332FDC92BD28643(1);
	}
	else
	{
		unk_0x9332FDC92BD28643(0);
	}
	if (func_31(Local_65[0 /*2*/]) && func_31(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x0C265B3C448E6954(Local_65[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, true, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0))
		{
			unk_0xAEC867D0DBB7AFEB(5);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 4, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
	}
	if (func_31(Local_65[0 /*2*/]) && func_31(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_1294 > 0)
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_65[0 /*2*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) > 650f)
			{
				func_187(5);
			}
			else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_65[0 /*2*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) > 600f)
			{
				if (!iLocal_277)
				{
					func_30("RHP_LWARN", 7500, 1);
					iLocal_277 = 1;
				}
			}
			else
			{
				iLocal_277 = 0;
			}
		}
	}
	if (func_31(Local_65[0 /*2*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (9 - 1))
		{
			if (func_31(Local_68[iVar1 /*14*/]))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			if ((!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0) && !unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1A6AA4082E241660(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/]))
				{
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (unk_0x1A6AA4082E241660(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/]))
			{
				unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
			}
		}
	}
	if (!iLocal_267)
	{
		if (iLocal_1294 == 0)
		{
			if (fLocal_264 != 0f)
			{
				fLocal_264 = 0f;
			}
		}
		else if (iLocal_1294 == 1)
		{
			if (fLocal_264 < 5f)
			{
				fLocal_264 = (fLocal_264 + unk_0x11F9F9006143871A());
			}
		}
		if (fLocal_264 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_65)
			{
				if (unk_0x724D816EA203A79E(Local_65[iVar2 /*2*/]) && !unk_0x724D816EA203A79E(uLocal_255[iVar2]))
				{
					uLocal_255[iVar2] = Local_65[iVar2 /*2*/];
				}
				if (unk_0x724D816EA203A79E(uLocal_255[iVar2]))
				{
					if (unk_0x1D403DFADBC2DE3C(uLocal_255[iVar2], 0) || !unk_0xE59B7F5A03335350(uLocal_255[iVar2], 0))
					{
						iVar3 = unk_0xE693A896EE86181F(uLocal_255[iVar2]);
						if (iVar3 == joaat("weapon_stickybomb"))
						{
							func_181(726);
							iLocal_267 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_15DFD)
			{
				if (unk_0x724D816EA203A79E(Global_15DFD[iVar2]))
				{
					if (unk_0x1D403DFADBC2DE3C(Global_15DFD[iVar2], 0) || !unk_0xE59B7F5A03335350(Global_15DFD[iVar2], 0))
					{
						iVar4 = unk_0xE693A896EE86181F(Global_15DFD[iVar2]);
						if (iVar4 == joaat("weapon_stickybomb"))
						{
							func_181(726);
							iLocal_267 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_164();
	func_154();
	func_150();
	func_149();
	unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
	if (!iLocal_266)
	{
		if (func_148(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3, 0, 0))
		{
			iLocal_266 = 1;
			unk_0x0609DB21AC6683A2();
			unk_0xDF53A66AEE1401AA(1f);
			unk_0xAEC867D0DBB7AFEB(5);
			unk_0x9332FDC92BD28643(1);
			unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 3, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			iLocal_266 = 1;
		}
	}
	else if (!func_148(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3, 0, 0))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			unk_0xE85B33FB221A23CD(5, false);
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(1, false);
			unk_0xE85B33FB221A23CD(10, false);
			unk_0xE85B33FB221A23CD(9, false);
			unk_0x3B6B3043A45E5A51(1, 0);
			unk_0x3B6B3043A45E5A51(2, 0);
			unk_0x3B6B3043A45E5A51(8, 0);
			unk_0xDF53A66AEE1401AA(0f);
			unk_0xAEC867D0DBB7AFEB(0);
			unk_0x9332FDC92BD28643(0);
			iLocal_266 = 0;
		}
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!iLocal_1302)
			{
				func_147(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 725);
				func_146(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 718);
				iLocal_1302 = 1;
			}
		}
		else if (iLocal_1302)
		{
			iLocal_1302 = 0;
		}
		if (!iLocal_1303)
		{
			func_147(unk_0xBC25C936A095B5BA(), 722);
			iLocal_1303 = 1;
		}
	}
	if (!iLocal_265)
	{
		iVar5 = 0;
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				iVar5 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()) && unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0)) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(unk_0x3E12B546F3F2597A(), true)) < 10000f)
		{
			iVar5 = unk_0x3E12B546F3F2597A();
		}
		if ((((((unk_0x724D816EA203A79E(iVar5) && unk_0xE59B7F5A03335350(iVar5, 0)) && iVar5 != iLocal_254) && iVar5 != Local_65[1 /*2*/]) && iVar5 != Local_65[2 /*2*/]) && iVar5 != Local_65[0 /*2*/]) && unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar5)))
		{
			unk_0x77815D3407C6700D(iVar5, true, 1);
			iLocal_254 = iVar5;
		}
	}
}

void func_146(int iParam0, int iParam1)//Position - 0x99F9
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

void func_147(int iParam0, int iParam1)//Position - 0x9A0B
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

int func_148(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x9A76
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

void func_149()//Position - 0xA7CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1294 < 1)
	{
		if (!unk_0x144E80F5C46A6B75("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x724D816EA203A79E(Local_65[iVar0 /*2*/]))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_65[iVar0 /*2*/], false), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false)) < 1000f)
					{
						unk_0xD6423910AAD8A379("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1294 == 1)
	{
		if (!unk_0x144E80F5C46A6B75("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			unk_0xD6423910AAD8A379("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1294 >= 1)
	{
		if (unk_0x144E80F5C46A6B75("PS_PREP_INTERCEPT_CONVOY"))
		{
			unk_0xC1300D0F3A74E20B("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x724D816EA203A79E(Local_65[1 /*2*/]))
				{
					unk_0x38E412DB4A45B900(Local_65[1 /*2*/], 0);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (unk_0x724D816EA203A79E(Global_15DFD[iVar2]))
				{
					unk_0x38E412DB4A45B900(Global_15DFD[iVar2], 0);
				}
				iVar2++;
			}
		}
		if (unk_0x144E80F5C46A6B75("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			unk_0xC1300D0F3A74E20B("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_150()//Position - 0xA8D3
{
	switch (iLocal_260)
	{
		case 1:
			if (fLocal_263 != 0f)
			{
				fLocal_263 = 0f;
			}
			if (fLocal_262 <= 0f)
			{
				fLocal_262 = 0f;
				iLocal_260 = 0;
			}
			else if (fLocal_262 > 0f)
			{
				fLocal_262 = (fLocal_262 - 0.02f);
			}
		
		case 0:
			if (func_153())
			{
				iLocal_260 = 3;
				fLocal_261 = fLocal_262;
				fLocal_263 = 1f;
			}
			break;
		
		case 3:
			if (fLocal_263 != 1f)
			{
				fLocal_263 = 1f;
			}
			if (fLocal_262 >= 1f)
			{
				iLocal_260 = 2;
				fLocal_262 = 1f;
			}
			else if (fLocal_262 < 1f)
			{
				fLocal_262 = (fLocal_262 + 0.02f);
			}
		
		case 2:
			if (!func_153())
			{
				iLocal_260 = 1;
				fLocal_261 = fLocal_262;
				fLocal_263 = 0f;
			}
			break;
	}
	if (iLocal_260 == 3 || iLocal_260 == 1)
	{
		func_151(fLocal_261, fLocal_263, fLocal_262);
		unk_0xC0D8311F0A9723A0(Global_88D4[20 /*31*/], fLocal_262, 0, 1);
		unk_0xF72F6BB050622804(Global_88D4[20 /*31*/], 4, 0, 1);
	}
}

float func_151(float fParam0, float fParam1, float fParam2)//Position - 0xA9D1
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_152((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_152(float fParam0)//Position - 0xAA00
{
	return (fParam0 * 57.29578f);
}

int func_153()//Position - 0xAA10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x724D816EA203A79E(Local_65[iVar0 /*2*/]) && unk_0xE59B7F5A03335350(Local_65[iVar0 /*2*/], 0)) && unk_0x0C265B3C448E6954(Local_65[iVar0 /*2*/], -1591.019f, 2803.731f, 15.41812f, -1569.92f, 2777.878f, 22.14856f, 8.25f, 0, true, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_154()//Position - 0xAA81
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_162(iVar0);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (!func_161(iVar1))
			{
				if (func_160(iVar1, 0))
				{
					if (func_159(iVar1) || func_157(iVar1))
					{
						if (func_156(iVar1, 0))
						{
							unk_0x77815D3407C6700D(iVar1, true, 1);
							unk_0x2E35C4FA5F0ED22F(iVar1, true);
							unk_0xA4E856A8CD53B8DF(iVar1);
						}
					}
				}
			}
			else if (func_159(iVar1) && unk_0xB248FAA35ED47DB9(iVar1, 1))
			{
				unk_0x44840FD68E426678(sLocal_305);
				bLocal_1301 = unk_0x0C265B3C448E6954(iVar1, 1365.772f, 3625.582f, 33.69244f, 1374.662f, 3598.951f, 36.8947f, 34f, 0, true, 0);
				if (!bLocal_1301)
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 0)
					{
						unk_0x6EEB346884FE5AF6(iVar1, unk_0x9FE9D386222EEE47(iVar1, 0), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!unk_0x3C9DB165D131D628(Local_65[0 /*2*/]))
				{
					unk_0x44840FD68E426678(sLocal_305);
					if (unk_0x1E8349F219AC5AF9(sLocal_305))
					{
						unk_0xEB469C5B92ADC7B0(iVar1, Local_65[0 /*2*/], sLocal_305, 786469, 0, 8, -1, 10f, 0, 2f);
					}
				}
			}
			else if (func_157(iVar1) && unk_0xB248FAA35ED47DB9(iVar1, 1))
			{
				if (func_31(Local_68[5 /*14*/]))
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 0)
					{
						unk_0x1A06AE15BF21D407(iVar1, unk_0x9FE9D386222EEE47(iVar1, 0), Local_68[5 /*14*/], 7, 15f, 786469, 15f, -1f, 1);
					}
				}
			}
			else
			{
				func_155(iVar1);
			}
		}
		iVar0++;
	}
}

int func_155(int iParam0)//Position - 0xAC43
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Global_15B7A, iVar0))
		{
			return 0;
		}
		unk_0x7CB6FD92BE491AD9(&Global_15B7A, iVar0);
		return 1;
	}
	return 0;
}

int func_156(int iParam0, int iParam1)//Position - 0xAC9B
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B7A, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B79, iVar0))
		{
			unk_0x97AA3135A3018C3C(iParam0, 0, 0);
			unk_0xB71D41C0310C93DE(iParam0, false, 1);
			unk_0xF0059F27F7BB6680(&Global_15B7A, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)//Position - 0xAD22
{
	if (!func_158())
	{
		if (func_31(Local_65[0 /*2*/]) && iLocal_257 == 0)
		{
			if (func_31(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x62F3A07C43FFB568(iParam0, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_158()//Position - 0xAD90
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_159(int iParam0)//Position - 0xADAC
{
	if (!func_158())
	{
		if (func_31(Local_65[0 /*2*/]) && !unk_0x0C265B3C448E6954(Local_65[0 /*2*/], 1364.248f, 3620.511f, 33.89069f, 1350.9f, 3616.225f, 37.12358f, 6.5f, 0, true, 0))
		{
			if (func_31(unk_0xBC25C936A095B5BA()) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0))
			{
				if (unk_0x62F3A07C43FFB568(iParam0, Local_65[0 /*2*/], 0) && unk_0x3187EF5798B5D209(Local_65[0 /*2*/], -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0, int iParam1)//Position - 0xAE42
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B79, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)//Position - 0xAE9E
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B7A, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)//Position - 0xAEE7
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_19())
	{
		return unk_0xBC25C936A095B5BA();
	}
	return Global_161D2[func_163(iParam0)];
}

int func_163(int iParam0)//Position - 0xAF18
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_164()//Position - 0xAF53
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_257)
	{
		case 0:
			if (!bLocal_279)
			{
				func_180();
				func_174();
				if (((((func_31(Local_68[4 /*14*/]) && func_31(Local_68[0 /*14*/])) && func_31(Local_68[5 /*14*/])) && func_31(Local_65[1 /*2*/])) && func_31(Local_65[2 /*2*/])) && func_31(Local_65[0 /*2*/]))
				{
					if (unk_0x0C265B3C448E6954(Local_65[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, true, 0) && unk_0x62F3A07C43FFB568(Local_68[4 /*14*/], Local_65[0 /*2*/], 0))
					{
						iLocal_257 = 2;
						iLocal_292 = 0;
					}
					fVar1 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false));
					if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false)) > fVar1)
					{
						fVar1 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false));
					}
					fVar3 = (11f + ((11f / (100f - 40f)) * 40f));
					fVar2 = func_173((((-11f / (100f - 40f)) * fVar1) + fVar3), 0f, 11f);
					if (unk_0x25EF720B1CAB1E23(Local_68[0 /*14*/], Local_65[1 /*2*/]))
					{
						unk_0xE36D78F8D1781255(Local_68[0 /*14*/], fVar2);
					}
				}
			}
			else
			{
				if (func_31(Local_65[0 /*2*/]))
				{
					vLocal_283 = { unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false) };
				}
				iLocal_259 = 0;
				iLocal_258 = 0;
				iLocal_257 = 1;
			}
			break;
		
		case 2:
			if (!bLocal_279)
			{
				func_174();
				if (((((func_31(Local_68[4 /*14*/]) && func_31(Local_68[0 /*14*/])) && func_31(Local_68[5 /*14*/])) && func_31(Local_65[1 /*2*/])) && func_31(Local_65[2 /*2*/])) && func_31(Local_65[0 /*2*/]))
				{
					switch (iLocal_292)
					{
						case 0:
							if (!func_182(Local_68[0 /*14*/], 242628503, 1))
							{
								if (iLocal_260 == 2 || (iLocal_260 == 3 && fLocal_262 > 0.8f))
								{
									unk_0xC5A6DFE2B8987B17(&iVar4);
									unk_0x827661D9AAD4A354(0, Local_65[1 /*2*/], -1785.46f, 3169.625f, 31.93f, 4, 10f, 786603, 3f, 3f, 1);
									unk_0x827661D9AAD4A354(0, Local_65[1 /*2*/], -1885.875f, 3006.152f, 31.81027f, 4, 10f, 786603, -1f, -1f, 1);
									unk_0x535008C596714F9E(iVar4);
									unk_0xA8E6405305C0D7DF(Local_68[0 /*14*/], iVar4);
									unk_0x02DAF06EA4F08219(&iVar4);
								}
							}
							if (!func_182(Local_68[4 /*14*/], -1273030092, 1))
							{
								unk_0x7AB043D579636764(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!func_182(Local_68[5 /*14*/], -1273030092, 1))
							{
								unk_0x7AB043D579636764(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (unk_0x4DBCE270B354E123(Local_68[0 /*14*/], -1885.875f, 3006.152f, 31.81027f, 5f, 5f, 5f, false, true, 0))
							{
								iVar0 = 0;
								while (iVar0 <= (9 - 1))
								{
									if (func_31(Local_68[iVar0 /*14*/]))
									{
										unk_0x717F82C821538DA2(Local_68[iVar0 /*14*/], 1);
										unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, true);
										unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 1, true);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											unk_0xA3981DED4FC2E56E(Local_68[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											unk_0xA3981DED4FC2E56E(Local_68[iVar0 /*14*/], 0, 65536);
										}
										else
										{
											unk_0xA3981DED4FC2E56E(Local_68[iVar0 /*14*/], 1000, 65536);
										}
										func_198(&(Local_68[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_292++;
							}
							break;
						
						case 1:
							break;
						}
				}
			}
			else
			{
				if (func_31(Local_65[0 /*2*/]))
				{
					vLocal_283 = { unk_0x541C2AEF053615BC(Local_65[0 /*2*/], true) };
				}
				iLocal_259 = 0;
				iLocal_258 = 0;
				iLocal_257 = 1;
			}
			break;
		
		case 1:
			unk_0x50AE3E919DC9BC67(vLocal_283, 50f, 1, 0, &iVar5, 0, 0, -1);
			if (func_31(iVar5))
			{
				unk_0xABA7AE40608505F2(iVar5, 2, false);
				unk_0xABA7AE40608505F2(iVar5, 2048, false);
			}
			switch (iLocal_258)
			{
				case 0:
					switch (iLocal_259)
					{
						case 0:
							iLocal_259 = func_172(Local_65[0 /*2*/]);
							break;
						
						case 1:
							if (func_31(Local_68[0 /*14*/]) && func_31(Local_65[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[0 /*14*/], Local_65[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									if (unk_0x8910237449BB6F79(Local_68[0 /*14*/]) > 5f)
									{
										unk_0x194CCBD594974E0D(0, Local_65[1 /*2*/], 5, 1000);
									}
									else
									{
										unk_0x194CCBD594974E0D(0, Local_65[1 /*2*/], 14, 1500);
									}
									unk_0xA3981DED4FC2E56E(0, 720, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[0 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if (func_31(Local_68[4 /*14*/]) && func_31(Local_65[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[4 /*14*/], Local_65[0 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									if (unk_0x8910237449BB6F79(Local_68[4 /*14*/]) > 5f)
									{
										unk_0x194CCBD594974E0D(0, Local_65[0 /*2*/], 4, 2500);
									}
									else
									{
										unk_0x194CCBD594974E0D(0, Local_65[0 /*2*/], 13, 1500);
									}
									unk_0xA3981DED4FC2E56E(0, 500, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[4 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if ((func_31(Local_68[5 /*14*/]) && func_31(Local_65[2 /*2*/])) && func_31(Local_65[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[5 /*14*/], Local_65[2 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_65[2 /*2*/], unk_0xA4455714F3DCE207(Local_65[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0x194CCBD594974E0D(0, Local_65[2 /*2*/], 5, 1000);
									unk_0xA3981DED4FC2E56E(0, 0, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[5 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
						
						case 2:
							if (func_31(Local_68[0 /*14*/]) && func_31(Local_65[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[0 /*14*/], Local_65[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									unk_0x194CCBD594974E0D(0, Local_65[1 /*2*/], 5, 1500);
									unk_0xA3981DED4FC2E56E(0, 900, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[0 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if (func_31(Local_68[4 /*14*/]) && func_31(Local_65[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[4 /*14*/], Local_65[0 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									unk_0x194CCBD594974E0D(0, Local_65[0 /*2*/], 5, 1000);
									unk_0xA3981DED4FC2E56E(0, 100, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[4 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if ((func_31(Local_68[5 /*14*/]) && func_31(Local_65[2 /*2*/])) && func_31(Local_65[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[5 /*14*/], Local_65[2 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_65[2 /*2*/], unk_0xA4455714F3DCE207(Local_65[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xA3981DED4FC2E56E(0, 120, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[5 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
						
						case 3:
							if ((func_31(Local_68[0 /*14*/]) && func_31(Local_65[1 /*2*/])) && func_31(Local_65[2 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[0 /*14*/], Local_65[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									unk_0x194CCBD594974E0D(0, Local_65[1 /*2*/], 6, 500);
									if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_65[1 /*2*/], unk_0xA4455714F3DCE207(Local_65[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0x194CCBD594974E0D(0, Local_65[1 /*2*/], 5, 1000);
									unk_0xA3981DED4FC2E56E(0, 420, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[0 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if (func_31(Local_68[4 /*14*/]) && func_31(Local_65[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[4 /*14*/], Local_65[0 /*2*/], 0))
								{
									if (unk_0x8910237449BB6F79(Local_68[4 /*14*/]) > 5f)
									{
										unk_0xC5A6DFE2B8987B17(&iLocal_269);
										unk_0x194CCBD594974E0D(0, Local_65[0 /*2*/], 5, 1500);
										unk_0xA3981DED4FC2E56E(0, 380, 65536);
										unk_0x535008C596714F9E(iLocal_269);
										unk_0xA8E6405305C0D7DF(Local_68[4 /*14*/], iLocal_269);
										unk_0x02DAF06EA4F08219(&iLocal_269);
									}
								}
							}
							if (func_31(Local_68[5 /*14*/]) && func_31(Local_65[2 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[5 /*14*/], Local_65[2 /*2*/], 0))
								{
									if (unk_0x8910237449BB6F79(Local_68[5 /*14*/]) > 5f)
									{
										unk_0xC5A6DFE2B8987B17(&iLocal_269);
										unk_0x194CCBD594974E0D(0, Local_65[2 /*2*/], 4, 1500);
										unk_0xA3981DED4FC2E56E(0, 250, 65536);
										unk_0x535008C596714F9E(iLocal_269);
										unk_0xA8E6405305C0D7DF(Local_68[5 /*14*/], iLocal_269);
										unk_0x02DAF06EA4F08219(&iLocal_269);
									}
								}
							}
							iLocal_258 = 1;
							break;
						
						case 4:
							if (func_31(Local_68[0 /*14*/]) && func_31(Local_65[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[0 /*14*/], Local_65[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									unk_0x194CCBD594974E0D(0, Local_65[1 /*2*/], 4, 1500);
									unk_0xA3981DED4FC2E56E(0, 800, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[0 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if (func_31(Local_68[4 /*14*/]) && func_31(Local_65[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[4 /*14*/], Local_65[0 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									unk_0x194CCBD594974E0D(0, Local_65[0 /*2*/], 4, 1500);
									unk_0xA3981DED4FC2E56E(0, 50, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[4 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							if ((func_31(Local_68[5 /*14*/]) && func_31(Local_65[2 /*2*/])) && func_31(Local_65[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_68[5 /*14*/], Local_65[2 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false), unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_65[2 /*2*/], unk_0xA4455714F3DCE207(Local_65[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xA3981DED4FC2E56E(0, 500, 65536);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(Local_68[5 /*14*/], iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
					}
					break;
				
				case 1:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_68[iVar0 /*14*/]) && func_31(unk_0xBC25C936A095B5BA()))
						{
							unk_0xFC3C88E2313FA926(Local_68[iVar0 /*14*/], 10);
							unk_0x6CCBC1B22488DC0C(Local_68[iVar0 /*14*/], 580f);
							unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 0, true);
							unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 50, true);
							unk_0xC8FD3EBBB90E8D7F(Local_68[iVar0 /*14*/], 184, false);
							unk_0x54480313BB3E8DD0(Local_68[iVar0 /*14*/], 1);
							func_171(iVar0);
							if ((iVar0 != 0 && iVar0 != 4) && iVar0 != 5)
							{
								if (iVar0 == 6)
								{
									iVar6 = 300;
								}
								else if (iVar0 == 1)
								{
									iVar6 = 900;
								}
								else if (iVar0 == 7)
								{
									iVar6 = 250;
								}
								else if (iVar0 == 2)
								{
									iVar6 = 350;
								}
								else if (iVar0 == 8)
								{
									iVar6 = 500;
								}
								else if (iVar0 == 3)
								{
									iVar6 = 650;
								}
								unk_0xC5A6DFE2B8987B17(&iLocal_269);
								if (unk_0x5237AF95232D78C5(Local_68[iVar0 /*14*/], 0))
								{
									unk_0x61E7E913658B4389(0, iVar6);
								}
								unk_0xA3981DED4FC2E56E(0, iVar6, 65536);
								unk_0x535008C596714F9E(iLocal_269);
								unk_0xA8E6405305C0D7DF(Local_68[iVar0 /*14*/], iLocal_269);
								unk_0x02DAF06EA4F08219(&iLocal_269);
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, true);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_170();
					break;
				
				case 2:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_68[iVar0 /*14*/]) && func_31(unk_0xBC25C936A095B5BA()))
						{
							func_171(iVar0);
							if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
							{
								iLocal_287 = 8000;
							}
							else
							{
								iLocal_287 = 12000;
							}
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_68[iVar0 /*14*/], false), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) < 75f)
							{
								if (!Local_68[iVar0 /*14*/].f_C && (unk_0x105601648511CC64() - iLocal_288) > iLocal_287)
								{
									unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 51, true);
									Local_68[iVar0 /*14*/].f_C = 1;
									iLocal_288 = unk_0x105601648511CC64();
								}
							}
							else
							{
								unk_0x54480313BB3E8DD0(Local_68[iVar0 /*14*/], 1);
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 51, false);
								Local_68[iVar0 /*14*/].f_C = 0;
							}
							if (!func_182(Local_68[iVar0 /*14*/], 780511057, 1))
							{
								unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_170();
					break;
				
				case 3:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_68[iVar0 /*14*/]) && func_31(unk_0xBC25C936A095B5BA()))
						{
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_68[iVar0 /*14*/], false), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) > 120f)
							{
								unk_0x54480313BB3E8DD0(Local_68[iVar0 /*14*/], 1);
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 51, false);
								Local_68[iVar0 /*14*/].f_C = 0;
								func_171(iVar0);
							}
							if (!func_182(Local_68[iVar0 /*14*/], 780511057, 1))
							{
								unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_170();
					break;
				
				case 4:
					if (func_169(unk_0xBC25C936A095B5BA(), vLocal_49, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if ((func_31(unk_0xBC25C936A095B5BA()) && func_31(Local_68[iVar0 /*14*/])) && func_31(Local_65[0 /*2*/]))
						{
							if (iVar7 && func_169(Local_68[iVar0 /*14*/], vLocal_49, 1) < 30f)
							{
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 1, false);
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, true);
								unk_0xED9A67BF9F6ED860(Local_68[iVar0 /*14*/], 0);
								unk_0x54480313BB3E8DD0(Local_68[iVar0 /*14*/], 2);
								if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
								{
									unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
								}
							}
							else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false), unk_0x541C2AEF053615BC(Local_68[iVar0 /*14*/], false), true) > (120f / 2f))
							{
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 1, true);
								if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_68[iVar0 /*14*/], false), true) > (120f * 2f))
								{
									if (!unk_0x5237AF95232D78C5(Local_68[iVar0 /*14*/], 0) && !unk_0xD1DC4B08247A4317(Local_68[iVar0 /*14*/]))
									{
										iVar9 = func_168(Local_68[iVar0 /*14*/]);
										if (func_31(iVar9))
										{
											iVar8 = -1;
											if (unk_0x1AAF0C23233C57AF(iVar9, -1, 0))
											{
												iVar8 = -1;
											}
											else if (unk_0x1AAF0C23233C57AF(iVar9, 0, 0))
											{
												iVar8 = 0;
											}
											else if (unk_0x1AAF0C23233C57AF(iVar9, 1, 0))
											{
												iVar8 = 1;
											}
											else if (unk_0x1AAF0C23233C57AF(iVar9, 2, 0))
											{
												iVar8 = 2;
											}
											if (func_167(iVar9))
											{
												if (unk_0xF4FCC3C1048FF2AB(Local_68[iVar0 /*14*/], -1794415470) != 1)
												{
													unk_0xD179FA0466FA4FE3(Local_68[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, false);
											}
											else
											{
												unk_0x02537C8C1BEEB477(&(Local_68[iVar0 /*14*/]));
											}
										}
										else
										{
											unk_0x02537C8C1BEEB477(&(Local_68[iVar0 /*14*/]));
										}
									}
									else if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
									{
										unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
									}
								}
								else if (unk_0xCBBE5AFE2CD2E9B6(Local_68[iVar0 /*14*/]))
								{
									if (func_166(unk_0xBC25C936A095B5BA(), Local_68[iVar0 /*14*/], 1) < 35f)
									{
										if (func_165(Local_68[iVar0 /*14*/], unk_0x9FE9D386222EEE47(Local_68[iVar0 /*14*/], 0)) == -1)
										{
											if ((unk_0x105601648511CC64() - iLocal_290) > 40000)
											{
												if (bLocal_291)
												{
													bLocal_291 = false;
													iLocal_290 = unk_0x105601648511CC64();
												}
												else
												{
													bLocal_291 = true;
													iLocal_290 = unk_0x105601648511CC64();
												}
											}
											if (bLocal_291)
											{
												if (!func_182(Local_68[iVar0 /*14*/], -1273030092, 1))
												{
													unk_0x7AB043D579636764(Local_68[iVar0 /*14*/], unk_0x9FE9D386222EEE47(Local_68[iVar0 /*14*/], 0), Local_65[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
											{
												unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
											}
										}
										else if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
										{
											unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
										}
										if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 2f && func_166(unk_0xBC25C936A095B5BA(), Local_68[iVar0 /*14*/], 1) < 20f)
										{
											unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, true);
										}
										else
										{
											unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, false);
										}
									}
									else if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
									{
										unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
									}
								}
								else if (!unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0))
								{
									unk_0xB8CBD998685C0685(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
								}
							}
							else if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0))
							{
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 1, false);
								unk_0x91629AC1E1F78419(Local_68[iVar0 /*14*/], 3, true);
								unk_0xED9A67BF9F6ED860(Local_68[iVar0 /*14*/], 0);
								unk_0x54480313BB3E8DD0(Local_68[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_170();
					break;
			}
			break;
	}
}

int func_165(int iParam0, int iParam1)//Position - 0xC196
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

float func_166(int iParam0, int iParam1, bool bParam2)//Position - 0xC208
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

int func_167(int iParam0)//Position - 0xC266
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x1AAF0C23233C57AF(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_168(int iParam0)//Position - 0xC2B6
{
	var uVar0;
	float fVar1;
	
	uVar0 = Local_65[1 /*2*/];
	fVar1 = 9999f;
	if (func_31(Local_65[1 /*2*/]))
	{
		if (func_166(iParam0, Local_65[1 /*2*/], 1) < fVar1)
		{
			fVar1 = func_166(iParam0, Local_65[1 /*2*/], 1);
			if (func_167(Local_65[1 /*2*/]))
			{
				uVar0 = Local_65[1 /*2*/];
			}
			else
			{
				uVar0 = Local_65[2 /*2*/];
			}
		}
	}
	if (func_31(Local_65[2 /*2*/]))
	{
		if (func_166(iParam0, Local_65[2 /*2*/], 1) < fVar1)
		{
			fVar1 = func_166(iParam0, Local_65[2 /*2*/], 1);
			if (func_167(Local_65[2 /*2*/]))
			{
				uVar0 = Local_65[2 /*2*/];
			}
			else
			{
				uVar0 = Local_65[1 /*2*/];
			}
		}
	}
	return uVar0;
}

float func_169(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xC360
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vParam1, bParam2);
}

int func_170()//Position - 0xC39A
{
	if (func_31(unk_0xBC25C936A095B5BA()) && func_31(Local_65[0 /*2*/]))
	{
		if (func_169(Local_65[0 /*2*/], vLocal_283, 1) > 120f)
		{
			return 4;
		}
		else if (func_169(unk_0xBC25C936A095B5BA(), vLocal_283, 1) <= 120f)
		{
			return 2;
		}
		else if (func_169(unk_0xBC25C936A095B5BA(), vLocal_283, 1) > 120f && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0))
		{
			return 3;
		}
	}
	return 2;
}

void func_171(int iParam0)//Position - 0xC428
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_31(Local_68[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_50 };
				fVar2 = 3.8f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_53 };
				fVar2 = 3.8f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_54 };
				fVar2 = 4.5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_56 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_56 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_52 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_172(0) == 1)
			{
				vVar1 = { vLocal_52 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				vVar1 = { vLocal_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				vVar1 = { vLocal_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				vVar1 = { vLocal_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		if (!Local_68[iParam0 /*14*/].f_C)
		{
			if (func_31(iVar0))
			{
				unk_0xE95574194EEDAEF7(Local_68[iParam0 /*14*/], unk_0xA4455714F3DCE207(iVar0, vVar1), fVar2, 0, 0);
			}
			else if (func_31(Local_65[0 /*2*/]))
			{
				if (func_172(Local_65[0 /*2*/]) == 1)
				{
					unk_0xDE6B8773FB16B4DE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], vLocal_53, 3.8f, 0);
				}
				else if (func_172(Local_65[0 /*2*/]) == 2)
				{
					unk_0xDE6B8773FB16B4DE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], -6f, 0f, -0.5f, 6f, 0);
				}
				else if (func_172(Local_65[0 /*2*/]) == 3)
				{
					unk_0xDE6B8773FB16B4DE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], vLocal_50, 3.8f, 0);
				}
				else if (func_172(Local_65[0 /*2*/]) == 4)
				{
					unk_0xDE6B8773FB16B4DE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], 6f, 0f, -0.5f, 6f, 0);
				}
			}
		}
	}
}

int func_172(int iParam0)//Position - 0xC9EC
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iParam0 == 0)
	{
		iParam0 = Local_65[0 /*2*/];
	}
	if (func_31(unk_0xBC25C936A095B5BA()) && func_31(iParam0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		vVar1 = { unk_0x1483995DFFF0DEEA(iParam0, vVar0) };
		fVar2 = unk_0x77211CE25DED4FDB(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
		if (vVar1.x < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
	}
	if ((fVar2 <= 45f && fVar2 >= 0f) || (fVar2 >= -45f && fVar2 <= 0f))
	{
		return 1;
	}
	else if (fVar2 <= 135f && fVar2 >= 0f)
	{
		return 2;
	}
	else if (fVar2 >= -135f && fVar2 <= 0f)
	{
		return 4;
	}
	else
	{
		return 3;
	}
	return 1;
}

float func_173(float fParam0, float fParam1, float fParam2)//Position - 0xCABE
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

void func_174()//Position - 0xCAE5
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar9;
	
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iLocal_282, 1);
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_31(Local_68[iVar0 /*14*/]))
		{
			if (((((unk_0x8F97799512B006B7(Local_68[iVar0 /*14*/], 0) || unk_0xABB2AFD7539464EA(Local_68[iVar0 /*14*/])) || unk_0x687BD6F7DF82B377(Local_68[iVar0 /*14*/], 0)) || unk_0xCDE4868DBC945E20(Local_68[iVar0 /*14*/])) || unk_0xA4813477CC5DD00F(Local_68[iVar0 /*14*/])) || unk_0xD9C1758D86688CEA(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 1))
			{
				bLocal_279 = true;
			}
			if ((unk_0x105601648511CC64() - iLocal_289) > 800)
			{
				if (unk_0xBF94E62A1FA7B7F3(Local_68[iVar0 /*14*/], 123) || unk_0xBF94E62A1FA7B7F3(Local_68[iVar0 /*14*/], 124))
				{
					bLocal_279 = true;
				}
			}
			if (unk_0x5CEC84BB4AC55121(Local_68[iVar0 /*14*/], unk_0xBC25C936A095B5BA()) && (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_68[iVar0 /*14*/]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_68[iVar0 /*14*/])))
			{
				if (iLocal_282 != 0)
				{
					if (unk_0x1966F403E5C2133D(iLocal_282) != -728555052 && iLocal_282 != joaat("weapon_unarmed"))
					{
						if ((unk_0x105601648511CC64() - Local_68[iVar0 /*14*/].f_B) > 800)
						{
							bLocal_279 = true;
						}
					}
				}
			}
			else
			{
				Local_68[iVar0 /*14*/].f_B = unk_0x105601648511CC64();
			}
		}
		else
		{
			bLocal_279 = true;
		}
		iVar0++;
	}
	if (func_31(Local_65[1 /*2*/]))
	{
		if (((unk_0xD9C1758D86688CEA(Local_65[1 /*2*/], unk_0xBC25C936A095B5BA(), 0) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), Local_65[1 /*2*/], 0, -1)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[1 /*2*/], 1)) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Local_65[1 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_65[1 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (func_178(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_65[1 /*2*/]) && fLocal_284 >= 7f)
			{
				bLocal_279 = true;
			}
			vVar1 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false) - unk_0x541C2AEF053615BC(Local_65[1 /*2*/], false)) };
			vVar2 = { unk_0xB5D9AE572C19509E(Local_65[1 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
			fLocal_284 = func_176(vVar2, vVar1);
		}
	}
	else
	{
		bLocal_279 = true;
	}
	if (func_31(Local_65[2 /*2*/]))
	{
		if (((unk_0xD9C1758D86688CEA(Local_65[2 /*2*/], unk_0xBC25C936A095B5BA(), 0) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), Local_65[2 /*2*/], 0, -1)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[2 /*2*/], 1)) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Local_65[2 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_65[2 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (func_178(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_65[2 /*2*/]) && fLocal_286 >= 7f)
			{
				bLocal_279 = true;
			}
			vVar3 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false) - unk_0x541C2AEF053615BC(Local_65[2 /*2*/], false)) };
			vVar4 = { unk_0xB5D9AE572C19509E(Local_65[2 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
			fLocal_286 = func_176(vVar4, vVar3);
		}
	}
	else
	{
		bLocal_279 = true;
	}
	if (func_31(Local_65[0 /*2*/]))
	{
		if (func_166(unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1) < 45f && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			bLocal_279 = true;
		}
		if (func_178(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (((unk_0xD9C1758D86688CEA(Local_65[0 /*2*/], unk_0xBC25C936A095B5BA(), 0) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 0, -1)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/], 1)) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_65[0 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_65[0 /*2*/]) && fLocal_285 >= 7f)
			{
				bLocal_279 = true;
			}
			vVar5 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false) - unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false)) };
			vVar6 = { unk_0xB5D9AE572C19509E(Local_65[0 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
			fLocal_285 = func_176(vVar6, vVar5);
		}
		if (func_175())
		{
			iVar7 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar7, 0))
			{
				if (unk_0xE921F8171F0733B3(iVar7, Local_65[0 /*2*/]))
				{
					bLocal_279 = true;
				}
				vVar8 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false) - unk_0x541C2AEF053615BC(Local_65[0 /*2*/], false)) };
				vVar9 = { unk_0xB5D9AE572C19509E(Local_65[0 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
				fLocal_285 = func_176(vVar9, vVar8);
			}
		}
	}
	else
	{
		bLocal_279 = true;
	}
}

bool func_175()//Position - 0xD0B2
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2);
}

float func_176(vector3 vParam0, vector3 vParam1)//Position - 0xD0C6
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_177(vector3 vParam0)//Position - 0xD0E7
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

int func_178(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0xD126
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_179(vParam0 + vParam1))
	{
		if ((((((((((((((((((((((unk_0xCD6353203C21B4FD(5, vParam1, vParam0) || (unk_0xCD6353203C21B4FD(2, vParam1, vParam0) && !bParam4)) || (unk_0xCD6353203C21B4FD(20, vParam1, vParam0) && !bParam4)) || unk_0xCD6353203C21B4FD(4, vParam1, vParam0)) || (unk_0xCD6353203C21B4FD(28, vParam1, vParam0) && !bParam4)) || unk_0xCD6353203C21B4FD(32, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(25, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(9, vParam1, vParam0)) || (unk_0xCD6353203C21B4FD(3, vParam1, vParam0) && !bParam4)) || (unk_0xCD6353203C21B4FD(6, vParam1, vParam0) && !bParam4)) || unk_0xCD6353203C21B4FD(0, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(1, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(23, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(34, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(14, vParam1, vParam0)) || (unk_0xCD6353203C21B4FD(30, vParam1, vParam0) && !bParam4)) || (unk_0xCD6353203C21B4FD(12, vParam1, vParam0) && !bParam4)) || unk_0xCD6353203C21B4FD(7, vParam1, vParam0)) || (unk_0xCD6353203C21B4FD(21, vParam1, vParam0) && !bParam4)) || (unk_0xCD6353203C21B4FD(18, vParam1, vParam0) && !bParam4)) || unk_0xCD6353203C21B4FD(15, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(10, vParam1, vParam0)) || unk_0xCD6353203C21B4FD(27, vParam1, vParam0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xC9FA5D38428AB6BE(5, vParam2, fParam3) || (unk_0xC9FA5D38428AB6BE(2, vParam2, fParam3) && !bParam4)) || (unk_0xC9FA5D38428AB6BE(20, vParam2, fParam3) && !bParam4)) || unk_0xC9FA5D38428AB6BE(4, vParam2, fParam3)) || (unk_0xC9FA5D38428AB6BE(28, vParam2, fParam3) && !bParam4)) || unk_0xC9FA5D38428AB6BE(32, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(25, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(9, vParam2, fParam3)) || (unk_0xC9FA5D38428AB6BE(3, vParam2, fParam3) && !bParam4)) || (unk_0xC9FA5D38428AB6BE(6, vParam2, fParam3) && !bParam4)) || unk_0xC9FA5D38428AB6BE(0, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(1, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(23, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(34, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(14, vParam2, fParam3)) || (unk_0xC9FA5D38428AB6BE(30, vParam2, fParam3) && !bParam4)) || (unk_0xC9FA5D38428AB6BE(12, vParam2, fParam3) && !bParam4)) || unk_0xC9FA5D38428AB6BE(7, vParam2, fParam3)) || (unk_0xC9FA5D38428AB6BE(21, vParam2, fParam3) && !bParam4)) || (unk_0xC9FA5D38428AB6BE(18, vParam2, fParam3) && !bParam4)) || unk_0xC9FA5D38428AB6BE(15, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(10, vParam2, fParam3)) || unk_0xC9FA5D38428AB6BE(27, vParam2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_179(vector3 vParam0)//Position - 0xD531
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_180()//Position - 0xD55B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (((((func_31(Local_65[0 /*2*/]) && func_31(Local_65[1 /*2*/])) && func_31(Local_65[2 /*2*/])) && func_31(Local_68[4 /*14*/])) && func_31(Local_68[0 /*14*/])) && func_31(Local_68[5 /*14*/]))
	{
		vVar0 = { unk_0xA4455714F3DCE207(Local_65[0 /*2*/], 0f, func_173(func_166(Local_65[0 /*2*/], Local_65[1 /*2*/], 1), 3f, 25f), 5.5f) };
		vVar1 = { unk_0xA4455714F3DCE207(Local_65[0 /*2*/], 0f, 0f, -6f) };
		vVar2 = { unk_0xA4455714F3DCE207(Local_65[1 /*2*/], 0f, 20f, 5f) };
		vVar3 = { unk_0xA4455714F3DCE207(Local_65[1 /*2*/], 0f, 0f, -6f) };
		vVar4 = { unk_0xA4455714F3DCE207(Local_65[2 /*2*/], 0f, func_173(func_166(Local_65[2 /*2*/], Local_65[0 /*2*/], 1), 3f, 25f), 5f) };
		vVar5 = { unk_0xA4455714F3DCE207(Local_65[2 /*2*/], 0f, 0f, -6f) };
		switch (iLocal_256)
		{
			case 0:
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar2, vVar3, 9f, 0, true, 0))
				{
					if (unk_0x8910237449BB6F79(Local_65[1 /*2*/]) < 1f && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
					{
						fLocal_1300[1] = (fLocal_1300[1] + unk_0x11F9F9006143871A());
					}
					else if (fLocal_1300[1] > 0f)
					{
						fLocal_1300[1] = (fLocal_1300[1] - (unk_0x11F9F9006143871A() * 10f));
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar0, vVar1, 9f, 0, true, 0))
				{
					if (unk_0x8910237449BB6F79(Local_65[0 /*2*/]) < 1f && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
					{
						fLocal_1300[0] = (fLocal_1300[0] + unk_0x11F9F9006143871A());
					}
					else if (fLocal_1300[0] > 0f)
					{
						fLocal_1300[0] = (fLocal_1300[0] - (unk_0x11F9F9006143871A() * 10f));
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar4, vVar5, 9f, 0, true, 0))
				{
					if (unk_0x8910237449BB6F79(Local_65[2 /*2*/]) < 1f && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
					{
						fLocal_1300[2] = (fLocal_1300[2] + unk_0x11F9F9006143871A());
					}
					else if (fLocal_1300[2] > 0f)
					{
						fLocal_1300[2] = (fLocal_1300[2] - (unk_0x11F9F9006143871A() * 10f));
					}
				}
				if (fLocal_1300[1] > 1.5f)
				{
					iLocal_295 = Local_68[0 /*14*/];
					unk_0xA4E856A8CD53B8DF(Local_68[4 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_68[0 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_68[5 /*14*/]);
					unk_0x241D744C1CCBC526(Local_65[0 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_65[1 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_65[2 /*2*/], 4f, 1, 0);
					unk_0xC5A6DFE2B8987B17(&iLocal_269);
					if (unk_0x5237AF95232D78C5(Local_68[0 /*14*/], 0))
					{
						unk_0xA3981DED4FC2E56E(0, 0, 65536);
					}
					unk_0xF90A8AD825CA2E0C(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1000, 0, 1);
					unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(iLocal_269);
					unk_0xA8E6405305C0D7DF(Local_68[0 /*14*/], iLocal_269);
					unk_0x02DAF06EA4F08219(&iLocal_269);
					iLocal_256 = 1;
				}
				else if (fLocal_1300[0] > 1.5f)
				{
					iLocal_295 = Local_68[4 /*14*/];
					unk_0xA4E856A8CD53B8DF(Local_68[4 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_68[0 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_68[5 /*14*/]);
					unk_0x241D744C1CCBC526(Local_65[0 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_65[1 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_65[2 /*2*/], 4f, 1, 0);
					unk_0xC5A6DFE2B8987B17(&iLocal_269);
					if (unk_0x5237AF95232D78C5(Local_68[4 /*14*/], 0))
					{
						unk_0xA3981DED4FC2E56E(0, 0, 65536);
					}
					unk_0xF90A8AD825CA2E0C(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1000, 0, 1);
					unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(iLocal_269);
					unk_0xA8E6405305C0D7DF(Local_68[4 /*14*/], iLocal_269);
					unk_0x02DAF06EA4F08219(&iLocal_269);
					iLocal_256 = 1;
				}
				else if (fLocal_1300[2] > 1.5f)
				{
					iLocal_295 = Local_68[5 /*14*/];
					unk_0xA4E856A8CD53B8DF(Local_68[4 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_68[0 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_68[5 /*14*/]);
					unk_0x241D744C1CCBC526(Local_65[0 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_65[1 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_65[2 /*2*/], 4f, 1, 0);
					unk_0xC5A6DFE2B8987B17(&iLocal_269);
					if (unk_0x5237AF95232D78C5(Local_68[5 /*14*/], 0))
					{
						unk_0xA3981DED4FC2E56E(0, 0, 65536);
					}
					unk_0xF90A8AD825CA2E0C(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1000, 0, 1);
					unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(iLocal_269);
					unk_0xA8E6405305C0D7DF(Local_68[5 /*14*/], iLocal_269);
					unk_0x02DAF06EA4F08219(&iLocal_269);
					iLocal_256 = 1;
				}
				else
				{
					if ((unk_0x5237AF95232D78C5(Local_68[5 /*14*/], 0) && unk_0x5237AF95232D78C5(Local_68[0 /*14*/], 0)) && unk_0x5237AF95232D78C5(Local_68[4 /*14*/], 0))
					{
						if (!unk_0x3C9DB165D131D628(Local_65[1 /*2*/]))
						{
							unk_0xEB469C5B92ADC7B0(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, 0, 1073741824);
						}
						if (unk_0xF4FCC3C1048FF2AB(Local_68[4 /*14*/], -1273030092) != 1)
						{
							unk_0x7AB043D579636764(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (unk_0xF4FCC3C1048FF2AB(Local_68[5 /*14*/], -1273030092) != 1)
						{
							unk_0x7AB043D579636764(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						unk_0x007915AC58E9B361(Local_65[0 /*2*/], 1);
						unk_0x1B54FE28946FE109(Local_65[0 /*2*/], 1);
						unk_0xBC4446112971E475(Local_65[0 /*2*/], 1);
						unk_0x007915AC58E9B361(Local_65[1 /*2*/], 1);
						unk_0x1B54FE28946FE109(Local_65[1 /*2*/], 1);
						unk_0xBC4446112971E475(Local_65[1 /*2*/], 1);
						unk_0x007915AC58E9B361(Local_65[2 /*2*/], 1);
						unk_0x1B54FE28946FE109(Local_65[2 /*2*/], 1);
						unk_0xBC4446112971E475(Local_65[2 /*2*/], 1);
					}
					iLocal_294 = unk_0x105601648511CC64();
				}
				break;
			
			case 1:
				switch (iLocal_293)
				{
					case 0:
						if (!unk_0x5237AF95232D78C5(iLocal_295, 0))
						{
							func_28(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
							iLocal_294 = unk_0x105601648511CC64();
							fLocal_1300[1] = 0f;
							fLocal_1300[2] = 0f;
							fLocal_1300[0] = 0f;
							iLocal_293++;
						}
						break;
					
					case 1:
						if ((unk_0x105601648511CC64() - iLocal_294) > 8000 && !func_9())
						{
							if (!unk_0x5237AF95232D78C5(iLocal_295, 0))
							{
								func_28(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									iLocal_294 = unk_0x105601648511CC64();
									iLocal_293++;
								}
							}
						}
						break;
					
					case 2:
						if ((unk_0x105601648511CC64() - iLocal_294) > 8000 && !func_9())
						{
							if (!unk_0x5237AF95232D78C5(iLocal_295, 0))
							{
								func_28(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									iLocal_294 = unk_0x105601648511CC64();
									iLocal_293++;
								}
							}
						}
						break;
					
					case 3:
						if ((unk_0x105601648511CC64() - iLocal_294) > 8000 && !func_9())
						{
							if (!unk_0x5237AF95232D78C5(iLocal_295, 0))
							{
								func_28(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_269);
									unk_0xAD955309D7708805(0, unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0.5f, 0f, -1f), 1000, 1566631136);
									unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
									unk_0x535008C596714F9E(iLocal_269);
									unk_0xA8E6405305C0D7DF(iLocal_295, iLocal_269);
									unk_0x02DAF06EA4F08219(&iLocal_269);
									iLocal_294 = unk_0x105601648511CC64();
									iLocal_289 = unk_0x105601648511CC64();
									iLocal_293++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if ((!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar0, vVar1, 9f, 0, true, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar2, vVar3, 9f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar4, vVar5, 9f, 0, true, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_295, 1630799643) != 1)
					{
						unk_0x57D65255D3D3B6A7(iLocal_295, unk_0xBC25C936A095B5BA(), -1, 0);
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!unk_0x5237AF95232D78C5(iLocal_295, 0))
						{
							if (iLocal_295 == Local_68[4 /*14*/])
							{
								unk_0xD179FA0466FA4FE3(iLocal_295, Local_65[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_295 == Local_68[0 /*14*/])
							{
								unk_0xD179FA0466FA4FE3(iLocal_295, Local_65[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_295 == Local_68[5 /*14*/])
							{
								unk_0xD179FA0466FA4FE3(iLocal_295, Local_65[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_256 = 2;
					}
				}
				else
				{
					if (iLocal_293 == 4)
					{
						if ((unk_0x105601648511CC64() - iLocal_294) > 9000 && !func_9())
						{
							bLocal_279 = true;
						}
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar0, vVar1, 9f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar2, vVar3, 9f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar4, vVar5, 9f, 0, true, 0))
				{
					iLocal_281 = 0;
					iLocal_256 = 0;
				}
				else if (unk_0x5237AF95232D78C5(iLocal_295, 0))
				{
					unk_0x7AB043D579636764(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					unk_0xEB469C5B92ADC7B0(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, 0, 1073741824);
					unk_0x7AB043D579636764(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_281 = 1;
					iLocal_256 = 0;
				}
				break;
			}
	}
}

void func_181(int iParam0)//Position - 0xDF1D
{
	bool bVar0;
	int iVar1;
	
	Global_DAA0 = 0;
	if (!Global_DB80[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_109DE)
	{
		if (Global_109DF[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_109DF[iVar1 /*9*/].f_1 = 1;
			Global_109DF[iVar1 /*9*/].f_2 = 0f;
			if (Global_109DF[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_182(int iParam0, int iParam1, bool bParam2)//Position - 0xDF8E
{
	int iVar0;
	
	iVar0 = unk_0xF4FCC3C1048FF2AB(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(int iParam0, int iParam1, bool bParam2)//Position - 0xDFD4
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

int func_184(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xE07E
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, bParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(sParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(sParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(sParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(sParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(sParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_185(var uParam0)//Position - 0xE255
{
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		if (((unk_0xBCDD4514E5CAE591(*uParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(*uParam0, 3, 30000)) || unk_0xBCDD4514E5CAE591(*uParam0, 2, 30000)) || unk_0xBCDD4514E5CAE591(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_186(int iParam0)//Position - 0xE2AF
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0x1D403DFADBC2DE3C(*iParam0, 0);
		if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
		{
			unk_0x1E7A09C1710FB071(iParam0);
		}
	}
}

void func_187(int iParam0)//Position - 0xE2E7
{
	char* sVar0;
	
	unk_0x3857DADBD6EC8A54("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 3:
			sVar0 = "RHP_FDES";
			break;
		
		case 4:
			sVar0 = "RHP_TRKSTCK";
			break;
		
		case 2:
			sVar0 = "RHP_FEND";
			break;
		
		case 5:
			sVar0 = "RHP_FABN";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_189(sVar0);
	while (!func_188())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_67[iLocal_270]))
		{
			unk_0xA35241BCE4C1A24B(&(iLocal_67[iLocal_270]));
		}
		iLocal_270++;
	}
	func_334();
	unk_0x95E4B6F3ED223F5A();
}

int func_188()//Position - 0xE3A5
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

void func_189(char* sParam0)//Position - 0xE3D2
{
	func_197(sParam0);
	func_190(0);
}

void func_190(int iParam0)//Position - 0xE3E5
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_191(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_191(int iParam0)//Position - 0xE42A
{
	int iVar0;
	int iVar1;
	
	func_196();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_195(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_192(&(Global_19B04.f_932.f_21B), iVar1);
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

void func_192(var uParam0, int iParam1)//Position - 0xE541
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
			if (!func_194(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_193(&(uParam0->f_8E4[iVar0]));
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

void func_193(var uParam0)//Position - 0xE70A
{
	*uParam0 = -15;
}

int func_194(int iParam0, var uParam1, float fParam2)//Position - 0xE718
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
			return func_194(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_194(8, uParam1, fParam2);
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

void func_195(int iParam0, bool bParam1)//Position - 0xF087
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

void func_196()//Position - 0xF0C5
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_19())
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
			switch (func_19())
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

void func_197(char* sParam0)//Position - 0xF1B2
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

void func_198(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xF1F1
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, false);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

void func_199()//Position - 0xF241
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_1298 == 1)
	{
		if (iLocal_1293 == 0)
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(800);
				}
			}
			else
			{
				func_111(iLocal_1299);
			}
		}
		else if (iLocal_1293 == 3)
		{
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			func_224();
			func_223(&uLocal_308);
			if (!func_222())
			{
				func_221(iLocal_1299, &vVar0, &fVar1);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fVar1);
				unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
				func_220(&uLocal_308, vVar0, 50f, 0);
			}
			func_217(iLocal_1294);
			while (!func_213(&uLocal_308))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1294)
			{
				case 0:
					func_212();
					break;
				
				case 1:
					func_207();
					break;
				
				case 2:
					func_206();
					break;
				
				case 3:
					func_200();
					break;
			}
			bLocal_1298 = false;
			if (!func_222())
			{
				unk_0x13D5880CBA449AA9();
			}
		}
	}
}

void func_200()//Position - 0xF352
{
	func_204(1357.7f, 3618.28f, 33.8905f, 110.4135f);
	bLocal_279 = true;
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
}

void func_201(int iParam0, int iParam1, int iParam2)//Position - 0xF390
{
	if (func_203() && func_222())
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
		func_202(0);
	}
}

void func_202(int iParam0)//Position - 0xF454
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

int func_203()//Position - 0xF47D
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

void func_204(vector3 vParam0, float fParam1)//Position - 0xF4A1
{
	Local_65[0 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("barracks"), vParam0, fParam1, true, true, false);
	unk_0x65E471E4A2D56226(Local_65[0 /*2*/], unk_0x8D66276473ABD7CC(Local_65[0 /*2*/]) * 2, 0);
	unk_0xDB35A2F9333ABEC5(Local_65[0 /*2*/], true);
	unk_0xE6E403909F4BF47F(Local_65[0 /*2*/], (unk_0x77F5C030D3238E26(Local_65[0 /*2*/]) * 2f));
	unk_0xA1BA0675804B896A(Local_65[0 /*2*/], 0);
	unk_0xD3F329A16C0E5B2B(Local_65[0 /*2*/], (unk_0xA6EB9CEADFB819EC(Local_65[0 /*2*/]) * 2f));
	unk_0x7387EA04915F201E(Local_65[0 /*2*/], false);
	unk_0xE365C09E06B55C51(Local_65[0 /*2*/], false);
	unk_0x09F6B51861E304AB(Local_65[0 /*2*/], 1);
	unk_0xD38EB677CBE7440A(Local_65[0 /*2*/], false, 0);
	func_205(Local_65[0 /*2*/], 0);
	iLocal_67[0] = unk_0xB6896943DA475493(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, true, true, false);
	unk_0x5DBE04849460E608(iLocal_67[0], Local_65[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	iLocal_67[1] = unk_0xB6896943DA475493(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, true, true, false);
	unk_0x5DBE04849460E608(iLocal_67[1], Local_65[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	unk_0x55662F9F262C2F9B(Local_65[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_205(var uParam0, int iParam1)//Position - 0xF5E1
{
	Global_16B1B.f_16[iParam1] = uParam0;
}

void func_206()//Position - 0xF5F5
{
	func_204(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	bLocal_279 = true;
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
}

void func_207()//Position - 0xF633
{
	int iVar0;
	
	func_211(-284.0175f, 2949.104f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_210(iVar0, Local_65[1 /*2*/]);
		func_209(Local_68[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_204(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	func_208(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_210(iVar0, Local_65[2 /*2*/]);
		func_209(Local_68[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_279 = true;
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
}

void func_208(vector3 vParam0, float fParam1)//Position - 0xF6F2
{
	Local_65[2 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("crusader"), vParam0, fParam1, true, true, false);
	unk_0x55662F9F262C2F9B(Local_65[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_209(int iParam0, bool bParam1)//Position - 0xF71F
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

void func_210(int iParam0, int iParam1)//Position - 0xF7BA
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == Local_65[1 /*2*/] || iParam1 == Local_65[2 /*2*/])
	{
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Local_65[0 /*2*/])
	{
		iVar0 = joaat("s_m_m_marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_274 = joaat("weapon_pistol");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = 0;
		iLocal_274 = joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = 1;
		iLocal_274 = joaat("weapon_smg");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_274 = joaat("weapon_carbinerifle");
	}
	Local_68[iParam0 /*14*/] = unk_0xFD8987C090669BD5(iParam1, 26, iVar0, iVar1, 1, true);
	unk_0x4106FAF8AA1D69D5(Local_68[iParam0 /*14*/], iLocal_307);
	unk_0xF7CDBCD11F31B71A(Local_68[iParam0 /*14*/], 1);
	unk_0x7A535CE1F001F3FE(Local_68[iParam0 /*14*/], iLocal_274, -1, true, true);
	unk_0x7A535CE1F001F3FE(Local_68[iParam0 /*14*/], joaat("weapon_pistol"), -1, true, true);
	unk_0x8EF3D958386640FE(Local_68[iParam0 /*14*/], 0);
	unk_0xB0031DDAE4FF0BC3(Local_68[iParam0 /*14*/], 2, 1, 0, 0);
	unk_0x4FFC2E7B0181636C(Local_68[iParam0 /*14*/], 1);
	unk_0xEB061E1EBFED4D59(Local_68[iParam0 /*14*/], 1);
	unk_0x91629AC1E1F78419(Local_68[iParam0 /*14*/], 0, true);
	unk_0x91629AC1E1F78419(Local_68[iParam0 /*14*/], 1, false);
	unk_0x54480313BB3E8DD0(Local_68[iParam0 /*14*/], 1);
	unk_0xC8FD3EBBB90E8D7F(Local_68[iParam0 /*14*/], 184, true);
	unk_0xC8FD3EBBB90E8D7F(Local_68[iParam0 /*14*/], 272, true);
	unk_0x0DEF5E53360637F2(Local_68[iParam0 /*14*/], 1);
	unk_0xB71D41C0310C93DE(Local_68[iParam0 /*14*/], true, 1);
	unk_0xFC3C88E2313FA926(Local_68[iParam0 /*14*/], 10);
	unk_0x2E35C4FA5F0ED22F(Local_68[iParam0 /*14*/], true);
	Local_68[iParam0 /*14*/].f_A = 0;
}

void func_211(vector3 vParam0, float fParam1)//Position - 0xF96C
{
	Local_65[1 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("crusader"), vParam0, fParam1, true, true, false);
	unk_0x55662F9F262C2F9B(Local_65[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_212()//Position - 0xF999
{
	int iVar0;
	
	if (!func_31(Local_65[1 /*2*/]))
	{
		func_211(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_31(Local_68[iVar0 /*14*/]))
		{
			func_210(iVar0, Local_65[1 /*2*/]);
			func_209(Local_68[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				unk_0xEB469C5B92ADC7B0(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, 0, 1073741824);
			}
		}
		iVar0++;
	}
	if (!func_31(Local_65[0 /*2*/]))
	{
		func_204(1006.765f, 2128.32f, 48.0929f, 39.898f);
	}
	if (!func_31(Local_68[4 /*14*/]))
	{
		func_210(4, Local_65[0 /*2*/]);
		unk_0x7AB043D579636764(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		func_209(Local_68[4 /*14*/], 0);
	}
	if (!func_31(Local_65[2 /*2*/]))
	{
		func_208(1018.995f, 2112.951f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!func_31(Local_68[iVar0 /*14*/]))
		{
			func_210(iVar0, Local_65[2 /*2*/]);
			func_209(Local_68[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				unk_0x7AB043D579636764(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
	}
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
}

int func_213(var uParam0)//Position - 0xFB2A
{
	if (func_214(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0)//Position - 0xFB43
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_3D6)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0xD6513D668481290A((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x2CA123B0622F495C((uParam0[iVar1 /*5*/])->f_4);
						func_216(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_111[iVar1 /*5*/])
			{
				if (!uParam0->f_111[iVar1 /*5*/].f_1)
				{
					if (unk_0xF9E082857622D91E(uParam0->f_111[iVar1 /*5*/].f_4))
					{
						uParam0->f_111[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_111[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_111[iVar1 /*5*/].f_1)
					{
						unk_0x4EA570997E107F35(uParam0->f_111[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_111[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_176[iVar1 /*5*/])
			{
				if (!uParam0->f_176[iVar1 /*5*/].f_1)
				{
					if (unk_0x1E8349F219AC5AF9(uParam0->f_176[iVar1 /*5*/].f_4))
					{
						uParam0->f_176[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_176[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_176[iVar1 /*5*/].f_1)
					{
						unk_0x4CE01E22F13D3913(uParam0->f_176[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_176[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_290[iVar1 /*6*/])
			{
				if (!uParam0->f_290[iVar1 /*6*/].f_1)
				{
					if (unk_0xA7F138B5B1AB2CF6(uParam0->f_290[iVar1 /*6*/].f_5))
					{
						uParam0->f_290[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_290[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_290[iVar1 /*6*/].f_1)
					{
						unk_0xB0B0FE33F4F22679(&(uParam0->f_290[iVar1 /*6*/].f_5));
						func_216(&(uParam0->f_290[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_1DB[iVar1 /*6*/])
			{
				if (!uParam0->f_1DB[iVar1 /*6*/].f_1)
				{
					if (unk_0x00D24B3F2A5CD22C(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4))
					{
						uParam0->f_1DB[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_1DB[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_1DB[iVar1 /*6*/].f_1)
					{
						unk_0x4F5DAC981AF98536(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4);
						func_216(&(uParam0->f_1DB[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_CA[iVar1 /*7*/])
			{
				if (!uParam0->f_CA[iVar1 /*7*/].f_1)
				{
					if (unk_0x696DA708CCD839AD(uParam0->f_CA[iVar1 /*7*/].f_4))
					{
						uParam0->f_CA[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_CA[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_CA[iVar1 /*7*/].f_1)
					{
						unk_0x5357DC61899A5365(uParam0->f_CA[iVar1 /*7*/].f_4);
						func_216(&(uParam0->f_CA[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_97[iVar1 /*5*/])
			{
				if (!uParam0->f_97[iVar1 /*5*/].f_1)
				{
					if (unk_0x317B2443006524C2(uParam0->f_97[iVar1 /*5*/].f_4))
					{
						uParam0->f_97[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_97[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_97[iVar1 /*5*/].f_1)
					{
						unk_0xDC5D58521808C640(uParam0->f_97[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_97[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_2E1[iVar1 /*5*/])
			{
				if (!uParam0->f_2E1[iVar1 /*5*/].f_1)
				{
					if (unk_0x284F2ACE6839D3C0(uParam0->f_2E1[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_2E1[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_2E1[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2E1[iVar1 /*5*/].f_1)
					{
						unk_0xDA70546257A3ED8B(uParam0->f_2E1[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_2E1[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_2FB[iVar1 /*5*/])
			{
				if (!uParam0->f_2FB[iVar1 /*5*/].f_1)
				{
					if (unk_0x18487DB48DC3A046(uParam0->f_2FB[iVar1 /*5*/].f_4))
					{
						uParam0->f_2FB[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_2FB[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2FB[iVar1 /*5*/].f_1)
					{
						unk_0xB165D6ED2E977354(uParam0->f_2FB[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_2FB[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xF1734B55490E9045(uParam0->f_2AF[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_2AF[iVar1 /*7*/])
				{
					iVar2 = unk_0x165E25F5626B3C3D(uParam0->f_2AF[iVar1 /*7*/].f_5);
					if (!uParam0->f_2AF[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								func_216(&(uParam0->f_2AF[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0;
								unk_0xEE7C34E731E1CEEA(uParam0->f_2AF[iVar1 /*7*/].f_5);
								uParam0->f_2AF[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x18487DB48DC3A046(uParam0->f_2AF[iVar1 /*7*/].f_6))
				{
					uParam0->f_2AF[iVar1 /*7*/].f_5 = unk_0x1D6DA89C13F6EFB3(uParam0->f_2AF[iVar1 /*7*/].f_4);
					uParam0->f_2AF[iVar1 /*7*/].f_3 = unk_0x105601648511CC64();
					uParam0->f_2AF[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_2AF[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_2AF[iVar1 /*7*/])
					{
						if (uParam0->f_2AF[iVar1 /*7*/].f_1)
						{
							unk_0xEE7C34E731E1CEEA(uParam0->f_2AF[iVar1 /*7*/].f_5);
							func_216(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_216(&(uParam0->f_2AF[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_36F[iVar1 /*5*/])
			{
				if (!uParam0->f_36F[iVar1 /*5*/].f_1)
				{
					if (unk_0x78415861AA85912D(uParam0->f_36F[iVar1 /*5*/].f_4))
					{
						uParam0->f_36F[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_36F[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_36F[iVar1 /*5*/].f_1)
					{
						unk_0x893116494999963D(uParam0->f_36F[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_36F[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_3A2[iVar1 /*5*/])
			{
				if (!uParam0->f_3A2[iVar1 /*5*/].f_1)
				{
					if (unk_0x2625AE158F7FFBAD(uParam0->f_3A2[iVar1 /*5*/].f_4))
					{
						uParam0->f_3A2[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_3A2[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3A2[iVar1 /*5*/].f_1)
					{
						func_216(&(uParam0->f_3A2[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_30B)
		{
			if (uParam0->f_30B[iVar1 /*5*/])
			{
				if (!uParam0->f_30B[iVar1 /*5*/].f_1)
				{
					if (unk_0xFA9040D29FE330BD(iVar1))
					{
						uParam0->f_30B[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_30B[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_30B[iVar1 /*5*/].f_1)
					{
						unk_0x841D233D3CE81152(iVar1, true);
						func_216(&(uParam0->f_30B[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_35C)
		{
			if (!uParam0->f_35C.f_1)
			{
				if (unk_0x95654D7A61CD43DE())
				{
					uParam0->f_35C.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_35C.f_2)
			{
				if (uParam0->f_35C.f_1)
				{
					unk_0x8E5F062750135AD1();
					func_216(&(uParam0->f_35C));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_360)
		{
			if (!uParam0->f_360.f_1)
			{
				if (unk_0xC97ADB25127C0F86())
				{
					uParam0->f_360.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_360.f_2)
			{
				if (uParam0->f_360.f_1)
				{
					unk_0xCDB88AA9E742BEFB();
					func_216(&(uParam0->f_360));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_364 && unk_0x719413B40BB63D86())
		{
			if (!uParam0->f_364.f_1)
			{
				if (unk_0xF220370B0C08EC20())
				{
					uParam0->f_364.f_1 = 1;
					if (uParam0->f_3D7)
					{
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
						func_215(uParam0);
						uParam0->f_3D7 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_364.f_2)
			{
				unk_0x13D5880CBA449AA9();
				func_216(&(uParam0->f_364));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_3BC[iVar1 /*5*/])
			{
				if (!uParam0->f_3BC[iVar1 /*5*/].f_1)
				{
					if (unk_0x499783D01578C2D2(uParam0->f_3BC[iVar1 /*5*/].f_4))
					{
						uParam0->f_3BC[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_3BC[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3BC[iVar1 /*5*/].f_1)
					{
						func_216(&(uParam0->f_3BC[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_3D6 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_215(var uParam0)//Position - 0x10514
{
	if (unk_0x719413B40BB63D86())
	{
		unk_0x13D5880CBA449AA9();
		func_216(&(uParam0->f_364));
	}
}

void func_216(var uParam0)//Position - 0x10530
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_217(int iParam0)//Position - 0x1054B
{
	switch (iParam0)
	{
		case 0:
			func_219(&uLocal_308, joaat("s_m_m_marine_01"));
			func_219(&uLocal_308, joaat("s_m_y_marine_03"));
			func_219(&uLocal_308, joaat("crusader"));
			func_219(&uLocal_308, joaat("barracks"));
			func_218(&uLocal_308, &cLocal_296);
			func_219(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
		
		case 1:
			func_219(&uLocal_308, joaat("s_m_y_marine_03"));
			func_219(&uLocal_308, joaat("s_m_m_marine_01"));
			func_219(&uLocal_308, joaat("crusader"));
			func_219(&uLocal_308, joaat("barracks"));
			func_219(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
		
		case 2:
		case 3:
			func_219(&uLocal_308, joaat("barracks"));
			func_219(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
	}
}

int func_218(var uParam0, char* sParam1)//Position - 0x10622
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_176)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			if (unk_0x3362CDE8460ED38B(uParam0->f_176[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_176[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_176[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x44840FD68E426678(sParam1);
		uParam0->f_176[iVar1 /*5*/] = 1;
		uParam0->f_176[iVar1 /*5*/].f_3 = unk_0x105601648511CC64();
		uParam0->f_176[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_219(var uParam0, int iParam1)//Position - 0x106E9
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xF243B7A14FCFD0F4(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x105601648511CC64();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_220(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x10792
{
	if (func_179(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_364)
	{
		if (func_135(uParam0->f_364.f_4, vParam1, 0) && uParam0->f_364.f_A == fParam2)
		{
			uParam0->f_364.f_2 = 0;
			if (!uParam0->f_364.f_1)
			{
				uParam0->f_3D6 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x1732A8A5D2D39430(vParam1, fParam2, iParam3);
	uParam0->f_364 = 1;
	uParam0->f_364.f_3 = unk_0x105601648511CC64();
	uParam0->f_364.f_4 = { vParam1 };
	uParam0->f_364.f_7 = { 0f, 0f, 0f };
	uParam0->f_364.f_A = fParam2;
	uParam0->f_3D6 = 1;
	return 1;
}

void func_221(int iParam0, var uParam1, var uParam2)//Position - 0x1084A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -260.5082f, 2925.446f, 40.1977f };
			*uParam2 = 303.6227f;
			break;
		
		case 1:
			*uParam1 = { -276.0887f, 2920.386f, 40.1317f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { -253.7471f, 2941.485f, 29.131f };
			*uParam2 = 330.8292f;
			break;
		
		case 3:
			*uParam1 = { 1367.324f, 3618.374f, 33.8914f };
			*uParam2 = -118.28f;
			break;
	}
}

bool func_222()//Position - 0x108E5
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

void func_223(var uParam0)//Position - 0x108F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_97[iVar0 /*5*/])
		{
			uParam0->f_97[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_CA[iVar0 /*7*/])
		{
			uParam0->f_CA[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			uParam0->f_111[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			uParam0->f_176[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_1DB[iVar0 /*6*/])
		{
			uParam0->f_1DB[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_290[iVar0 /*6*/])
		{
			uParam0->f_290[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_2AF[iVar0 /*7*/])
		{
			uParam0->f_2AF[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			uParam0->f_2E1[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			uParam0->f_2FB[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_36F[iVar0 /*5*/])
		{
			uParam0->f_36F[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_3A2[iVar0 /*5*/])
		{
			uParam0->f_3A2[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_30B[iVar0 /*5*/])
		{
			uParam0->f_30B[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_364)
	{
		uParam0->f_364.f_2 = 1;
	}
	if (uParam0->f_35C)
	{
		uParam0->f_35C.f_2 = 1;
	}
	if (uParam0->f_360)
	{
		uParam0->f_360.f_2 = 1;
	}
}

void func_224()//Position - 0x10B51
{
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_66[iLocal_270 /*2*/]) && !unk_0x36CEFBE9B745A58D(Local_66[iLocal_270 /*2*/]))
		{
			if (unk_0x5237AF95232D78C5(Local_66[iLocal_270 /*2*/], 0))
			{
				unk_0xAFC2CAB9D994D0D8(Local_66[iLocal_270 /*2*/], unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(Local_66[iLocal_270 /*2*/], 0), true) + Vector(0f, -2f, 0f));
			}
			func_231(&(Local_66[iLocal_270 /*2*/]));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_68[iLocal_270 /*14*/]))
		{
			func_230(&(Local_68[iLocal_270 /*14*/].f_2));
			Local_68[iLocal_270 /*14*/].f_C = 0;
			if (!unk_0x36CEFBE9B745A58D(Local_68[iLocal_270 /*14*/]))
			{
				if (unk_0x5237AF95232D78C5(Local_68[iLocal_270 /*14*/], 0))
				{
					unk_0xAFC2CAB9D994D0D8(Local_68[iLocal_270 /*14*/], unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(Local_68[iLocal_270 /*14*/], 0), true) + Vector(0f, -2f, 0f));
				}
				func_231(&(Local_68[iLocal_270 /*14*/]));
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_67[iLocal_270]))
		{
			func_229(&(iLocal_67[iLocal_270]));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_65[iLocal_270 /*2*/]))
		{
			func_228(Local_65[iLocal_270 /*2*/]);
			func_225(&(Local_65[iLocal_270 /*2*/]));
		}
		iLocal_270++;
	}
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	unk_0x1C51717D9E91D69B(0);
	func_33(&Local_234, 1, 0);
	if (func_31(unk_0xBC25C936A095B5BA()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	iLocal_257 = 0;
	iLocal_259 = 0;
	iLocal_258 = 0;
	iLocal_256 = 0;
	iLocal_293 = 0;
	bLocal_279 = false;
	bLocal_280 = false;
	StringCopy(&cLocal_296, "Rural_prep_trigger1", 64);
}

void func_225(int iParam0)//Position - 0x10D3B
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		if (func_227(*iParam0))
		{
			if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
			{
				if (func_226(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
					{
						unk_0x1E7A09C1710FB071(iParam0);
						return;
					}
				}
				unk_0xCF6040807CC0E4A5(iParam0);
			}
		}
		else
		{
			if (func_226(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
				{
					unk_0x1E7A09C1710FB071(iParam0);
					return;
				}
			}
			unk_0xCF6040807CC0E4A5(iParam0);
		}
	}
}

int func_226(int iParam0)//Position - 0x10DD7
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x10DF8
{
	if (func_226(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_228(int iParam0)//Position - 0x10E22
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				if (!unk_0x36CEFBE9B745A58D(iVar0))
				{
					unk_0x49D46EE47C9CCB66(iVar0);
				}
				else
				{
					unk_0xF845620A03C7425B(&iVar0);
				}
			}
			iVar2 = unk_0x524ABB0435146845(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!unk_0x1AAF0C23233C57AF(iParam0, iVar1, 0))
				{
					iVar0 = unk_0x3187EF5798B5D209(iParam0, iVar1, 0);
					if (unk_0x724D816EA203A79E(iVar0))
					{
						if (!unk_0x36CEFBE9B745A58D(iVar0))
						{
							unk_0x49D46EE47C9CCB66(iVar0);
						}
						else
						{
							unk_0xF845620A03C7425B(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_229(int iParam0)//Position - 0x10EBE
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, true);
		}
		unk_0xA35241BCE4C1A24B(iParam0);
	}
}

void func_230(int iParam0)//Position - 0x10EE9
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(iParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(iParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(iParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_231(int iParam0)//Position - 0x10F5B
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, false, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		unk_0xF845620A03C7425B(iParam0);
	}
}

void func_232()//Position - 0x10F9C
{
	switch (iLocal_1293)
	{
		case 1:
			iLocal_1293 = 2;
			iLocal_1295 = -1;
			break;
		
		case 2:
			iLocal_1293 = 3;
			iLocal_1295 = 0;
			iLocal_1294 = iLocal_1296;
			break;
		
		case 3:
			iLocal_1296 = -1;
			iLocal_1293 = 0;
			break;
		
		case 0:
			if ((unk_0x105601648511CC64() - iLocal_1297) > 2500)
			{
				iLocal_1297 = unk_0x105601648511CC64();
			}
			break;
	}
}

void func_233(var uParam0, int iParam1, int iParam2)//Position - 0x11003
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
		if (func_234(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_234(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_234(char* sParam0)//Position - 0x110E0
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x110F3
{
	func_236(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x1110D
{
	uParam0->f_6 = 0;
	func_237(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_237(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x1112F
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
	if (func_234(iVar0))
	{
		func_262();
	}
	if (func_261(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
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
			if (func_256(uParam0, bParam5, bParam7, 0))
			{
				func_253(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_241(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_234(iVar0))
							{
								func_144(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_240(1);
								}
							}
						}
					}
				}
			}
			else if (func_241(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_234(iVar0))
						{
							func_144(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_240(1);
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
				if (func_234(sParam3))
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
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_233(uParam0, iVar0, 1);
				}
			}
			if (!func_256(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_239(uParam0))
				{
					func_238(uParam0);
				}
			}
		}
	}
	else
	{
		func_233(uParam0, iVar0, 0);
	}
}

void func_238(var uParam0)//Position - 0x1149C
{
	if (func_261(unk_0xBC25C936A095B5BA()))
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

int func_239(var uParam0)//Position - 0x11505
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

int func_240(bool bParam0)//Position - 0x11530
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

int func_241(char* sParam0)//Position - 0x115DA
{
	if (!func_242(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_234(sParam0)) || func_234("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_240(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_240(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_240(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_242(bool bParam0, bool bParam1, bool bParam2)//Position - 0x11673
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
	if (func_252(0))
	{
		return 0;
	}
	if (func_251())
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
	if ((func_250() || func_249(Global_440000.f_243FE)) || func_248())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_247(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_246(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_243(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_243(int iParam0)//Position - 0x118C1
{
	if (iParam0 != func_245())
	{
		if (func_244(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_244(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_244(int iParam0, bool bParam1, bool bParam2)//Position - 0x11927
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

int func_245()//Position - 0x11971
{
	return -1;
}

int func_246(int iParam0, int iParam1)//Position - 0x1197A
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

int func_247(int iParam0, int iParam1)//Position - 0x119DC
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

var func_248()//Position - 0x11A61
{
	return Global_255A46.f_10;
}

bool func_249(int iParam0)//Position - 0x11A6F
{
	return iParam0 == 51;
}

var func_250()//Position - 0x11A7C
{
	return Global_255A46.f_F;
}

bool func_251()//Position - 0x11A8A
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_252(int iParam0)//Position - 0x11A9F
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

void func_253(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x11AF9
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
		func_233(uParam0, 0, 0);
	}
	if (func_135(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_254())
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

bool func_254()//Position - 0x11C09
{
	return func_255(unk_0xB5CEFD608600A09F());
}

int func_255(int iParam0)//Position - 0x11C19
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_256(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x11C38
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
					if (func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_259(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_259(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_260(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_239(uParam0))
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
						if (!func_260(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_260(bParam1, bParam2, bParam3))
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
					if (!func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_259(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_259(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_260(bParam1, bParam2, bParam3))
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
						if (func_258(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_257(bParam1, bParam2, bParam3))
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
					else if (func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_239(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_242(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_262();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_257(bool bParam0, bool bParam1, bool bParam2)//Position - 0x11FA4
{
	if (!func_242(bParam0, bParam1, bParam2))
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

int func_258(bool bParam0, bool bParam1, bool bParam2)//Position - 0x11FF6
{
	if (!func_242(bParam0, bParam1, bParam2))
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

int func_259(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1203F
{
	if (!func_242(bParam0, bParam1, bParam2))
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

int func_260(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1209E
{
	if (!func_242(bParam0, bParam1, bParam2))
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

int func_261(int iParam0)//Position - 0x120F4
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

void func_262()//Position - 0x1214F
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

void func_263(var uParam0)//Position - 0x1215F
{
	func_214(uParam0);
}

void func_264()//Position - 0x1216E
{
	vector3 vVar0;
	var uVar1;
	
	unk_0x926FDA90094AA5FA(iLocal_306);
	unk_0x926FDA90094AA5FA(iLocal_307);
	unk_0xB2CB6EAA6B280A84("trevor", &iLocal_306);
	unk_0xB2CB6EAA6B280A84("enemies", &iLocal_307);
	unk_0xA902E18EDF6FA0C8(5, iLocal_307, 1862763509);
	unk_0xA902E18EDF6FA0C8(5, iLocal_307, iLocal_306);
	unk_0xA902E18EDF6FA0C8(5, iLocal_306, iLocal_307);
	unk_0xA902E18EDF6FA0C8(1, iLocal_307, -1533126372);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_307);
	unk_0xA902E18EDF6FA0C8(1, iLocal_307, iLocal_307);
	unk_0xA902E18EDF6FA0C8(1, iLocal_307, -472287501);
	unk_0xA902E18EDF6FA0C8(1, -472287501, iLocal_307);
	unk_0x900CF084251DED26("ruralp", 0);
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0xE85B33FB221A23CD(5, false);
	unk_0xE85B33FB221A23CD(3, false);
	unk_0xE85B33FB221A23CD(1, false);
	unk_0xE85B33FB221A23CD(10, false);
	unk_0xE85B33FB221A23CD(9, false);
	unk_0x3B6B3043A45E5A51(1, 0);
	unk_0x3B6B3043A45E5A51(2, 0);
	unk_0x3B6B3043A45E5A51(8, 0);
	unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	unk_0xDF53A66AEE1401AA(0f);
	unk_0xAEC867D0DBB7AFEB(0);
	unk_0x9332FDC92BD28643(0);
	unk_0x8510BC031C24B862(joaat("crusader"), true);
	unk_0x8510BC031C24B862(joaat("barracks"), true);
	iLocal_268 = unk_0x1DAA351326EA3537(Vector(35.39456f, 3600.538f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.39456f, 3600.538f, 1375.234f) + Vector(3f, 7f, 14.25f), 0, 1, 1, 1);
	unk_0x379ACE23D404525C(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), false, 1);
	if (func_203() || func_7(0))
	{
		if (func_203())
		{
			iLocal_1299 = func_333();
			if (Global_154ED)
			{
				iLocal_1299++;
			}
			if (iLocal_1299 >= 3)
			{
				iLocal_1299 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1299 = 0;
		}
		if (func_203())
		{
			func_221(iLocal_1299, &vVar0, &uVar1);
			func_332(vVar0, uVar1, 1, 0);
		}
		bLocal_1298 = true;
	}
	else
	{
		while (!func_330())
		{
			SYSTEM::WAIT(0);
		}
		func_267(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1294 = 0;
		func_217(0);
	}
	iLocal_1295 = 0;
	func_265(92);
}

void func_265(int iParam0)//Position - 0x1237D
{
	Global_15B7B = 0;
	switch (iParam0)
	{
		case 72:
			func_266(2);
			func_266(4);
			break;
		
		case 73:
			func_266(0);
			func_266(1);
			func_266(7);
			break;
		
		case 92:
			func_266(10);
			func_266(9);
			func_266(13);
			func_266(6);
			break;
		
		case 68:
			func_266(11);
			break;
		
		case 78:
			func_266(14);
			break;
		
		case 79:
			func_266(3);
			break;
		
		default:
			break;
	}
}

void func_266(int iParam0)//Position - 0x1240B
{
	unk_0xF0059F27F7BB6680(&Global_15B7B, iParam0);
}

void func_267(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1241D
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
		func_329(1);
		if (iParam0 <= Global_16B40)
		{
		}
		iVar1 = func_327(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_325(iVar1);
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
			iVar4 = func_320(unk_0x1377080E9B0BD993(), 1);
			if (iVar4 != -1)
			{
				Global_19B04.f_4871[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_319(iVar4)}, 4);
				unk_0x1B7435D54924A668(&uVar5, 0, Global_16B40, iParam0);
			}
			else
			{
				iVar6 = func_318(&(Global_16B1B.f_3));
				if (iVar6 > -1)
				{
					Global_19B04.f_617D.f_4[iVar6] = 0;
				}
			}
		}
		Global_154EE = iParam2;
		Global_16B40 = iParam0;
		func_268(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_16B40)
	{
	}
}

void func_268(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x12592
{
	func_269(&Global_181DF, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_269(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x125AE
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	uParam0->f_1 = func_115();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_294(&(uParam0->f_B35), 0);
		func_293(unk_0xBC25C936A095B5BA());
		func_286(unk_0xBC25C936A095B5BA(), 0);
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
		if (iVar1 == func_285())
		{
			func_278(unk_0xBC25C936A095B5BA(), &(uParam0->f_268[iVar1 /*65*/]), 1);
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
		func_271(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_270(&(uParam0->f_B95));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_270(var uParam0)//Position - 0x13436
{
	*uParam0 = Global_15B75;
	uParam0->f_1 = Global_15B76;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_271(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13458
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_29(iParam2);
	}
	if (func_277(iParam2, &iVar0, iParam3, iParam5))
	{
		func_272(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_272(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_272(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x134E0
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_274(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_273(iParam2))
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

int func_273(int iParam0)//Position - 0x13520
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

void func_274(var uParam0, int iParam1, int iParam2)//Position - 0x1354E
{
	func_86(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_276(iParam1, 145, 0);
	uParam0->f_B = func_106(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_275(iParam1);
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

int func_275(int iParam0)//Position - 0x1362A
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

int func_276(int iParam0, int iParam1, int iParam2)//Position - 0x1366C
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
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_127(iParam1, iParam2))
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

int func_277(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x136FA
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
						if (func_107(*uParam1, func_19(), 1))
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

void func_278(int iParam0, var uParam1, int iParam2)//Position - 0x13827
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_284(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_283(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
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
			if (func_282(161, -1))
			{
				uParam1->f_3B = func_279(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_279(752, Global_11486, 0);
			}
			uParam1->f_3C = func_279(753, Global_11486, 0);
			uParam1->f_3D = func_279(754, Global_11486, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_282(161, -1))
			{
				uParam1->f_3B = func_279(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_279(752, Global_11486, 0);
			}
		}
	}
}

int func_279(int iParam0, int iParam1, int iParam2)//Position - 0x139D1
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_280(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_280(var uParam0)//Position - 0x13A03
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_281();
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

var func_281()//Position - 0x13A37
{
	return Global_1407E0;
}

int func_282(int iParam0, int iParam1)//Position - 0x13A43
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_280(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_283(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x13A6F
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
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

void func_284(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x13FB7
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
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

int func_285()//Position - 0x141FB
{
	func_20();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_286(int iParam0, bool bParam1)//Position - 0x14214
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_287(iParam0, &(Global_19B04.f_932.f_21B.f_12A[iVar0 /*472*/]));
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

void func_287(int iParam0, var uParam1)//Position - 0x14307
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
			iVar3 = func_292(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xFEBBB8B5E3A12A20(iParam0, func_292(iVar0));
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
					iVar2 = func_290(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_290(Var4, iVar1);
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
			if ((unk_0x6740839132C4BD08(iVar5, &Var7) && !func_289(Var7.f_1)) && iVar9 < 50)
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
							if (!func_288(Var8.f_3))
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

int func_288(int iParam0)//Position - 0x14591
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

int func_289(int iParam0)//Position - 0x1462C
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

int func_290(int iParam0, int iParam1)//Position - 0x147A0
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
				iVar1 = func_291(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_288(Var5.f_3))
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

int func_291(int iParam0, var uParam1)//Position - 0x15311
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

int func_292(int iParam0)//Position - 0x1534C
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

void func_293(int iParam0)//Position - 0x155C0
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_19B04.f_932.f_21B.f_126[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_294(var uParam0, int iParam1)//Position - 0x155FC
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
		if (func_297(&iVar0))
		{
			if (func_296(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_19();
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
		else if (func_295(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_295(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x15B57
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

bool func_296(int iParam0, var uParam1, var uParam2)//Position - 0x15B9B
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
	return !func_135(*uParam1, 0f, 0f, 0f, 0);
}

int func_297(var uParam0)//Position - 0x16266
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_317())
		{
			*uParam0 = func_303(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 6, -1, 0, 1, -1);
			if (func_302(*uParam0) && !func_298(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_298(int iParam0)//Position - 0x162C1
{
	return func_299(iParam0, 0, 1);
}

int func_299(int iParam0, int iParam1, bool bParam2)//Position - 0x162D1
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_301() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_279(func_300(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_300(int iParam0)//Position - 0x16331
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

int func_301()//Position - 0x16625
{
	return Global_62BD;
}

int func_302(int iParam0)//Position - 0x16630
{
	return func_299(iParam0, 5, 1);
}

int func_303(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x16640
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
		if (iParam1 == 6 || iParam1 == func_316(iVar0))
		{
			if (!bParam3 || func_315(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(vParam0, func_304(iVar0, 0), true);
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

Vector3 func_304(int iParam0, bool bParam1)//Position - 0x166E2
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
			return func_314(Global_1732A);
			break;
		
		case 46:
			if (Global_183F8F != func_245())
			{
				if (func_313(Global_183F8F))
				{
					return func_306(2, 2);
				}
				else if (func_305(Global_183F8F))
				{
					return func_306(45, 3);
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

int func_305(int iParam0)//Position - 0x16C9C
{
	if (iParam0 != func_245())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_306(int iParam0, int iParam1)//Position - 0x16CFA
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_183F8F != func_245())
	{
		if (iParam1 == 3)
		{
			if (func_307(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 4))
			{
				if (func_307(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 5))
			{
				if (func_307(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_307(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x16DA8
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_312(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_312(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_310(iParam0) };
	}
	else
	{
		Var2 = { func_309(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_308(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_308(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_308(vector3 vParam0, float fParam1)//Position - 0x16E3D
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

struct<6> func_309(int iParam0)//Position - 0x16E81
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

struct<6> func_310(int iParam0)//Position - 0x17005
{
	return func_311(iParam0);
}

struct<6> func_311(int iParam0)//Position - 0x17013
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

int func_312(int iParam0, var uParam1)//Position - 0x17ADA
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

int func_313(int iParam0)//Position - 0x17B5C
{
	if (iParam0 != func_245())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_314(int iParam0)//Position - 0x17BBA
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

int func_315(int iParam0)//Position - 0x17D8D
{
	return func_299(iParam0, 0, 0);
}

int func_316(int iParam0)//Position - 0x17D9D
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

bool func_317()//Position - 0x18038
{
	return Global_16B4F.f_141 > 0;
}

int func_318(char* sParam0)//Position - 0x18049
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

struct<2> func_319(int iParam0)//Position - 0x1809F
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

int func_320(char* sParam0, int iParam1)//Position - 0x184EB
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
		func_321(iVar0, &sVar1);
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

void func_321(int iParam0, var uParam1)//Position - 0x18534
{
	switch (iParam0)
	{
		case 0:
			func_322(uParam1, "Abigail1", func_324(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 1:
			func_322(uParam1, "Abigail2", func_324(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 2:
			func_322(uParam1, "Barry1", func_324(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 3:
			func_322(uParam1, "Barry2", func_324(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 4:
			func_322(uParam1, "Barry3", func_324(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 5:
			func_322(uParam1, "Barry3A", func_324(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 6:
			func_322(uParam1, "Barry3C", func_324(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 7:
			func_322(uParam1, "Barry4", func_324(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_323(iParam0), 0, 0);
			break;
		
		case 8:
			func_322(uParam1, "Dreyfuss1", func_324(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 9:
			func_322(uParam1, "Epsilon1", func_324(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 10:
			func_322(uParam1, "Epsilon2", func_324(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 11:
			func_322(uParam1, "Epsilon3", func_324(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 12:
			func_322(uParam1, "Epsilon4", func_324(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 13:
			func_322(uParam1, "Epsilon5", func_324(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 14:
			func_322(uParam1, "Epsilon6", func_324(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 15:
			func_322(uParam1, "Epsilon7", func_324(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 16:
			func_322(uParam1, "Epsilon8", func_324(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 17:
			func_322(uParam1, "Extreme1", func_324(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 18:
			func_322(uParam1, "Extreme2", func_324(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 19:
			func_322(uParam1, "Extreme3", func_324(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 20:
			func_322(uParam1, "Extreme4", func_324(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 21:
			func_322(uParam1, "Fanatic1", func_324(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_323(iParam0), 1, 0);
			break;
		
		case 22:
			func_322(uParam1, "Fanatic2", func_324(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_323(iParam0), 1, 0);
			break;
		
		case 23:
			func_322(uParam1, "Fanatic3", func_324(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_323(iParam0), 0, 1);
			break;
		
		case 24:
			func_322(uParam1, "Hao1", func_324(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_323(iParam0), 0, 1);
			break;
		
		case 25:
			func_322(uParam1, "Hunting1", func_324(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 26:
			func_322(uParam1, "Hunting2", func_324(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 27:
			func_322(uParam1, "Josh1", func_324(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 28:
			func_322(uParam1, "Josh2", func_324(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 29:
			func_322(uParam1, "Josh3", func_324(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 30:
			func_322(uParam1, "Josh4", func_324(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 31:
			func_322(uParam1, "Maude1", func_324(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 32:
			func_322(uParam1, "Minute1", func_324(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 33:
			func_322(uParam1, "Minute2", func_324(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 34:
			func_322(uParam1, "Minute3", func_324(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 35:
			func_322(uParam1, "MrsPhilips1", func_324(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 36:
			func_322(uParam1, "MrsPhilips2", func_324(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 37:
			func_322(uParam1, "Nigel1", func_324(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 38:
			func_322(uParam1, "Nigel1A", func_324(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 39:
			func_322(uParam1, "Nigel1B", func_324(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_323(iParam0), 1, 1);
			break;
		
		case 40:
			func_322(uParam1, "Nigel1C", func_324(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_323(iParam0), 1, 1);
			break;
		
		case 41:
			func_322(uParam1, "Nigel1D", func_324(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_323(iParam0), 1, 1);
			break;
		
		case 42:
			func_322(uParam1, "Nigel2", func_324(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 43:
			func_322(uParam1, "Nigel3", func_324(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 44:
			func_322(uParam1, "Omega1", func_324(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 45:
			func_322(uParam1, "Omega2", func_324(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 46:
			func_322(uParam1, "Paparazzo1", func_324(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 47:
			func_322(uParam1, "Paparazzo2", func_324(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 48:
			func_322(uParam1, "Paparazzo3", func_324(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 49:
			func_322(uParam1, "Paparazzo3A", func_324(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 50:
			func_322(uParam1, "Paparazzo3B", func_324(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 51:
			func_322(uParam1, "Paparazzo4", func_324(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 52:
			func_322(uParam1, "Rampage1", func_324(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 54:
			func_322(uParam1, "Rampage3", func_324(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 55:
			func_322(uParam1, "Rampage4", func_324(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 56:
			func_322(uParam1, "Rampage5", func_324(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 53:
			func_322(uParam1, "Rampage2", func_324(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 57:
			func_322(uParam1, "TheLastOne", func_324(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 58:
			func_322(uParam1, "Tonya1", func_324(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 59:
			func_322(uParam1, "Tonya2", func_324(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 60:
			func_322(uParam1, "Tonya3", func_324(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 61:
			func_322(uParam1, "Tonya4", func_324(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 62:
			func_322(uParam1, "Tonya5", func_324(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_322(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x196E9
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

int func_323(int iParam0)//Position - 0x1977A
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

struct<2> func_324(int iParam0)//Position - 0x19AC0
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

int func_325(int iParam0)//Position - 0x19AF7
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_326(Global_19B04.f_2360.f_63.f_CD[10]);
			break;
		
		case 74:
		case 75:
			return func_326(Global_19B04.f_2360.f_63.f_CD[8]);
			break;
		
		case 84:
		case 85:
			return func_326(Global_19B04.f_2360.f_63.f_CD[11]);
			break;
		
		case 90:
			return func_326(Global_19B04.f_2360.f_63.f_CD[7]);
			break;
		
		case 93:
			return func_326(Global_19B04.f_2360.f_63.f_CD[9]);
			break;
	}
	return 0;
}

int func_326(int iParam0)//Position - 0x19BB3
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

int func_327(char* sParam0, bool bParam1)//Position - 0x19C07
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_328(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_328(int iParam0, bool bParam1)//Position - 0x19C31
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

void func_329(bool bParam0)//Position - 0x19C67
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

int func_330()//Position - 0x19EE9
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(Local_65[0 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
			Local_65[0 /*2*/] = Global_15DFD[0];
			unk_0x38E412DB4A45B900(Global_15DFD[0], 0);
			unk_0x55662F9F262C2F9B(Local_65[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			func_205(Local_65[0 /*2*/], 0);
			unk_0x8DAAD1E750773925(Local_65[0 /*2*/]);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_65[1 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[1]))
		{
			unk_0x77815D3407C6700D(Global_15DFD[1], true, 1);
			Local_65[1 /*2*/] = Global_15DFD[1];
			unk_0x38E412DB4A45B900(Global_15DFD[1], 0);
			unk_0x55662F9F262C2F9B(Local_65[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			unk_0x8DAAD1E750773925(Local_65[1 /*2*/]);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_65[2 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[2]))
		{
			unk_0x77815D3407C6700D(Global_15DFD[2], true, 1);
			Local_65[2 /*2*/] = Global_15DFD[2];
			unk_0x38E412DB4A45B900(Global_15DFD[2], 0);
			unk_0x55662F9F262C2F9B(Local_65[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			unk_0x8DAAD1E750773925(Local_65[2 /*2*/]);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[4 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[0], true, 1);
			Local_68[4 /*14*/] = Global_15DFD.f_9[0];
			func_209(Local_68[4 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[0 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[2]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[2], true, 1);
			Local_68[0 /*14*/] = Global_15DFD.f_9[2];
			func_209(Local_68[0 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[1 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[3]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[3], true, 1);
			Local_68[1 /*14*/] = Global_15DFD.f_9[3];
			func_209(Local_68[1 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[2 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[4]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[4], true, 1);
			Local_68[2 /*14*/] = Global_15DFD.f_9[4];
			func_209(Local_68[2 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[3 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[5]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[5], true, 1);
			Local_68[3 /*14*/] = Global_15DFD.f_9[5];
			func_209(Local_68[3 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[5 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[6]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[6], true, 1);
			Local_68[5 /*14*/] = Global_15DFD.f_9[6];
			func_209(Local_68[5 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[6 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[7]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[7], true, 1);
			Local_68[6 /*14*/] = Global_15DFD.f_9[7];
			func_209(Local_68[6 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[7 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[8]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[8], true, 1);
			Local_68[7 /*14*/] = Global_15DFD.f_9[8];
			func_209(Local_68[7 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_68[8 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[9]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[9], true, 1);
			Local_68[8 /*14*/] = Global_15DFD.f_9[9];
			func_209(Local_68[8 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_67[0]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_1C[0], true, 1);
			iLocal_67[0] = Global_15DFD.f_1C[0];
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_67[1]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[1]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_1C[1], true, 1);
			iLocal_67[1] = Global_15DFD.f_1C[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_31(Local_68[iVar0 /*14*/]))
		{
			unk_0x4106FAF8AA1D69D5(Local_68[iVar0 /*14*/], iLocal_307);
			unk_0x8DAAD1E750773925(Local_68[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_296 = { Global_15F8E };
	StringCopy(&Global_15F8E, "", 64);
	func_331(229, 0f, 0f, 2000f);
	if (((((((((((((unk_0x724D816EA203A79E(Local_65[0 /*2*/]) && unk_0x724D816EA203A79E(Local_65[1 /*2*/])) && unk_0x724D816EA203A79E(Local_65[2 /*2*/])) && unk_0x724D816EA203A79E(Local_68[4 /*14*/])) && unk_0x724D816EA203A79E(Local_68[0 /*14*/])) && unk_0x724D816EA203A79E(Local_68[1 /*14*/])) && unk_0x724D816EA203A79E(Local_68[2 /*14*/])) && unk_0x724D816EA203A79E(Local_68[3 /*14*/])) && unk_0x724D816EA203A79E(Local_68[5 /*14*/])) && unk_0x724D816EA203A79E(Local_68[6 /*14*/])) && unk_0x724D816EA203A79E(Local_68[7 /*14*/])) && unk_0x724D816EA203A79E(Local_68[8 /*14*/])) && unk_0x724D816EA203A79E(iLocal_67[0])) && unk_0x724D816EA203A79E(iLocal_67[1]))
	{
		return 1;
	}
	return 0;
}

void func_331(int iParam0, vector3 vParam1)//Position - 0x1A405
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(Global_6416[iParam0 /*23*/].f_13))
	{
		unk_0x1423825E528B4DE1(Global_6416[iParam0 /*23*/].f_13, vParam1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_6416[iParam0 /*23*/][iVar0 /*3*/] = { vParam1 };
		iVar0++;
	}
}

void func_332(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1A454
{
	if (func_203())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		}
		Global_16B17 = { vParam0 };
		Global_16B1A = uParam1;
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
		func_202(1);
	}
}

int func_333()//Position - 0x1A4E9
{
	if (!Global_16B1B == 10 && !Global_16B1B == 9)
	{
		return 0;
	}
	return Global_16B1B.f_2;
}

void func_334()//Position - 0x1A513
{
	func_33(&Local_234, 1, 0);
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (func_31(Local_66[iLocal_270 /*2*/]))
		{
			if (Local_66[iLocal_270 /*2*/] != unk_0xBC25C936A095B5BA())
			{
				unk_0x22321800954A532E(Local_66[iLocal_270 /*2*/], true);
				func_198(&(Local_66[iLocal_270 /*2*/]), 1, 0, 1);
			}
			if (unk_0x2DA8CA50A72528FB(Local_66[iLocal_270 /*2*/].f_1))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_66[iLocal_270 /*2*/].f_1));
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (func_31(Local_68[iLocal_270 /*14*/]))
		{
			func_198(&(Local_68[iLocal_270 /*14*/]), 1, 0, 1);
			if (unk_0x2DA8CA50A72528FB(Local_68[iLocal_270 /*14*/].f_1))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_68[iLocal_270 /*14*/].f_1));
			}
			func_230(&(Local_68[iLocal_270 /*14*/].f_2));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_67[iLocal_270]))
		{
			func_337(&(iLocal_67[iLocal_270]), 0);
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (func_31(Local_65[iLocal_270 /*2*/]))
		{
			func_186(&(Local_65[iLocal_270 /*2*/]));
		}
		if (unk_0x2DA8CA50A72528FB(Local_65[iLocal_270 /*2*/].f_1))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_65[iLocal_270 /*2*/].f_1));
		}
		iLocal_270++;
	}
	func_336(0);
	unk_0xEB233A3B7635D2AC();
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	func_335();
	if (func_31(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	unk_0x483687B0FCA5415A(iLocal_268, 0);
	unk_0xDF53A66AEE1401AA(1f);
	unk_0xAEC867D0DBB7AFEB(5);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	unk_0xE85B33FB221A23CD(5, true);
	unk_0xE85B33FB221A23CD(3, true);
	unk_0xE85B33FB221A23CD(1, true);
	unk_0xE85B33FB221A23CD(10, true);
	unk_0xE85B33FB221A23CD(9, true);
	unk_0x0609DB21AC6683A2();
	unk_0x379ACE23D404525C(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), true, 1);
	unk_0x8510BC031C24B862(joaat("crusader"), false);
	unk_0x8510BC031C24B862(joaat("barracks"), false);
	iLocal_257 = 0;
	bLocal_279 = false;
	unk_0x9332FDC92BD28643(1);
	func_233(&Local_60, 0, 0);
	unk_0xB5AD2E78802711D6(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_335()//Position - 0x1A736
{
	Global_15B7B = 0;
}

void func_336(bool bParam0)//Position - 0x1A743
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

void func_337(int iParam0, bool bParam1)//Position - 0x1A76F
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xF8ED8988FAF2823F(iParam0);
		}
		else
		{
			unk_0x5524CBCEE0910236(*iParam0);
		}
	}
}

void func_338()//Position - 0x1A7AA
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_7(0))
	{
		if (!func_339())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_191(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_196();
		}
	}
}

int func_339()//Position - 0x1A81B
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

