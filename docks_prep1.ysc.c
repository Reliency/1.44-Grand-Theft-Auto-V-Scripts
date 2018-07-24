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
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	struct<2> Local_53[4];
	struct<10> Local_54[8];
	struct<5> Local_55[4];
	vector3 vLocal_56 = { 0f, 0f, 0f };
	struct<2> Local_57[9];
	struct<6> Local_58 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_59 = 0;
	var uLocal_60 = 1092616192;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	var uLocal_244 = 0;
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
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	vector3 vLocal_276 = { 0f, 0f, 0f };
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	int iLocal_281 = 0;
	vector3 vLocal_282 = { 0f, 0f, 0f };
	float fLocal_283 = 0f;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	float fLocal_286 = 0f;
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	int iLocal_290 = 0;
	vector3 vLocal_291 = { 0f, 0f, 0f };
	float fLocal_292 = 0f;
	int iLocal_293 = 0;
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
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 30;
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
	var uLocal_460 = 10;
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
	var uLocal_511 = 10;
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
	var uLocal_582 = 20;
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
	var uLocal_682 = 0;
	var uLocal_683 = 20;
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
	var uLocal_784 = 30;
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
	var uLocal_965 = 5;
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
	var uLocal_996 = 7;
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
	var uLocal_1046 = 5;
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
	var uLocal_1072 = 3;
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
	var uLocal_1088 = 16;
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
	var uLocal_1188 = 10;
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
	var uLocal_1238 = 0;
	var uLocal_1239 = 5;
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
	var uLocal_1264 = 0;
	var uLocal_1265 = 5;
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
	var uLocal_1293 = 0;
	var uLocal_1294 = 8;
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
	var uLocal_1312 = 12;
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
	var uLocal_1325 = 12;
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
	var uLocal_1338 = 12;
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
	var uLocal_1351 = 9;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 9;
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
	var uLocal_1394 = 12;
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
	var uLocal_1407 = 12;
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
	var uLocal_1420 = 12;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 9;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 9;
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
	var uLocal_1476 = 12;
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
	var uLocal_1489 = 12;
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
	var uLocal_1502 = 12;
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
	var uLocal_1515 = 9;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 9;
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
	var uLocal_1558 = 12;
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
	var uLocal_1571 = 12;
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
	var uLocal_1584 = 12;
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
	var uLocal_1597 = 9;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 9;
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
	var uLocal_1640 = 12;
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
	var uLocal_1653 = 12;
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
	var uLocal_1666 = 12;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 9;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 9;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 12;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 12;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 12;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 9;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 9;
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
	var uLocal_1804 = 12;
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
	var uLocal_1817 = 12;
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
	var uLocal_1830 = 12;
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
	var uLocal_1843 = 9;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 9;
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
	var uLocal_1886 = 12;
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
	var uLocal_1899 = 12;
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
	var uLocal_1912 = 12;
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
	var uLocal_1924 = 0;
	var uLocal_1925 = 9;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 9;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	float fLocal_1958 = 0f;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962[2] = { 0, 0 };
	int iLocal_1963 = 0;
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
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	vLocal_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_261 = -1;
	vLocal_276 = { 327.263f, -2968.799f, -3f };
	fLocal_277 = 358.5f;
	iLocal_278 = joaat("prop_dock_crane_02_ld");
	vLocal_279 = { 305.053f, -2971.395f, 4.99f };
	fLocal_280 = 90f;
	iLocal_281 = joaat("prop_dock_crane_02_cab");
	vLocal_282 = { 0f, 0f, 19.907f };
	fLocal_283 = 0f;
	iLocal_284 = joaat("prop_dock_crane_02_hook");
	vLocal_285 = { -0.005f, -22.139f, -15f };
	fLocal_286 = 0f;
	vLocal_288 = { -0.005f, -22.139f, 32.825f };
	vLocal_289 = { 0f, 0f, 0.68f };
	vLocal_291 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_1958 = 3f;
	if (unk_0xE8A79675302ED812(3))
	{
		unk_0x3857DADBD6EC8A54("DHP1_FAIL");
		func_326();
		func_324();
		if (unk_0x102F1A3BD4B68933())
		{
			unk_0xE444CD50419A8207(0, 0, 0, 0);
		}
		func_321();
	}
	unk_0x25A523E067E06F54(1);
	func_316();
	while (true)
	{
		unk_0x2E94C9549322098D("M_ThePortOfLSHeistPrep1", 0);
		func_315(&uLocal_309);
		func_313(&uLocal_1294);
		func_312();
		func_285();
		if (!iLocal_1956)
		{
			func_269();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1CF
{
	switch (iLocal_1952)
	{
		case 0:
			func_220();
			break;
		
		case 1:
			func_187();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x213
{
	switch (iLocal_1953)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			unk_0xF3F01A78937DC905(180f);
			iLocal_1953++;
			break;
		
		case 1:
			if (unk_0x726D9204B160D23E())
			{
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x25F
{
	func_4(0, 0);
	func_321();
}

void func_4(bool bParam0, int iParam1)//Position - 0x271
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

int func_5()//Position - 0x347
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

int func_6(int iParam0)//Position - 0x37C
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

bool func_7(bool bParam0)//Position - 0x3BA
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_8()//Position - 0x3E5
{
	switch (iLocal_1953)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			func_102(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_101(Local_53[0 /*2*/]))
			{
				unk_0x06D93FD5E4D394CF(Local_53[0 /*2*/], false, false, false, true, false, 0, 0, 0);
			}
			unk_0xA9B952D290D440DC(Local_53[0 /*2*/], false);
			unk_0xA9B952D290D440DC(Local_53[1 /*2*/], false);
			unk_0x78108840729CEAEE(1);
			unk_0x451F3125422558C8(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			unk_0xD1FBDB199C700B42(Local_53[0 /*2*/], 0);
			unk_0x8300C56586249382(Local_53[0 /*2*/], 0);
			unk_0x1D1C393C7689E5A6(0f, 10f, 4);
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_1953++;
			break;
		
		case 1:
			if (func_101(unk_0xBC25C936A095B5BA()) && func_101(Local_53[0 /*2*/]))
			{
				if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), true) > 400f && !unk_0xD1DC4B08247A4317(Local_53[0 /*2*/]))
				{
					func_87(9);
				}
			}
			if (func_86(unk_0xBC25C936A095B5BA(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_85(&(Local_57[7 /*2*/]), 0);
				func_85(&(Local_57[8 /*2*/]), 0);
				func_85(&(Local_57[6 /*2*/]), 0);
				func_83(&uLocal_309, joaat("prop_dock_crane_02_ld"));
				func_83(&uLocal_309, joaat("prop_dock_crane_02_cab"));
				func_83(&uLocal_309, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_302 && func_86(unk_0xBC25C936A095B5BA(), vLocal_52, 1) < 200f)
			{
				func_82(&uLocal_309, joaat("bison"));
				iLocal_303 = 1;
				iLocal_302 = 1;
			}
			else if (iLocal_302)
			{
				if (func_86(unk_0xBC25C936A095B5BA(), vLocal_52, 1) > 220f)
				{
					func_83(&uLocal_309, joaat("bison"));
					iLocal_303 = 0;
					iLocal_302 = 0;
					if (unk_0x724D816EA203A79E(Local_53[3 /*2*/]))
					{
						unk_0xCF6040807CC0E4A5(&(Local_53[3 /*2*/]));
					}
				}
				else if (func_86(unk_0xBC25C936A095B5BA(), vLocal_52, 1) < 200f)
				{
					if (iLocal_303 && unk_0xD6513D668481290A(joaat("bison")))
					{
						if (!unk_0x724D816EA203A79E(Local_53[3 /*2*/]))
						{
							Local_53[3 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, 1, 1, 0);
							unk_0x8300C56586249382(Local_53[3 /*2*/], 0);
						}
						iLocal_303 = 0;
					}
				}
			}
			if (unk_0xB6A16B5E7EB81F9B(Local_53[1 /*2*/], unk_0x3E12B546F3F2597A()) || ((unk_0x0C265B3C448E6954(Local_53[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, true, 0) && unk_0x0C265B3C448E6954(Local_54[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, true, 0)) && unk_0x0C265B3C448E6954(Local_53[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, true, 0)))
			{
				if (func_101(Local_53[1 /*2*/]))
				{
					unk_0x05F4CCD2C4E09A66(Local_53[1 /*2*/], 0.5f);
				}
				if (unk_0x2DA8CA50A72528FB(Local_58.f_5))
				{
					unk_0x19CA0A1B612C31E5(Local_58.f_5, 1);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_243))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_243);
				}
				if (iLocal_255)
				{
					unk_0xEB233A3B7635D2AC();
					iLocal_255 = 0;
				}
				if (func_42(&Local_58, vLocal_52, 0.1f, 0.1f, 2f, 1, Local_54[3 /*10*/], 0, 0, unk_0x3E12B546F3F2597A(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (unk_0x2DA8CA50A72528FB(Local_58.f_5) && unk_0x0C265B3C448E6954(unk_0x3E12B546F3F2597A(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0, true, 0)))
				{
					unk_0xB830DBD32591E1BC();
					func_40(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 7f, -1, 1056964608, 0, 1, 0);
					unk_0x8300C56586249382(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
					unk_0x8300C56586249382(Local_53[0 /*2*/], 0);
					unk_0xD421BC740C5340C3(Local_53[0 /*2*/], 10);
					func_36(&Local_58, 1, 0);
					unk_0x78108840729CEAEE(0);
					unk_0x451F3125422558C8(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_301 = unk_0x105601648511CC64();
					iLocal_257 = 0;
					iLocal_1953++;
				}
			}
			else if (!unk_0xB6A16B5E7EB81F9B(Local_53[1 /*2*/], unk_0x3E12B546F3F2597A()))
			{
				func_35(&Local_58);
				if (!unk_0x2DA8CA50A72528FB(iLocal_243))
				{
					iLocal_243 = func_32(Local_53[0 /*2*/], 0, 0);
				}
				if (!iLocal_255 && func_30())
				{
					func_29("DKP1_ATTACH", 7500, 1);
					iLocal_255 = 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (func_12(&uLocal_78, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					unk_0x22321800954A532E(Local_54[3 /*10*/], true);
					unk_0x56F2E1B5599188FA(Local_54[3 /*10*/], unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					unk_0xC5A6DFE2B8987B17(&uLocal_244);
					unk_0xA3981DED4FC2E56E(0, 0, 0);
					unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 3f, 1f, 1073741824, 0);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
					unk_0x535008C596714F9E(uLocal_244);
					unk_0xA8E6405305C0D7DF(Local_54[3 /*10*/], uLocal_244);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					iLocal_1953++;
				}
			}
			else if ((!iLocal_252 && func_30()) && (unk_0x105601648511CC64() - iLocal_301) > 3000)
			{
				func_29("dkp1_EXIT", 7500, 1);
				unk_0x1D1C393C7689E5A6(10f, 5f, 4);
				iLocal_252 = 1;
			}
			break;
		
		case 3:
			if (!func_11())
			{
				if (func_101(Local_53[3 /*2*/]))
				{
					unk_0xA4E856A8CD53B8DF(Local_54[3 /*10*/]);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					unk_0xC5A6DFE2B8987B17(&uLocal_244);
					unk_0xD179FA0466FA4FE3(0, Local_53[3 /*2*/], -1, -1, 2f, 1, 0);
					unk_0x827661D9AAD4A354(0, Local_53[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, 1);
					unk_0x1A06AE15BF21D407(0, Local_53[3 /*2*/], unk_0xBC25C936A095B5BA(), 8, 30f, 786468, 1000f, 10f, 1);
					unk_0x535008C596714F9E(uLocal_244);
					unk_0xA8E6405305C0D7DF(Local_54[3 /*10*/], uLocal_244);
					unk_0x02DAF06EA4F08219(&uLocal_244);
				}
				else
				{
					unk_0xA4E856A8CD53B8DF(Local_54[3 /*10*/]);
					unk_0xAB43C54784946B9F(Local_54[3 /*10*/], vLocal_52, 300f, -1, 0, 0);
				}
				iLocal_301 = unk_0x105601648511CC64();
				iLocal_1953++;
			}
			break;
		
		case 4:
			if (func_10(Local_54[3 /*10*/], unk_0xBC25C936A095B5BA(), 1) > 70f || (unk_0x105601648511CC64() - iLocal_301) > 20000)
			{
				func_9(&(Local_54[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA63
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, 0);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

float func_10(int iParam0, int iParam1, bool bParam2)//Position - 0xAB3
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

int func_11()//Position - 0xB11
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB33
{
	func_28(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)//Position - 0xB81
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
					func_27();
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
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_25();
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
		func_27();
	}
	return 0;
}

void func_14()//Position - 0xE4D
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

void func_15()//Position - 0xE7E
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

int func_16()//Position - 0xF13
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0xF3A
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

void func_18()//Position - 0xFD3
{
	if (func_24(14))
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

int func_19()//Position - 0x1075
{
	func_20();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_20()//Position - 0x108E
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_23(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_22(unk_0xBC25C936A095B5BA());
			if (func_21(iVar0) && (!func_24(14) || Global_196EB))
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

bool func_21(int iParam0)//Position - 0x118B
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x1197
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x11D4
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

bool func_24(int iParam0)//Position - 0x11FE
{
	return Global_8C41 == iParam0;
}

void func_25()//Position - 0x120C
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

bool func_26(int iParam0, int iParam1)//Position - 0x1263
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

void func_27()//Position - 0x129E
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

void func_28(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12F5
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

void func_29(char* sParam0, int iParam1, int iParam2)//Position - 0x134B
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_30()//Position - 0x1364
{
	if (unk_0x4B8E3E5901E59EB8())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (func_11() && !func_31())
		{
			return 0;
		}
	}
	return 1;
}

int func_31()//Position - 0x1394
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1, bool bParam2)//Position - 0x13AB
{
	return func_33(iParam0, !bParam1, bParam2);
}

int func_33(int iParam0, bool bParam1, bool bParam2)//Position - 0x13BE
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_34(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_34(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_34(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_34(bool bParam0, float fParam1, float fParam2)//Position - 0x1462
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_35(int iParam0)//Position - 0x1479
{
	if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
	}
}

void func_36(int iParam0, bool bParam1, bool bParam2)//Position - 0x1494
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_35(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(iParam0->f_1[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1[iVar0]));
		}
		func_39(iVar0, iParam0);
		func_38(iVar0, iParam0);
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
				if (unk_0x9488E18994C5C83D(iParam0->f_11[iVar0], func_37()) && iParam0->f_11[iVar0] != unk_0xBC25C936A095B5BA())
				{
					unk_0x57EB4CC8F1928A47(iParam0->f_11[iVar0]);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 29))
			{
				unk_0x69194304DB679A9C(iParam0->f_11[iVar0], 0, -1, 0);
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

var func_37()//Position - 0x1645
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

void func_38(int iParam0, var uParam1)//Position - 0x1655
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

void func_39(int iParam0, var uParam1)//Position - 0x169D
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

int func_40(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x16E5
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
	func_41(iParam0);
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

void func_41(int iParam0)//Position - 0x1874
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

int func_42(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x18A0
{
	return func_43(iParam0, vParam1, vParam2, func_81(), func_81(), iParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_43(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x18EA
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
							iParam5 = 0;
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
						unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, vParam2, iParam5, bVar4, iVar5);
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, vParam2, iParam5, bVar4, iVar5))
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
								else if (!unk_0x9488E18994C5C83D(iParam0->f_11[iVar2], func_37()) || !func_48(iParam0->f_11[iVar2], 1))
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
								func_36(iParam0, 1, 0);
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
							*iParam0 = func_44(iParam10, 0, 0);
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

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x2247
{
	return func_33(iParam0, !bParam1, bParam2);
}

int func_45(int iParam0)//Position - 0x225A
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

int func_46(bool bParam0, bool bParam1, bool bParam2)//Position - 0x22B8
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

int func_47(int iParam0)//Position - 0x239D
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

int func_48(int iParam0, int iParam1)//Position - 0x23D4
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && iParam1)
		{
			if (func_49(unk_0xBC25C936A095B5BA(), iParam0))
			{
				unk_0x567FA6DC2DF8E19A(func_37(), 50f);
				return 1;
			}
		}
		else if (unk_0x9488E18994C5C83D(iParam0, func_37()))
		{
			unk_0x567FA6DC2DF8E19A(func_37(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0x243F
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

int func_50(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2487
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

void func_51(int iParam0, int iParam1)//Position - 0x2502
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

int func_52(vector3 vParam0, bool bParam1)//Position - 0x253D
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_34(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_53(int iParam0, char* sParam1, int iParam2)//Position - 0x2569
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_54(iParam2), 1);
}

int func_54(int iParam0)//Position - 0x2580
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

void func_55(int iParam0, char* sParam1, bool bParam2)//Position - 0x2775
{
	if (!bParam2)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_29(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = unk_0x105601648511CC64();
}

int func_56(int iParam0)//Position - 0x27AC
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

int func_57(int iParam0, int iParam1)//Position - 0x27D0
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
		if (func_11() && !func_31())
		{
			return 1;
		}
	}
	return 0;
}

int func_58(var uParam0)//Position - 0x2828
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

int func_59(var uParam0, int iParam1)//Position - 0x284B
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

int func_60(int iParam0, var uParam1, int iParam2)//Position - 0x287C
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

void func_61(char* sParam0)//Position - 0x2910
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		unk_0xBB5629E7D44054AE(sParam0);
	}
}

int func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2928
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
					unk_0x69194304DB679A9C(uParam0->f_11[iVar0], 1, -1, 0);
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
				unk_0x69194304DB679A9C(uParam0->f_11[iVar0], 0, -1, 0);
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
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
									if (unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470) == 7 && !func_77(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], 1);
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
					{
						if (func_75(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_37());
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
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
							if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
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
					if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
					{
						iVar21 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
						if (unk_0x724D816EA203A79E(iVar21))
						{
							if (func_60(iVar21, uParam0, 0))
							{
								if (func_71(iVar0, uParam0) || !unk_0xFA30DFD0084E92FE(uParam0->f_D, 27))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
									func_38(iVar0, uParam0);
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
					if ((!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()) && !func_69(uParam0->f_11[iVar0], iParam10)) && !func_68(uParam0->f_11[iVar0], iParam10))
					{
						if (func_75(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
							{
								if (((!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
									}
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_37());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x105601648511CC64();
								uParam0->f_1[iVar0] = func_44(uParam0->f_11[iVar0], 0, 0);
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
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
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
											unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], 1);
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
										uParam0->f_1[iVar0] = func_44(uParam0->f_11[iVar0], 0, 0);
										unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
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
										unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], 0);
										unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_37());
									}
								}
							}
						}
						else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
								{
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_37());
								}
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
							{
								unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
							}
						}
						else if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_37()) && !unk_0x7544D2465B934445(iParam10))
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

void func_63(int iParam0, var uParam1)//Position - 0x3999
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

void func_64(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x39E1
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

void func_65(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3A1A
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

int func_66(int iParam0, var uParam1)//Position - 0x3A39
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

int func_67(int iParam0, float fParam1)//Position - 0x3A82
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

int func_68(int iParam0, int iParam1)//Position - 0x3AB9
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x9488E18994C5C83D(iParam0, func_37()))
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

int func_69(int iParam0, int iParam1)//Position - 0x3B20
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

void func_70(int iParam0, var uParam1)//Position - 0x3B55
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

int func_71(int iParam0, var uParam1)//Position - 0x3B9D
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

int func_72(int iParam0)//Position - 0x3BE6
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

int func_73(int iParam0, var uParam1)//Position - 0x3C73
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

int func_74(var uParam0)//Position - 0x3DD3
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

int func_75(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3E02
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

int func_76(int iParam0)//Position - 0x3EE0
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

int func_77(int iParam0, int iParam1)//Position - 0x3F18
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

void func_78()//Position - 0x3F48
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

void func_79(var uParam0)//Position - 0x3FB5
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

void func_80(var uParam0)//Position - 0x405A
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

Vector3 func_81()//Position - 0x40F0
{
	vector3 vVar0;
	
	return vVar0;
}

int func_82(var uParam0, int iParam1)//Position - 0x40FC
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

void func_83(var uParam0, int iParam1)//Position - 0x41A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x2CA123B0622F495C(iParam1);
					func_84(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_84(var uParam0)//Position - 0x420A
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_85(int iParam0, bool bParam1)//Position - 0x4225
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, 1);
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

float func_86(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x4260
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

void func_87(int iParam0)//Position - 0x429A
{
	char* sVar0;
	
	unk_0x3857DADBD6EC8A54("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		
		case 6:
			sVar0 = "cmn_tdied";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_92(sVar0);
	while (!func_91())
	{
		SYSTEM::WAIT(0);
	}
	if (func_90())
	{
		func_326();
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0, false, 0))
	{
		func_88(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_321();
	unk_0x95E4B6F3ED223F5A();
}

void func_88(vector3 vParam0, float fParam1)//Position - 0x43E6
{
	if (func_89(Global_11632, 0f, 0f, 0f, 0))
	{
		Global_11632 = { vParam0 };
		Global_11635 = fParam1;
	}
}

bool func_89(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x4412
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_90()//Position - 0x4459
{
	if (Global_16B1B == 7)
	{
		return 1;
	}
	return 0;
}

int func_91()//Position - 0x446E
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

void func_92(char* sParam0)//Position - 0x449B
{
	func_100(sParam0);
	func_93(0);
}

void func_93(int iParam0)//Position - 0x44AE
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_94(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_94(int iParam0)//Position - 0x44F3
{
	int iVar0;
	int iVar1;
	
	func_99();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_98(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_95(&(Global_19B04.f_932.f_21B), iVar1);
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

void func_95(var uParam0, int iParam1)//Position - 0x460A
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
			if (!func_97(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_96(&(uParam0->f_8E4[iVar0]));
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

void func_96(var uParam0)//Position - 0x47D3
{
	*uParam0 = -15;
}

int func_97(int iParam0, var uParam1, float fParam2)//Position - 0x47E1
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
			return func_97(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_97(8, uParam1, fParam2);
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

void func_98(int iParam0, bool bParam1)//Position - 0x5150
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

void func_99()//Position - 0x518E
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

void func_100(char* sParam0)//Position - 0x527B
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

int func_101(int iParam0)//Position - 0x52BA
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

void func_102(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5305
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
		func_186(1);
		if (iParam0 <= Global_16B40)
		{
		}
		iVar1 = func_184(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_182(iVar1);
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
			iVar4 = func_177(unk_0x1377080E9B0BD993(), 1);
			if (iVar4 != -1)
			{
				Global_19B04.f_4871[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_176(iVar4)}, 4);
				unk_0x1B7435D54924A668(&uVar5, 0, Global_16B40, iParam0);
			}
			else
			{
				iVar6 = func_175(&(Global_16B1B.f_3));
				if (iVar6 > -1)
				{
					Global_19B04.f_617D.f_4[iVar6] = 0;
				}
			}
		}
		Global_154EE = iParam2;
		Global_16B40 = iParam0;
		func_103(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_16B40)
	{
	}
}

void func_103(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x547A
{
	func_104(&Global_181DF, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_104(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5496
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	uParam0->f_1 = func_164();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_139(&(uParam0->f_B35), 0);
		func_138(unk_0xBC25C936A095B5BA());
		func_131(unk_0xBC25C936A095B5BA(), 0);
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
		if (iVar1 == func_130())
		{
			func_123(unk_0xBC25C936A095B5BA(), &(uParam0->f_268[iVar1 /*65*/]), 1);
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
		func_106(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_105(&(uParam0->f_B95));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_105(var uParam0)//Position - 0x631E
{
	*uParam0 = Global_15B75;
	uParam0->f_1 = Global_15B76;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_106(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6340
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_22(iParam2);
	}
	if (func_120(iParam2, &iVar0, iParam3, iParam5))
	{
		func_107(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_107(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_107(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x63C8
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_109(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_108(iParam2))
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

int func_108(int iParam0)//Position - 0x6408
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

void func_109(var uParam0, int iParam1, int iParam2)//Position - 0x6436
{
	func_115(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_112(iParam1, 145, 0);
	uParam0->f_B = func_111(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_110(iParam1);
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

int func_110(int iParam0)//Position - 0x6512
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

int func_111(int iParam0)//Position - 0x6554
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

int func_112(int iParam0, int iParam1, int iParam2)//Position - 0x65B7
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
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_113(iParam1, iParam2))
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

int func_113(int iParam0, int iParam1)//Position - 0x6645
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_114(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_114(int iParam0, var uParam1, int iParam2)//Position - 0x6687
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

void func_115(int iParam0, var uParam1)//Position - 0x68E3
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_119(uParam1);
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
		func_117(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_116(iVar0 + 1));
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

int func_116(int iParam0)//Position - 0x6B8E
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

int func_117(int iParam0, var uParam1, var uParam2)//Position - 0x6C3E
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

int func_118(int iParam0)//Position - 0x6D18
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

void func_119(var uParam0)//Position - 0x6D38
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

int func_120(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6DE8
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
						if (func_121(*uParam1, func_19(), 1))
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

int func_121(int iParam0, int iParam1, bool bParam2)//Position - 0x6F17
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_122(iParam1, iVar0, &sVar1, &iVar2))
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

int func_122(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x6F88
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

void func_123(int iParam0, var uParam1, int iParam2)//Position - 0x7060
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_22(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_129(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_128(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
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
			if (func_127(161, -1))
			{
				uParam1->f_3B = func_124(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_124(752, Global_11486, 0);
			}
			uParam1->f_3C = func_124(753, Global_11486, 0);
			uParam1->f_3D = func_124(754, Global_11486, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_127(161, -1))
			{
				uParam1->f_3B = func_124(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_124(752, Global_11486, 0);
			}
		}
	}
}

int func_124(int iParam0, int iParam1, int iParam2)//Position - 0x720A
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_125(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_125(var uParam0)//Position - 0x723C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_126();
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

var func_126()//Position - 0x7270
{
	return Global_1407E0;
}

int func_127(int iParam0, int iParam1)//Position - 0x727C
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_125(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x72A8
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
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

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x77F0
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
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

int func_130()//Position - 0x7A31
{
	func_20();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_131(int iParam0, bool bParam1)//Position - 0x7A4A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_132(iParam0, &(Global_19B04.f_932.f_21B.f_12A[iVar0 /*472*/]));
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

void func_132(int iParam0, var uParam1)//Position - 0x7B3D
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
			iVar3 = func_137(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xFEBBB8B5E3A12A20(iParam0, func_137(iVar0));
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
					iVar2 = func_135(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_135(Var4, iVar1);
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
			if ((unk_0x6740839132C4BD08(iVar5, &Var7) && !func_134(Var7.f_1)) && iVar9 < 50)
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
							if (!func_133(Var8.f_3))
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

int func_133(int iParam0)//Position - 0x7DC7
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

int func_134(int iParam0)//Position - 0x7E62
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

int func_135(int iParam0, int iParam1)//Position - 0x7FD6
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
				iVar1 = func_136(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_133(Var5.f_3))
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

int func_136(int iParam0, var uParam1)//Position - 0x8B67
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

int func_137(int iParam0)//Position - 0x8BA2
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

void func_138(int iParam0)//Position - 0x8E16
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_19B04.f_932.f_21B.f_126[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_139(var uParam0, int iParam1)//Position - 0x8E52
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
		if (func_142(&iVar0))
		{
			if (func_141(iVar0, &vVar1, &uVar2))
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
		else if (func_140(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_140(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x93AD
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

bool func_141(int iParam0, var uParam1, var uParam2)//Position - 0x93F1
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
	return !func_89(*uParam1, 0f, 0f, 0f, 0);
}

int func_142(var uParam0)//Position - 0x9ABC
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_163())
		{
			*uParam0 = func_148(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 6, -1, 0, 1, -1);
			if (func_147(*uParam0) && !func_143(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_143(int iParam0)//Position - 0x9B17
{
	return func_144(iParam0, 0, 1);
}

int func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x9B27
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_124(func_145(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_145(int iParam0)//Position - 0x9B87
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

int func_146()//Position - 0x9E7B
{
	return Global_62BD;
}

int func_147(int iParam0)//Position - 0x9E86
{
	return func_144(iParam0, 5, 1);
}

int func_148(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x9E96
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
		if (iParam1 == 6 || iParam1 == func_162(iVar0))
		{
			if (!bParam3 || func_161(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(vParam0, func_149(iVar0, 0), true);
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

Vector3 func_149(int iParam0, bool bParam1)//Position - 0x9F38
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
			return func_160(Global_1732A);
			break;
		
		case 46:
			if (Global_183F8F != func_159())
			{
				if (func_158(Global_183F8F))
				{
					return func_151(2, 2);
				}
				else if (func_150(Global_183F8F))
				{
					return func_151(45, 3);
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

int func_150(int iParam0)//Position - 0xA4F2
{
	if (iParam0 != func_159())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_151(int iParam0, int iParam1)//Position - 0xA550
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_183F8F != func_159())
	{
		if (iParam1 == 3)
		{
			if (func_152(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 4))
			{
				if (func_152(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 5))
			{
				if (func_152(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_152(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xA5FE
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_157(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_157(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_155(iParam0) };
	}
	else
	{
		Var2 = { func_154(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_153(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_153(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_153(vector3 vParam0, float fParam1)//Position - 0xA693
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

struct<6> func_154(int iParam0)//Position - 0xA6D7
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

struct<6> func_155(int iParam0)//Position - 0xA85B
{
	return func_156(iParam0);
}

struct<6> func_156(int iParam0)//Position - 0xA869
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

int func_157(int iParam0, var uParam1)//Position - 0xB330
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

int func_158(int iParam0)//Position - 0xB3B2
{
	if (iParam0 != func_159())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_159()//Position - 0xB410
{
	return -1;
}

Vector3 func_160(int iParam0)//Position - 0xB419
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

int func_161(int iParam0)//Position - 0xB5EC
{
	return func_144(iParam0, 0, 0);
}

int func_162(int iParam0)//Position - 0xB5FC
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

bool func_163()//Position - 0xB896
{
	return Global_16B4F.f_141 > 0;
}

var func_164()//Position - 0xB8A7
{
	var uVar0;
	
	func_174(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_173(&uVar0, unk_0x7E09057438B9D216());
	func_172(&uVar0, unk_0x6E06C0DB9B43570D());
	func_167(&uVar0, unk_0xBE14F159908E4EE5());
	func_166(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_165(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_165(var uParam0, int iParam1)//Position - 0xB8ED
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

void func_166(var uParam0, int iParam1)//Position - 0xB973
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_167(var uParam0, int iParam1)//Position - 0xB9A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_171(*uParam0);
	iVar1 = func_169(*uParam0);
	if (iParam1 < 1 || iParam1 > func_168(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_168(int iParam0, int iParam1)//Position - 0xB9F7
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

var func_169(int iParam0)//Position - 0xBA99
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_170(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_170(bool bParam0, int iParam1, int iParam2)//Position - 0xBABE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_171(var uParam0)//Position - 0xBAD5
{
	return uParam0 & 15;
}

void func_172(var uParam0, int iParam1)//Position - 0xBAE2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_173(var uParam0, int iParam1)//Position - 0xBB1C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_174(var uParam0, int iParam1)//Position - 0xBB57
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_175(char* sParam0)//Position - 0xBB93
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

struct<2> func_176(int iParam0)//Position - 0xBBE9
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

int func_177(char* sParam0, int iParam1)//Position - 0xC036
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
		func_178(iVar0, &sVar1);
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

void func_178(int iParam0, var uParam1)//Position - 0xC07F
{
	switch (iParam0)
	{
		case 0:
			func_179(uParam1, "Abigail1", func_181(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 1:
			func_179(uParam1, "Abigail2", func_181(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 2:
			func_179(uParam1, "Barry1", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 3:
			func_179(uParam1, "Barry2", func_181(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 4:
			func_179(uParam1, "Barry3", func_181(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 5:
			func_179(uParam1, "Barry3A", func_181(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 6:
			func_179(uParam1, "Barry3C", func_181(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 7:
			func_179(uParam1, "Barry4", func_181(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_180(iParam0), 0, 0);
			break;
		
		case 8:
			func_179(uParam1, "Dreyfuss1", func_181(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 9:
			func_179(uParam1, "Epsilon1", func_181(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 10:
			func_179(uParam1, "Epsilon2", func_181(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 11:
			func_179(uParam1, "Epsilon3", func_181(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 12:
			func_179(uParam1, "Epsilon4", func_181(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 13:
			func_179(uParam1, "Epsilon5", func_181(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 14:
			func_179(uParam1, "Epsilon6", func_181(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 15:
			func_179(uParam1, "Epsilon7", func_181(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 16:
			func_179(uParam1, "Epsilon8", func_181(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 17:
			func_179(uParam1, "Extreme1", func_181(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 18:
			func_179(uParam1, "Extreme2", func_181(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 19:
			func_179(uParam1, "Extreme3", func_181(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 20:
			func_179(uParam1, "Extreme4", func_181(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 21:
			func_179(uParam1, "Fanatic1", func_181(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 22:
			func_179(uParam1, "Fanatic2", func_181(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 23:
			func_179(uParam1, "Fanatic3", func_181(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_180(iParam0), 0, 1);
			break;
		
		case 24:
			func_179(uParam1, "Hao1", func_181(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_180(iParam0), 0, 1);
			break;
		
		case 25:
			func_179(uParam1, "Hunting1", func_181(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 26:
			func_179(uParam1, "Hunting2", func_181(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 27:
			func_179(uParam1, "Josh1", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 28:
			func_179(uParam1, "Josh2", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 29:
			func_179(uParam1, "Josh3", func_181(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 30:
			func_179(uParam1, "Josh4", func_181(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 31:
			func_179(uParam1, "Maude1", func_181(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 32:
			func_179(uParam1, "Minute1", func_181(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 33:
			func_179(uParam1, "Minute2", func_181(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 34:
			func_179(uParam1, "Minute3", func_181(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 35:
			func_179(uParam1, "MrsPhilips1", func_181(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 36:
			func_179(uParam1, "MrsPhilips2", func_181(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 37:
			func_179(uParam1, "Nigel1", func_181(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 38:
			func_179(uParam1, "Nigel1A", func_181(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 39:
			func_179(uParam1, "Nigel1B", func_181(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 40:
			func_179(uParam1, "Nigel1C", func_181(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 41:
			func_179(uParam1, "Nigel1D", func_181(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 42:
			func_179(uParam1, "Nigel2", func_181(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 43:
			func_179(uParam1, "Nigel3", func_181(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 44:
			func_179(uParam1, "Omega1", func_181(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 45:
			func_179(uParam1, "Omega2", func_181(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 46:
			func_179(uParam1, "Paparazzo1", func_181(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 47:
			func_179(uParam1, "Paparazzo2", func_181(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 48:
			func_179(uParam1, "Paparazzo3", func_181(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 49:
			func_179(uParam1, "Paparazzo3A", func_181(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 50:
			func_179(uParam1, "Paparazzo3B", func_181(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 51:
			func_179(uParam1, "Paparazzo4", func_181(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 52:
			func_179(uParam1, "Rampage1", func_181(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 54:
			func_179(uParam1, "Rampage3", func_181(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 55:
			func_179(uParam1, "Rampage4", func_181(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 56:
			func_179(uParam1, "Rampage5", func_181(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 53:
			func_179(uParam1, "Rampage2", func_181(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 57:
			func_179(uParam1, "TheLastOne", func_181(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 58:
			func_179(uParam1, "Tonya1", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 59:
			func_179(uParam1, "Tonya2", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 60:
			func_179(uParam1, "Tonya3", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 61:
			func_179(uParam1, "Tonya4", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 62:
			func_179(uParam1, "Tonya5", func_181(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_179(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xD234
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

int func_180(int iParam0)//Position - 0xD2C5
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

struct<2> func_181(int iParam0)//Position - 0xD60B
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
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

int func_182(int iParam0)//Position - 0xD642
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_183(Global_19B04.f_2360.f_63.f_CD[10]);
			break;
		
		case 74:
		case 75:
			return func_183(Global_19B04.f_2360.f_63.f_CD[8]);
			break;
		
		case 84:
		case 85:
			return func_183(Global_19B04.f_2360.f_63.f_CD[11]);
			break;
		
		case 90:
			return func_183(Global_19B04.f_2360.f_63.f_CD[7]);
			break;
		
		case 93:
			return func_183(Global_19B04.f_2360.f_63.f_CD[9]);
			break;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0xD6FE
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

int func_184(char* sParam0, bool bParam1)//Position - 0xD752
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_185(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_185(int iParam0, bool bParam1)//Position - 0xD77C
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

void func_186(bool bParam0)//Position - 0xD7B2
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

void func_187()//Position - 0xDA34
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1953)
	{
		case 0:
			func_219(&uLocal_309, "PORT_OF_LS_PREP_1");
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			func_217(&Local_58, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (unk_0xD6513D668481290A(joaat("packer")) && unk_0xD6513D668481290A(joaat("armytrailer")))
			{
				func_102(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_216(587, 0);
				func_215(&uLocal_78, 1, 0, "FLOYD", 0, 1);
				func_214(6, 0);
				Local_53[2 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, 1, 1, 0);
				unk_0x8300C56586249382(Local_53[2 /*2*/], 0);
				unk_0xA73D1278857991A2(Local_53[2 /*2*/], true);
				unk_0x6012A6A4F2950585(Local_53[2 /*2*/], 0);
				unk_0xE82050D41B744FF3(Local_53[2 /*2*/], false);
				Local_53[1 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, 1, 1, 0);
				unk_0x0A0AE625CFB21683(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
				unk_0x8AA34A46B8399BF5(Local_53[1 /*2*/]);
				unk_0xE82050D41B744FF3(Local_53[1 /*2*/], false);
				unk_0xA73D1278857991A2(Local_53[1 /*2*/], true);
				iLocal_248 = 0;
				unk_0x1DAA351326EA3537(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0, 1, 1, 1);
				iLocal_257 = 1;
				unk_0x9B90420B04C07704("OnlyAllowScriptTriggerPoliceScanner", 0);
				iLocal_1953++;
			}
			break;
		
		case 1:
			if (func_213())
			{
				func_212(&uLocal_309, cLocal_49);
				func_212(&uLocal_309, cLocal_50);
				iLocal_261 = -1;
				iLocal_262 = 0;
				iLocal_1953++;
			}
			break;
		
		case 2:
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0))
			{
				switch (iLocal_262)
				{
					case 0:
						if (!unk_0xF16DAFF595E80F7C())
						{
							if (iLocal_261 == -1)
							{
								iLocal_261 = unk_0x105601648511CC64() + 5000;
							}
							if (unk_0x105601648511CC64() > iLocal_261)
							{
								func_211("DKP1_SUBTURN", -1);
								iLocal_262++;
							}
						}
						break;
					
					case 1:
						if (!unk_0xF16DAFF595E80F7C())
						{
							func_211("SUB_HELP", -1);
							iLocal_262++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_262 == 0)
				{
					iLocal_261 = -1;
				}
				if (unk_0xF16DAFF595E80F7C())
				{
					if (func_210("DKP1_SUBTURN") || func_210("SUB_HELP"))
					{
						unk_0x7456702622C62EA0(1);
					}
				}
			}
			if (unk_0xBCDD4514E5CAE591(Local_53[0 /*2*/], 3, 10000))
			{
				func_87(1);
			}
			if (func_86(unk_0xBC25C936A095B5BA(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (unk_0x0B176B4C9E33A156("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_306 = true;
				}
				func_85(&(Local_57[2 /*2*/]), 0);
				func_83(&uLocal_309, joaat("prop_sub_release"));
			}
			else
			{
				unk_0x5125612B0BECDB38();
				bLocal_306 = false;
			}
			if (func_101(Local_54[6 /*10*/]))
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || unk_0x889DA6CE8E4DB344(Local_54[6 /*10*/])) || func_10(unk_0xBC25C936A095B5BA(), Local_54[6 /*10*/], 1) > 100f)
				{
					unk_0xA4E856A8CD53B8DF(Local_54[6 /*10*/]);
					func_9(&(Local_54[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_101(Local_54[7 /*10*/]))
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || unk_0x889DA6CE8E4DB344(Local_54[7 /*10*/])) || func_10(unk_0xBC25C936A095B5BA(), Local_54[7 /*10*/], 1) > 100f)
				{
					unk_0xA4E856A8CD53B8DF(Local_54[7 /*10*/]);
					func_9(&(Local_54[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_101(Local_54[4 /*10*/]))
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || unk_0x889DA6CE8E4DB344(Local_54[4 /*10*/])) || func_10(unk_0xBC25C936A095B5BA(), Local_54[4 /*10*/], 1) > 100f)
				{
					unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
					func_9(&(Local_54[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_101(Local_54[5 /*10*/]))
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || unk_0x889DA6CE8E4DB344(Local_54[5 /*10*/])) || func_10(unk_0xBC25C936A095B5BA(), Local_54[5 /*10*/], 1) > 100f)
				{
					unk_0xA4E856A8CD53B8DF(Local_54[5 /*10*/]);
					func_9(&(Local_54[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_217(&Local_58, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((unk_0x2DA8CA50A72528FB(Local_58.f_5) && unk_0x0C265B3C448E6954(Local_53[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0, true, 0)) && func_209(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/])))
			{
				if (func_101(Local_53[2 /*2*/]) && func_101(Local_53[1 /*2*/]))
				{
					func_208(&Local_58, 0);
					func_207(6, 0);
					unk_0x3857DADBD6EC8A54("DHP1_STOP");
					func_206(0, -1);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
					iLocal_301 = unk_0x105601648511CC64();
					iLocal_1953++;
				}
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0 && unk_0x2DA8CA50A72528FB(Local_58.f_5))
			{
				unk_0xC6EA3A47240425C4(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, 0, 0, 2, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			if (func_76(Local_53[0 /*2*/]) || (unk_0x105601648511CC64() - iLocal_301) > 3500)
			{
				iLocal_293 = unk_0x585DE1CBEEB2D27D(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0, 2);
				unk_0x348665177DBFB93B(iLocal_293, true);
				unk_0x2FB83B8BD6C05FD2(iLocal_293, "HAND_SHAKE", 0.4f);
				unk_0x9961B404F89D0597(iLocal_293, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_202(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_82(&uLocal_309, joaat("prop_tarp_strap"));
				unk_0x641B19E156645A92(Local_53[0 /*2*/], vLocal_276, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(Local_53[0 /*2*/], fLocal_277);
				iLocal_301 = unk_0x105601648511CC64();
				iLocal_275 = 0;
				unk_0x1D1C393C7689E5A6(8f, 0f, 4);
				iLocal_1953++;
			}
			else
			{
				func_40(Local_53[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		
		case 4:
			if (func_192())
			{
				iLocal_1953++;
			}
			break;
		
		case 5:
			if (unk_0xDC9E16E99286F31D() && unk_0xD6513D668481290A(joaat("prop_tarp_strap")))
			{
				unk_0x538BB037E00A3AD9(Local_53[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				unk_0x538BB037E00A3AD9(Local_53[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				unk_0x538BB037E00A3AD9(Local_53[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				unk_0x538BB037E00A3AD9(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				unk_0x538BB037E00A3AD9(0, "Floyd", 2, joaat("ig_floyd"), 0);
				unk_0x2C5D30EE32747F1F("Trevor", unk_0xBC25C936A095B5BA(), 0);
				unk_0x93D3868AE0D83B7C(Local_53[2 /*2*/], 1);
				unk_0x8300C56586249382(Local_53[2 /*2*/], 1);
				func_191(0);
				unk_0xF3C7BD26F94560D9(4);
				unk_0xE444CD50419A8207(0, 0, 1, 0);
				unk_0x93B1CB6BD50812C7(0);
				iLocal_1953++;
			}
			break;
		
		case 6:
			if (unk_0x866EAD7E27D8D0F8())
			{
				if (unk_0xE7CC712DAAEA69F3("PO1_08_sub_waterplane"))
				{
					unk_0x66EC947D9DEDE5B3("PO1_08_sub_waterplane");
				}
			}
			if (unk_0x4B088956DA856645(0))
			{
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0x43F06392C4EF25E0(true);
				unk_0x59B038076F830627(true);
				unk_0x1E463345CF429A99();
			}
			if (!unk_0x724D816EA203A79E(Local_54[3 /*10*/]))
			{
				if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("Floyd", 0)))
				{
					Local_54[3 /*10*/] = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("Floyd", 0));
					func_215(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					unk_0x4106FAF8AA1D69D5(Local_54[3 /*10*/], iLocal_259);
				}
			}
			if (unk_0x3F3252765FE36DA8("Trevor", 0))
			{
				iLocal_295 = 1;
			}
			if (unk_0x3F3252765FE36DA8("Floyd", 0))
			{
				iLocal_296 = 1;
			}
			if (unk_0x3F3252765FE36DA8("DockHeist_truck", 0))
			{
				unk_0xE5683DE157C66DCA(Local_53[2 /*2*/], 1, 0, 0);
				unk_0x127F627F30266DD9(Local_53[2 /*2*/], 1);
				iLocal_297 = 1;
			}
			if (unk_0x3F3252765FE36DA8("DockHeist_trailer", 0))
			{
				unk_0xE5683DE157C66DCA(Local_53[1 /*2*/], 1, 0, 0);
				iLocal_300 = 1;
			}
			if (unk_0x3F3252765FE36DA8("submarine", 0))
			{
				iLocal_298 = 1;
			}
			if (unk_0x3F3252765FE36DA8("sub_cover", 0))
			{
				iLocal_299 = 1;
			}
			else if (!unk_0x724D816EA203A79E(Local_57[4 /*2*/]))
			{
				if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_57[4 /*2*/] = unk_0x0EC4BFD5C83D125E(unk_0x95E040A13E9940DC("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (unk_0x35C7E90A95E75117(Local_53[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (unk_0xADE6C4641AFD481C() >= 14200)
					{
						unk_0x93D3868AE0D83B7C(Local_53[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_295 && iLocal_296) && iLocal_297) && iLocal_298) && iLocal_299) && iLocal_300)
			{
				if (unk_0x726D9204B160D23E() || unk_0xCF9FD9F078487083(Local_54[3 /*10*/]))
				{
					unk_0xBD53A029D0155A42(Local_54[3 /*10*/], Local_53[2 /*2*/], 0);
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_53[2 /*2*/], -1);
					unk_0x4E00F4ECD5BE493A(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					unk_0x8300C56586249382(Local_53[0 /*2*/], 0);
					unk_0x127F627F30266DD9(Local_53[0 /*2*/], 1);
					unk_0xD421BC740C5340C3(Local_53[0 /*2*/], 10);
					unk_0x2D655AA68FA1736B(Local_53[0 /*2*/], false, 1, 0);
					unk_0x93D3868AE0D83B7C(Local_53[0 /*2*/], 1);
					unk_0x4E87F356DA56EB3F(Local_53[0 /*2*/], 0);
					unk_0x5DBE04849460E608(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, vLocal_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_57[5 /*2*/] = unk_0xB6896943DA475493(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, 0);
					unk_0x5DBE04849460E608(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, vLocal_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					func_190(1, 0, 0, 3000, 0);
					func_189(&uLocal_309);
					iLocal_1953++;
				}
			}
			break;
		
		case 7:
			func_188(2);
			iLocal_1953 = 0;
			break;
	}
	if (unk_0x2DA8CA50A72528FB(Local_58.f_5))
	{
		unk_0x0BBAABB52887CF8C(Local_58.f_5, false);
	}
	if (func_101(unk_0xBC25C936A095B5BA()) && func_101(Local_53[0 /*2*/]))
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 324.7653f, -2974.495f, -1f, true) > 2500f)
		{
			func_87(9);
		}
	}
}

int func_188(int iParam0)//Position - 0xE511
{
	if (iLocal_1951 == 0)
	{
		iLocal_1954 = iParam0;
		iLocal_1951 = 1;
		return 1;
	}
	return 0;
}

void func_189(var uParam0)//Position - 0xE531
{
	if (uParam0->f_35C)
	{
		if (uParam0->f_35C.f_1)
		{
			unk_0x8E5F062750135AD1();
			func_84(&(uParam0->f_35C));
		}
		else
		{
			uParam0->f_35C.f_2 = 1;
			uParam0->f_3D6 = 1;
		}
	}
}

void func_190(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0xE569
{
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), bParam0, iParam4);
	unk_0x062C9995BFD27B2A(bParam1, bParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		unk_0x1C51717D9E91D69B(0);
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x4E87F356DA56EB3F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
	}
}

void func_191(int iParam0)//Position - 0xE5B9
{
	iLocal_295 = iParam0;
	iLocal_296 = iParam0;
	iLocal_297 = iParam0;
	iLocal_299 = iParam0;
	iLocal_298 = iParam0;
	iLocal_300 = iParam0;
}

int func_192()//Position - 0xE5DF
{
	float fVar0;
	
	switch (iLocal_275)
	{
		case 0:
			func_201();
			unk_0x641B19E156645A92(Local_53[0 /*2*/], vLocal_276, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(Local_53[0 /*2*/], fLocal_277);
			unk_0x346478B12F69D4E3(Local_53[0 /*2*/], true);
			iLocal_245 = unk_0xD0F8470A5BFEECF7("scr_pls_sub_water_drips", Local_53[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			unk_0xE426CF2117CBB2CF(iLocal_245, "flow", 1f, 0);
			unk_0x04DD7A558FCF2C34("dhp1_mcs_1", 8);
			if (bLocal_306)
			{
				unk_0xF57835F0678B1B7A();
			}
			if (unk_0x6E06C0DB9B43570D() >= 20 || unk_0x6E06C0DB9B43570D() <= 7)
			{
				unk_0x5183B5D4E829B7E4("PO1_08_sub_waterplane");
			}
			func_199(&uLocal_309, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_275++;
			break;
		
		case 1:
			vLocal_287 = { unk_0x541C2AEF053615BC(Local_57[8 /*2*/], true) };
			if (vLocal_287.z <= 1f)
			{
				unk_0x346478B12F69D4E3(Local_53[0 /*2*/], false);
				unk_0x9961B404F89D0597(iLocal_293, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(iLocal_293, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				unk_0x5DBE04849460E608(Local_53[0 /*2*/], Local_57[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				iLocal_275++;
			}
			else
			{
				func_198(1, 2f);
			}
			break;
		
		case 2:
			vLocal_287 = { unk_0x541C2AEF053615BC(Local_57[8 /*2*/], true) };
			if (vLocal_287.z >= 12.5f)
			{
				unk_0x9961B404F89D0597(iLocal_293, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(iLocal_293, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_292 = unk_0x2C17B7AD56BA6EB6(iLocal_293);
				unk_0x97AD4F1D22AEA4FC(iLocal_293, 1.8f);
				iLocal_275++;
			}
			else
			{
				func_198(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_283 >= 40f)
			{
				unk_0x9961B404F89D0597(iLocal_293, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(iLocal_293, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				unk_0x97AD4F1D22AEA4FC(iLocal_293, fLocal_292);
				fLocal_283 = 80f;
				unk_0x17175087F2DB6AC8(Local_57[7 /*2*/], 1, 1);
				unk_0x5DBE04849460E608(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, vLocal_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1);
				unk_0xD5874E4A4BF782FC(Local_57[8 /*2*/], unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_285), 0, 0, 1);
				iLocal_1959 = unk_0x105601648511CC64();
				iLocal_275++;
			}
			else
			{
				func_197(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_283 >= 108f)
			{
				unk_0xE1F4DF3B8A6E8B8F(1f);
				unk_0x9961B404F89D0597(iLocal_293, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(iLocal_293, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				unk_0xCE33D5EFE2BDE6EF(iLocal_293, 0.25f);
				unk_0x17175087F2DB6AC8(Local_57[7 /*2*/], 1, 1);
				unk_0x5DBE04849460E608(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, vLocal_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1);
				unk_0xD5874E4A4BF782FC(Local_57[8 /*2*/], unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_285), 0, 0, 1);
				if (unk_0x2F1B39E315395385(iLocal_245))
				{
					unk_0x2CA8D9DC16C6AF09(iLocal_245, 0);
				}
				iLocal_275++;
			}
			else
			{
				fVar0 = (1f - func_196((SYSTEM::TO_FLOAT((unk_0x105601648511CC64() - iLocal_1959 + 1500)) / 3000f), 0f, 1f));
				unk_0xE426CF2117CBB2CF(iLocal_245, "flow", fVar0, 0);
				func_197(1, 5.5f);
			}
			break;
		
		case 5:
			unk_0xE1F4DF3B8A6E8B8F(1f);
			vLocal_287 = { unk_0x541C2AEF053615BC(Local_57[8 /*2*/], true) };
			if (vLocal_287.z <= 11f)
			{
				unk_0x17175087F2DB6AC8(Local_53[0 /*2*/], 1, 1);
				iLocal_275++;
			}
			else
			{
				func_198(1, 1f);
			}
			break;
		
		case 6:
			if (unk_0x8B2EFFDCF3FE7E80(Local_53[0 /*2*/]))
			{
				iLocal_1959 = unk_0x105601648511CC64() + 1000;
				iLocal_275++;
			}
			break;
		
		case 7:
			if (unk_0x105601648511CC64() > iLocal_1959)
			{
				unk_0x346478B12F69D4E3(Local_57[8 /*2*/], true);
				iLocal_275++;
			}
			else
			{
				func_197(0, 4f);
				func_198(0, 1f);
			}
			break;
		
		case 8:
			func_195(&uLocal_309);
			return 1;
			break;
	}
	if (unk_0x726D9204B160D23E())
	{
		if (iLocal_275 > 0 && iLocal_275 < 5)
		{
			if (func_193(1000))
			{
				unk_0x7A41D32A383895D8(800);
			}
		}
	}
	else if (unk_0x17FAADF9916EF741())
	{
		if (unk_0x2F1B39E315395385(iLocal_245))
		{
			unk_0x2CA8D9DC16C6AF09(iLocal_245, 0);
		}
		unk_0x5DEC86EE2E34A59D(unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), 30f);
		iLocal_1957 = 2;
		iLocal_1956 = 1;
	}
	return 0;
}

int func_193(int iParam0)//Position - 0xEB52
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
			if (func_194())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_194()//Position - 0xEB9C
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

void func_195(var uParam0)//Position - 0xEBCE
{
	if (unk_0x719413B40BB63D86())
	{
		unk_0x13D5880CBA449AA9();
		func_84(&(uParam0->f_364));
	}
}

float func_196(float fParam0, float fParam1, float fParam2)//Position - 0xEBEA
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

void func_197(bool bParam0, float fParam1)//Position - 0xEC11
{
	if (bParam0)
	{
		fLocal_283 = (fLocal_283 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fLocal_283 = (fLocal_283 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	unk_0x17175087F2DB6AC8(Local_57[7 /*2*/], 1, 1);
	unk_0x5DBE04849460E608(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, vLocal_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1);
	unk_0xD5874E4A4BF782FC(Local_57[8 /*2*/], unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_285), 0, 0, 1);
}

void func_198(bool bParam0, float fParam1)//Position - 0xEC82
{
	if (bParam0)
	{
		vLocal_285.z = (vLocal_285.z - (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		vLocal_285.z = (vLocal_285.z + (fParam1 * SYSTEM::TIMESTEP()));
	}
	unk_0xD5874E4A4BF782FC(Local_57[8 /*2*/], unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_285), 0, 0, 1);
}

int func_199(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xECD1
{
	if (func_200(vParam1) || func_200(vParam2))
	{
		return 0;
	}
	if (uParam0->f_364)
	{
		if ((func_89(uParam0->f_364.f_4, vParam1, 0) && func_89(uParam0->f_364.f_7, vParam2, 0)) && uParam0->f_364.f_A == fParam3)
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
		else
		{
			return 0;
		}
	}
	else
	{
		unk_0x5C4048C4641BDB16(vParam1, vParam2, fParam3, iParam4);
		uParam0->f_364 = 1;
		uParam0->f_364.f_3 = unk_0x105601648511CC64();
		uParam0->f_364.f_4 = { vParam1 };
		uParam0->f_364.f_7 = { vParam2 };
		uParam0->f_364.f_A = fParam3;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_200(vector3 vParam0)//Position - 0xEDB7
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_201()//Position - 0xEDE1
{
	if (iLocal_248)
	{
		unk_0x47E13337C790CC8C(&(Local_55[0 /*5*/]));
		unk_0x47E13337C790CC8C(&(Local_55[1 /*5*/]));
		unk_0x47E13337C790CC8C(&(Local_55[2 /*5*/]));
		unk_0x47E13337C790CC8C(&(Local_55[3 /*5*/]));
		iLocal_248 = 0;
	}
}

void func_202(bool bParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xEE17
{
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), bParam0, iParam6);
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	unk_0x062C9995BFD27B2A(bParam2, bParam3, iParam5, 1, 0, 0);
	if (bParam4)
	{
		unk_0xADC7E88690E324EB(vParam1, 500f, 0);
	}
	unk_0x7A71B0C6DDC0D7DA(vParam1, 300f);
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x4E87F356DA56EB3F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
	}
	if (bParam7)
	{
		func_203(0);
	}
}

void func_203(int iParam0)//Position - 0xEE8F
{
	if (Global_3943)
	{
		func_204(0, 0);
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
	if (!func_16())
	{
		Global_389D.f_1 = 3;
	}
}

void func_204(bool bParam0, bool bParam1)//Position - 0xEEFF
{
	if (bParam0)
	{
		if (func_205(0))
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

int func_205(int iParam0)//Position - 0xEF73
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

void func_206(bool bParam0, int iParam1)//Position - 0xEFCD
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

void func_207(int iParam0, bool bParam1)//Position - 0xF067
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

void func_208(int iParam0, bool bParam1)//Position - 0xF09E
{
	func_36(iParam0, bParam1, 0);
}

int func_209(int iParam0, int iParam1)//Position - 0xF0AF
{
	if (unk_0x724D816EA203A79E(iParam0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(char* sParam0)//Position - 0xF0F3
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_211(char* sParam0, int iParam1)//Position - 0xF106
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_212(var uParam0, char* sParam1)//Position - 0xF11D
{
	int iVar0;
	
	if (!unk_0xF1734B55490E9045(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_111)
		{
			if (uParam0->f_111[iVar0 /*5*/])
			{
				if (unk_0x3362CDE8460ED38B(uParam0->f_111[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_111[iVar0 /*5*/].f_1)
					{
						unk_0x4EA570997E107F35(sParam1);
						func_84(&(uParam0->f_111[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_111[iVar0 /*5*/].f_2 = 1;
						uParam0->f_3D6 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_213()//Position - 0xF1A1
{
	if (!unk_0x724D816EA203A79E(Local_57[6 /*2*/]))
	{
		Local_57[6 /*2*/] = unk_0xB6896943DA475493(iLocal_278, vLocal_279, true, true, 0);
		unk_0x641B19E156645A92(Local_57[6 /*2*/], vLocal_279, 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(Local_57[6 /*2*/], fLocal_280);
		unk_0x346478B12F69D4E3(Local_57[6 /*2*/], true);
	}
	if (!unk_0x724D816EA203A79E(Local_57[7 /*2*/]))
	{
		Local_57[7 /*2*/] = unk_0xB6896943DA475493(iLocal_281, unk_0xA4455714F3DCE207(Local_57[6 /*2*/], vLocal_282), true, true, 0);
	}
	if (!unk_0xB6A16B5E7EB81F9B(Local_57[7 /*2*/], Local_57[6 /*2*/]))
	{
		unk_0x5DBE04849460E608(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, vLocal_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x724D816EA203A79E(Local_57[8 /*2*/]))
	{
		Local_57[8 /*2*/] = unk_0xB6896943DA475493(iLocal_284, unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_285), true, true, 0);
		unk_0x656194E145691D3E(Local_57[8 /*2*/], 0);
		unk_0x5DBE04849460E608(Local_57[8 /*2*/], Local_57[7 /*2*/], -1, vLocal_285, 0f, 0f, fLocal_286, 0, 0, 0, 0, 2, 1);
		unk_0x17175087F2DB6AC8(Local_57[8 /*2*/], 1, 0);
		unk_0x346478B12F69D4E3(Local_57[8 /*2*/], true);
	}
	if (!iLocal_249)
	{
		if (unk_0x780F6CB41E028D1B(Local_57[7 /*2*/]) && unk_0x780F6CB41E028D1B(Local_57[8 /*2*/]))
		{
			iLocal_290 = unk_0x8A9B55BE063F4C2E(unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_288), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, 0, 0, 1, 1f, 0, 0);
			unk_0xA1C47B5614D52B3F(iLocal_290, 1);
			unk_0xDBC09825279891A0(iLocal_290, 2);
			unk_0x8313FE8F103A52A4(&iLocal_290, 0);
			unk_0x88D7189D924FCBE6(iLocal_290, Local_57[7 /*2*/], Local_57[8 /*2*/], unk_0xA4455714F3DCE207(Local_57[7 /*2*/], vLocal_288), unk_0xA4455714F3DCE207(Local_57[8 /*2*/], vLocal_289), 70f, 0, 0, 0, 0);
			iLocal_249 = 1;
			return 1;
		}
		if (!unk_0x780F6CB41E028D1B(Local_57[7 /*2*/]))
		{
		}
		if (!unk_0x780F6CB41E028D1B(Local_57[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_214(int iParam0, int iParam1)//Position - 0xF380
{
	unk_0xF0059F27F7BB6680(&Global_635B, iParam0);
	StringCopy(&(Global_635C[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_6393[iParam0] = iParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF3A7
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

void func_216(int iParam0, bool bParam1)//Position - 0xF442
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

int func_217(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xF48C
{
	return func_43(iParam0, vParam1, vParam2, func_81(), func_81(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_218(), func_218(), func_218(), func_218(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

var func_218()//Position - 0xF4DB
{
	var uVar0;
	
	return uVar0;
}

void func_219(var uParam0, char* sParam1)//Position - 0xF4E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (unk_0x3362CDE8460ED38B(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					unk_0xDA70546257A3ED8B(sParam1);
					func_84(&(uParam0->f_2E1[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_2E1[iVar0 /*5*/].f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_220()//Position - 0xF55F
{
	int iVar0;
	vector3 vVar1;
	
	switch (iLocal_1953)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			if (func_101(Local_53[0 /*2*/]))
			{
				if (!unk_0x2DA8CA50A72528FB(Local_53[0 /*2*/].f_1))
				{
					Local_53[0 /*2*/].f_1 = func_32(Local_53[0 /*2*/], 0, 0);
				}
				vLocal_56 = { unk_0x0A85AE328B2062E8(Local_53[0 /*2*/]) };
			}
			if (unk_0x724D816EA203A79E(Local_57[2 /*2*/]) && !unk_0x2DA8CA50A72528FB(iLocal_243))
			{
				iLocal_243 = func_268(Local_57[2 /*2*/]);
			}
			unk_0x436D0272182E484D(iLocal_243, "SUBBTN_LABEL");
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0x3857DADBD6EC8A54("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				unk_0x3857DADBD6EC8A54("DHP1_START");
			}
			if (func_101(Local_54[4 /*10*/]))
			{
				unk_0x2E35C4FA5F0ED22F(Local_54[4 /*10*/], 1);
				unk_0x95F58F57ACD332BA(Local_54[4 /*10*/], 0);
			}
			func_267(&uLocal_309, cLocal_51);
			func_267(&uLocal_309, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_266(&uLocal_309, "PORT_OF_LS_PREP_1");
			func_29("dkp1_sub", 7500, 1);
			iLocal_264 = 0;
			iLocal_265 = 0;
			iLocal_266 = 0;
			iLocal_268 = unk_0x105601648511CC64();
			iLocal_269 = 0;
			iLocal_253 = 0;
			iLocal_263 = 0;
			if (iLocal_1962[0] == -1)
			{
				iLocal_1962[0] = unk_0x2F079D1FC5F6CB99();
			}
			if (iLocal_1962[1] == -1)
			{
				iLocal_1962[1] = unk_0x2F079D1FC5F6CB99();
			}
			iLocal_1953++;
			break;
		
		case 1:
			if (iLocal_248)
			{
				if (((!unk_0x28120CFC58E5805D(&(Local_55[0 /*5*/])) && !unk_0x28120CFC58E5805D(&(Local_55[1 /*5*/]))) && !unk_0x28120CFC58E5805D(&(Local_55[2 /*5*/]))) && !unk_0x28120CFC58E5805D(&(Local_55[3 /*5*/])))
				{
					unk_0xB53ED7796543A311(Local_57[0 /*2*/]);
					unk_0xB53ED7796543A311(Local_57[1 /*2*/]);
					if (func_101(Local_53[0 /*2*/]))
					{
						unk_0x1B5B9974B49E0C17(Local_53[0 /*2*/], vLocal_56);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_243))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_243);
					}
					func_262(1);
					func_82(&uLocal_309, joaat("s_m_m_security_01"));
					func_267(&uLocal_309, cLocal_49);
					unk_0x3857DADBD6EC8A54("DHP1_RELEASED");
					unk_0x7456702622C62EA0(1);
					iLocal_301 = unk_0x105601648511CC64();
					iLocal_1953 = 4;
				}
				func_261();
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0, true, 0) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) && !func_205(0))
				{
					if (unk_0x694514BD37EC4E94(2, 51))
					{
						iLocal_293 = unk_0x585DE1CBEEB2D27D(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 1, 2);
						unk_0x9961B404F89D0597(iLocal_293, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						unk_0x2FB83B8BD6C05FD2(iLocal_293, "hand_shake", 0.3f);
						func_202(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						iLocal_246 = unk_0xD0D858E538FD01C3(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()))
						{
							unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_246, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_246, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						unk_0x7456702622C62EA0(1);
						iVar0 = unk_0x39827CF9BEAB804C(1249.787f, -3008.016f, 8.52751f, 5f, 0, 4);
						if (func_101(iVar0))
						{
							unk_0x641B19E156645A92(iVar0, 1250.333f, -3010.219f, 8.3191f, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iVar0, 85.8086f);
							unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
						}
						unk_0x1D1C393C7689E5A6(4f, 0f, 4);
						unk_0xF3C7BD26F94560D9(4);
						iLocal_294 = 1;
						iLocal_1953++;
					}
					else if (!func_210("DKP1_BTN"))
					{
						func_260("DKP1_BTN");
					}
				}
				else if (func_210("DKP1_BTN"))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x77FC50899603581D(iLocal_246) || unk_0x8FD30584EB38411B(iLocal_246) == 1f)
			{
				unk_0x1E463345CF429A99();
				unk_0x10B5C0C7337B8420(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0, 0);
				unk_0x9961B404F89D0597(iLocal_293, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				unk_0x9961B404F89D0597(iLocal_293, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				unk_0xCE33D5EFE2BDE6EF(iLocal_293, 0.1f);
				unk_0x7BEA29A803DB44DE(Local_55[0 /*5*/], Local_53[0 /*2*/]);
				unk_0x7BEA29A803DB44DE(Local_55[1 /*5*/], Local_53[0 /*2*/]);
				unk_0x7BEA29A803DB44DE(Local_55[2 /*5*/], Local_53[0 /*2*/]);
				unk_0x7BEA29A803DB44DE(Local_55[3 /*5*/], Local_53[0 /*2*/]);
				unk_0xB53ED7796543A311(Local_57[0 /*2*/]);
				unk_0xB53ED7796543A311(Local_57[1 /*2*/]);
				if (func_101(Local_53[0 /*2*/]))
				{
					unk_0x1B5B9974B49E0C17(Local_53[0 /*2*/], vLocal_56);
					unk_0x46913653D1C7E82E(Local_53[0 /*2*/]);
				}
				iLocal_301 = unk_0x105601648511CC64();
				unk_0x3857DADBD6EC8A54("DHP1_RELEASED");
				unk_0x7456702622C62EA0(1);
				iLocal_294 = 1;
				iLocal_1953++;
			}
			else if (unk_0x77FC50899603581D(iLocal_246) && unk_0x8FD30584EB38411B(iLocal_246) >= 0.7f)
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), 713668775) != 1)
				{
					unk_0x346129B364057FF6(unk_0xBC25C936A095B5BA(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 1048576000, 0, 1193033728);
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - iLocal_301) > 1500)
			{
				if (iLocal_294)
				{
					unk_0x9961B404F89D0597(iLocal_293, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					unk_0x9961B404F89D0597(iLocal_293, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_294 = 0;
				}
				if ((unk_0x105601648511CC64() - iLocal_301) > 5000 || unk_0x694514BD37EC4E94(2, 201))
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_243))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_243);
					}
					func_262(1);
					func_82(&uLocal_309, joaat("s_m_m_security_01"));
					func_267(&uLocal_309, cLocal_49);
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_190(1, 0, 0, 3000, 0);
					iLocal_301 = unk_0x105601648511CC64();
					iLocal_1953++;
				}
			}
			break;
		
		case 4:
			if (!func_259())
			{
				if (func_19() == 2)
				{
					if (!func_256(func_257(0), 0) && !func_256(func_257(1), 0))
					{
						func_255(12);
						iLocal_1953++;
					}
					else if (func_256(func_257(0), 0) && !func_256(func_257(1), 0))
					{
						func_215(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
						func_215(&uLocal_78, 1, func_257(0), "MICHAEL", 0, 1);
						if (func_252(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_255(12);
							iLocal_1953++;
						}
					}
					else if (!func_256(func_257(0), 0) && func_256(func_257(1), 0))
					{
						func_215(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
						func_215(&uLocal_78, 2, func_257(1), "FRANKLIN", 0, 1);
						if (func_252(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_255(12);
							iLocal_1953++;
						}
					}
					else
					{
						func_215(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
						func_215(&uLocal_78, 1, func_257(0), "MICHAEL", 0, 1);
						func_215(&uLocal_78, 2, func_257(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_255(12);
							iLocal_1953++;
						}
					}
				}
				else if (func_30())
				{
					func_29("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		
		case 5:
			vVar1 = { unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true) };
			if (unk_0x2C13E57F6AC776F8(Local_53[0 /*2*/]) > 0f || vVar1.z < -0.5f)
			{
				unk_0xED8473FC2DE5DC51(Local_55[0 /*5*/]);
				unk_0xED8473FC2DE5DC51(Local_55[1 /*5*/]);
				unk_0xED8473FC2DE5DC51(Local_55[2 /*5*/]);
				unk_0xED8473FC2DE5DC51(Local_55[3 /*5*/]);
				if (iLocal_1962[0] != -1)
				{
					unk_0x38FF8CB6377D36F6(iLocal_1962[0]);
				}
				if (iLocal_1962[1] != -1)
				{
					unk_0x38FF8CB6377D36F6(iLocal_1962[1]);
				}
			}
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0))
			{
				func_221(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
				{
					Local_54[6 /*10*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, true);
					unk_0x7A535CE1F001F3FE(Local_54[6 /*10*/], joaat("weapon_pistol"), -1, false, true);
					unk_0xC8FD3EBBB90E8D7F(Local_54[6 /*10*/], 330, true);
					unk_0x717F82C821538DA2(Local_54[6 /*10*/], 1);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					unk_0xC5A6DFE2B8987B17(&uLocal_244);
					unk_0x346129B364057FF6(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x535008C596714F9E(uLocal_244);
					unk_0xA8E6405305C0D7DF(Local_54[6 /*10*/], uLocal_244);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					Local_54[7 /*10*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, true);
					unk_0xC8FD3EBBB90E8D7F(Local_54[7 /*10*/], 330, true);
					unk_0x7A535CE1F001F3FE(Local_54[7 /*10*/], joaat("weapon_pistol"), -1, false, true);
					unk_0x717F82C821538DA2(Local_54[7 /*10*/], 1);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					unk_0xC5A6DFE2B8987B17(&uLocal_244);
					unk_0x346129B364057FF6(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x535008C596714F9E(uLocal_244);
					unk_0xA8E6405305C0D7DF(Local_54[7 /*10*/], uLocal_244);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					func_83(&uLocal_309, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_54[5 /*10*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, 1, true);
					unk_0x2E35C4FA5F0ED22F(Local_54[5 /*10*/], 1);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					unk_0xC5A6DFE2B8987B17(&uLocal_244);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2096, 2);
					unk_0x346129B364057FF6(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0xAB43C54784946B9F(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, 0, 0);
					unk_0x535008C596714F9E(uLocal_244);
					unk_0xA8E6405305C0D7DF(Local_54[5 /*10*/], uLocal_244);
					unk_0x02DAF06EA4F08219(&uLocal_244);
					func_83(&uLocal_309, joaat("s_m_m_security_01"));
				}
				if (func_101(Local_54[4 /*10*/]))
				{
					unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
					unk_0x641B19E156645A92(Local_54[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, 1, 0, 0, 1);
				}
				else
				{
					Local_54[4 /*10*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 1, true);
				}
				unk_0x2E35C4FA5F0ED22F(Local_54[4 /*10*/], 1);
				unk_0x0DEF5E53360637F2(Local_54[4 /*10*/], 1);
				unk_0x02DAF06EA4F08219(&uLocal_244);
				unk_0xC5A6DFE2B8987B17(&uLocal_244);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2096, 2);
				unk_0x346129B364057FF6(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 1048576000, 0, 1193033728);
				unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xAB43C54784946B9F(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, 0, 0);
				unk_0x535008C596714F9E(uLocal_244);
				unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
				unk_0x02DAF06EA4F08219(&uLocal_244);
				iLocal_305 = unk_0x105601648511CC64();
				iLocal_308 = 0;
				iLocal_307 = 0;
				unk_0x7456702622C62EA0(1);
				unk_0x3857DADBD6EC8A54("DHP1_SUB");
				if (unk_0x2DA8CA50A72528FB(Local_53[0 /*2*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_53[0 /*2*/].f_1));
				}
				unk_0xF8ED8988FAF2823F(&(Local_57[3 /*2*/]));
				unk_0xF8ED8988FAF2823F(&(Local_57[0 /*2*/]));
				unk_0xF8ED8988FAF2823F(&(Local_57[1 /*2*/]));
				func_83(&uLocal_309, joaat("p_amb_phone_01"));
				func_83(&uLocal_309, joaat("s_m_m_dockwork_01"));
				func_83(&uLocal_309, joaat("prop_ld_test_01"));
				func_83(&uLocal_309, joaat("prop_sub_release"));
				func_212(&uLocal_309, cLocal_51);
				unk_0x4CE01E22F13D3913("docksprep1");
				unk_0x1D1C393C7689E5A6(15f, 10f, 4);
				func_188(1);
				iLocal_1953 = 0;
			}
			else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), true) < 5f && !iLocal_253)
			{
				func_211("DKP1_CLIMB", -1);
				iLocal_253 = 1;
			}
			break;
	}
	if ((!iLocal_263 && func_101(Local_53[0 /*2*/])) && unk_0x149E9368A11035DE(Local_53[0 /*2*/]))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "SUB_SPLASH", Local_53[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0);
		iLocal_263 = 1;
	}
	if (((!iLocal_248 && unk_0x724D816EA203A79E(Local_57[0 /*2*/])) && unk_0x724D816EA203A79E(Local_57[1 /*2*/])) && func_101(Local_53[0 /*2*/]))
	{
		if (unk_0x780F6CB41E028D1B(Local_57[0 /*2*/]) && unk_0x780F6CB41E028D1B(Local_57[1 /*2*/]))
		{
			unk_0x1CFDA8CDB7EC8F05(Local_53[0 /*2*/]);
			Local_55[0 /*5*/] = unk_0x8A9B55BE063F4C2E(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1958, 1, fLocal_1958, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x88D7189D924FCBE6(Local_55[0 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], unk_0xA4455714F3DCE207(Local_57[0 /*2*/], 0f, 0f, 0f), unk_0xA4455714F3DCE207(Local_53[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_1958, 0, 0, 0, 0);
			Local_55[1 /*5*/] = unk_0x8A9B55BE063F4C2E(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1958, 1, fLocal_1958, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x88D7189D924FCBE6(Local_55[1 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], unk_0xA4455714F3DCE207(Local_57[0 /*2*/], 0f, 0f, 0f), unk_0xA4455714F3DCE207(Local_53[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_1958, 0, 0, 0, 0);
			Local_55[2 /*5*/] = unk_0x8A9B55BE063F4C2E(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1958, 1, fLocal_1958, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x88D7189D924FCBE6(Local_55[2 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], unk_0xA4455714F3DCE207(Local_57[1 /*2*/], 0f, 0f, 0f), unk_0xA4455714F3DCE207(Local_53[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_1958, 0, 0, 0, 0);
			Local_55[3 /*5*/] = unk_0x8A9B55BE063F4C2E(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_1958, 1, fLocal_1958, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x88D7189D924FCBE6(Local_55[3 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], unk_0xA4455714F3DCE207(Local_57[1 /*2*/], 0f, 0f, 0f), unk_0xA4455714F3DCE207(Local_53[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_1958, 0, 0, 0, 0);
			iLocal_248 = 1;
			iLocal_250 = 0;
			unk_0x46913653D1C7E82E(Local_53[0 /*2*/]);
			unk_0x31C1FC8FA0753412(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
		}
	}
	else if (func_101(Local_53[0 /*2*/]))
	{
		if (!iLocal_250)
		{
			unk_0x46913653D1C7E82E(Local_53[0 /*2*/]);
			iLocal_250 = 1;
		}
		unk_0x346478B12F69D4E3(Local_53[0 /*2*/], false);
		unk_0x31C1FC8FA0753412(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
	}
	if (!iLocal_251)
	{
		if (unk_0x724D816EA203A79E(Local_57[3 /*2*/]))
		{
			if (unk_0x780F6CB41E028D1B(Local_57[3 /*2*/]))
			{
				unk_0x5DBE04849460E608(Local_57[3 /*2*/], Local_54[4 /*10*/], unk_0xFA18E720A39243D0(Local_54[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_251 = 1;
			}
		}
	}
	if (unk_0x724D816EA203A79E(Local_57[3 /*2*/]) && ((func_101(Local_54[4 /*10*/]) && unk_0x889DA6CE8E4DB344(Local_54[4 /*10*/])) || !func_101(Local_54[4 /*10*/])))
	{
		if (func_101(Local_54[4 /*10*/]) && unk_0x96044E39418AAF17(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			unk_0x08FA5F7132D73F6F(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -1056964608);
		}
		if (unk_0x2FAEA11D96CF14A3(Local_57[3 /*2*/]))
		{
			unk_0x17175087F2DB6AC8(Local_57[3 /*2*/], 1, 1);
		}
	}
	if (func_19() == 2)
	{
		if (func_101(Local_53[0 /*2*/]))
		{
			unk_0x8300C56586249382(Local_53[0 /*2*/], 1);
		}
	}
	else if (func_101(Local_53[0 /*2*/]))
	{
		unk_0x8300C56586249382(Local_53[0 /*2*/], 0);
	}
}

void func_221(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x106B1
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_251(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_248(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_222(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_222(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x1072C
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
		func_247(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_115(iParam0, &Var0);
		if (func_89(vParam1, 0f, 0f, 0f, 0))
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
		func_241(iParam3, &Var0, vParam1, fParam2, func_111(iParam0));
		func_223(iParam3, iParam0, 0);
	}
}

void func_223(int iParam0, int iParam1, int iParam2)//Position - 0x10855
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_240(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_164();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_251(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_224(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_224(int iParam0, int iParam1)//Position - 0x10972
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_225(iParam0))
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
	func_115(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_225(int iParam0)//Position - 0x10B74
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_121(iParam0, 0, 0)) || func_121(iParam0, 1, 0)) || func_121(iParam0, 2, 0)) || func_111(iParam0) != 145) || func_239(iParam0)) || func_238(iParam0)) || func_237(iParam0)) || func_236(iParam0)) || !func_226(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_238(iParam0))
		{
		}
		if (func_238(iParam0))
		{
		}
		if (func_121(iParam0, 0, 0))
		{
		}
		if (func_121(iParam0, 1, 0))
		{
		}
		if (func_121(iParam0, 2, 0))
		{
		}
		if (func_111(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_226(int iParam0)//Position - 0x10C51
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_227(iParam0, 0))
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

int func_227(int iParam0, bool bParam1)//Position - 0x10E02
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
		if (!func_235())
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
		if ((((!func_234() && !func_233()) && !func_232()) && !func_231()) && !func_235())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_232())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_230(iParam0))
		{
			return 0;
		}
	}
	if (!func_228(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0)//Position - 0x10F90
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_229())
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

int func_229()//Position - 0x1105C
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_230(int iParam0)//Position - 0x11073
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

int func_231()//Position - 0x12B1A
{
	return 0;
}

int func_232()//Position - 0x12B23
{
	return 1;
}

int func_233()//Position - 0x12B2C
{
	return 1;
}

int func_234()//Position - 0x12B35
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_235()//Position - 0x12B4E
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

int func_236(int iParam0)//Position - 0x12C09
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_227(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x12C4F
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

int func_238(int iParam0)//Position - 0x12C8A
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

int func_239(int iParam0)//Position - 0x12D06
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

int func_240(var uParam0, int iParam1)//Position - 0x12DEE
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
			uParam0->f_4 = func_113(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_113(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_113(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_113(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_113(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_113(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_113(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_113(2, 1);
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
			if (func_235())
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
			if (func_235())
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
		if (!func_89(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_89(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_89(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

void func_241(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x144E7
{
	if (func_240(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_246(iParam0);
			func_245(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_242(iParam0, 1);
		}
	}
}

void func_242(int iParam0, bool bParam1)//Position - 0x145E6
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_244(iParam0, 0))
		{
			func_243(iParam0, 1, 0);
			func_243(iParam0, 2, 0);
			func_243(iParam0, 3, 0);
			func_243(iParam0, 4, 0);
			func_243(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_243(iParam0, 0, 0);
	}
}

void func_243(int iParam0, int iParam1, bool bParam2)//Position - 0x14643
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

bool func_244(int iParam0, int iParam1)//Position - 0x1467E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_245(var uParam0, var uParam1)//Position - 0x146A1
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

void func_246(int iParam0)//Position - 0x1476D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_240(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_242(iParam0, 0);
		}
	}
}

void func_247(int iParam0)//Position - 0x147E7
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_246(iParam0);
	func_242(iParam0, 0);
}

int func_248(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1480E
{
	int iVar0;
	
	iVar0 = func_249(vParam0, iParam1, 1);
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

int func_249(vector3 vParam0, int iParam1, int iParam2)//Position - 0x14924
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
				if (func_250(iVar0) || iParam2 == 0)
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

bool func_250(int iParam0)//Position - 0x149B3
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_251(int iParam0)//Position - 0x149CB
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

bool func_252(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)//Position - 0x149E7
{
	var uVar0;
	var uVar1;
	
	func_28(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_254(2, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_253(&uVar0, &uVar1, iParam6, 0);
}

int func_253(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x14A40
{
	int iVar0;
	
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam2 > Global_3DBA)
			{
				if (bParam3 == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
				}
				else
				{
					func_27();
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
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_25();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_419C = Global_419D;
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3C3B.f_172 = Global_4195;
		Global_3DB4 = Global_3DB5;
		Global_3DB6 = Global_3DB7;
		if (Global_3EBA == 0)
		{
			Global_3E52[0 /*6*/] = { Global_3E6C[0 /*6*/] };
			Global_3E52[1 /*6*/] = { Global_3E6C[1 /*6*/] };
			Global_3E86[0 /*6*/] = { Global_3EA0[0 /*6*/] };
			Global_3E86[1 /*6*/] = { Global_3EA0[1 /*6*/] };
			Global_3E5F[0 /*6*/] = { Global_3E79[0 /*6*/] };
			Global_3E5F[1 /*6*/] = { Global_3E79[1 /*6*/] };
			Global_3E93[0 /*6*/] = { Global_3EAD[0 /*6*/] };
			Global_3E93[1 /*6*/] = { Global_3EAD[1 /*6*/] };
		}
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam3)
			{
				func_18();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam2 == 13)
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
					if (Global_3EBA == 0)
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
			}
			func_15();
			Global_3DC2 = bParam3;
		}
		Global_3DBA = iParam2;
		if (Global_3DB4 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_3DB4)
			{
				StringCopy(&(Global_3C3B.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_3C3B.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_394A = 0;
		func_14();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_3DBA || iParam2 == Global_3DBA)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_27();
	}
	return 0;
}

void func_254(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x14DAA
{
	Global_3DB5 = iParam0;
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_419D = 0;
	Global_280001 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_255(int iParam0)//Position - 0x14E32
{
	unk_0xF0059F27F7BB6680(&Global_15B7B, iParam0);
}

int func_256(int iParam0, int iParam1)//Position - 0x14E44
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_22(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_257(iVar0) != iParam0)
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

int func_257(int iParam0)//Position - 0x14EA0
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_19())
	{
		return unk_0xBC25C936A095B5BA();
	}
	return Global_161D2[func_258(iParam0)];
}

int func_258(int iParam0)//Position - 0x14ED1
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

int func_259()//Position - 0x14F0C
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

void func_260(char* sParam0)//Position - 0x14F28
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

void func_261()//Position - 0x14F3E
{
	int iVar0;
	bool bVar1;
	
	iLocal_247 = 0;
	while (iLocal_247 < Local_55)
	{
		if (!unk_0x28120CFC58E5805D(&(Local_55[iLocal_247 /*5*/])))
		{
			if (!Local_55[iLocal_247 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_247++;
	}
	if (bVar1)
	{
		if (((((!unk_0x28120CFC58E5805D(&(Local_55[0 /*5*/])) && !unk_0x28120CFC58E5805D(&(Local_55[1 /*5*/]))) && (!Local_55[0 /*5*/].f_4 || !Local_55[1 /*5*/].f_4)) || ((!unk_0x28120CFC58E5805D(&(Local_55[2 /*5*/])) && !unk_0x28120CFC58E5805D(&(Local_55[3 /*5*/]))) && (!Local_55[2 /*5*/].f_4 || !Local_55[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_1963 > 0)
			{
				if (iLocal_1962[(iLocal_1963 - 1)] != -1)
				{
					unk_0x38FF8CB6377D36F6(iLocal_1962[(iLocal_1963 - 1)]);
				}
			}
			if (iLocal_1962[iLocal_1963] != -1)
			{
				unk_0x10B5C0C7337B8420(iLocal_1962[iLocal_1963], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				iLocal_1963++;
			}
		}
		else if (iVar0 <= 2)
		{
			unk_0x10B5C0C7337B8420(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
		}
		iLocal_247 = 0;
		while (iLocal_247 < Local_55)
		{
			if (!unk_0x28120CFC58E5805D(&(Local_55[iLocal_247 /*5*/])))
			{
				if (!Local_55[iLocal_247 /*5*/].f_4)
				{
					unk_0x10B5C0C7337B8420(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				}
				Local_55[iLocal_247 /*5*/].f_4 = 1;
			}
			iLocal_247++;
		}
		if (iVar0 >= 4)
		{
			if (iLocal_1962[0] != -1)
			{
				unk_0x38FF8CB6377D36F6(iLocal_1962[0]);
			}
			if (iLocal_1962[1] != -1)
			{
				unk_0x38FF8CB6377D36F6(iLocal_1962[1]);
			}
		}
	}
}

void func_262(int iParam0)//Position - 0x15111
{
	switch (iParam0)
	{
		case 0:
			func_82(&uLocal_309, joaat("submersible"));
			func_82(&uLocal_309, joaat("prop_ld_test_01"));
			func_82(&uLocal_309, joaat("prop_sub_release"));
			func_82(&uLocal_309, joaat("s_m_m_dockwork_01"));
			func_267(&uLocal_309, cLocal_50);
			func_267(&uLocal_309, cLocal_51);
			func_265(&uLocal_309, "docksprep1");
			func_82(&uLocal_309, joaat("p_amb_phone_01"));
			func_264(&uLocal_309);
			func_266(&uLocal_309, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			func_82(&uLocal_309, joaat("submersible"));
			func_82(&uLocal_309, joaat("packer"));
			func_82(&uLocal_309, joaat("armytrailer"));
			func_82(&uLocal_309, iLocal_278);
			func_82(&uLocal_309, iLocal_281);
			func_82(&uLocal_309, iLocal_284);
			func_263(&uLocal_309);
			func_264(&uLocal_309);
			break;
		
		case 2:
		case 3:
			func_82(&uLocal_309, joaat("submersible"));
			func_82(&uLocal_309, joaat("packer"));
			func_82(&uLocal_309, joaat("armytrailer"));
			func_82(&uLocal_309, joaat("prop_sub_cover_01"));
			func_82(&uLocal_309, joaat("prop_tarp_strap"));
			break;
	}
}

void func_263(var uParam0)//Position - 0x1524C
{
	uParam0->f_35C.f_2 = 0;
	if (!uParam0->f_35C.f_1)
	{
		if (!uParam0->f_35C)
		{
			unk_0xA8396BF0E2C53C39();
			uParam0->f_35C = 1;
		}
		uParam0->f_3D6 = 1;
	}
}

void func_264(var uParam0)//Position - 0x15280
{
	uParam0->f_360.f_2 = 0;
	if (!uParam0->f_360.f_1)
	{
		if (!uParam0->f_360)
		{
			unk_0x13308192B3805B6D();
			uParam0->f_360 = 1;
		}
		uParam0->f_3D6 = 1;
	}
}

int func_265(var uParam0, char* sParam1)//Position - 0x152B4
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

int func_266(var uParam0, char* sParam1)//Position - 0x1537B
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (unk_0x3362CDE8460ED38B(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_2E1[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_2E1[iVar0 /*5*/].f_1)
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
		unk_0x284F2ACE6839D3C0(sParam1, false, -1);
		uParam0->f_2E1[iVar1 /*5*/] = 1;
		uParam0->f_2E1[iVar1 /*5*/].f_3 = unk_0x105601648511CC64();
		uParam0->f_2E1[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_267(var uParam0, char* sParam1)//Position - 0x15445
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_111)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			if (unk_0x3362CDE8460ED38B(uParam0->f_111[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_111[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_111[iVar0 /*5*/].f_1)
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
		unk_0x522053D86D6E1C7A(sParam1);
		uParam0->f_111[iVar1 /*5*/] = 1;
		uParam0->f_111[iVar1 /*5*/].f_3 = unk_0x105601648511CC64();
		uParam0->f_111[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x1550C
{
	return func_33(iParam0, 1, 0);
}

void func_269()//Position - 0x1551C
{
	int iVar0;
	
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_54[iLocal_247 /*10*/]))
		{
			if (Local_54[iLocal_247 /*10*/] != Local_54[3 /*10*/])
			{
				if (iLocal_1952 == 0)
				{
					func_284(Local_54[iLocal_247 /*10*/], &(Local_54[iLocal_247 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
				else if (unk_0x2DA8CA50A72528FB(Local_54[iLocal_247 /*10*/].f_2))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_54[iLocal_247 /*10*/].f_2));
				}
			}
			if (unk_0x36CEFBE9B745A58D(Local_54[iLocal_247 /*10*/]))
			{
				if (Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
				{
					func_87(7);
				}
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_1952 == 2 && Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
			{
				if (func_10(Local_54[3 /*10*/], unk_0xBC25C936A095B5BA(), 1) > 300f)
				{
					func_87(11);
				}
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_53[iLocal_247 /*2*/]))
		{
			if (!unk_0xE59B7F5A03335350(Local_53[iLocal_247 /*2*/], 0))
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					func_87(1);
				}
				else if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					func_87(2);
				}
				else if (iLocal_247 == 3)
				{
					func_87(8);
				}
				func_283(&(Local_53[iLocal_247 /*2*/]));
			}
			else if (iLocal_257)
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (iLocal_1952 == 2)
					{
						if (unk_0x2C13E57F6AC776F8(Local_53[iLocal_247 /*2*/]) > 0.5f)
						{
							func_87(5);
						}
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (func_282(&(Local_53[iLocal_247 /*2*/])))
					{
						func_87(3);
						func_283(&(Local_53[iLocal_247 /*2*/]));
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					if (iLocal_1952 == 1 && iLocal_1953 < 3)
					{
						if (func_282(&(Local_53[iLocal_247 /*2*/])))
						{
							func_87(4);
							func_283(&(Local_53[iLocal_247 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_247++;
	}
	if (func_101(Local_53[0 /*2*/]) && func_101(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), true) > 750f)
		{
			func_87(10);
		}
		else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), true) > 700f)
		{
			if (!iLocal_254 && func_30())
			{
				func_29("DKP1_ABSUB", 7500, 1);
				iLocal_254 = 1;
			}
		}
		else
		{
			iLocal_254 = 0;
		}
	}
	if (func_101(unk_0xBC25C936A095B5BA()))
	{
		func_275();
	}
	if (iLocal_1952 == 0 && iLocal_1953 > 0)
	{
		func_272();
	}
	if (iLocal_1952 == 0 || iLocal_1952 == 1)
	{
		if (func_101(Local_53[0 /*2*/]))
		{
			if (!iLocal_1960)
			{
				func_271(Local_53[0 /*2*/], 588);
				iLocal_1960 = 1;
			}
		}
		else if (iLocal_1960)
		{
			func_271(0, 588);
			iLocal_1960 = 0;
		}
	}
	else if (iLocal_1952 == 2)
	{
		if (func_101(Local_53[2 /*2*/]))
		{
			if (!iLocal_1961)
			{
				func_271(Local_53[2 /*2*/], 590);
				iLocal_1961 = 1;
			}
		}
		else if (iLocal_1961)
		{
			func_271(0, 590);
			iLocal_1961 = 0;
		}
	}
	if ((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0, true, 0))
	{
		unk_0xE79A93A1A9ABDBEC(unk_0x56BEECB328B6D29D("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
		}
		else
		{
			iVar0 = unk_0xBC25C936A095B5BA();
		}
		if ((!unk_0x2A348A3A98B80B13(iVar0) && !unk_0x149E9368A11035DE(iVar0)) && (!unk_0x724D816EA203A79E(Local_53[0 /*2*/]) || !unk_0xE921F8171F0733B3(iVar0, Local_53[0 /*2*/])))
		{
			if (!iLocal_256)
			{
				func_270(593);
				iLocal_256 = 1;
			}
		}
	}
	if (!iLocal_258)
	{
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			unk_0x9B90420B04C07704("OnlyAllowScriptTriggerPoliceScanner", 1);
			unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_258 = 1;
		}
	}
	if (unk_0xCDE05E3688DE990D())
	{
		unk_0xB5FE06FB08CEC65C(Local_53[0 /*2*/]);
	}
}

void func_270(int iParam0)//Position - 0x15A62
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

void func_271(int iParam0, int iParam1)//Position - 0x15AD3
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

void func_272()//Position - 0x15B3E
{
	switch (iLocal_264)
	{
		case 0:
			if (func_101(Local_54[4 /*10*/]))
			{
				if (iLocal_269)
				{
					unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
					if (unk_0x1E8349F219AC5AF9("docksprep1"))
					{
						unk_0xB0C1A00D86375366(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						unk_0x44840FD68E426678("docksprep1");
					}
				}
			}
			iLocal_270 = 0;
			iLocal_264 = 1;
			break;
		
		case 1:
			if (!iLocal_269)
			{
				if ((unk_0x105601648511CC64() - iLocal_268) > 2000 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_54[4 /*10*/], true), true) < 10f)
				{
					iLocal_269 = 1;
					iLocal_264 = 0;
				}
			}
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0))
			{
				if (func_101(Local_54[4 /*10*/]))
				{
					if (unk_0x1028B6250119A74B(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA()))
					{
						unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
						unk_0xAFD2CBD312D69CFA(Local_54[4 /*10*/]);
						func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 2;
					}
					else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_54[4 /*10*/], true), true) < 12f && unk_0x447F576F7C6DDE10(unk_0xB5CEFD608600A09F()) > 8.5f)
					{
						unk_0xAFD2CBD312D69CFA(Local_54[4 /*10*/]);
						if (!func_274(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0xCF4C6C235CD09F4F(Local_54[4 /*10*/], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 4000);
							unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_54[4 /*10*/], true), true) < 12f && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!func_274(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0xCF4C6C235CD09F4F(Local_54[4 /*10*/], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 4000);
							unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (((unk_0x9E300540104C6219(unk_0xBC25C936A095B5BA()) && (unk_0x6E06C0DB9B43570D() >= 19 || unk_0x6E06C0DB9B43570D() < 6)) && func_10(unk_0xBC25C936A095B5BA(), Local_54[4 /*10*/], 1) < 25f) && (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_54[4 /*10*/]) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_54[4 /*10*/])))
					{
						if (!func_274(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0xCF4C6C235CD09F4F(Local_54[4 /*10*/], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 4000);
							unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_54[4 /*10*/], true), true) < 12f && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!func_274(Local_54[4 /*10*/], 1464580341, 1))
						{
							unk_0xCF4C6C235CD09F4F(Local_54[4 /*10*/], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 4000);
							unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_1953 > 1)
				{
					if (func_101(Local_54[4 /*10*/]))
					{
						if (unk_0x5CEC84BB4AC55121(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							unk_0xAFD2CBD312D69CFA(Local_54[4 /*10*/]);
							func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_264 = 3;
							iLocal_266 = 3;
							unk_0x49D46EE47C9CCB66(Local_54[4 /*10*/]);
							unk_0x346129B364057FF6(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_268 = unk_0x105601648511CC64();
							iLocal_269 = 0;
						}
					}
				}
			}
			if (func_101(Local_54[4 /*10*/]))
			{
				if (!unk_0x4FB6F74D29923289(Local_54[4 /*10*/]))
				{
					if (iLocal_269)
					{
						if ((unk_0xF4FCC3C1048FF2AB(Local_54[4 /*10*/], 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(Local_54[4 /*10*/], 713668775) != 1) && unk_0xF4FCC3C1048FF2AB(Local_54[4 /*10*/], 1464580341) != 1)
						{
							if (!unk_0x96044E39418AAF17(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							if (unk_0x4DBCE270B354E123(Local_54[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, 0, true, 0))
							{
								if (unk_0x1E8349F219AC5AF9("docksprep1"))
								{
									unk_0xB0C1A00D86375366(Local_54[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (unk_0x1E8349F219AC5AF9("docksprep1"))
							{
								unk_0xB0C1A00D86375366(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((unk_0x105601648511CC64() - iLocal_272) > 10000)
					{
						if (!unk_0xA0A0097E06ED1B3C(Local_54[4 /*10*/]))
						{
							if (unk_0x4DBCE270B354E123(Local_54[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, 0, true, 0))
							{
								unk_0x7182D3A0668024C1(Local_54[4 /*10*/], 0, 0);
							}
							else if (unk_0x4DBCE270B354E123(Local_54[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, 0, true, 0))
							{
								unk_0x7182D3A0668024C1(Local_54[4 /*10*/], 0, 0);
							}
						}
						else
						{
							iLocal_272 = unk_0x105601648511CC64();
							unk_0xFB6194688A804FD4(Local_54[4 /*10*/], 1, -1, 3000);
						}
					}
					if (!unk_0x9986AD62CA3DE747(Local_54[4 /*10*/]) && (unk_0x105601648511CC64() - iLocal_273) > 4000)
					{
						func_273(Local_54[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_273 = unk_0x105601648511CC64();
					}
				}
				if (((unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 122) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 123)) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 124)) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 116))
				{
					unk_0xAFD2CBD312D69CFA(Local_54[4 /*10*/]);
					func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0x2A2F7485FD2B9A29(Local_54[4 /*10*/], -1, unk_0xBC25C936A095B5BA(), -1, 1);
				}
				else if (unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 23))
				{
					unk_0xAFD2CBD312D69CFA(Local_54[4 /*10*/]);
					func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
					unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0xEE7131C3C73E7282(Local_54[4 /*10*/], -1);
				}
				else if (unk_0xD9C1758D86688CEA(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA(), 1))
				{
					unk_0xAFD2CBD312D69CFA(Local_54[4 /*10*/]);
					unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 2:
			if (func_101(Local_54[4 /*10*/]))
			{
				if (!unk_0x640A454FD54BBEF2(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA()))
				{
					unk_0x56F2E1B5599188FA(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA(), -1, 3104, 2);
				}
			}
			switch (iLocal_265)
			{
				case 0:
					if (func_101(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_244);
							unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 4f, 2f, 1073741824, 0);
							unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
							unk_0x535008C596714F9E(uLocal_244);
							unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
							unk_0x02DAF06EA4F08219(&uLocal_244);
							unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
							iLocal_267 = unk_0x105601648511CC64();
							iLocal_265 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x105601648511CC64() - iLocal_267) > 4000)
					{
						if (func_101(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								unk_0xC5A6DFE2B8987B17(&uLocal_244);
								unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 3f, 1f, 1073741824, 0);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
								unk_0x535008C596714F9E(uLocal_244);
								unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
								unk_0x02DAF06EA4F08219(&uLocal_244);
								unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								iLocal_267 = unk_0x105601648511CC64();
								iLocal_265 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x105601648511CC64() - iLocal_267) > 8000)
					{
						if (func_101(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_267 = unk_0x105601648511CC64();
								iLocal_266 = 4;
								iLocal_264 = 3;
							}
						}
					}
					break;
			}
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || !func_101(Local_54[4 /*10*/]))
			{
				iLocal_264 = 0;
			}
			unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iLocal_271, 1);
			if (func_101(Local_54[4 /*10*/]))
			{
				if ((unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 122) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 123)) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 124))
				{
					func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					unk_0x2A2F7485FD2B9A29(Local_54[4 /*10*/], -1, unk_0xBC25C936A095B5BA(), -1, 1);
					unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_54[4 /*10*/]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_54[4 /*10*/]))
				{
					if (unk_0x1966F403E5C2133D(iLocal_271) != -728555052 && iLocal_271 != joaat("weapon_unarmed"))
					{
						func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 3;
						iLocal_266 = 1;
						unk_0x49D46EE47C9CCB66(Local_54[4 /*10*/]);
						unk_0x2A2F7485FD2B9A29(Local_54[4 /*10*/], -1, unk_0xBC25C936A095B5BA(), -1, 0);
					}
				}
				else if (unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 23))
				{
					func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					unk_0xEE7131C3C73E7282(Local_54[4 /*10*/], -1);
					unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0xD9C1758D86688CEA(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA(), 1))
				{
					func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_266)
			{
				case 1:
					if (func_101(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 2:
					if (func_101(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 3:
					if (func_101(Local_54[4 /*10*/]))
					{
						if (unk_0x4DBCE270B354E123(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, 0, true, 0))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_270 = 1;
								iLocal_266 = 4;
							}
						}
						if (!unk_0x1A6AA4082E241660(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							unk_0x56F2E1B5599188FA(Local_54[4 /*10*/], Local_53[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 4:
					if (func_101(Local_54[4 /*10*/]))
					{
						if (!unk_0x2CDE18D6C89522AD(Local_54[4 /*10*/]) && !unk_0x69871CAEBDD20966(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
								unk_0xC5A6DFE2B8987B17(&uLocal_244);
								unk_0xE896C0AD02364F2A(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
								if (iLocal_270)
								{
									unk_0x346129B364057FF6(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
								}
								else
								{
									unk_0x346129B364057FF6(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0xEFFE6F8EE5AA8DAD(0, 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
								}
								unk_0x535008C596714F9E(uLocal_244);
								unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
								unk_0x02DAF06EA4F08219(&uLocal_244);
								iLocal_267 = unk_0x105601648511CC64();
								unk_0x3857DADBD6EC8A54("DHP1_ATTACKED");
								iLocal_274 = 0;
								iLocal_266 = 5;
							}
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 5:
					if ((unk_0x105601648511CC64() - iLocal_267) > 8000)
					{
						if (!iLocal_274)
						{
							if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1)
							{
								unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 1, 0);
								unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
								iLocal_274 = 1;
							}
						}
						if (func_101(Local_54[4 /*10*/]))
						{
							if (iLocal_270)
							{
								if (!unk_0x889DA6CE8E4DB344(Local_54[4 /*10*/]))
								{
									unk_0x5558ED6D4A2DEC93(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
								}
							}
							else if (unk_0xF4FCC3C1048FF2AB(Local_54[4 /*10*/], 923520851) != 1)
							{
								unk_0xEFFE6F8EE5AA8DAD(Local_54[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
							}
						}
					}
					if (!iLocal_270)
					{
						unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iLocal_271, 1);
						if (func_101(Local_54[4 /*10*/]))
						{
							if ((unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 122) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 123)) || unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 124))
							{
								func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
									unk_0xC5A6DFE2B8987B17(&uLocal_244);
									unk_0x2A2F7485FD2B9A29(0, 3000, unk_0xBC25C936A095B5BA(), -1, 0);
									unk_0x346129B364057FF6(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
									unk_0x535008C596714F9E(uLocal_244);
									unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
									unk_0x02DAF06EA4F08219(&uLocal_244);
									iLocal_267 = unk_0x105601648511CC64();
									iLocal_270 = 1;
								}
							}
							else if ((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_54[4 /*10*/]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_54[4 /*10*/])) && unk_0xC5B8A5F778E321DD(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA(), 160f))
							{
								if (unk_0x1966F403E5C2133D(iLocal_271) != -728555052 && iLocal_271 != joaat("weapon_unarmed"))
								{
									func_215(&uLocal_78, 4, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
										unk_0xC5A6DFE2B8987B17(&uLocal_244);
										unk_0x2A2F7485FD2B9A29(0, 3000, unk_0xBC25C936A095B5BA(), -1, 0);
										unk_0x346129B364057FF6(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
										unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
										unk_0x535008C596714F9E(uLocal_244);
										unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
										unk_0x02DAF06EA4F08219(&uLocal_244);
										iLocal_270 = 1;
										iLocal_267 = unk_0x105601648511CC64();
									}
								}
							}
							else if (unk_0xBF94E62A1FA7B7F3(Local_54[4 /*10*/], 23))
							{
								func_215(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
									unk_0xC5A6DFE2B8987B17(&uLocal_244);
									unk_0xEE7131C3C73E7282(0, -1);
									unk_0x346129B364057FF6(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
									unk_0x535008C596714F9E(uLocal_244);
									unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
									unk_0x02DAF06EA4F08219(&uLocal_244);
									iLocal_270 = 1;
								}
							}
							else if (unk_0xD9C1758D86688CEA(Local_54[4 /*10*/], unk_0xBC25C936A095B5BA(), 1))
							{
								unk_0xA4E856A8CD53B8DF(Local_54[4 /*10*/]);
								unk_0xC5A6DFE2B8987B17(&uLocal_244);
								unk_0x346129B364057FF6(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000, 0, 1193033728);
								unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
								unk_0x535008C596714F9E(uLocal_244);
								unk_0xA8E6405305C0D7DF(Local_54[4 /*10*/], uLocal_244);
								unk_0x02DAF06EA4F08219(&uLocal_244);
								iLocal_270 = 1;
								iLocal_267 = unk_0x105601648511CC64();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_273(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x16BB0
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_54(iParam3), 0);
}

int func_274(int iParam0, int iParam1, bool bParam2)//Position - 0x16BC9
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

void func_275()//Position - 0x16C0F
{
	switch (iLocal_308)
	{
		case 0:
			switch (iLocal_307)
			{
				case 0:
					if (func_101(Local_53[0 /*2*/]))
					{
						if ((!unk_0x4B8E3E5901E59EB8() && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
						{
							func_280();
							iLocal_305 = unk_0x105601648511CC64();
							iLocal_307 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x105601648511CC64() - iLocal_305) > 6000 && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0))
					{
						func_215(&uLocal_78, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					break;
				
				case 2:
					if (func_11())
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0))
						{
							if (func_31())
							{
								func_279(0);
							}
						}
						else if (!func_31())
						{
							func_279(1);
						}
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 2;
					iLocal_307 = 0;
					iLocal_305 = unk_0x105601648511CC64();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_307)
			{
				case 0:
					if ((!unk_0x4B8E3E5901E59EB8() && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0)) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 324.7653f, -2974.495f, -1f, true) < 110f)
					{
						func_280();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					if (func_12(&uLocal_78, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (func_11())
					{
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 3;
					iLocal_307 = 0;
					iLocal_305 = unk_0x105601648511CC64();
					break;
			}
			break;
		
		case 3:
			if (func_101(Local_53[2 /*2*/]) && func_101(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[2 /*2*/], 0) && unk_0x62F3A07C43FFB568(Local_54[3 /*10*/], Local_53[2 /*2*/], 0))
						{
							if (func_11())
							{
								func_280();
							}
							else
							{
								iLocal_307 = 1;
							}
						}
						break;
					
					case 1:
						func_273(Local_54[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_307 = 2;
						break;
					
					case 2:
						if (!unk_0x9986AD62CA3DE747(Local_54[3 /*10*/]))
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 4;
						iLocal_307 = 0;
						iLocal_305 = unk_0x105601648511CC64();
						break;
					}
			}
			break;
		
		case 4:
			if (func_101(Local_53[2 /*2*/]) && func_101(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x62F3A07C43FFB568(Local_54[3 /*10*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && unk_0xB6A16B5E7EB81F9B(Local_53[1 /*2*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && !unk_0x4B8E3E5901E59EB8())
						{
							func_280();
							iLocal_305 = unk_0x105601648511CC64();
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x105601648511CC64() - iLocal_305) > 2000)
						{
							func_215(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_307 = 2;
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x62F3A07C43FFB568(Local_54[3 /*10*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && unk_0xB6A16B5E7EB81F9B(Local_53[1 /*2*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
							{
								if (func_31())
								{
									func_279(0);
								}
							}
							else if (!func_31())
							{
								func_279(1);
							}
						}
						else
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 5;
						iLocal_307 = 0;
						iLocal_305 = unk_0x105601648511CC64();
						break;
				}
				if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), -323.73f, -2613.702f, 5f, true) < 60f)
				{
					func_278();
					iLocal_307 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_307)
			{
				case 0:
					if ((((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x62F3A07C43FFB568(Local_54[3 /*10*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && unk_0xB6A16B5E7EB81F9B(Local_53[1 /*2*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && !unk_0x4B8E3E5901E59EB8()) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0, true, 0))
					{
						func_280();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_277();
					func_215(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_276(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_276(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 6;
					iLocal_307 = 0;
					iLocal_305 = unk_0x105601648511CC64();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_307)
			{
				case 0:
					if ((((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x62F3A07C43FFB568(Local_54[3 /*10*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && unk_0xB6A16B5E7EB81F9B(Local_53[1 /*2*/], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && !unk_0x4B8E3E5901E59EB8()) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true), -323.73f, -2613.702f, 5f, true) < 40f)
					{
						func_280();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_277();
					func_215(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_276(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_276(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
}

bool func_276(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17246
{
	func_28(uParam0, 145, sParam1, iParam5, iParam6, 0);
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

int func_277()//Position - 0x1729A
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_278()//Position - 0x172BB
{
	Global_394A = 0;
	func_27();
}

void func_279(int iParam0)//Position - 0x172CB
{
	Global_41AB = iParam0;
}

void func_280()//Position - 0x172D8
{
	Global_394A = 0;
	func_281();
}

void func_281()//Position - 0x172E8
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

int func_282(var uParam0)//Position - 0x1730C
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

void func_283(int iParam0)//Position - 0x17366
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

int func_284(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1739E
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
		unk_0xD09C169D88640D1B(iParam0, iParam4);
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

void func_285()//Position - 0x17575
{
	vector3 vVar0;
	float fVar1;
	
	if (iLocal_1956 == 1)
	{
		if (iLocal_1951 == 0)
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
				func_188(iLocal_1957);
			}
		}
		else if (iLocal_1951 == 3)
		{
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			func_303();
			if (unk_0x102F1A3BD4B68933())
			{
				unk_0xD103510B8989BEB2();
			}
			func_302(&uLocal_309);
			if (!func_301())
			{
				func_300(iLocal_1957, &vVar0, &fVar1);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fVar1);
				unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
				func_299(&uLocal_309, vVar0, 50f, 0);
			}
			func_262(iLocal_1952);
			while (!func_297(&uLocal_309))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1952)
			{
				case 0:
					func_295();
					break;
				
				case 1:
					func_294();
					break;
				
				case 2:
					func_290();
					break;
				
				case 3:
					func_286();
					break;
			}
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			unk_0x3857DADBD6EC8A54("DHP1_START");
			iLocal_1956 = 0;
			if (!func_301())
			{
				func_195(&uLocal_309);
			}
		}
	}
}

void func_286()//Position - 0x176AC
{
	if (!func_101(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, 1, 1, 0);
		unk_0x8300C56586249382(Local_53[0 /*2*/], 0);
		unk_0x2D655AA68FA1736B(Local_53[0 /*2*/], false, 1, 0);
		unk_0x93D3868AE0D83B7C(Local_53[0 /*2*/], 1);
		unk_0x4E87F356DA56EB3F(Local_53[0 /*2*/], 1);
		unk_0xD1FBDB199C700B42(Local_53[0 /*2*/], 0);
	}
	if (!func_101(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, 1, 1, 0);
		unk_0x8300C56586249382(Local_53[2 /*2*/], 0);
		unk_0x6012A6A4F2950585(Local_53[2 /*2*/], 0);
		unk_0xE82050D41B744FF3(Local_53[2 /*2*/], false);
		unk_0xA73D1278857991A2(Local_53[2 /*2*/], true);
	}
	if (!func_101(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, 1, 1, 0);
		unk_0xA73D1278857991A2(Local_53[1 /*2*/], true);
	}
	unk_0x0A0AE625CFB21683(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	unk_0x8AA34A46B8399BF5(Local_53[1 /*2*/]);
	unk_0x4E00F4ECD5BE493A(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x724D816EA203A79E(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = unk_0xB6896943DA475493(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, true, true, 0);
		unk_0x5DBE04849460E608(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, vLocal_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x724D816EA203A79E(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = unk_0xB6896943DA475493(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, 0);
		unk_0x5DBE04849460E608(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, vLocal_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (func_301())
	{
		func_287(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)//Position - 0x1789A
{
	if (func_289() && func_301())
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
		func_288(0);
	}
}

void func_288(int iParam0)//Position - 0x1795E
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

int func_289()//Position - 0x17987
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

void func_290()//Position - 0x179AB
{
	if (!func_101(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, 1, 1, 0);
		unk_0xA9B952D290D440DC(Local_53[0 /*2*/], false);
		unk_0x2D655AA68FA1736B(Local_53[0 /*2*/], false, 1, 0);
		unk_0x93D3868AE0D83B7C(Local_53[0 /*2*/], 1);
		unk_0x4E87F356DA56EB3F(Local_53[0 /*2*/], 1);
		unk_0xD1FBDB199C700B42(Local_53[0 /*2*/], 0);
	}
	if (!func_101(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, 1, 1, 0);
		unk_0x6012A6A4F2950585(Local_53[2 /*2*/], 0);
		unk_0xE82050D41B744FF3(Local_53[2 /*2*/], false);
		unk_0xA73D1278857991A2(Local_53[2 /*2*/], true);
	}
	if (!func_101(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, 1, 1, 0);
		unk_0xA9B952D290D440DC(Local_53[1 /*2*/], false);
		unk_0xA73D1278857991A2(Local_53[1 /*2*/], true);
	}
	unk_0x0A0AE625CFB21683(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	unk_0x8AA34A46B8399BF5(Local_53[1 /*2*/]);
	unk_0x4E00F4ECD5BE493A(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0x724D816EA203A79E(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = unk_0xB6896943DA475493(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, true, true, 0);
		unk_0x5DBE04849460E608(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, vLocal_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!unk_0x724D816EA203A79E(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = unk_0xB6896943DA475493(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, 0);
		unk_0x5DBE04849460E608(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, vLocal_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	while (!func_291(&(Local_54[3 /*10*/]), 32, Local_53[2 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (func_301())
	{
		func_287(Local_53[2 /*2*/], -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
		unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_53[2 /*2*/], -1);
	}
	unk_0x4106FAF8AA1D69D5(Local_54[3 /*10*/], iLocal_259);
	unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 100f, 1, 0, 0, false);
	iLocal_308 = 3;
	iLocal_307 = 0;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x17BF3
{
	int iVar0;
	
	if (!func_21(iParam1))
	{
		iVar0 = func_293(iParam1);
		unk_0xF243B7A14FCFD0F4(iVar0);
		if (unk_0xD6513D668481290A(iVar0))
		{
			if (unk_0x724D816EA203A79E(*iParam0))
			{
				unk_0xF845620A03C7425B(iParam0);
			}
			if (unk_0x724D816EA203A79E(iParam2) && unk_0xE59B7F5A03335350(iParam2, 0))
			{
				*iParam0 = unk_0xFD8987C090669BD5(iParam2, 26, iVar0, iParam3, 0, false);
				unk_0xDC3C88A35B53F90B(*iParam0);
				func_292(*iParam0, iParam1);
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_292(var uParam0, int iParam1)//Position - 0x17C73
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_15B66[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_293(int iParam0)//Position - 0x17CB9
{
	if (!func_21(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_294()//Position - 0x17CE4
{
	if (!unk_0x724D816EA203A79E(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, 1, 1, 0);
		unk_0x4E87F356DA56EB3F(Local_53[0 /*2*/], 1);
	}
	if (func_301())
	{
		func_287(Local_53[0 /*2*/], -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
		unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], -1);
	}
	unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 100f, 1, 0, 0, false);
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_295()//Position - 0x17D72
{
	if (!unk_0x724D816EA203A79E(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 1, 1, 0);
		func_296(Local_53[0 /*2*/], 0);
		unk_0x346478B12F69D4E3(Local_53[0 /*2*/], true);
		unk_0xB71D41C0310C93DE(Local_53[0 /*2*/], 1, 1);
		unk_0x656194E145691D3E(Local_53[0 /*2*/], 0);
		unk_0x4E87F356DA56EB3F(Local_53[0 /*2*/], 1);
	}
	if (!unk_0x724D816EA203A79E(Local_54[4 /*10*/]))
	{
		Local_54[4 /*10*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, true);
		unk_0xE896C0AD02364F2A(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
		unk_0xABA7AE40608505F2(Local_54[4 /*10*/], 512, false);
		unk_0x91629AC1E1F78419(Local_54[4 /*10*/], 17, true);
		unk_0x4106FAF8AA1D69D5(Local_54[4 /*10*/], iLocal_260);
		unk_0x2E35C4FA5F0ED22F(Local_54[4 /*10*/], 1);
		unk_0x3BA6DE071C07D143(Local_54[4 /*10*/], 45f);
		unk_0x9C4E6006A4F26EB5(Local_54[4 /*10*/], 50f);
		unk_0x1BAA0038DD57C475(Local_54[4 /*10*/], -50f);
		unk_0x0DEF5E53360637F2(Local_54[4 /*10*/], 1);
	}
	if (!unk_0x724D816EA203A79E(Local_57[0 /*2*/]))
	{
		Local_57[0 /*2*/] = unk_0xB6896943DA475493(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, true, true, 0);
		unk_0x346478B12F69D4E3(Local_57[0 /*2*/], true);
	}
	if (!unk_0x724D816EA203A79E(Local_57[1 /*2*/]))
	{
		Local_57[1 /*2*/] = unk_0xB6896943DA475493(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, true, true, 0);
		unk_0x346478B12F69D4E3(Local_57[1 /*2*/], true);
	}
	if (!unk_0x724D816EA203A79E(Local_57[2 /*2*/]))
	{
		Local_57[2 /*2*/] = unk_0xB6896943DA475493(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, true, true, 0);
		unk_0x784C605D172817C8(Local_57[2 /*2*/], 0f, 0f, 90f, 2, 1);
		unk_0x346478B12F69D4E3(Local_57[2 /*2*/], true);
	}
	if (!unk_0x724D816EA203A79E(Local_57[3 /*2*/]))
	{
		Local_57[3 /*2*/] = unk_0xB6896943DA475493(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, true, true, 0);
	}
	iLocal_248 = 0;
	unk_0x44840FD68E426678("docksprep1");
	while (!unk_0x1E8349F219AC5AF9("docksprep1"))
	{
		SYSTEM::WAIT(0);
	}
	unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 100f, 1, 0, 0, false);
	if (func_301())
	{
		func_287(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
	iLocal_268 = unk_0x105601648511CC64();
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_296(var uParam0, int iParam1)//Position - 0x17FD8
{
	Global_16B1B.f_16[iParam1] = uParam0;
}

int func_297(var uParam0)//Position - 0x17FEC
{
	if (func_298(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_298(var uParam0)//Position - 0x18007
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
						func_84(uParam0[iVar1 /*5*/]);
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
						func_84(&(uParam0->f_111[iVar1 /*5*/]));
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
						func_84(&(uParam0->f_176[iVar1 /*5*/]));
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
						func_84(&(uParam0->f_290[iVar1 /*6*/]));
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
						func_84(&(uParam0->f_1DB[iVar1 /*6*/]));
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
						func_84(&(uParam0->f_CA[iVar1 /*7*/]));
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
						func_84(&(uParam0->f_97[iVar1 /*5*/]));
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
						func_84(&(uParam0->f_2E1[iVar1 /*5*/]));
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
						func_84(&(uParam0->f_2FB[iVar1 /*5*/]));
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
								func_84(&(uParam0->f_2AF[iVar1 /*7*/]));
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
							func_84(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_84(&(uParam0->f_2AF[iVar1 /*7*/]));
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
						func_84(&(uParam0->f_36F[iVar1 /*5*/]));
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
						func_84(&(uParam0->f_3A2[iVar1 /*5*/]));
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
						func_84(&(uParam0->f_30B[iVar1 /*5*/]));
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
					func_84(&(uParam0->f_35C));
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
					func_84(&(uParam0->f_360));
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
						func_195(uParam0);
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
				func_84(&(uParam0->f_364));
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
						func_84(&(uParam0->f_3BC[iVar1 /*5*/]));
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

int func_299(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x189D7
{
	if (func_200(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_364)
	{
		if (func_89(uParam0->f_364.f_4, vParam1, 0) && uParam0->f_364.f_A == fParam2)
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

void func_300(int iParam0, var uParam1, var uParam2)//Position - 0x18A8F
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

bool func_301()//Position - 0x18B2E
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

void func_302(var uParam0)//Position - 0x18B42
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

void func_303()//Position - 0x18D9A
{
	if (unk_0x102F1A3BD4B68933())
	{
		unk_0x641313DE533F9784();
		unk_0xD103510B8989BEB2();
		while (unk_0x102F1A3BD4B68933())
		{
			SYSTEM::WAIT(0);
		}
	}
	func_201();
	if (func_101(Local_53[0 /*2*/]))
	{
		unk_0x1B5B9974B49E0C17(Local_53[0 /*2*/], vLocal_56);
	}
	Global_15DFD.f_165 = 0;
	if (iLocal_249)
	{
		unk_0x47E13337C790CC8C(&iLocal_290);
		iLocal_249 = 0;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		func_311(&(Local_54[iLocal_247 /*10*/].f_2));
		if (unk_0x724D816EA203A79E(Local_54[iLocal_247 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_54[iLocal_247 /*10*/]))
		{
			if (unk_0x5237AF95232D78C5(Local_54[iLocal_247 /*10*/], 0))
			{
				unk_0xAFC2CAB9D994D0D8(Local_54[iLocal_247 /*10*/], unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(Local_54[iLocal_247 /*10*/], 0), true) + Vector(0f, -2f, 0f));
			}
			func_310(&(Local_54[iLocal_247 /*10*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_53[iLocal_247 /*2*/]))
		{
			func_309(Local_53[iLocal_247 /*2*/]);
			func_306(&(Local_53[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_57[iLocal_247 /*2*/]))
		{
			func_305(&(Local_57[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	if (unk_0x2F1B39E315395385(iLocal_245))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_245, 0);
	}
	func_278();
	func_36(&Local_58, 1, 0);
	func_304(72);
	func_190(1, 0, 0, 3000, 0);
	unk_0xDF53A66AEE1401AA(1f);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 300f, 1, 0, 0, false);
	}
	unk_0x6C5F5B5F6894CCE3(1219.186f, -2977.9f, 4.8653f, 300f, 1, 0, 0, false);
	iLocal_268 = unk_0x105601648511CC64();
	iLocal_251 = 0;
	iLocal_269 = 0;
	iLocal_264 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_307 = 0;
	iLocal_252 = 0;
	func_207(6, 0);
	if (unk_0xE7CC712DAAEA69F3("PO1_08_sub_waterplane"))
	{
		func_195(&uLocal_309);
		unk_0x66EC947D9DEDE5B3("PO1_08_sub_waterplane");
	}
	unk_0x5125612B0BECDB38();
}

void func_304(int iParam0)//Position - 0x18FBA
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

void func_305(int iParam0)//Position - 0x18FDE
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, 1);
		}
		unk_0xA35241BCE4C1A24B(iParam0);
	}
}

void func_306(int iParam0)//Position - 0x19009
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		if (func_308(*iParam0))
		{
			if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
			{
				if (func_307(unk_0xBC25C936A095B5BA()))
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
			if (func_307(unk_0xBC25C936A095B5BA()))
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

int func_307(int iParam0)//Position - 0x190A5
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

int func_308(int iParam0)//Position - 0x190C6
{
	if (func_307(iParam0))
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

void func_309(int iParam0)//Position - 0x190F0
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

void func_310(int iParam0)//Position - 0x1918C
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		unk_0xF845620A03C7425B(iParam0);
	}
}

void func_311(int iParam0)//Position - 0x191CD
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

void func_312()//Position - 0x1923F
{
	switch (iLocal_1951)
	{
		case 1:
			iLocal_1951 = 2;
			iLocal_1953 = -1;
			break;
		
		case 2:
			iLocal_1951 = 3;
			iLocal_1953 = 0;
			iLocal_1952 = iLocal_1954;
			break;
		
		case 3:
			iLocal_1954 = -1;
			iLocal_1951 = 0;
			break;
		
		case 0:
			if ((unk_0x105601648511CC64() - iLocal_1955) > 2500)
			{
				iLocal_1955 = unk_0x105601648511CC64();
			}
			break;
	}
}

void func_313(var uParam0)//Position - 0x192A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x102F1A3BD4B68933())
	{
		if (unk_0xA5A42DEC1470C5A9())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xF1734B55490E9045(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_11[iVar1] != -1)
						{
							unk_0x0B0533F07EBE647A(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_11.f_D[iVar1], (uParam0[iVar0 /*82*/])->f_11[iVar1], (uParam0[iVar0 /*82*/])->f_10);
							(uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_11[iVar1] = -1;
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_11.f_27[iVar2] != -1 && (uParam0[iVar0 /*82*/])->f_11.f_31[iVar2] != -1)
						{
							unk_0x5B2777A27D4C30AE(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_11.f_27[iVar2], (uParam0[iVar0 /*82*/])->f_11.f_31[iVar2], (uParam0[iVar0 /*82*/])->f_10);
							(uParam0[iVar0 /*82*/])->f_11.f_27[iVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_11.f_31[iVar2] = -1;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_10 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_314(uParam0);
	}
}

void func_314(var uParam0)//Position - 0x19407
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xF1734B55490E9045(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_10 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_11[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_315(var uParam0)//Position - 0x19474
{
	func_298(uParam0);
}

void func_316()//Position - 0x19483
{
	vector3 vVar0;
	var uVar1;
	
	if (func_289() || func_7(0))
	{
		if (func_289())
		{
			iLocal_1957 = func_320();
			if (Global_154ED)
			{
				iLocal_1957++;
			}
			if (iLocal_1957 >= 3)
			{
				iLocal_1957 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1957 = 0;
		}
		if (func_289())
		{
			func_300(iLocal_1957, &vVar0, &uVar1);
			func_319(vVar0, uVar1, 1, 0);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_1956 = 1;
	}
	else
	{
		func_102(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_1952 = 0;
		func_262(0);
	}
	iLocal_1953 = 0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0x1445291F2B5103A9("EXTRASUNNY");
	unk_0x81D35E23208B39F3(unk_0xB5CEFD608600A09F(), false);
	unk_0x926FDA90094AA5FA(iLocal_259);
	unk_0x926FDA90094AA5FA(iLocal_260);
	unk_0xB2CB6EAA6B280A84("REL_BUDDY", &iLocal_259);
	unk_0xB2CB6EAA6B280A84("rel_dock", &iLocal_260);
	unk_0xA902E18EDF6FA0C8(5, iLocal_260, 1862763509);
	unk_0xA902E18EDF6FA0C8(1, 1862763509, iLocal_259);
	unk_0xA902E18EDF6FA0C8(1, iLocal_259, 1862763509);
	unk_0xA902E18EDF6FA0C8(1, iLocal_260, iLocal_260);
	if (!unk_0x724D816EA203A79E(Local_53[0 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
			Local_53[0 /*2*/] = Global_15DFD[0];
			func_296(Local_53[0 /*2*/], 0);
			unk_0x4E87F356DA56EB3F(Local_53[0 /*2*/], 1);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_54[4 /*10*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[0], true, 1);
			Local_54[4 /*10*/] = Global_15DFD.f_9[0];
			unk_0x4106FAF8AA1D69D5(Local_54[4 /*10*/], iLocal_260);
			unk_0xC8FD3EBBB90E8D7F(Local_54[4 /*10*/], 208, true);
			unk_0x3BA6DE071C07D143(Local_54[4 /*10*/], 45f);
			unk_0x9C4E6006A4F26EB5(Local_54[4 /*10*/], 50f);
			unk_0x1BAA0038DD57C475(Local_54[4 /*10*/], -50f);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_57[0 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_1C[0], true, 1);
			Local_57[0 /*2*/] = Global_15DFD.f_1C[0];
		}
	}
	if (!unk_0x724D816EA203A79E(Local_57[1 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[1]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_1C[1], true, 1);
			Local_57[1 /*2*/] = Global_15DFD.f_1C[1];
		}
	}
	if (!unk_0x724D816EA203A79E(Local_57[2 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[2]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_1C[2], true, 1);
			Local_57[2 /*2*/] = Global_15DFD.f_1C[2];
		}
	}
	if (!unk_0x724D816EA203A79E(Local_57[3 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[3]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_1C[3], true, 1);
			Local_57[3 /*2*/] = Global_15DFD.f_1C[3];
		}
	}
	if (Global_15DFD.f_165)
	{
		if (unk_0xF4C0C4013551AD0E(&(Global_15DFD.f_25[0])))
		{
			unk_0x6E032DB93BE96E82(Global_15DFD.f_25[0], 1, 1);
			Local_55[0 /*5*/] = Global_15DFD.f_25[0];
			Global_15DFD.f_25[0] = 0;
		}
		if (unk_0xF4C0C4013551AD0E(&(Global_15DFD.f_25[1])))
		{
			unk_0x6E032DB93BE96E82(Global_15DFD.f_25[1], 1, 1);
			Local_55[1 /*5*/] = Global_15DFD.f_25[1];
			Global_15DFD.f_25[1] = 0;
		}
		if (unk_0xF4C0C4013551AD0E(&(Global_15DFD.f_25[2])))
		{
			unk_0x6E032DB93BE96E82(Global_15DFD.f_25[2], 1, 1);
			Local_55[2 /*5*/] = Global_15DFD.f_25[2];
			Global_15DFD.f_25[2] = 0;
		}
		if (unk_0xF4C0C4013551AD0E(&(Global_15DFD.f_25[3])))
		{
			unk_0x6E032DB93BE96E82(Global_15DFD.f_25[3], 1, 1);
			Local_55[3 /*5*/] = Global_15DFD.f_25[3];
			Global_15DFD.f_25[3] = 0;
		}
		iLocal_248 = 1;
	}
	else
	{
		iLocal_248 = 0;
	}
	unk_0x900CF084251DED26("DOCKP1", 0);
	while (!unk_0xFA9040D29FE330BD(0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_101(unk_0xBC25C936A095B5BA()))
	{
		func_215(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	func_318(1);
	unk_0xAEC867D0DBB7AFEB(2);
	unk_0xDF53A66AEE1401AA(0.5f);
	func_317(72);
}

void func_317(int iParam0)//Position - 0x19882
{
	Global_15B7B = 0;
	switch (iParam0)
	{
		case 72:
			func_255(2);
			func_255(4);
			break;
		
		case 73:
			func_255(0);
			func_255(1);
			func_255(7);
			break;
		
		case 92:
			func_255(10);
			func_255(9);
			func_255(13);
			func_255(6);
			break;
		
		case 68:
			func_255(11);
			break;
		
		case 78:
			func_255(14);
			break;
		
		case 79:
			func_255(3);
			break;
		
		default:
			break;
	}
}

void func_318(bool bParam0)//Position - 0x19910
{
	if (bParam0)
	{
		Global_3DF0 = 1;
	}
	else
	{
		Global_3DF0 = 0;
	}
}

void func_319(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x19928
{
	if (func_289())
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
		func_288(1);
	}
}

int func_320()//Position - 0x199BD
{
	if (!Global_16B1B == 10 && !Global_16B1B == 9)
	{
		return 0;
	}
	return Global_16B1B.f_2;
}

void func_321()//Position - 0x199E7
{
	if (unk_0x102F1A3BD4B68933())
	{
		unk_0x641313DE533F9784();
		unk_0xD103510B8989BEB2();
	}
	if (func_101(unk_0xBC25C936A095B5BA()))
	{
		if (func_101(Local_53[0 /*2*/]))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_53[0 /*2*/], 0))
			{
				unk_0xAFC2CAB9D994D0D8(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(Local_53[0 /*2*/], true) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_201();
	if (func_101(Local_53[0 /*2*/]))
	{
		unk_0x1B5B9974B49E0C17(Local_53[0 /*2*/], vLocal_56);
	}
	Global_15DFD.f_165 = 0;
	if (iLocal_249)
	{
		unk_0x47E13337C790CC8C(&iLocal_290);
		iLocal_249 = 0;
	}
	if (unk_0x2F1B39E315395385(iLocal_245))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_245, 0);
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (func_101(Local_54[iLocal_247 /*10*/]))
		{
			func_311(&(Local_54[iLocal_247 /*10*/].f_2));
			if (unk_0x2DA8CA50A72528FB(Local_54[iLocal_247 /*10*/].f_1))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_54[iLocal_247 /*10*/].f_1));
			}
			if (unk_0xD45C08B05D4687A7(Local_54[iLocal_247 /*10*/]))
			{
				unk_0x57EB4CC8F1928A47(Local_54[iLocal_247 /*10*/]);
			}
			if (Local_54[iLocal_247 /*10*/] != unk_0xBC25C936A095B5BA())
			{
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0x2DA8CA50A72528FB(Local_53[iLocal_247 /*2*/].f_1))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_53[iLocal_247 /*2*/].f_1));
		}
		if (func_101(Local_53[iLocal_247 /*2*/]))
		{
			if (iLocal_247 != 0)
			{
				func_283(&(Local_53[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	func_323(0);
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_57[iLocal_247 /*2*/]))
		{
			if (Local_57[iLocal_247 /*2*/] == Local_57[4 /*2*/] || Local_57[iLocal_247 /*2*/] == Local_57[5 /*2*/])
			{
				func_85(&(Local_57[iLocal_247 /*2*/]), 1);
			}
			else
			{
				func_305(&(Local_57[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0x81D35E23208B39F3(unk_0xB5CEFD608600A09F(), true);
	unk_0x11E7662BFA0E7D15();
	unk_0xDF53A66AEE1401AA(1f);
	unk_0xAEC867D0DBB7AFEB(5);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	func_318(0);
	func_208(&Local_58, 0);
	func_322();
	if (unk_0xE7CC712DAAEA69F3("PO1_08_sub_waterplane"))
	{
		unk_0x66EC947D9DEDE5B3("PO1_08_sub_waterplane");
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_322()//Position - 0x19C26
{
	Global_15B7B = 0;
}

void func_323(bool bParam0)//Position - 0x19C33
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

void func_324()//Position - 0x19C5F
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_7(0))
	{
		if (!func_325())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_94(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_99();
		}
	}
}

int func_325()//Position - 0x19CD0
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

void func_326()//Position - 0x19D0E
{
	func_88(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

