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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	var uLocal_317 = 10;
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
	var uLocal_328 = 2;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 8;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 8;
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
	float fLocal_351 = 0f;
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
	var uLocal_362 = 15;
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
	var uLocal_635 = 1;
	int iLocal_636 = 0;
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
	sLocal_20 = "NULL";
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
	vLocal_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_351 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_533(unk_0xB5CEFD608600A09F(), 1))
		{
			unk_0x95E4B6F3ED223F5A();
		}
		if (func_532(unk_0xB5CEFD608600A09F(), 1))
		{
			unk_0x95E4B6F3ED223F5A();
		}
	}
	if (func_531(13) || func_531(14))
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (!func_530() && !unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xE8A79675302ED812(35))
		{
			func_521();
			func_520(1);
			func_516(&uLocal_362);
		}
	}
	SYSTEM::WAIT(0);
	iLocal_90 = iScriptParam_636;
	if (unk_0x7AF0088ABFA713B6())
	{
		func_515();
		unk_0xBF463BC3D6FFDE31(2, 0, unk_0xB5CEFD608600A09F());
		func_510(0, -1, 0);
		unk_0x6C87EFD58B261C6F(0);
	}
	func_509();
	func_508(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_505(&uLocal_362);
		if (func_530())
		{
			if (func_504(1024))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0xE58FD1D062663A04(unk_0xBC25C936A095B5BA()) && unk_0xCF9FD9F078487083(unk_0xBC25C936A095B5BA()))
					{
						func_508(1024);
						unk_0xF1B63714B0383791(unk_0xBC25C936A095B5BA());
					}
				}
			}
			if (!func_504(1024) && func_504(2048))
			{
				unk_0x95E4B6F3ED223F5A();
			}
			if (!unk_0x724D816EA203A79E(iLocal_90))
			{
				bVar0 = false;
			}
			else if (!unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				bVar0 = false;
				unk_0xC7587327285D9984(iLocal_90);
			}
		}
		if (!func_530() || !func_504(2048))
		{
			func_497();
			if (func_530())
			{
				func_496();
				if (func_504(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_491())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_486(&uLocal_362);
					}
					func_484();
					func_482();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (unk_0x26879BF7A62B3FDC(iLocal_90))
								{
									iLocal_284 = func_481();
								}
								else if (func_479())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_474())
							{
								if (func_473())
								{
									if (func_530())
									{
										if (unk_0x4DF785C4DF542CD0(iLocal_90))
										{
											unk_0xA3A7138EAD2268A0(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xC7587327285D9984(iLocal_90);
										}
									}
									else
									{
										unk_0xA3A7138EAD2268A0(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_285 = 1;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_471(iLocal_49, 4096))
							{
								func_470();
							}
							if (func_469())
							{
								iLocal_285 = 2;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_465())
							{
								iLocal_285 = 3;
								func_463(&iLocal_49, 64);
								Global_6355 = 1;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_362);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	if (func_471(iLocal_49, 2))
	{
	}
	func_472(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_521();
	func_516(&uLocal_362);
}

void func_1()//Position - 0x361
{
}

void func_2(bool bParam0)//Position - 0x369
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()//Position - 0x37F
{
	if (iLocal_286 > 0)
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_91))
			{
				if (!unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_91) || unk_0x1D403DFADBC2DE3C(iLocal_91, 0))
	{
		func_89(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0x36CEFBE9B745A58D(iLocal_91))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 242628503) == 7)
				{
					iLocal_63 = unk_0x105601648511CC64();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !unk_0xE642C1AC73CE364E(iLocal_90, iLocal_91, 12f, 12f, 5f, 0, 1, 0))
					{
						func_472("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x37718415CE714A5B(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x4B656426561BA934(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0x509F549022512095(iLocal_91, iLocal_92, vLocal_88, (unk_0x2D175DF90F6F05C3(iLocal_92) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (SYSTEM::VDIST2(vLocal_88, unk_0x541C2AEF053615BC(iLocal_90, true)) < 25f && unk_0xF4FCC3C1048FF2AB(iLocal_91, -1817882002) != 1)
			{
				iLocal_288 = unk_0x491B2241281A03B7(1, 3);
				iLocal_286 = 11;
			}
			if (func_49(iLocal_91))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0x724D816EA203A79E(iLocal_90) && unk_0x724D816EA203A79E(iLocal_92))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_90, iLocal_92, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_91, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_91, -828834893) != 1)
						{
							unk_0xA3981DED4FC2E56E(iLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()//Position - 0x5BF
{
	switch (iLocal_293)
	{
		case 0:
			unk_0xD40A5C223BC88756(iLocal_90, 0.916f);
			if (func_36(iLocal_91))
			{
				func_34(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), unk_0x541C2AEF053615BC(iLocal_90, false)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_92);
			if (func_27(iLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)//Position - 0x68D
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)//Position - 0x69D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)//Position - 0x6B2
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x6F1
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

bool func_9(int iParam0)//Position - 0x749
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

bool func_10(int iParam0)//Position - 0x759
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x769
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)//Position - 0x7B7
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_23();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_13();
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
		func_25();
	}
	return 0;
}

void func_13()//Position - 0xA83
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

void func_14()//Position - 0xAB5
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

int func_15()//Position - 0xB4A
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()//Position - 0xB71
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

void func_17()//Position - 0xC0A
{
	if (func_531(14))
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
		Global_389D = func_18();
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

int func_18()//Position - 0xCAC
{
	func_19();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_19()//Position - 0xCC5
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_22(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_21(unk_0xBC25C936A095B5BA());
			if (func_20(iVar0) && (!func_531(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_20(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_20(int iParam0)//Position - 0xDC2
{
	return iParam0 < 3;
}

int func_21(int iParam0)//Position - 0xDCE
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

int func_22(int iParam0)//Position - 0xE0B
{
	if (func_20(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()//Position - 0xE35
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

bool func_24(int iParam0, int iParam1)//Position - 0xE8D
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

void func_25()//Position - 0xEC8
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xF1F
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

int func_27(int iParam0)//Position - 0xF75
{
	if (func_28())
	{
		if (!unk_0x5877568DB02F6649(unk_0x6F79ECA8C83E4357(iParam0), unk_0x541C2AEF053615BC(iParam0, true), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()//Position - 0xF9F
{
	if (Global_41C4)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)//Position - 0xFB5
{
	if (iLocal_288 != 1 && iLocal_288 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)//Position - 0xFDF
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		vVar0 = { 0f, 0f, -0.1f };
		vVar1 = { 0f, 0f, 0f };
		unk_0x5EBD7EB63AD5FB1D(*uParam0, 1, vVar0, vVar1, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()//Position - 0x101A
{
	return unk_0x619CCA1A6FD0BC87(iLocal_90, 876132797);
}

void func_32()//Position - 0x102D
{
	unk_0x2423B13D9CFAD1DD();
	func_33();
}

void func_33()//Position - 0x103D
{
	Global_4336.f_86 = 1;
}

void func_34(int iParam0)//Position - 0x104B
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)//Position - 0x105A
{
	iParam0->f_1 = (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_36(int iParam0)//Position - 0x1088
{
	if (unk_0xF1734B55490E9045(sLocal_61))
	{
		sLocal_61 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xF9E082857622D91E(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_90, func_43(), 1, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_37(iParam0, func_43(), 0, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		}
		func_472("anim_dict has loaded, triggering anims?");
		func_463(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x1117
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0x7FCE28BE45D0735E();
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0xC738E4BB7AAEF78D(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0xF9E082857622D91E(sVar2))
	{
		unk_0x522053D86D6E1C7A(sVar2);
	}
	else
	{
		unk_0xC5A6DFE2B8987B17(&iVar3);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x535008C596714F9E(iVar3);
		unk_0xA8E6405305C0D7DF(iParam0, iVar3);
		if (bParam4)
		{
			unk_0x02DAF06EA4F08219(&iVar3);
		}
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x125C
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)//Position - 0x153E
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)//Position - 0x16FC
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)//Position - 0x18BA
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)//Position - 0x1963
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x3D875C2512206692(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x3D875C2512206692(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()//Position - 0x1992
{
	return iLocal_288 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)//Position - 0x199F
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()//Position - 0x1A21
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()//Position - 0x1A2D
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()//Position - 0x1A39
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()//Position - 0x1A45
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)//Position - 0x1A51
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xA4813477CC5DD00F(iParam0) || !func_51(iParam0, iLocal_92, -1))
		{
			vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
			unk_0xABA7AE40608505F2(iParam0, 196624, true);
			if (func_50())
			{
				unk_0xAB43C54784946B9F(iParam0, vVar0, 300f, -1, 1, 1);
			}
			else if (!unk_0x1D403DFADBC2DE3C(unk_0x33213E99DDEE4631(iParam0), 0))
			{
				unk_0xB8CBD998685C0685(iParam0, unk_0x33213E99DDEE4631(iParam0), 0, 16);
			}
			else
			{
				unk_0xAB43C54784946B9F(iParam0, vVar0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()//Position - 0x1AE3
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1B04
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_52(int iParam0)//Position - 0x1B42
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iLocal_90, true) };
	vVar1 = { vLocal_88 };
	if (iParam0 == 0)
	{
		if (vVar0.x < vVar1.x)
		{
			return (vVar0.x - 20f);
		}
		else
		{
			return (vVar1.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (vVar0.y < vVar1.y)
		{
			return (vVar0.y - 20f);
		}
		else
		{
			return (vVar1.y - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (vVar0.x > vVar1.x)
		{
			return (vVar0.x + 20f);
		}
		else
		{
			return (vVar1.x + 20f);
		}
	}
	if (vVar0.y > vVar1.y)
	{
		return (vVar0.y + 20f);
	}
	return (vVar1.y + 20f);
}

void func_53()//Position - 0x1C09
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_91))
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 242628503) == 1)
				{
					if (unk_0xD62938026B30481A(iLocal_90) > 0)
					{
						if (unk_0x62F3A07C43FFB568(iLocal_90, iLocal_92, 0))
						{
							func_472("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xC5A6DFE2B8987B17(&iLocal_95);
							unk_0x204BA7B1C7DD25F4(0, iLocal_92, 10f, 786603);
							unk_0x535008C596714F9E(iLocal_95);
							unk_0xA8E6405305C0D7DF(iLocal_91, iLocal_95);
							unk_0x02DAF06EA4F08219(&iLocal_95);
							vLocal_88 = { func_54(unk_0x541C2AEF053615BC(iLocal_90, true)) };
							unk_0x522053D86D6E1C7A(func_44(iLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = unk_0x105601648511CC64();
						}
					}
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(vector3 vParam0)//Position - 0x1CDA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (SYSTEM::VDIST2(vParam0, func_55(iVar1)) < SYSTEM::VDIST2(vParam0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)//Position - 0x1D22
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			vVar0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			vVar0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			vVar0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			vVar0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			vVar0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			vVar0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			vVar0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			vVar0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			vVar0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			vVar0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			vVar0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			vVar0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			vVar0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			vVar0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			vVar0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			vVar0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			vVar0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			vVar0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			vVar0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			vVar0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			vVar0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			vVar0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			vVar0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			vVar0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			vVar0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			vVar0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			vVar0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			vVar0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			vVar0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			vVar0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			vVar0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return vVar0;
}

void func_56()//Position - 0x20B5
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_91))
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x8910237449BB6F79(iLocal_92);
				if (unk_0xE642C1AC73CE364E(iLocal_91, iLocal_90, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_90);
					iLocal_63 = unk_0x105601648511CC64();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_530())
						{
							if (unk_0x4DF785C4DF542CD0(iLocal_91))
							{
								unk_0x44C98C11ED6DD327(iLocal_91);
							}
						}
						else
						{
							unk_0x44C98C11ED6DD327(iLocal_91);
						}
						iLocal_66 = unk_0x491B2241281A03B7(0, 10000);
						if (iLocal_66 > 2500)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_90);
							unk_0x02DAF06EA4F08219(&iLocal_95);
							unk_0xC5A6DFE2B8987B17(&iLocal_95);
							unk_0xD179FA0466FA4FE3(0, iLocal_92, -1, 0, 1f, 8388609, 0);
							unk_0xDE2D2B13F24A979D(0, -1);
							unk_0x535008C596714F9E(iLocal_95);
							unk_0xA8E6405305C0D7DF(iLocal_90, iLocal_95);
							unk_0x02DAF06EA4F08219(&iLocal_95);
							func_472("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x36CEFBE9B745A58D(iLocal_91))
							{
								if (unk_0xE59B7F5A03335350(iLocal_92, 0))
								{
									if (unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
									{
										unk_0x02DAF06EA4F08219(&iLocal_95);
										unk_0xC5A6DFE2B8987B17(&iLocal_95);
										unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(500, 2000));
										unk_0x204BA7B1C7DD25F4(0, iLocal_92, 10f, 786603);
										unk_0x535008C596714F9E(iLocal_95);
										unk_0xA8E6405305C0D7DF(iLocal_91, iLocal_95);
										unk_0x02DAF06EA4F08219(&iLocal_95);
										iLocal_62 = unk_0x105601648511CC64();
									}
								}
							}
							func_472("prostitute REFUSED MONEY 2");
							if (func_530())
							{
								if (unk_0x4DF785C4DF542CD0(iLocal_91))
								{
									unk_0x44C98C11ED6DD327(iLocal_91);
								}
							}
							else
							{
								unk_0x44C98C11ED6DD327(iLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_530())
					{
						if (unk_0x4DF785C4DF542CD0(iLocal_91))
						{
							unk_0x44C98C11ED6DD327(iLocal_91);
						}
					}
					else
					{
						unk_0x44C98C11ED6DD327(iLocal_91);
					}
					func_90();
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_530())
				{
					if (unk_0x4DF785C4DF542CD0(iLocal_91))
					{
						unk_0x44C98C11ED6DD327(iLocal_91);
					}
				}
				else
				{
					unk_0x44C98C11ED6DD327(iLocal_91);
				}
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()//Position - 0x22A7
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iLocal_90) || unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return 1;
	}
	if (!func_530())
	{
		if (unk_0x5237AF95232D78C5(iLocal_90, 1))
		{
			unk_0x8CE2798B9A7027EC(iLocal_90, 1193033728, 0);
		}
		else if (func_471(iLocal_49, 4194304))
		{
			unk_0xC5A6DFE2B8987B17(&iVar0);
			if (func_471(iLocal_73, 524288))
			{
				unk_0xE896C0AD02364F2A(0, func_61(iLocal_284), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF(iLocal_90, iVar0);
			unk_0x02DAF06EA4F08219(&iVar0);
			func_463(&iLocal_49, 16384);
			func_34(&iLocal_107);
		}
		return 1;
	}
	if (unk_0x5237AF95232D78C5(iLocal_90, 1))
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_90))
		{
			unk_0x8CE2798B9A7027EC(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xC7587327285D9984(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_471(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_471(iLocal_73, 524288))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_90))
				{
					unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_471(iLocal_73, 524288))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_90))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_90, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_90);
				}
			}
			else if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_90);
			}
			break;
		
		case 3:
			func_463(&iLocal_49, 16384);
			func_34(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)//Position - 0x2477
{
	vector3 vVar0;
	
	if (((unk_0x71326C9F310B9335(iLocal_90) || unk_0x26879BF7A62B3FDC(iLocal_90)) || unk_0x4DF0825BB012BDB0(iLocal_90, func_59(0))) || unk_0x4DF0825BB012BDB0(iLocal_90, func_59(1)))
	{
		return;
	}
	vVar0 = { unk_0x541C2AEF053615BC(iLocal_90, true) };
	if (!unk_0xDF2CB88174A62E40(vVar0, func_59(0), 20f, 1) && !unk_0xDF2CB88174A62E40(vVar0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
		}
		else
		{
			unk_0x8CE2798B9A7027EC(iLocal_90, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xBE2047F9F9DE6F43(iLocal_90, vVar0, 20f, 0);
	}
	else
	{
		unk_0xBE2047F9F9DE6F43(0, vVar0, 20f, 0);
	}
}

char* func_59(int iParam0)//Position - 0x253E
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)//Position - 0x2558
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)//Position - 0x262B
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()//Position - 0x267E
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
	{
		if (func_18() == 2)
		{
			unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)//Position - 0x26C5
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0x2E9860A2B72187F5(iParam0, 109, true);
		}
	}
}

int func_64(int iParam0)//Position - 0x26E9
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if ((unk_0x96044E39418AAF17(iParam0, func_61(iLocal_284), func_60(1), 3) || unk_0x96044E39418AAF17(iParam0, func_61(iLocal_284), func_60(2), 3)) || unk_0x96044E39418AAF17(iParam0, func_61(iLocal_284), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()//Position - 0x2748
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_91))
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 242628503) == 1)
				{
					if (unk_0xD62938026B30481A(iLocal_90) > 1)
					{
						if (unk_0xE642C1AC73CE364E(iLocal_90, iLocal_91, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x8910237449BB6F79(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_62 = unk_0x105601648511CC64();
								iLocal_66 = unk_0x491B2241281A03B7(4000, 8000);
								func_472("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_472("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)//Position - 0x2815
{
	int iVar0;
	int iVar1;
	
	if (!func_530())
	{
		if (bParam0)
		{
			unk_0x55662F9F262C2F9B(iLocal_90, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_471(iLocal_49, 4194304))
		{
			iVar0 = unk_0x491B2241281A03B7(1, 4);
			unk_0xC5A6DFE2B8987B17(&iVar1);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iVar1);
			unk_0xA8E6405305C0D7DF(iLocal_90, iVar1);
			unk_0x02DAF06EA4F08219(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x55662F9F262C2F9B(iLocal_90, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_471(iLocal_49, 4194304))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_90))
				{
					unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_90);
				}
			}
			break;
		
		case 2:
			if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x491B2241281A03B7(1, 4);
					unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_90);
			}
			break;
		
		case 3:
			if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, -2017877118) == 7)
				{
					unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()//Position - 0x29F7
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_90))
				{
					unk_0x53D8178763EDCE60(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x53D8178763EDCE60(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_90))
				{
					unk_0x53D8178763EDCE60(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x53D8178763EDCE60(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_90))
				{
					unk_0x53D8178763EDCE60(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x53D8178763EDCE60(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)//Position - 0x2ABA
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)//Position - 0x2AD0
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x2AE7
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_19B04.f_2724.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_19B04.f_2724.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_19B04.f_2724.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)//Position - 0x2B52
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)//Position - 0x2BAD
{
	if (unk_0xCE0C2E1494516734(iParam0, Global_19B04.f_2724.f_1[iParam1 /*11*/].f_A))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)//Position - 0x2BD2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2BFF
{
	int iVar0;
	
	iVar0 = func_76(iParam2);
	return unk_0x695D13ECF7DAEC22(iParam0, iVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)//Position - 0x2C20
{
	if (func_69(iParam0))
	{
		return Global_19B04.f_2724.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)//Position - 0x2C48
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)//Position - 0x2C71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)//Position - 0x2C9E
{
	int iVar0;
	
	iVar0 = func_80(iParam2);
	return unk_0xA86A4D206EC8EB16(iParam0, iVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)//Position - 0x2CBF
{
	if (func_69(iParam0))
	{
		return Global_19B04.f_2724.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x2CE7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)//Position - 0x2D10
{
	if (!unk_0x144E80F5C46A6B75(sParam0))
	{
		unk_0xD6423910AAD8A379(sParam0);
	}
}

void func_82()//Position - 0x2D29
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_91))
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x8910237449BB6F79(iLocal_92);
				if (unk_0xF4FCC3C1048FF2AB(iLocal_91, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_92), &vVar2, &vVar1);
					vVar3 = { vVar1 - vVar2 };
					vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
					vVar4 = { unk_0xA4455714F3DCE207(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar5 = { unk_0xA4455714F3DCE207(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar6 = { unk_0x541C2AEF053615BC(iLocal_90, true) };
					if (SYSTEM::VDIST(vVar6, vVar5) < SYSTEM::VDIST(vVar6, vVar4))
					{
						vVar4 = { vVar5 };
					}
					unk_0xC5A6DFE2B8987B17(&iLocal_95);
					unk_0x346129B364057FF6(0, vVar4.x, vVar4.y, vVar4.z, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x85DB484A637CEAB9(0, iLocal_91, 0);
					unk_0xDE2D2B13F24A979D(0, -1);
					unk_0x535008C596714F9E(iLocal_95);
					unk_0xA8E6405305C0D7DF(iLocal_90, iLocal_95);
					unk_0x02DAF06EA4F08219(&iLocal_95);
					func_472("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_472("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()//Position - 0x2E7C
{
	vector3 vVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_91))
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_91, iLocal_92, 0))
			{
				if (func_85(&iLocal_92))
				{
					if (func_84(unk_0x541C2AEF053615BC(iLocal_91, true), 1106247680))
					{
						return;
					}
					vVar0 = { unk_0x541C2AEF053615BC(iLocal_90, true) };
					if (unk_0x88A0E19F56297020(vVar0, &vVar0, 8, 1077936128, 0))
					{
						unk_0xBA1E09204DACEC7A(iLocal_91, 1f);
						unk_0xCC74639EAF7A9582(iLocal_91, 0.2f);
						unk_0x74C8565AFD43ECC8(iLocal_91, 0.05f);
						unk_0xD8386C462DB4E5CF(iLocal_91, iLocal_92, vVar0, 0f, 3, 360f, 1);
						unk_0x56F2E1B5599188FA(iLocal_91, iLocal_90, -1, 2048, 4);
						func_472("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_472("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(vector3 vParam0, int iParam1)//Position - 0x2F71
{
	if (func_530())
	{
		return unk_0xBFED55DE95EA4B0C(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0x89E5F484A37AE468(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || unk_0xBFED55DE95EA4B0C(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}

int func_85(int iParam0)//Position - 0x2FD7
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		iVar0 = unk_0x6F79ECA8C83E4357(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x524ABB0435146845(*iParam0) > 0)
			{
				iVar1 = unk_0x5168CF98709EAA95(*iParam0);
				if (((iVar1 == 0 && unk_0x1AAF0C23233C57AF(*iParam0, 0, 0)) && (!unk_0xA499BE1E93004FF2(*iParam0, 1) && !unk_0xA499BE1E93004FF2(*iParam0, 0))) || unk_0x3187EF5798B5D209(*iParam0, 0, 0) == iLocal_90)
				{
					if (func_41(*iParam0))
					{
						if (!func_471(iLocal_49, 32768))
						{
							func_463(&iLocal_49, 32768);
							if (!func_471(iLocal_49, 8))
							{
								unk_0x37FA5A8A7F1136BA(func_86());
								func_463(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_471(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_471(iLocal_49, 8))
						{
							if (unk_0x320539481B2F0121(func_86()))
							{
								unk_0xFC4EC4916831BFC8(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()//Position - 0x30E6
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)//Position - 0x30F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
						iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
		}
		if (unk_0x83F8A448F340AE31(iParam0) == 931866387 && unk_0x6F79ECA8C83E4357(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)//Position - 0x330D
{
	if ((((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0)) || unk_0x7512ED01F3F46714(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303)
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)//Position - 0x3473
{
	iLocal_286 = iParam0;
}

void func_90()//Position - 0x3480
{
	if (func_530())
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_90))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_90);
			unk_0x44C98C11ED6DD327(iLocal_90);
		}
	}
	else
	{
		unk_0xA4E856A8CD53B8DF(iLocal_90);
		unk_0x44C98C11ED6DD327(iLocal_90);
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, unk_0x55AEFCD285ECC0F2(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_91(var uParam0)//Position - 0x34ED
{
	if (!func_471(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_471(iLocal_49, 33554432))
		{
			if (func_530())
			{
				if (Global_191872 || func_455())
				{
					func_454(0);
					func_463(&iLocal_49, 33554432);
				}
			}
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				if (func_471(iLocal_49, 1048576) || func_471(iLocal_49, 8192))
				{
					func_454(0);
					func_463(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_471(iLocal_49, 16384) || func_471(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_107))
				{
					func_453(&iLocal_107);
				}
				if (func_452(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_451("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_450(&uLocal_116, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_450(&uLocal_116, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_450(&uLocal_116, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_449();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_436(uParam0);
			break;
		
		case 2:
			func_423(uParam0);
			break;
		
		case 3:
			func_422();
			break;
		
		case 4:
			func_410(uParam0);
			break;
		
		case 5:
			func_399();
			break;
		
		case 6:
			func_398(uParam0);
			break;
		
		case 7:
			func_377();
			func_369();
			break;
		
		case 8:
			func_366();
			unk_0xBBC4195AD74D153D(0, 80, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_530())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			unk_0xBBC4195AD74D153D(0, 0, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_530())
			{
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 433, true);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_470();
			break;
		
		case 13:
			unk_0xBBC4195AD74D153D(0, 80, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0xBBC4195AD74D153D(0, 80, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)//Position - 0x37DA
{
	if (!func_530())
	{
		if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_471(iLocal_49, 16))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_471(iLocal_49, 2))
	{
		func_93(1);
		func_472("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_521();
	if (func_530())
	{
		func_516(uParam0);
	}
}

void func_93(int iParam0)//Position - 0x3857
{
}

var func_94(bool bParam0)//Position - 0x385F
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()//Position - 0x38A5
{
	if (!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_70 == 0)
		{
			if (func_471(iLocal_49, 134217728))
			{
				unk_0xABA7AE40608505F2(iLocal_90, 32768, false);
				unk_0xABA7AE40608505F2(iLocal_90, 196624, true);
			}
			unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()//Position - 0x38F8
{
	switch (iLocal_294)
	{
		case 0:
			if (!unk_0x8C2668F45F2BB3F2(iLocal_90) || func_114(&iLocal_101) > 4f)
			{
				func_109(iLocal_90);
				if (func_70(func_71(iLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_108(&iLocal_101);
					func_107("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0x8C2668F45F2BB3F2(iLocal_90) || func_105())
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
				func_463(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_34(&iLocal_101);
				}
				if (func_114(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0x7456702622C62EA0(1);
					func_104();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()//Position - 0x39F3
{
	if (func_98(0))
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

bool func_98(bool bParam0)//Position - 0x3A3E
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_99(bool bParam0)//Position - 0x3A69
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		if (unk_0x17FAADF9916EF741())
		{
			unk_0xF845620A03C7425B(&iLocal_90);
		}
		else
		{
			func_100(iLocal_90, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)//Position - 0x3A93
{
	int iVar0;
	float fVar1;
	
	if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(1), 3))
	{
		unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				unk_0x2A022CF97A7A1A9B(iParam0);
			}
		}
		else
		{
			unk_0x2A022CF97A7A1A9B(iParam0);
		}
		if (func_471(iLocal_49, 33554432))
		{
			unk_0xA4E856A8CD53B8DF(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x55AEFCD285ECC0F2(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_463(&iLocal_49, 134217728);
			}
		}
		if (func_471(iLocal_49, 134217728))
		{
			unk_0xABA7AE40608505F2(iParam0, 32768, true);
			unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xABA7AE40608505F2(iParam0, 196624, true);
			unk_0x02DAF06EA4F08219(&iVar0);
			unk_0xC5A6DFE2B8987B17(&iVar0);
			unk_0x0D042F5C6172D20A(0, 1);
			if (unk_0x5237AF95232D78C5(iParam0, 0))
			{
				if (!unk_0xB66CFDE6B830965A(unk_0x9FE9D386222EEE47(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x96044E39418AAF17(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_70 > 0)
						{
							unk_0xE896C0AD02364F2A(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xE896C0AD02364F2A(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x0D042F5C6172D20A(0, 0);
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF(iParam0, iVar0);
			unk_0x02DAF06EA4F08219(&iVar0);
		}
		if (func_530())
		{
			if (unk_0xE37F7B0CBE8148BF(iLocal_90))
			{
				if (unk_0xDD5EE7D9FC37FA16(unk_0x2F3B70ED60C4B9EB(iLocal_90)))
				{
					unk_0x22321800954A532E(iParam0, true);
				}
			}
		}
		else
		{
			unk_0x22321800954A532E(iParam0, true);
		}
	}
}

var func_101(bool bParam0)//Position - 0x3C61
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)//Position - 0x3CA7
{
	if (!unk_0x2101FAC9A9D4C29D(iParam0, unk_0x9FE9D386222EEE47(iParam0, 0), 0, 0, false))
	{
		unk_0xA3981DED4FC2E56E(0, 0, 16842752);
	}
	else
	{
		unk_0xA3981DED4FC2E56E(0, 0, iParam1);
	}
}

var func_103(bool bParam0)//Position - 0x3CD9
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()//Position - 0x3D1F
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 1000);
	if ((iVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()//Position - 0x3DC4
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_106()//Position - 0x3DE6
{
	if (iLocal_297 == 0)
	{
		unk_0x4AED68BFACFB14CB(false);
		unk_0xBBC4195AD74D153D(0, 99, 1);
		unk_0xBBC4195AD74D153D(0, 76, 1);
		unk_0xBBC4195AD74D153D(0, 80, 1);
		unk_0xD55638CE45B2B948(2, 203);
		unk_0xD55638CE45B2B948(2, 201);
		unk_0xD55638CE45B2B948(2, 202);
		if (unk_0x093484B35A948BFC(2, 203))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (unk_0x093484B35A948BFC(2, 201))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (unk_0x093484B35A948BFC(2, 202))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_107(char* sParam0)//Position - 0x3E90
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

void func_108(int iParam0)//Position - 0x3EA6
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_109(int iParam0)//Position - 0x3EBC
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0x8C2668F45F2BB3F2(iParam0))
		{
			unk_0xAFD2CBD312D69CFA(iParam0);
		}
		if (!unk_0x8C2668F45F2BB3F2(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)//Position - 0x3EF7
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&vVar1, "pbpro_H", 24);
		StringIntConCat(&vVar1, iParam0 + 1, 24);
		StringConCat(&vVar1, "V", 24);
		StringIntConCat(&vVar1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &vVar1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)//Position - 0x3F3F
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_116, 4);
		func_450(&uLocal_116, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)//Position - 0x3F6D
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)//Position - 0x3FFC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(int iParam0)//Position - 0x401D
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)//Position - 0x4059
{
	bool bVar0;
	int iVar1;
	
	if (!func_530())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x3187EF5798B5D209(iVar1, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					bVar0 = true;
				}
				if (unk_0x3187EF5798B5D209(iVar1, 0, 0) != iLocal_90)
				{
					bVar0 = true;
				}
				if (unk_0x5168CF98709EAA95(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_521();
					func_516(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)//Position - 0x40E5
{
	vector3 vVar0;
	
	if (bParam0)
	{
		vVar0 = { unk_0xD7490CDEF40F3DA2(iLocal_93, 2) };
		unk_0xF3F01A78937DC905(180f);
		unk_0x2B9AEC08E469E384((-5.5f - vVar0.x), 1065353216);
	}
	unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
	func_117(&(Local_300[0 /*7*/]));
	func_117(&(Local_300[3 /*7*/]));
	func_117(&(Local_300[2 /*7*/]));
	func_117(&(Local_300[1 /*7*/]));
	if (func_451("PROS_CAM_TOG") || func_451("PROS_CAM_OC"))
	{
		unk_0x7456702622C62EA0(1);
	}
}

void func_117(var uParam0)//Position - 0x4169
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		if (unk_0xEDEA6C8F42EE05F6(*uParam0))
		{
			unk_0x348665177DBFB93B(*uParam0, false);
		}
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
	}
}

void func_118()//Position - 0x41A1
{
	if (unk_0xE59B7F5A03335350(iLocal_93, 0))
	{
		unk_0x44126473C39898E7(iLocal_93, 1);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_210(iLocal_74) && !func_210(iLocal_75)) && !func_210(iLocal_76)) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80))
		{
			if (!unk_0xCBBE5AFE2CD2E9B6(iLocal_90) || unk_0x48EBE45A9A7EB10C(unk_0xBC25C936A095B5BA()))
			{
				iLocal_293 = 5;
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0x4E0EC60D119222B1(2);
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(2, 37, 1);
	func_206(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_530())
			{
				func_203(1088, -1);
			}
			func_34(&iLocal_113);
			func_202(func_43(), func_471(iLocal_49, 32768));
			iLocal_293 = 1;
			func_472("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0xBBC4195AD74D153D(0, 48, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
					}
					else
					{
						func_122();
						unk_0xC738E4BB7AAEF78D(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0xBBC4195AD74D153D(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0xBBC4195AD74D153D(0, 0, 1);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
						func_108(&iLocal_98);
					}
				}
			}
			break;
		
		case 3:
			unk_0xBBC4195AD74D153D(0, 0, 1);
			if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_121();
				unk_0xC738E4BB7AAEF78D(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			unk_0xBBC4195AD74D153D(0, 0, 1);
			if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_454(0);
					}
				}
				else
				{
					func_472("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_454(1);
				}
			}
			break;
	}
}

void func_119()//Position - 0x444E
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_70 == 0)
		{
			unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_90))
		{
			func_34(&iLocal_101);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 768);
			func_463(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_120(int iParam0)//Position - 0x44B1
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()//Position - 0x44D3
{
	Global_252E21.f_47F.f_A = 1;
}

void func_122()//Position - 0x44E5
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
	{
		unk_0x53D8178763EDCE60(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()//Position - 0x4512
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
	{
		unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)//Position - 0x453F
{
	if (unk_0x144E80F5C46A6B75(sParam0))
	{
		unk_0xC1300D0F3A74E20B(sParam0);
	}
}

int func_125()//Position - 0x4556
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()//Position - 0x456A
{
	unk_0x82BD2E9769751DCD();
	unk_0x7D3F6AD99B4FACB2();
}

void func_127()//Position - 0x457A
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xF1734B55490E9045(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
	{
		return;
	}
	if (!unk_0xF9E082857622D91E(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
	{
		return;
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
	}
	bVar1 = func_43();
	bVar2 = func_471(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_81);
	}
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_81);
			}
			func_175(iLocal_90, 0);
			if (!func_530())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_172(iLocal_74);
			if (func_210(iLocal_75))
			{
				if (!func_471(iLocal_50, 4))
				{
					if (!func_530())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_75) >= fVar0)
					{
						func_463(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_74))
			{
				if (!func_471(iLocal_50, 8))
				{
					if (!func_530())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_74) >= fVar0)
					{
						func_463(&iLocal_50, 8);
					}
				}
			}
			if (func_471(iLocal_50, 4) && func_471(iLocal_50, 8))
			{
				if (!func_530())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_76);
			if (func_210(iLocal_76))
			{
				if (!func_471(iLocal_50, 16))
				{
					if (!func_530())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_463(&iLocal_50, 16);
					}
				}
			}
			if (func_471(iLocal_50, 16))
			{
				if (!func_530())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_77);
			if (func_210(iLocal_77))
			{
				if (!func_471(iLocal_50, 64))
				{
					if (!func_471(iLocal_49, 16777216))
					{
						if (!func_530())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_77) >= fVar0)
						{
							func_463(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_530())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_160(func_530(), func_166(), func_161()))
					{
						func_463(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_471(iLocal_50, 64))
			{
				func_463(&iLocal_50, 64);
			}
			if (func_471(iLocal_50, 64))
			{
				if (!func_530())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_471(iLocal_50, 256))
				{
					if (!func_530())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_463(&iLocal_50, 256);
					}
				}
			}
			else if (!func_471(iLocal_50, 256))
			{
				func_463(&iLocal_50, 256);
			}
			if (func_471(iLocal_50, 256))
			{
				if (!func_530())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_471(iLocal_50, 1024))
				{
					if (!func_530())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_79) >= fVar0)
					{
						func_463(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_471(iLocal_50, 1024))
			{
				func_463(&iLocal_50, 1024);
			}
			if (func_210(iLocal_80))
			{
				if (!func_471(iLocal_50, 2048))
				{
					if (!func_530())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_463(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_471(iLocal_50, 2048))
			{
				func_463(&iLocal_50, 2048);
			}
			if (func_471(iLocal_50, 1024) && func_471(iLocal_50, 2048))
			{
				func_175(iLocal_90, 0);
				unk_0xE896C0AD02364F2A(iLocal_90, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xBC25C936A095B5BA(), -1);
				unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_128();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_128()//Position - 0x4A74
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_530())
	{
		if (func_21(unk_0xBC25C936A095B5BA()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_90);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_90);
		}
	}
	iLocal_70++;
	func_129();
}

void func_129()//Position - 0x4ACD
{
	switch (func_21(unk_0xBC25C936A095B5BA()))
	{
		case 0:
			Global_19B04.f_2724.f_5A[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_19B04.f_2724.f_5A[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_19B04.f_2724.f_5A[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)//Position - 0x4B70
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0] = (Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 8804;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 8804)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4C60
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)//Position - 0x4C90
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
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

int func_133()//Position - 0x4CC4
{
	return Global_1407E0;
}

int func_134(int iParam0, int iParam1, int iParam2)//Position - 0x4CD0
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)//Position - 0x4D02
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0xF85FAED5BA864282(iParam0, func_140(iVar0));
	Global_19B04.f_2724.f_1[iVar0 /*11*/].f_A = unk_0x6F79ECA8C83E4357(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)//Position - 0x4DA1
{
	if (iParam0 > -1)
	{
		Global_19B04.f_2724.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)//Position - 0x4DC4
{
	return unk_0x695D13ECF7DAEC22(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)//Position - 0x4DD8
{
	if (iParam0 > -1)
	{
		Global_19B04.f_2724.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)//Position - 0x4DFB
{
	return unk_0xA86A4D206EC8EB16(iParam0, func_80(iParam1));
}

var func_140(int iParam0)//Position - 0x4E0F
{
	return func_141(iParam0);
}

char* func_141(int iParam0)//Position - 0x4E1D
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()//Position - 0x4EAC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)//Position - 0x4ED7
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_19B04.f_2724.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_19B04.f_2724.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_19B04.f_2724.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)//Position - 0x4F69
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
		func_148((891 + iParam0), 1, -1, 1);
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
		func_145();
	}
}

void func_145()//Position - 0x5051
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
		func_147(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_146() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()//Position - 0x5512
{
	return Global_62BD;
}

int func_147(int iParam0, int iParam1)//Position - 0x551D
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

int func_148(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x556E
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
		iParam2 = func_133();
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

void func_149()//Position - 0x5A88
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_15DDA[iVar0] = Global_15DDA[iVar0 + 1];
		}
		else
		{
			Global_15DDA[iVar0] = unk_0x105601648511CC64();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)//Position - 0x5AC9
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_79, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_80, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x5B42
{
	if (func_530())
	{
		unk_0x6013B113B38211A7(iParam1);
	}
	else
	{
		unk_0xB62398E536F695FC(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)//Position - 0x5B72
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 1, 0, 0);
	func_153(iLocal_90, iLocal_79, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_80, 0, 0, 0);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_80, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5BFB
{
	if (func_530())
	{
		unk_0xE09EEAFD88EC7AA1(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5C21
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	*iParam0 = func_157(vVar0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_93, unk_0xB5B60A04E1654409(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_93, unk_0xB5B60A04E1654409(iLocal_93, "seat_pside_f"));
	}
	func_155(*iParam0, vVar0, 0f, 0f, 0f, 0);
}

void func_155(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)//Position - 0x5C87
{
	if (!func_530())
	{
		unk_0x9DA167FE68B804E2(iParam0, vParam1, vParam2, iParam3);
	}
}

void func_156(int iParam0, int iParam1, int iParam2)//Position - 0x5CA7
{
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		return;
	}
	if (func_530())
	{
		unk_0x63369B28A502633D(iParam0, iParam1, iParam2);
	}
	else
	{
		unk_0x510CBEAEC917268A(iParam0, iParam1, iParam2);
	}
}

int func_157(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x5CDA
{
	int iVar0;
	
	if (func_530())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		iVar0 = unk_0xC3B4161C4E86D1FA(vParam0, vParam1, iParam4, bParam2, bParam3, 1065353216, 0, 1065353216);
	}
	else
	{
		iVar0 = unk_0xD0D858E538FD01C3(vParam0, vParam1, iParam4);
		unk_0x69D4A898629B0BDA(iVar0, bParam2);
		unk_0xC2BF3DE5E47F801D(iVar0, bParam3);
	}
	return iVar0;
}

void func_158(bool bParam0, bool bParam1)//Position - 0x5D35
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)//Position - 0x5DAE
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_90, iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)//Position - 0x5E2E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()//Position - 0x5E45
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()//Position - 0x5E7D
{
	if (func_530())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xBC25C936A095B5BA()), 1);
}

var func_163(int iParam0, int iParam1)//Position - 0x5EA7
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x6CB99B97664C3727(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)//Position - 0x5EC5
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x5EDB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_166()//Position - 0x6132
{
	int iVar0;
	
	if (iLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)//Position - 0x617C
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_77, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_77, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)//Position - 0x61F5
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_77, 0, 1, 0);
	func_153(iLocal_90, iLocal_77, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_77, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)//Position - 0x6275
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_76, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_76, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)//Position - 0x62EE
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 0, 0, 1);
	func_153(iLocal_90, iLocal_76, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_76, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)//Position - 0x636E
{
	float fVar0;
	
	if (func_530())
	{
		fVar0 = unk_0x8FD30584EB38411B(unk_0xB57F0B6D6209FF97(iParam0));
	}
	else
	{
		fVar0 = unk_0x8FD30584EB38411B(iParam0);
	}
	return fVar0;
}

void func_172(int iParam0)//Position - 0x6396
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)//Position - 0x63AB
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_74, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_75, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)//Position - 0x6424
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_74, 1, 0, 1);
	func_153(iLocal_90, iLocal_74, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_75, 0, 0, 1);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_75, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)//Position - 0x64A5
{
	if (!unk_0x62F3A07C43FFB568(iParam0, iLocal_93, 0))
	{
		if (!func_530())
		{
			unk_0xBD53A029D0155A42(iParam0, iLocal_93, iParam1);
		}
		else if (!unk_0x62F3A07C43FFB568(iParam0, iLocal_93, 0))
		{
			unk_0xD179FA0466FA4FE3(iParam0, iLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)//Position - 0x64EB
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_178(func_179(2), unk_0x3EA3A28A85F8C32F(iLocal_93, unk_0xB5B60A04E1654409(iLocal_93, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0x3EA3A28A85F8C32F(iLocal_93, unk_0xB5B60A04E1654409(iLocal_93, "windscreen")));
	vVar2 = { unk_0xD7490CDEF40F3DA2(iLocal_93, 2) };
	fVar3 = unk_0x349C94FFF43E2979(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - vVar2.y);
	fVar6 = (-5f - vVar2.x);
	fVar7 = (-2.5f + vVar2.x);
	fVar8 = ((0f - (0.7f * vVar2.x)) + (0.3f * vVar2.y));
	if (!unk_0xEF0E25DA0CB6E8FF(Local_300[2 /*7*/]))
	{
		func_177(&(Local_300[2 /*7*/]), func_179(2), fVar5, vVar2.x, uVar0, 50f);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(Local_300[1 /*7*/]))
	{
		func_177(&(Local_300[1 /*7*/]), func_179(1), fVar8, -vVar2.y, uVar1, 37.3f);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(Local_300[0 /*7*/]))
	{
		func_177(&(Local_300[0 /*7*/]), func_179(0), fVar6, -vVar2.y, fVar4, 50f);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(Local_300[3 /*7*/]))
	{
		func_177(&(Local_300[3 /*7*/]), func_179(3), fVar7, vVar2.y, fVar3, 45f);
	}
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	unk_0x348665177DBFB93B(Local_300[*iParam0 /*7*/], true);
}

void func_177(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x6656
{
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x348665177DBFB93B(*uParam0, true);
	unk_0x9961B404F89D0597(*uParam0, vParam1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
}

float func_178(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)//Position - 0x66A8
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)//Position - 0x66C2
{
	vector3 vVar0;
	var uVar1;
	struct<2> Var2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
	}
	if (!unk_0xE59B7F5A03335350(iLocal_93, 0))
	{
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_93), &uVar1, &Var2);
	vVar3 = { unk_0x3EA3A28A85F8C32F(iLocal_93, unk_0xB5B60A04E1654409(iLocal_93, "windscreen")) };
	vVar4 = { unk_0x1483995DFFF0DEEA(iLocal_93, vVar3) };
	switch (iParam0)
	{
		case 0:
			vVar0 = { unk_0xA4455714F3DCE207(iLocal_93, 0f, (Var2.f_1 + 1.4f), vVar4.z) };
			break;
		
		case 1:
			vVar0 = { unk_0xA4455714F3DCE207(iLocal_93, 1.5f, (Var2.f_1 + 1.2f), (vVar4.z - 0.1f)) };
			break;
		
		case 2:
			vVar0 = { unk_0xA4455714F3DCE207(iLocal_93, -3.7f, 0.7f, vVar4.z) };
			break;
		
		case 3:
			vVar0 = { func_180() };
			break;
	}
	return vVar0;
}

Vector3 func_180()//Position - 0x679B
{
	vector3 vVar0;
	vector3 vVar1;
	struct<2> Var2;
	var uVar3;
	
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_93), &Var2, &uVar3);
	vVar0 = { unk_0x3EA3A28A85F8C32F(iLocal_93, unk_0xB5B60A04E1654409(iLocal_93, "windscreen")) };
	vVar1 = { unk_0x1483995DFFF0DEEA(iLocal_93, vVar0) };
	vVar1.z = (vVar1.z + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0xA4455714F3DCE207(iLocal_93, 0f, -unk_0x357058E632979E65(Var2.f_1), vVar1.z);
}

void func_181(int iParam0, bool bParam1)//Position - 0x67FF
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

void func_182(int iParam0)//Position - 0x6821
{
	if (!unk_0xEF0E25DA0CB6E8FF(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xF448AA2D7E08A675(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x2FB83B8BD6C05FD2(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xE186ACC7BE9B244E())
	{
		func_185(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_530())
		{
			if (!func_451("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_530())
		{
			if (!func_451("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0xF7DDAAF0EFDAFA22(2, 0) && !unk_0xE186ACC7BE9B244E()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x348665177DBFB93B(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_183(var uParam0)//Position - 0x68EC
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_471(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_471(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_471(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()//Position - 0x695F
{
	if ((func_471(iLocal_51, 16) && func_471(iLocal_51, 64)) && func_471(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)//Position - 0x6991
{
	var uVar0[4];
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	unk_0x9601F9343A2063DE(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	vVar1.z = (-(SYSTEM::TO_FLOAT(uVar0[2]) / 127f) * 10f);
	vVar1.y = ((-vVar1.z * 3f) / 10f);
	if (unk_0xF31C9BB6C94E205D())
	{
		vVar1.x = ((SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		vVar1.x = (-(SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * SYSTEM::TIMESTEP());
	vVar3 = { vVar1 };
	if (unk_0x50465D2C022B9E04(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (vVar3.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (vVar3.y * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (vVar3.z * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((vVar3.x - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((vVar3.y - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((vVar3.z - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	unk_0x3553F2A72957724E(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)//Position - 0x6B2B
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

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x6B52
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x4B1521EDBF25A39C(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 218) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 219) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 220) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 221) * 127f));
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (bParam5)
		{
			if (unk_0xF31C9BB6C94E205D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xCBE319E6CA6FF4D2())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_188()//Position - 0x6C56
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_90))
		{
			if (!func_471(iLocal_49, 256))
			{
				unk_0xAFD2CBD312D69CFA(unk_0xBC25C936A095B5BA());
				unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_530())
					{
						unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 15, 1);
					}
					unk_0xF715C239F71B95D6(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_530())
					{
						unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 10, 1);
					}
					unk_0xF715C239F71B95D6(0, 4000, 210);
				}
				else
				{
					if (!func_530())
					{
						unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 5, 1);
					}
					unk_0xF715C239F71B95D6(0, 3000, 168);
				}
				func_463(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (unk_0x619CCA1A6FD0BC87(iLocal_90, 876132797))
				{
					unk_0xF715C239F71B95D6(0, 200, 84);
					unk_0x5EBD7EB63AD5FB1D(iLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_471(iLocal_49, 32768))
				{
					if (func_530())
					{
						iVar0 = unk_0xB57F0B6D6209FF97(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (unk_0x77FC50899603581D(iVar0))
					{
						fVar1 = unk_0x8FD30584EB38411B(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_504(512))
							{
								unk_0xF715C239F71B95D6(0, 200, 252);
								unk_0x5EBD7EB63AD5FB1D(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_508(512);
						}
					}
				}
				else if (unk_0x619CCA1A6FD0BC87(iLocal_90, 876132797))
				{
					unk_0xF715C239F71B95D6(0, 200, 252);
					unk_0x5EBD7EB63AD5FB1D(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)//Position - 0x6F78
{
	if (!func_471(iLocal_52, iParam0))
	{
		func_463(&iLocal_52, iParam0);
	}
}

void func_190()//Position - 0x6F94
{
	int iVar0;
	
	iVar0 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
	iVar0 = (iVar0 + (1 + iLocal_288));
	if (iVar0 > unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA());
	}
	unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar0, 0);
	func_191();
}

void func_191()//Position - 0x6FD6
{
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		iLocal_57 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
	}
}

bool func_192(int iParam0)//Position - 0x6FFE
{
	return (((unk_0x96044E39418AAF17(iParam0, func_48(), func_40(11), 3) || unk_0x96044E39418AAF17(iParam0, func_48(), func_40(21), 3)) || unk_0x96044E39418AAF17(iParam0, func_46(), func_39(11), 3)) || unk_0x96044E39418AAF17(iParam0, func_46(), func_39(21), 3));
}

bool func_193()//Position - 0x705C
{
	return unk_0x96044E39418AAF17(iLocal_90, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_194(iLocal_90, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)//Position - 0x7080
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar1 = unk_0x9FE9D386222EEE47(iParam0, 1);
		if (unk_0xE59B7F5A03335350(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()//Position - 0x712A
{
	if (!func_193())
	{
		return;
	}
	if (func_530())
	{
		func_199();
	}
	if (unk_0x8C2668F45F2BB3F2(iLocal_90) || unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (unk_0x491B2241281A03B7(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()//Position - 0x7174
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90) && !unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_288 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_453(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > unk_0x55AEFCD285ECC0F2(2f, 5f))
		{
			if (!func_471(iLocal_49, 65536))
			{
				func_463(&iLocal_49, 65536);
				unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&iLocal_101);
			}
		}
	}
}

void func_197(int iParam0)//Position - 0x7215
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0xB5CEFD608600A09F()))
			{
				unk_0x53D8178763EDCE60(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x53D8178763EDCE60(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0xB5CEFD608600A09F()))
			{
				unk_0x53D8178763EDCE60(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x53D8178763EDCE60(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)//Position - 0x729C
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return 1;
	}
	return Global_24FB5C[iParam0 /*406*/].f_E2;
}

void func_199()//Position - 0x72BE
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_504(4))
	{
		if (!func_10(&iLocal_104))
		{
			func_453(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_504(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_59++;
			}
			else if (func_504(16))
			{
				if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
				{
					func_508(4);
					func_508(16);
					func_34(&iLocal_104);
				}
			}
		}
	}
}

int func_200(float fParam0)//Position - 0x7355
{
	float fVar0;
	
	if (func_201(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		fVar0 = unk_0xC4EA392E1E849405(unk_0xB5CEFD608600A09F());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)//Position - 0x7381
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

void func_202(bool bParam0, bool bParam1)//Position - 0x73CB
{
	if (!func_530())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)//Position - 0x7406
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7447
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_132(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_132(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_132(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_132(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_132(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_132(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_132(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_132(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_132(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_132(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_132(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_132(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_132(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_132(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_132(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_132(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_132(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_132(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_132(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_132(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_132(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)//Position - 0x7C01
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

void func_206(int iParam0)//Position - 0x7DF9
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_207(int iParam0)//Position - 0x7E22
{
	if (Global_3943)
	{
		func_208(0, 0);
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
	if (!func_15())
	{
		Global_389D.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)//Position - 0x7E92
{
	if (bParam0)
	{
		if (func_209(0))
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

int func_209(int iParam0)//Position - 0x7F06
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

bool func_210(int iParam0)//Position - 0x7F60
{
	bool bVar0;
	
	if (func_530())
	{
		bVar0 = unk_0x77FC50899603581D(unk_0xB57F0B6D6209FF97(iParam0));
	}
	else
	{
		bVar0 = unk_0x77FC50899603581D(iParam0);
	}
	return bVar0;
}

void func_211()//Position - 0x7F88
{
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(1000);
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), func_213(), 1, false, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), func_212());
		func_521();
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0xF845620A03C7425B(&iLocal_90);
	}
}

float func_212()//Position - 0x7FD0
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()//Position - 0x801A
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()//Position - 0x807F
{
	int iVar0;
	
	if (func_216(&iLocal_98, 3f) && !unk_0xEDEA6C8F42EE05F6(iLocal_97))
	{
		iVar0 = SYSTEM::FLOOR(((func_215() - 2f) * 1000f));
		unk_0x348665177DBFB93B(iLocal_96, false);
		unk_0xAE099C1ADC89C331(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (func_216(&iLocal_98, func_215()))
	{
		unk_0x7A41D32A383895D8(1000);
		iLocal_286 = 10;
	}
}

float func_215()//Position - 0x80DB
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_216(int iParam0, float fParam1)//Position - 0x8120
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_217(var uParam0)//Position - 0x8142
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)//Position - 0x8181
{
	var uVar0;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &uVar0, 11))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)//Position - 0x819F
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(*uParam0))
		{
			if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == unk_0x233ED4CD1F1A42C1(*uParam0))
					{
						func_116(0);
						unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
						func_521();
						func_516(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)//Position - 0x81FD
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iLocal_90))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			iVar0 = unk_0x8D66276473ABD7CC(iLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_116(0);
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_221(var uParam0)//Position - 0x824C
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			iVar0 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_116(0);
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_222(var uParam0)//Position - 0x829F
{
	int iVar0;
	vector3 vVar1;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
				if (SYSTEM::VDIST2(vLocal_56, vVar1) >= 4f)
				{
					func_116(0);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_521();
					func_516(uParam0);
				}
			}
		}
	}
}

void func_223()//Position - 0x8310
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_471(iLocal_49, 16))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 0);
		}
		func_463(&iLocal_49, 16);
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iLocal_93 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_93))
			{
				unk_0xAC11493FE23DE883(iLocal_93, true);
				unk_0x93D3868AE0D83B7C(iLocal_93, 4);
				unk_0xBDB583AA8DCA5600(iLocal_93, 1);
				unk_0xD38EB677CBE7440A(iLocal_93, false, 0);
			}
		}
		else
		{
			unk_0xAC11493FE23DE883(iLocal_93, true);
			unk_0x93D3868AE0D83B7C(iLocal_93, 4);
			unk_0xBDB583AA8DCA5600(iLocal_93, 1);
		}
		if (!func_365() || !unk_0x62F3A07C43FFB568(iLocal_90, iLocal_93, 0))
		{
			func_454(0);
			return;
		}
	}
	else
	{
		func_454(0);
		return;
	}
	func_206(0);
	if ((!unk_0xB66CFDE6B830965A(iLocal_93) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !func_471(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_363(1, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_472("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x4E0EC60D119222B1(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_530())
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x724D816EA203A79E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
						{
							if (unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == unk_0xBC25C936A095B5BA())
							{
								if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
								{
									if (!unk_0x5CAE759AE8219D20(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
									{
										unk_0x77815D3407C6700D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false, 0);
									}
								}
								else
								{
									unk_0xC7587327285D9984(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xCE1EBDF53DEA0B16(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
							return;
						}
					}
				}
			}
			func_362();
			func_361();
			func_191();
			if (func_358())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_357();
				if (func_530())
				{
					func_189(2);
					if (func_530())
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
							{
								if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
								{
									unk_0x42793EADF14EC888(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
									unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 4);
									unk_0x7EE3B21D7AC635E8(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x2A022CF97A7A1A9B(iLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_356(iLocal_295))
			{
				func_355(&iLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_353(iLocal_90, 0);
			if (func_353(unk_0xBC25C936A095B5BA(), 1))
			{
				if (func_351(&sVar1, 0))
				{
					iLocal_48 = unk_0x621126C4FACA4770();
					iVar2 = unk_0x7FCE28BE45D0735E();
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							unk_0xC738E4BB7AAEF78D(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							unk_0xC738E4BB7AAEF78D(1);
						}
					}
					func_335();
					iLocal_292 = 3;
					func_472("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_334(&sVar1, -1);
					func_34(&iLocal_107);
					iLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xE186ACC7BE9B244E())
			{
				return;
			}
			unk_0x4F6BBF789EC53456(3);
			func_315();
			func_284(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_283(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			unk_0xBBC4195AD74D153D(0, 48, 1);
			unk_0xD55638CE45B2B948(2, 187);
			unk_0xD55638CE45B2B948(2, 188);
			unk_0xD55638CE45B2B948(2, 201);
			iVar0 = 0;
			if (unk_0x8ACB0C3FACC09467())
			{
				if (unk_0x0738078C96634C59(2))
				{
					unk_0xBBC4195AD74D153D(0, 1, 1);
					unk_0xBBC4195AD74D153D(0, 2, 1);
					unk_0x5EFA245B45A49778(0, 237, 1);
					unk_0x5EFA245B45A49778(0, 238, 1);
					unk_0x5EFA245B45A49778(0, 241, 1);
					unk_0x5EFA245B45A49778(0, 242, 1);
					func_279(0, 0, 0, 1);
					func_278(0, -1, 1);
					if (func_277())
					{
						if (Global_4118D6 != iLocal_68)
						{
							unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4118D6;
							func_472("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x694514BD37EC4E94(2, 187) || (unk_0x50465D2C022B9E04(2) && unk_0x694514BD37EC4E94(2, 242))) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 33))) || (((unk_0x8ACB0C3FACC09467() && !unk_0x50465D2C022B9E04(2)) && iVar4 > 100) && (unk_0x105601648511CC64() - iLocal_87) > 300))
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_472("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = unk_0x105601648511CC64();
			}
			else if (((unk_0x694514BD37EC4E94(2, 188) || (unk_0x50465D2C022B9E04(2) && unk_0x694514BD37EC4E94(2, 241))) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 32))) || (((unk_0x8ACB0C3FACC09467() && !unk_0x50465D2C022B9E04(2)) && iVar4 < -100) && (unk_0x105601648511CC64() - iLocal_87) > 300))
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_472("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0x105601648511CC64();
			}
			else if (unk_0x093484B35A948BFC(2, 201) || iVar0 == 1)
			{
				unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				unk_0x4E0EC60D119222B1(3);
				func_273();
				unk_0x5502708AECB47F5D(unk_0xBC25C936A095B5BA());
				iLocal_292 = 4;
			}
			func_272(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = unk_0xE41AC525C2050DE5(iLocal_90);
			if (iLocal_288 == 3)
			{
				func_363(1, -1);
				func_271();
				func_270(0);
				iLocal_62 = unk_0x105601648511CC64();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_472("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_454(0);
					}
					return;
				}
				else
				{
					if (func_265() >= 20)
					{
						iVar7 += 20;
						func_225(20);
						unk_0x8EF3D958386640FE(iLocal_90, iVar7);
					}
					func_454(1);
					return;
				}
			}
			if (!unk_0xF9E082857622D91E(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
			{
			}
			else
			{
				func_363(1, -1);
				func_271();
				if (unk_0x90E07F8477EB4479())
				{
					func_463(&iLocal_49, 1024);
					iLocal_288 = 3;
					func_472("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 3)
				{
					if (func_265() > func_224(iLocal_288))
					{
						func_225(func_224(iLocal_288));
						iVar7 = (iVar7 + func_224(iLocal_288));
					}
					func_35(&iLocal_101, (14f - 4f));
					func_472("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_286 = 11;
				}
				unk_0x8EF3D958386640FE(iLocal_90, iVar7);
				iLocal_62 = unk_0x105601648511CC64();
			}
			break;
	}
}

int func_224(int iParam0)//Position - 0x8986
{
	if (unk_0x90E07F8477EB4479())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x89F1
{
	var uVar0;
	
	if (!func_530())
	{
		func_236(func_18(), 1, iParam0);
	}
	else if (!func_235())
	{
		unk_0x7C5675C4E7270B2F(iParam0, 0, 0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8A33
{
	int iVar0;
	
	if (!func_235())
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
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8EF9
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_133()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_233(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x909D
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)//Position - 0x90D5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
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
		func_230(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_230(var uParam0)//Position - 0x9127
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
	func_231(&(uParam0->f_8.f_3));
	func_231(&(uParam0->f_8.f_10));
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

void func_231(var uParam0)//Position - 0x9221
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

int func_232(int iParam0)//Position - 0x9269
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, int iParam1)//Position - 0x9291
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_234(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x92A5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_235())
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

int func_235()//Position - 0x939E
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)//Position - 0x93B5
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_237(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x93FE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_264();
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
					func_263(99, 1);
					func_262(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_248(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
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
							func_262(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_262(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_property"), iParam3);
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
									func_262(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_263(95, iParam3);
					break;
				
				case 1:
					func_263(97, iParam3);
					break;
				
				case 2:
					func_263(96, iParam3);
					break;
			}
			func_263(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
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
					func_262(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_total_cash_earned"), iParam3);
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
	func_239(iParam0);
	if (Global_8C41 == 15)
	{
		func_238(0);
	}
	return 1;
}

void func_238(bool bParam0)//Position - 0x99FD
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

void func_239(int iParam0)//Position - 0x9C7F
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

void func_240(int iParam0)//Position - 0x9CD9
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_148(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_242() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_242() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_241(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)//Position - 0x9DB0
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

int func_242()//Position - 0x9E38
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)//Position - 0x9E45
{
	func_263(93, iParam0);
	func_263(29, iParam0);
	func_263(30, iParam0);
}

bool func_244(int iParam0)//Position - 0x9E65
{
	if (iParam0 == 8)
	{
		return func_245(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_242() /*12171*/].f_1E08.f_A, iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2)//Position - 0x9EB3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_133();
	}
	iVar1 = func_247(iParam0, iParam1);
	uVar2 = func_246(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_246(int iParam0)//Position - 0x9EF0
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

int func_247(int iParam0, int iParam1)//Position - 0xA1DC
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_133();
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

int func_248(bool bParam0)//Position - 0xA4A9
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
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_249(27, 1);
	return 1;
}

int func_249(int iParam0, int iParam1)//Position - 0xA560
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_250(iParam0, iParam1);
}

int func_250(int iParam0, int iParam1)//Position - 0xA57B
{
	if (func_531(14) && !func_261(iParam0))
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
	if (func_260(&Global_411EB6))
	{
		if (func_258(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_251(&Global_411EB6, iParam0))
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

int func_251(var uParam0, int iParam1)//Position - 0xA618
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_531(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	func_254(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_252(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_252(var uParam0, int iParam1)//Position - 0xA6C9
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_531(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_253(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_253(var uParam0, int iParam1)//Position - 0xA744
{
	return (*uParam0)[iParam1] == 78;
}

void func_254(var uParam0)//Position - 0xA755
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_255(uParam0, iVar0);
		iVar0++;
	}
	func_256(uParam0, (Global_411EB5 - 0.5f));
}

void func_255(var uParam0, int iParam1)//Position - 0xA789
{
	(*uParam0)[iParam1] = 78;
}

void func_256(var uParam0, float fParam1)//Position - 0xA799
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

float func_257(var uParam0)//Position - 0xA7B6
{
	return uParam0->f_50;
}

bool func_258(var uParam0, int iParam1)//Position - 0xA7C2
{
	return func_259(uParam0, iParam1) != -1;
}

int func_259(var uParam0, int iParam1)//Position - 0xA7D4
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

bool func_260(var uParam0)//Position - 0xA801
{
	return uParam0->f_4F == 1;
}

int func_261(int iParam0)//Position - 0xA80F
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

void func_262(int iParam0, int iParam1)//Position - 0xA85F
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_263(int iParam0, int iParam1)//Position - 0xA882
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

void func_264()//Position - 0xA8DF
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

int func_265()//Position - 0xA954
{
	if (func_530())
	{
		return func_267(unk_0xB5CEFD608600A09F());
	}
	return func_266(func_18());
}

int func_266(int iParam0)//Position - 0xA979
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

var func_267(int iParam0)//Position - 0xA9D1
{
	var uVar0;
	
	uVar0 = func_268(iParam0);
	return uVar0;
}

int func_268(int iParam0)//Position - 0xA9E3
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return unk_0x8378732DD7891451(-1);
		}
		else if (func_269(iParam0))
		{
			return Global_18402B[iParam0 /*770*/].f_D3.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_269(int iParam0)//Position - 0xAA26
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

void func_270(int iParam0)//Position - 0xAA4B
{
	if (unk_0x93DD0CE3F3963C56() != 255)
	{
		unk_0xDEDB522781AEF1DC(iParam0);
		unk_0xD8FC01C22AE07484(iParam0);
	}
}

void func_271()//Position - 0xAA68
{
	Global_4336.f_5 = 0;
}

void func_272(int iParam0, bool bParam1, int iParam2)//Position - 0xAA76
{
	int iVar0;
	int iVar1;
	
	Global_43C1.f_15E6 = iParam0;
	Global_43C1.f_166D = iParam2;
	if (Global_43C1.f_15E6 < Global_43C1.f_15E5)
	{
		Global_43C1.f_15E5 = Global_43C1.f_15E6;
	}
	else if ((Global_43C1.f_15DF && Global_43C1.f_15E6 > Global_43C1.f_15E7) || (!Global_43C1.f_15DF && Global_43C1.f_15E6 >= (Global_43C1.f_15E5 + Global_43C1.f_13E7)))
	{
		iVar0 = Global_43C1.f_15E5;
		while (iVar0 <= Global_43C1.f_15E6)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43C1.f_135F[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43C1.f_13E7 && Global_43C1.f_15E5 < 128)
		{
			Global_43C1.f_15E5++;
			iVar1 = 0;
			iVar0 = Global_43C1.f_15E5;
			while (iVar0 <= Global_43C1.f_15E6)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43C1.f_135F[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43C1.f_11D2), "", 16);
		StringCopy(&(Global_41188A.f_15), "", 16);
	}
}

void func_273()//Position - 0xABC8
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_274();
		if (iLocal_289 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0x284F2ACE6839D3C0("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_288 = 0;
		}
		else if (iLocal_289 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 1;
		}
		else if (iLocal_289 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 2;
		}
	}
}

void func_274()//Position - 0xAC36
{
	switch (iLocal_289)
	{
		case 0:
			func_276();
			break;
		
		case 1:
		case 2:
			func_275();
			break;
	}
}

void func_275()//Position - 0xAC66
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_276()//Position - 0xAC77
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_277()//Position - 0xAC88
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

int func_278(int iParam0, int iParam1, bool bParam2)//Position - 0xACAF
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

void func_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xAD8F
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
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x50465D2C022B9E04(2))
	{
		Global_4118D6 = -1;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43BE;
	fVar2 = (fVar0 + Global_43C0);
	fVar3 = Global_43C1.f_15E0;
	fVar1 = (Global_43C1.f_15E0 - (IntToFloat(Global_43C1.f_15E2) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43C1.f_15E2 < 1)
	{
		fVar1 = (Global_43C1.f_15E0 - 0.034722f);
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	func_282();
	if (Global_4118D6 == -6)
	{
		return;
	}
	Global_4118D6 = -1;
	fVar7 = Global_4118D0;
	fVar8 = Global_4118D1;
	if (Global_43C1.f_15E3 > Global_43C1.f_15E2)
	{
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= fVar3) && Global_4118D1 < (fVar3 + fVar6))
		{
			Global_4118D6 = -2;
			if (bParam3)
			{
				func_281(0);
			}
			return;
		}
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= (fVar3 + fVar6)) && Global_4118D1 < (fVar3 + 0.034722f))
		{
			Global_4118D6 = -3;
			if (bParam3)
			{
				func_281(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43C1.f_15E3 == -1)
		{
			Global_4118D6 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43C1.f_15E2);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xC2EAD30963BDAA47(76, 84);
				unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
				func_280(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43C0, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x2A025E7CEBB76D14();
			}
		}
		Global_4118D6 = Global_43C1.f_1D80[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4118D6 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4118D6 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4118D6 = -4;
		return;
	}
	Global_4118D6 = -1;
}

void func_280(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB03B
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_281(bool bParam0)//Position - 0xB06A
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43BE;
	fVar1 = Global_43C1.f_15E0;
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	if (Global_4118D6 == -2)
	{
		func_280(fVar0, fVar1, Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4118D6 == -3)
	{
		func_280(fVar0, (fVar1 + fVar2), Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_282()//Position - 0xB0F3
{
	Global_4118D2 = Global_4118D0;
	Global_4118D3 = Global_4118D1;
	Global_4118D0 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4118D1 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4118D4 = (Global_4118D0 - Global_4118D2);
	Global_4118D5 = (Global_4118D1 - Global_4118D3);
}

void func_283(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xB13B
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

void func_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0xB210
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_312(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43C1)
	{
		if (func_310(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43C1 = 0;
		}
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
	{
		fVar58 = Global_43BF;
	}
	else
	{
		fVar58 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43C0;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x1BBB0A5225346008(&iVar59, &iVar60);
		fVar62 = unk_0x3771EE4CB542D71E(0);
		if (func_309())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_309())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		unk_0x7A569F3885B2E08A(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43C1.f_15DE)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
			{
				fVar49 = Global_43BF;
			}
			else
			{
				if (Global_43C1)
				{
					StringCopy(&cVar64, func_308(29), 64);
					StringCopy(&cVar65, func_305(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
					{
						func_280(Global_43BE, Global_43BF, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43C1.f_1EDD)
				{
					iVar1 = Global_43C1.f_1ED9;
					iVar2 = Global_43C1.f_1EDA;
					iVar3 = Global_43C1.f_1EDB;
					iVar4 = Global_43C1.f_1EDC;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_280(Global_43BE, (Global_43BF + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) != 0)
				{
					func_304();
					unk_0x8B371195127AACF2(&(Global_43C1.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43C1.f_44)
					{
						if (Global_43C1.f_5[iVar14] == 2)
						{
							unk_0xAA5C5BF0489E5553(Global_43C1.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43C1.f_5[iVar14] == 3)
						{
							unk_0x3AE7CB4034BE212F(Global_43C1.f_E[iVar16], Global_43C1.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43C1.f_5[iVar14] == 1)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 8)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 5)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 6)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 7)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 9)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x3A8B9C7B1C825123((Global_43BE + 0.00390625f), ((Global_43BF + fVar56) + 0.00416664f), 0);
				}
				if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
				{
					if (Global_43C1.f_15E4 != 0)
					{
						func_304();
						func_302((((Global_43BE + fParam5) - 0.00390625f) - func_303("CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3)), ((Global_43BF + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3);
					}
				}
			}
			iVar6 = Global_43C1.f_15E5;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43C1.f_1EE7)
			{
				iVar1 = Global_43C1.f_1EE3;
				iVar2 = Global_43C1.f_1EE4;
				iVar3 = Global_43C1.f_1EE5;
				iVar4 = Global_43C1.f_1EE6;
			}
			else
			{
				unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43C1.f_13E7 && iVar6 <= Global_43C1.f_13E0)
			{
				if (iVar6 >= 0)
				{
					if (Global_43C1.f_14EB[iVar6])
					{
						if (Global_43C1.f_146A[iVar6] && iVar6 != Global_43C1.f_15E5)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar55 = Global_43C1.f_15EC[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43C1.f_13E0 <= 1)
					{
						Global_43C1.f_13E0++;
					}
					iVar53 = 1;
				}
			}
			unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
			{
				if (Global_43C1.f_1EEC)
				{
					iVar1 = Global_43C1.f_1EE8;
					iVar2 = Global_43C1.f_1EE9;
					iVar3 = Global_43C1.f_1EEA;
					iVar4 = Global_43C1.f_1EEB;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_280(Global_43BE, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x9893E000F1F078E7("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43C1.f_1EF9)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE45648BDBF3441F5(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "shop_arrows_upANDdown", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_11D2)) != 0 && Global_43C1.f_121C != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_43C1.f_121E != 0)
				{
					func_310(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_301(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_280(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_301(fVar40);
				unk_0x8B371195127AACF2(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43C1.f_121E != 0)
				{
					func_310(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					func_300(Global_43C1.f_121E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_121E), func_305(Global_43C1.f_121E, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43C1.f_121C > 0)
				{
					if ((unk_0x105601648511CC64() - Global_43C1.f_121D) > Global_43C1.f_121C)
					{
						StringCopy(&(Global_43C1.f_11D2), "", 16);
						Global_43C1.f_121C = -1;
					}
				}
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_15)) != 0 && Global_41188A.f_41 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_41188A.f_43 != 0)
				{
					func_310(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_301(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_280(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_301(fVar40);
				unk_0x8B371195127AACF2(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_41188A.f_43 != 0)
				{
					func_310(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_300(Global_41188A.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_308(Global_41188A.f_43), func_305(Global_41188A.f_43, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_41188A.f_41 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_41188A.f_42) > Global_41188A.f_41)
					{
						StringCopy(&(Global_41188A.f_15), "", 16);
						Global_41188A.f_41 = -1;
					}
				}
			}
			func_293(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43C1.f_15DE)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43C1.f_13E0;
			if (Global_43C1.f_15DF)
			{
				iVar67 = (Global_43C1.f_15E2 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43C1.f_15EC[iVar6] != 0f)
				{
					fVar55 = Global_43C1.f_15EC[iVar6];
				}
				if (Global_43C1.f_15DF)
				{
					iVar6 = Global_43C1.f_1D80[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43C1.f_15E5 && iVar9 < Global_43C1.f_13E7)
				{
					bVar33 = true;
					if (Global_43C1.f_15E6 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43C1.f_146A[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43C1.f_1672[iVar6] = fVar35;
				fVar34 = (Global_43BE + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43C1.f_15E6 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43C1.f_1EF3)
					{
						unk_0xE45648BDBF3441F5(Global_43C1.f_1EF2, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xE45648BDBF3441F5(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Nav", (Global_43BE + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43C1.f_1670 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_291(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x8B371195127AACF2("DFLT_MNU_OPT");
					unk_0x3A8B9C7B1C825123(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43C1.f_13E8)
					{
						if (unk_0xFA30DFD0084E92FE(Global_43C1.f_135F[iVar6], iVar8) || Global_43C1.f_133E[iVar8] == 5)
						{
							if (Global_43C1.f_15DF)
							{
								iVar19 = Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar20 = Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar21 = Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar22 = Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar23 = Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)];
							}
							else
							{
								Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar19;
								Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar20;
								Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar21;
								Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar22;
								Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43C1.f_16F6[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43C1.f_16F6[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43C1.f_1344[iVar8] != -1f)
							{
								fVar34 = ((Global_43BE + 0.0046875f) + Global_43C1.f_1344[iVar8]);
							}
							if ((iVar8 < 4 && Global_43C1.f_1344[iVar8 + 1] != -1f) && fVar34 < Global_43C1.f_1344[iVar8 + 1])
							{
								fVar44 = (Global_43C1.f_1344[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43BE + Global_43C0) - 0.0046875f) - fVar34);
							}
							if ((Global_43C1.f_1351[iVar8] && Global_43C1.f_166D) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43C1.f_133E[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_291(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0x2207C0EA517B975D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_310(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43C1.f_1151[(iVar22 + iVar14)] == 2 || Global_43C1.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
											Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_291(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_290(bVar32);
											}
											unk_0x8B371195127AACF2(&(Global_43C1.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar28)] == 2 || Global_43C1.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_310(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_310(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_300(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_1151[(iVar22 + iVar28)]), func_305(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_1151[(iVar22 + iVar28)]), func_305(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43C1.f_1359[iVar8] == 2)
											{
												unk_0x3A8B9C7B1C825123(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x3A8B9C7B1C825123((fVar34 + fVar40), fVar35, 0);
												if (func_289() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_291(0, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														unk_0xB8F3C51875F7BEA3(0f, (0.35f * 0.7f));
														unk_0xCC4FE6A016BA0765(255, 255, 255, 150);
														unk_0xF7EBEC3FF57AEC65((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														unk_0x8B371195127AACF2(&cVar75);
														unk_0xAA5C5BF0489E5553((Global_43C1.f_15E5 + iVar30));
														unk_0x3A8B9C7B1C825123((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar14)] != 2 && Global_43C1.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_310(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_310(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_300(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_1151[(iVar22 + iVar14)]), func_305(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (Global_43BE + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_1151[(iVar22 + iVar14)]), func_305(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_1151[(iVar22 + iVar14)]), func_305(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_291(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_290(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[iVar20]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_291(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_288((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_291(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_290(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_310(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_291(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_287((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_310(Global_43C1.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43C1.f_15DF)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43C1.f_1359[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
												Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
												fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											}
											if (bVar52)
											{
												if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43C1.f_1359[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_300(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_300(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_310(Global_43C1.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_300(Global_43C1.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x51DA985AC0B70E2E(func_308(Global_43C1.f_1151[iVar22]), func_305(Global_43C1.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_286(Global_43C1.f_1151[iVar22])), (fVar37 * func_286(Global_43C1.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43C1.f_133E[iVar8] == 5)
							{
								if (Global_43C1.f_134A[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								if (Global_43C1.f_1351[iVar8])
								{
									if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43C1.f_1D80[iVar9] = iVar6;
						Global_43C1.f_15E7 = iVar6;
						iVar9++;
						if (Global_43C1.f_146A[iVar6])
						{
							iVar13++;
						}
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43C1.f_15EC[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43C1.f_15DE)
					{
						Global_43C1.f_14EB[iVar6] = 1;
						if (Global_43C1.f_13E9[iVar6])
						{
							if (bVar32)
							{
								Global_43C1.f_15E4 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43C1.f_15E4 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43C1.f_15DE)
			{
				Global_43C1.f_15E0 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43C1.f_15E3 = iVar11;
				Global_43C1.f_15E1 = iVar10;
				Global_43C1.f_15DE = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43C1.f_15DF)
	{
		Global_43C1.f_15E2 = iVar9;
		Global_43C1.f_15DF = 1;
	}
	Global_43C1.f_166F = fVar49;
	Global_43C1.f_1671 = unk_0x105601648511CC64();
	unk_0xE7918A3D05166D98(Global_43C1.f_166F);
	if (!Global_43C1.f_1ED8)
	{
		func_206(0);
	}
	Global_43C1.f_1ED8 = 0;
	if (bParam2)
	{
		unk_0x4E0EC60D119222B1(10);
	}
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(8);
	if (bParam0)
	{
		func_285(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_285(int iParam0)//Position - 0xDE75
{
	Global_14D262.f_437 = iParam0;
}

float func_286(int iParam0)//Position - 0xDE86
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_287(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0xDEF5
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(fParam3, iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_288(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xDF14
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_289()//Position - 0xDF32
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_290(bool bParam0)//Position - 0xDF43
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
}

void func_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xDF89
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_292(Global_43C1.f_16F6[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE45648BDBF3441F5(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
		else
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	else
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0x567A3300A78B3D65(1);
	if (bParam5)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(4);
	}
	else if (bParam6)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(6);
	}
	else
	{
		unk_0xC8793973D4960AC4(0);
	}
	unk_0x666751E43D377EAA(0f, 1f);
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xE137
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xE3C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_312(bParam4, bParam8))
	{
		return;
	}
	if (func_298())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_296(unk_0xB5CEFD608600A09F(), 0))
		{
			return;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x0F8865E539C1FCE8() == 0 || unk_0xF32BA80A2DED1FC6())
		{
			return;
		}
	}
	if (Global_43C1.f_121F != 0)
	{
		if (unk_0x8A0D8839261BAEEF(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (Global_43C1.f_1320[iVar1] != 358)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xE57EAD1FEA2A6FAF(2, Global_43C1.f_1320[iVar1], true), 64);
				}
				else if (Global_43C1.f_132D[iVar1] != 32)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xC7CF72D26EA6A227(2, Global_43C1.f_132D[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43C1.f_1220 = 0;
		}
		if (!Global_43C1.f_1220)
		{
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88((1f - (Global_43C1.f_1357 / 100f)));
			unk_0xF9FBC2F3F73D94C9();
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar1 /*4*/])) != unk_0x56BEECB328B6D29D("PREV"))
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar1);
					func_295(&(Global_43C1.f_1221[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_295(&(Global_43C1.f_1221[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43C1.f_1313[iVar1] == -1)
					{
						func_294(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					}
					else
					{
						unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4C36886AAFD04CF8(iParam2, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(iParam2);
						}
						unk_0x64989E60CF560CA1();
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (Global_43C1.f_1320[iVar1] != 358 && unk_0xFA30DFD0084E92FE(Global_43C1.f_133A, iVar1))
						{
							unk_0x5E5DBD0A6623969E(true);
							unk_0x1E1FB49121565EB6(Global_43C1.f_1320[iVar1]);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(false);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar1++;
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_10)) != unk_0x56BEECB328B6D29D(""))
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(Global_43C1.f_121F);
				func_295(&Global_41188A);
				if (Global_41188A.f_14 == -1)
				{
					func_294(&(Global_41188A.f_10));
				}
				else
				{
					unk_0x57016C44F10111F0(&(Global_41188A.f_10));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43C1.f_1358)
			{
				unk_0x1E1FB49121565EB6(1);
			}
			else
			{
				unk_0x1E1FB49121565EB6(0);
			}
			unk_0xF9FBC2F3F73D94C9();
			Global_43C1.f_1220 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43C1.f_121F)
		{
			if (Global_43C1.f_1313[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1E1FB49121565EB6(iVar1);
					unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar1++;
		}
		if (Global_41188A.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x57016C44F10111F0(&(Global_41188A.f_10));
				if (bParam5)
				{
					unk_0x4C36886AAFD04CF8(iParam2, 70);
				}
				else
				{
					unk_0xAA5C5BF0489E5553(iParam2);
				}
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43C1.f_1EFB)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
				Global_43C1.f_1EFB = 1;
			}
		}
		else if (Global_43C1.f_1EFB)
		{
			unk_0xC0404835F30391BB(15);
			Global_43C1.f_1EFB = 0;
		}
		unk_0x2A025E7CEBB76D14();
		if (Global_43C1.f_133D)
		{
			unk_0xC2EAD30963BDAA47(82, 66);
			unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
			unk_0x65E432C782E7E702(Global_43C1.f_159A[iVar0 /*10*/], Global_43C1.f_133B, Global_43C1.f_133C, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			unk_0x4B6031094354FED6(Global_43C1.f_159A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_294(char* sParam0)//Position - 0xE89D
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_295(char* sParam0)//Position - 0xE8AF
{
	unk_0xCB30200B8055CA57(sParam0);
}

bool func_296(int iParam0, int iParam1)//Position - 0xE8BD
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_297(-1, 0) == 8;
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

int func_297(int iParam0, bool bParam1)//Position - 0xE908
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

int func_298()//Position - 0xE949
{
	vector3 vVar0;
	
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	if (func_299())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x652515566BB40BA9(&vVar0);
		if (Global_3866 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_299()//Position - 0xE9B7
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE9D1
{
	unk_0xE45648BDBF3441F5(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_301(float fParam0)//Position - 0xEAA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xB1B2D2C9D47D1278(2);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA(fParam0, ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_302(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xEB03
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_303(char* sParam0, int iParam1, int iParam2)//Position - 0xEB26
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_304();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_304()//Position - 0xEB68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43C1.f_1EE2)
	{
		iVar0 = Global_43C1.f_1EDE;
		iVar1 = Global_43C1.f_1EDF;
		iVar2 = Global_43C1.f_1EE0;
		iVar3 = Global_43C1.f_1EE1;
	}
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA((Global_43BE + 0.0046875f), ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

var func_305(int iParam0, bool bParam1)//Position - 0xEBF2
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_307(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_306(&uVar1);
			}
		}
		else
		{
			return func_306(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_306(var uParam0)//Position - 0xF044
{
	return uParam0;
}

struct<13> func_307(int iParam0)//Position - 0xF04E
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_308(int iParam0)//Position - 0xF065
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_307(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_306(&uVar0);
		}
		else
		{
			return func_306(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_309()//Position - 0xF0DA
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xF10C
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_308(iParam0), 64);
	StringCopy(&cVar1, func_305(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_309())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_309())
			{
				fVar4 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x9893E000F1F078E7(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_311(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_311(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43C0)
			{
				*fParam4 = (*fParam4 * (Global_43C0 / *fParam3));
				*fParam3 = Global_43C0;
			}
		}
		return 1;
	}
	return 0;
}

float func_311(int iParam0)//Position - 0xF2BD
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_312(bool bParam0, bool bParam1)//Position - 0xF35C
{
	if (Global_252E21.f_760.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_24(8, -1) && func_313() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_11646) || Global_43C1.f_1EFA) || unk_0x18158A50125911B6()) || Global_16B4F.f_569)
	{
		return 0;
	}
	return 1;
}

int func_313()//Position - 0xF3F9
{
	return Global_140815;
}

int func_314(var uParam0, bool bParam1, int iParam2)//Position - 0xF405
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x7AF0088ABFA713B6() && unk_0x32405B7614E36453())
		{
			iParam2 = unk_0x115A5CB728B7997D();
		}
	}
	StringCopy(&cVar0, unk_0x1377080E9B0BD993(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x56BEECB328B6D29D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43C1.f_15D7[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43C1.f_15D7[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_43C1.f_15D7[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_315()//Position - 0xF4A2
{
	if (!func_356(iLocal_295))
	{
		iLocal_295 = func_333();
		func_324(&iLocal_295, 0, 0, unk_0x491B2241281A03B7(1, 2), 0, 0, 0);
	}
	else if (!func_471(iLocal_73, 2))
	{
		if (func_316(iLocal_295))
		{
			iLocal_295 = func_333();
			func_324(&iLocal_295, 0, 0, unk_0x491B2241281A03B7(1, 2), 0, 0, 0);
			func_463(&iLocal_73, 2);
		}
	}
	else if (func_316(iLocal_295))
	{
		func_271();
		func_454(0);
	}
}

bool func_316(int iParam0)//Position - 0xF51C
{
	return func_317(func_333(), iParam0);
}

int func_317(int iParam0, int iParam1)//Position - 0xF52E
{
	int iVar0;
	int iVar1;
	
	if (!func_356(iParam1) || !func_356(iParam0))
	{
		return 1;
	}
	iVar0 = func_323(iParam0);
	iVar1 = func_323(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_322(iParam0);
	iVar1 = func_322(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_321(iParam0);
	iVar1 = func_321(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_320(iParam0);
	iVar1 = func_320(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_319(iParam0);
	iVar1 = func_319(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_318(iParam0);
	iVar1 = func_318(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0)//Position - 0xF63A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_319(int iParam0)//Position - 0xF64D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_320(int iParam0)//Position - 0xF660
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_321(int iParam0)//Position - 0xF673
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_322(int iParam0)//Position - 0xF685
{
	return iParam0 & 15;
}

var func_323(int iParam0)//Position - 0xF692
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_160(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF6B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_323(*iParam0);
	iVar1 = func_322(*iParam0);
	iVar2 = func_321(*iParam0);
	iVar3 = func_320(*iParam0);
	iVar4 = func_319(*iParam0);
	iVar5 = func_318(*iParam0);
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
	iVar6 = func_332(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_332(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_325(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_325(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF839
{
	func_331(uParam0, iParam1);
	func_330(uParam0, iParam2);
	func_329(uParam0, iParam3);
	func_328(uParam0, iParam5);
	func_327(uParam0, iParam4);
	func_326(uParam0, iParam6);
}

void func_326(var uParam0, int iParam1)//Position - 0xF871
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

void func_327(var uParam0, int iParam1)//Position - 0xF8F7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_322(*uParam0);
	iVar1 = func_323(*uParam0);
	if (iParam1 < 1 || iParam1 > func_332(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_328(var uParam0, int iParam1)//Position - 0xF948
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_329(var uParam0, int iParam1)//Position - 0xF97B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_330(var uParam0, int iParam1)//Position - 0xF9B5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_331(var uParam0, int iParam1)//Position - 0xF9F0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_332(int iParam0, int iParam1)//Position - 0xFA2C
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

int func_333()//Position - 0xFACE
{
	var uVar0;
	
	func_331(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_330(&uVar0, unk_0x7E09057438B9D216());
	func_329(&uVar0, unk_0x6E06C0DB9B43570D());
	func_327(&uVar0, unk_0xBE14F159908E4EE5());
	func_328(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_326(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_334(char* sParam0, int iParam1)//Position - 0xFB14
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_335()//Position - 0xFB2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_350(1);
	func_270(1);
	unk_0x43F06392C4EF25E0(false);
	func_349(0, 0);
	func_348(1, 1, 0, 0, 0);
	func_347(1, 2, 1, 1, 1);
	func_346("PROS_OPTS");
	func_345(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_265() >= iVar0)
	{
		func_341(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_265() >= iVar1 && func_337(iLocal_93))
	{
		func_341(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_265() >= iVar2 && func_337(iLocal_93))
	{
		func_341(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_341(iLocal_69, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_68 = 0;
	func_272(iLocal_68, 1, 1);
	func_336();
	iLocal_87 = unk_0x105601648511CC64();
	iLocal_292 = 3;
}

void func_336()//Position - 0xFC49
{
	Global_4336.f_5 = 1;
}

int func_337(int iParam0)//Position - 0xFC57
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == -1405937764)
		{
			return 0;
		}
	}
	return 1;
}

void func_338(int iParam0, bool bParam1)//Position - 0xFD45
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43C1.f_13E4 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA >= 4)
	{
		return;
	}
	if (Global_43C1.f_15EB != 1)
	{
		return;
	}
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		return;
	}
	Global_43C1.f_F4E[Global_43C1.f_13E4] = iParam0;
	Global_43C1.f_13E4++;
	Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][Global_43C1.f_15EA] = 2;
	Global_43C1.f_15EA++;
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		fVar0 = func_340();
		if (Global_43C1.f_1351[Global_43C1.f_13E1] && Global_43C1.f_15EA == Global_43C1.f_15E8)
		{
			func_310(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)])
		{
			Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
		{
			fVar3 = func_339();
			if (fVar3 > Global_43C1.f_15EC[Global_43C1.f_13E0])
			{
				Global_43C1.f_15EC[Global_43C1.f_13E0] = fVar3;
			}
		}
	}
}

float func_339()//Position - 0xFE80
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)] != 0)
		{
			if (func_310(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x60F548525BE58E47(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_340()//Position - 0xFF33
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_291(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
	{
		unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(Global_43C1.f_15E9 + iVar8) /*6*/]));
			}
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(Global_43C1.f_15E9 + iVar8) /*6*/]));
			}
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 2)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[((Global_43C1.f_13E4 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 3)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[((Global_43C1.f_13E5 - iVar4) + iVar10)], Global_43C1.f_10D0[((Global_43C1.f_13E5 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 5)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 6)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 7)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 9)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
	{
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)] != 0)
		{
			func_310(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1037D
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43C1.f_13E0 > iParam0)
	{
		return;
	}
	if (Global_43C1.f_13E0 >= 128)
	{
		return;
	}
	if (Global_43C1.f_13E2 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA < Global_43C1.f_15E8)
	{
		return;
	}
	if (Global_43C1.f_13E0 != iParam0)
	{
		Global_43C1.f_13E0 = iParam0;
		Global_43C1.f_13E1 = 0;
	}
	iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
	if (iVar0 != 1)
	{
		while (Global_43C1.f_13E1 < 4 && iVar0 != 1)
		{
			Global_43C1.f_13E1++;
			iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]), sParam1, 24);
	if (!unk_0xF1734B55490E9045(sParam1) && !unk_0x0F6F4C227FB5DD52(sParam1))
	{
	}
	Global_43C1.f_64A[Global_43C1.f_13E2] = bParam3;
	Global_43C1.f_74B[Global_43C1.f_13E2] = iParam4;
	Global_43C1.f_13E2++;
	if (!bParam3)
	{
		func_344(Global_43C1.f_13E0, 1);
	}
	else
	{
		func_344(Global_43C1.f_13E0, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_343(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_310(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43C1.f_134A[Global_43C1.f_13E1])
		{
			Global_43C1.f_134A[Global_43C1.f_13E1] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_342(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
			if (fVar4 > Global_43C1.f_15EC[iParam0])
			{
				Global_43C1.f_15EC[iParam0] = fVar4;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_43C1.f_135F[iParam0]), Global_43C1.f_13E1);
	Global_43C1.f_13E1++;
	Global_43C1.f_15EB = 1;
	Global_43C1.f_15E9 = (Global_43C1.f_13E2 - 1);
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = iParam2;
}

float func_342(char* sParam0)//Position - 0x10589
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_343(char* sParam0)//Position - 0x105A5
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_291(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_344(int iParam0, bool bParam1)//Position - 0x105E2
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_345(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1062E
{
	char* sVar0;
	
	sVar0 = unk_0xE57EAD1FEA2A6FAF(2, iParam0, true);
	if (Global_43C1.f_121F >= 12)
	{
		StringCopy(&Global_41188A, sVar0, 64);
		StringCopy(&(Global_41188A.f_10), sParam1, 16);
		Global_41188A.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_133A), Global_43C1.f_121F);
	}
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_132D[Global_43C1.f_121F] = 32;
	Global_43C1.f_121F++;
}

void func_346(char* sParam0)//Position - 0x106E3
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_1), sParam0, 16);
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1072E
{
	Global_43C1.f_1359[0] = iParam0;
	Global_43C1.f_1359[1] = iParam1;
	Global_43C1.f_1359[2] = iParam2;
	Global_43C1.f_1359[3] = iParam3;
	Global_43C1.f_1359[4] = iParam4;
}

void func_348(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1076D
{
	Global_43C1.f_133E[0] = iParam0;
	Global_43C1.f_133E[1] = iParam1;
	Global_43C1.f_133E[2] = iParam2;
	Global_43C1.f_133E[3] = iParam3;
	Global_43C1.f_133E[4] = iParam4;
	Global_43C1.f_13E8 = 0;
	if (iParam0 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam1 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam2 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam3 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam4 != 0)
	{
		Global_43C1.f_13E8++;
	}
}

void func_349(bool bParam0, bool bParam1)//Position - 0x10817
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43C1.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43C1.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25827C[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43C1.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_135F[iVar0] = 0;
		Global_43C1.f_13E9[iVar0] = 0;
		Global_43C1.f_146A[iVar0] = 0;
		Global_43C1.f_1672[iVar0] = 0f;
		Global_43C1.f_14EB[iVar0] = 0;
		Global_43C1.f_15EC[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43C1.f_133E[iVar0] = 0;
		Global_43C1.f_134A[iVar0] = 0f;
		Global_43C1.f_1344[iVar0] = -1f;
		Global_43C1.f_1351[iVar0] = 0;
		Global_43C1.f_1359[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43C1.f_12E2[iVar0 /*4*/]), "", 16);
		Global_43C1.f_1313[iVar0] = -1;
		Global_43C1.f_1320[iVar0] = 358;
		Global_43C1.f_132D[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_43C1.f_16FE[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43C1.f_1A3F[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43C1.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_41188A.f_10), "", 16);
	Global_41188A.f_14 = -1;
	Global_43C1 = 0;
	Global_43C1.f_13E0 = 0;
	Global_43C1.f_13E1 = 0;
	Global_43C1.f_13E2 = 0;
	Global_43C1.f_13E4 = 0;
	Global_43C1.f_13E5 = 0;
	Global_43C1.f_13E6 = 0;
	Global_43C1.f_13E3 = 0;
	Global_43C1.f_166D = 0;
	Global_43C1.f_15E6 = 0;
	Global_43C1.f_15E5 = 0;
	Global_43C1.f_15E7 = 0;
	StringCopy(&(Global_43C1.f_11D2), "", 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = 0;
	Global_43C1.f_121D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_121E = 0;
	StringCopy(&(Global_41188A.f_15), "", 16);
	Global_41188A.f_3D = 0;
	Global_41188A.f_3E = 0;
	Global_41188A.f_3F = 0;
	Global_41188A.f_40 = 0;
	Global_41188A.f_41 = 0;
	Global_41188A.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_41188A.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_41188A.f_43 = 0;
	StringCopy(&(Global_43C1.f_1), "", 16);
	Global_43C1.f_1350 = 0f;
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_15EB = 0;
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = 0;
	Global_43C1.f_15E9 = 0;
	Global_43C1.f_121F = 0;
	Global_43C1.f_1220 = 0;
	Global_43C1.f_13E7 = 10;
	Global_43C1.f_13E8 = 0;
	Global_43C1.f_166F = 0f;
	Global_43C1.f_1670 = 0f;
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	Global_43C1.f_15E0 = 0f;
	Global_43C1.f_15E1 = 0;
	Global_43C1.f_15E3 = 0;
	Global_43C1.f_15E2 = 0;
	Global_43C1.f_15E4 = 0;
	Global_43C1.f_1EF7 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43C1.f_16F3[iVar0] = -1;
		Global_43C1.f_16F6[iVar0] = -1;
		iVar0++;
	}
	Global_43C1.f_1357 = 0f;
	Global_43C1.f_133A = 0;
	Global_43C1.f_1358 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_16F9)
	{
		Global_43C1.f_16F9[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_1EE2 = 0;
	Global_43C1.f_1EDD = 0;
	Global_43C1.f_1EE7 = 0;
	Global_43C1.f_1EEC = 0;
	Global_43C1.f_1EF1 = 0;
	Global_43C1.f_1EF3 = 0;
	Global_43C1.f_1EF9 = 0;
	Global_43BE = 0.05f;
	Global_43BF = 0.05f;
	Global_43C0 = 0.225f;
	fVar2 = unk_0x3771EE4CB542D71E(0);
	if (bParam0)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43C0 = 0.225f;
	}
}

void func_350(bool bParam0)//Position - 0x10CF9
{
	if (!bParam0)
	{
		Global_195B6 = unk_0x105601648511CC64() + 250;
	}
	Global_195B3 = bParam0;
}

int func_351(char* sParam0, int iParam1)//Position - 0x10D17
{
	if (func_265() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x7AF0088ABFA713B6() && func_352(unk_0xB5CEFD608600A09F()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_352(int iParam0)//Position - 0x10D61
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_353(int iParam0, bool bParam1)//Position - 0x10D87
{
	int iVar0;
	
	if (!unk_0xF9E082857622D91E(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
	{
	}
	else if (!unk_0x96044E39418AAF17(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(bParam1), 3) && unk_0xF4FCC3C1048FF2AB(iParam0, -2017877118) != 1)
	{
		if (func_530())
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				if (!func_198(unk_0xB5CEFD608600A09F()))
				{
					iVar0 = unk_0xA86A4D206EC8EB16(unk_0xBC25C936A095B5BA(), 6);
					if (!func_504(256))
					{
						func_189(256);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0x695D13ECF7DAEC22(unk_0xBC25C936A095B5BA(), 6);
						unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x96044E39418AAF17(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 3))
		{
			if (unk_0x4A3B2CF8BADDD74E(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1)) >= 0.95f)
			{
				unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x96044E39418AAF17(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_354(bool bParam0)//Position - 0x10F19
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_355(int iParam0)//Position - 0x10F5F
{
	*iParam0 = -15;
}

int func_356(int iParam0)//Position - 0x10F6D
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
	iVar0 = func_318(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_319(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_320(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_323(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_322(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_321(iParam0);
	if (iVar5 < 1 || iVar5 > func_332(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_357()//Position - 0x11049
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	unk_0xAFD2CBD312D69CFA(iLocal_90);
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
	{
		if (iLocal_70 < 1)
		{
			unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_358()//Position - 0x11094
{
	if (func_359(0, -1, 0) && unk_0x284F2ACE6839D3C0("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_359(char* sParam0, int iParam1, bool bParam2)//Position - 0x110BA
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_314(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43C1.f_1581[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1581[iVar0 /*4*/])))
	{
		unk_0x900CF084251DED26(&(Global_43C1.f_1581[iVar0 /*4*/]), 9);
		Global_43C1.f_157A[iVar0] = 1;
		if (!unk_0x4C7022A83B41D888(&(Global_43C1.f_1581[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8AA3F48A15444B98("CommonMenu", false);
	Global_43C1.f_156C[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", false);
		Global_43C1.f_1573[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43C1.f_159A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_360(&(Global_43C1.f_159A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_360(var uParam0)//Position - 0x111B0
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA7F138B5B1AB2CF6(*uParam0))
					{
						uParam0->f_8 = unk_0x105601648511CC64();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_361()//Position - 0x11252
{
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iLocal_90))
	{
		iLocal_58 = unk_0x8D66276473ABD7CC(iLocal_90);
	}
}

void func_362()//Position - 0x11276
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				vLocal_56 = { unk_0x541C2AEF053615BC(iVar0, true) };
			}
		}
	}
}

void func_363(bool bParam0, int iParam1)//Position - 0x112BF
{
	int iVar0;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43C1.f_1EFB)
	{
		unk_0xC0404835F30391BB(15);
		Global_43C1.f_1EFB = 0;
	}
	unk_0xE7918A3D05166D98(0f);
	if (Global_43C1.f_157A[iVar0])
	{
		unk_0x841D233D3CE81152(9, false);
		Global_43C1.f_157A[iVar0] = 0;
	}
	if (Global_43C1.f_156C[iVar0])
	{
		unk_0x786556581D95BCB2("CommonMenu");
		Global_43C1.f_156C[iVar0] = 0;
	}
	if (Global_43C1.f_1573[iVar0])
	{
		unk_0x786556581D95BCB2("MPShopSale");
		Global_43C1.f_1573[iVar0] = 0;
	}
	if (bParam0)
	{
		func_364(&(Global_43C1.f_159A[iVar0 /*10*/]));
		Global_43C1.f_15D7[iVar0] = 0;
	}
	else
	{
		Global_43C1.f_15D7[iVar0] = 0;
	}
}

void func_364(int iParam0)//Position - 0x1137D
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			unk_0xB0B0FE33F4F22679(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_365()//Position - 0x113A6
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iLocal_93 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (!iLocal_93 == 0)
				{
					if ((unk_0xE59B7F5A03335350(iLocal_93, 0) && !unk_0x7544D2465B934445(iLocal_93)) && !unk_0x8730A01B72F31307(iLocal_93))
					{
						if (func_85(&iLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_366()//Position - 0x1141B
{
	if (iLocal_70 == 0)
	{
		if (!func_471(iLocal_51, 1) && !func_471(iLocal_51, 16))
		{
			if (func_367(0))
			{
				func_463(&iLocal_51, 1);
			}
		}
		if (!func_471(iLocal_51, 4) && !func_471(iLocal_51, 64))
		{
			if (func_367(2))
			{
				func_463(&iLocal_51, 4);
			}
		}
		if (!func_471(iLocal_51, 8) && !func_471(iLocal_51, 128))
		{
			if (func_367(1))
			{
				func_463(&iLocal_51, 8);
			}
		}
	}
}

int func_367(int iParam0)//Position - 0x114A3
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	vVar0 = { func_179(iParam0) };
	vVar1 = { unk_0x541C2AEF053615BC(iLocal_93, true) };
	if (iLocal_299[iParam0] == 0)
	{
		if (unk_0x6F79ECA8C83E4357(iLocal_93) == -376434238)
		{
			iLocal_299[iParam0] = unk_0xEEC6F351351E4110(vVar0, vVar1, 0.1f, 511, iLocal_93, 3);
		}
		else if ((unk_0x6F79ECA8C83E4357(iLocal_93) == joaat("casco") || unk_0x6F79ECA8C83E4357(iLocal_93) == joaat("feltzer3")) || unk_0x6F79ECA8C83E4357(iLocal_93) == 1617472902)
		{
			iLocal_299[iParam0] = unk_0xEEC6F351351E4110(vVar0, vVar1, 0.15f, 511, iLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = unk_0xEEC6F351351E4110(vVar0, vVar1, 0.25f, 511, iLocal_93, 3);
		}
	}
	else
	{
		switch (unk_0xB0695CD48A28A3A9(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_368(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_368(int iParam0)//Position - 0x115CA
{
	switch (iParam0)
	{
		case 0:
			if (!func_471(iLocal_51, 16))
			{
				func_463(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_471(iLocal_51, 128))
			{
				func_463(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_471(iLocal_51, 64))
			{
				func_463(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_471(iLocal_51, 32))
			{
				func_463(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_369()//Position - 0x1166A
{
	if (func_374() && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iLocal_286 = 9;
		func_372(iLocal_90);
		func_372(unk_0xBC25C936A095B5BA());
		func_370();
		func_34(&iLocal_98);
	}
}

void func_370()//Position - 0x116A5
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0xEF0E25DA0CB6E8FF(iLocal_96))
	{
		iLocal_96 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(iLocal_97))
	{
		iLocal_97 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_371(&Var0, &Var1);
	unk_0x6125108F6208C1F6(iLocal_96, Var0);
	unk_0x3553F2A72957724E(iLocal_96, Var0.f_3, 2);
	unk_0x9DF315A9EFFF87AC(iLocal_96, Var0.f_6);
	unk_0x6125108F6208C1F6(iLocal_97, Var1);
	unk_0x3553F2A72957724E(iLocal_97, Var1.f_3, 2);
	unk_0x9DF315A9EFFF87AC(iLocal_97, Var1.f_6);
	unk_0x348665177DBFB93B(iLocal_96, true);
	unk_0x348665177DBFB93B(iLocal_97, false);
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
}

void func_371(var uParam0, var uParam1)//Position - 0x1173B
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_372(int iParam0)//Position - 0x11875
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x02DAF06EA4F08219(&iVar0);
		unk_0xC5A6DFE2B8987B17(&iVar0);
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			unk_0xA3981DED4FC2E56E(0, 0, 16842752);
		}
		unk_0x346129B364057FF6(0, func_373(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x535008C596714F9E(iVar0);
		unk_0xA8E6405305C0D7DF(iParam0, iVar0);
		unk_0x02DAF06EA4F08219(&iVar0);
	}
}

Vector3 func_373()//Position - 0x118D4
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_374()//Position - 0x11939
{
	return SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), func_376()) < (func_375() * func_375());
}

float func_375()//Position - 0x1195C
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_376()//Position - 0x119A1
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_377()//Position - 0x11A06
{
	func_315();
	func_392();
	if (!func_10(&iLocal_101))
	{
		func_453(&iLocal_101);
	}
	if (func_391())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_453(&iLocal_110);
	}
	if (func_365() && unk_0x62F3A07C43FFB568(iLocal_90, iLocal_93, 0))
	{
		if (unk_0xB66CFDE6B830965A(iLocal_93) && unk_0x58F9E0EA914AEF2C(iLocal_93))
		{
			if ((func_384() && !func_374()) && !func_383())
			{
				func_382();
				if (func_7(&iLocal_110) > 2.5f)
				{
					iLocal_83 = unk_0x3F15B158E03C72E5(unk_0x541C2AEF053615BC(iLocal_93, false), 40f, 40f, 40f, unk_0x349C94FFF43E2979(iLocal_93), 0, 7);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 896);
					func_463(&iLocal_49, 2048);
					iLocal_94 = 0;
					unk_0xB2CB6EAA6B280A84("ProstituteInPlay", &iLocal_298);
					unk_0xA902E18EDF6FA0C8(1, iLocal_298, 1862763509);
					unk_0x4106FAF8AA1D69D5(iLocal_90, iLocal_298);
					func_472("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_295 = -15;
					func_121();
					func_381();
					iLocal_81 = 3;
					if (func_42(0, 1))
					{
						unk_0x4AED68BFACFB14CB(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()) && func_7(&iLocal_101) > 15f) && func_380())
				{
					if (!func_471(iLocal_50, 4096))
					{
						func_334("PROS_SPOT", -1);
						func_463(&iLocal_50, 4096);
					}
					func_379();
					func_34(&iLocal_101);
				}
				func_34(&iLocal_110);
			}
		}
		else
		{
			func_34(&iLocal_110);
			func_378();
		}
	}
	else if (!func_374())
	{
		if (unk_0x724D816EA203A79E(iLocal_90))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_90))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_90);
			}
		}
		func_454(0);
	}
}

void func_378()//Position - 0x11BB8
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_379()//Position - 0x11BDF
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_90))
	{
		unk_0x53D8178763EDCE60(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_380()//Position - 0x11C0C
{
	if (!func_471(iLocal_51, 256))
	{
		return 1;
	}
	return func_471(iLocal_51, 32);
}

void func_381()//Position - 0x11C2D
{
	if (func_530())
	{
		unk_0xC8FD3EBBB90E8D7F(iLocal_90, 229, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_90, 26, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_90, 115, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_90, true);
	}
}

void func_382()//Position - 0x11C5E
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_471(iLocal_49, 2097152))
	{
		if (unk_0x105601648511CC64() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				vVar0 = { unk_0x541C2AEF053615BC(iLocal_93, true) };
				unk_0x2084D4C6C2DF616F(vVar0, &fVar2, 0, 0);
				vVar0.z = (fVar2 + 0.15f);
				vVar1 = { unk_0xA4455714F3DCE207(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0xEDB5D06AC6E2D672(vVar0, vVar1, 2f, 511, iLocal_93, 7);
			}
			else if (unk_0x55E2C599F5040FF1(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_34(&iLocal_110);
					}
				}
				iLocal_82 = unk_0x105601648511CC64() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_383()//Position - 0x11D29
{
	int iVar0;
	
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (!unk_0x1AAF0C23233C57AF(iVar0, 0, 0))
		{
			if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()) || unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_384()//Position - 0x11D75
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_93 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		if (unk_0xDF2CB88174A62E40(vVar1, func_59(0), 12f, 0) || unk_0xDF2CB88174A62E40(vVar1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_390())
		{
			return 0;
		}
		if (func_389(iLocal_93, &vVar2))
		{
			if (!func_388(vVar2))
			{
				if (!func_387(vVar1) || func_386(vVar1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x2101FAC9A9D4C29D(iLocal_90, iLocal_93, 0, 0, false))
		{
			return 0;
		}
		unk_0xB13ECA7F44B7F7E6(1);
		if (unk_0x50AE3E919DC9BC67(vVar1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x724D816EA203A79E(iVar0))
			{
				if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
				{
					if (unk_0x4833C1F1F1364989(iVar0, iLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_472("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
		if (!iVar3 == 0)
		{
			func_472("IN AN INTERIOR");
			return 0;
		}
		if (func_385())
		{
			return 0;
		}
	}
	return 1;
}

int func_385()//Position - 0x11EC9
{
	func_463(&iLocal_51, 256);
	if (!func_471(iLocal_51, 2))
	{
		if (func_367(3))
		{
			func_463(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_366();
	}
	return 0;
}

int func_386(vector3 vParam0)//Position - 0x11F08
{
	if (((((((((SYSTEM::VDIST(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(vParam0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || SYSTEM::VDIST(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f) || SYSTEM::VDIST(vParam0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || SYSTEM::VDIST(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || SYSTEM::VDIST(vParam0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || SYSTEM::VDIST(vParam0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || SYSTEM::VDIST(vParam0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || SYSTEM::VDIST(vParam0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || SYSTEM::VDIST(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_387(vector3 vParam0)//Position - 0x12070
{
	if ((((((SYSTEM::VDIST(vParam0, -1582.782f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(vParam0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || SYSTEM::VDIST(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || SYSTEM::VDIST(vParam0, -273f, 317.8898f, 92.2549f) <= 15f) || SYSTEM::VDIST(vParam0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || SYSTEM::VDIST(vParam0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || SYSTEM::VDIST(vParam0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_463(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_388(vector3 vParam0)//Position - 0x12183
{
	int iVar0;
	
	iVar0 = unk_0x792A3209B8366EB3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 1, 1, 1077936128, 0);
	unk_0x2487DB62997A4150(iVar0, &vParam0);
	if (unk_0x77F84A8EA1958F2B(iVar0))
	{
		if (!unk_0x6F0339DC0CD61C94(iVar0))
		{
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vParam0) > 400f)
			{
				return 1;
			}
		}
		else if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vParam0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x6F0339DC0CD61C94(iVar0))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0x792A3209B8366EB3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 1, 8, 1077936128, 0);
		unk_0x2487DB62997A4150(iVar0, &vParam0);
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0, var uParam1)//Position - 0x12269
{
	vector3 vVar0[4];
	
	vVar0[0 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, 2f, 0f, 0f) };
	vVar0[1 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, -2f, 0f, 0f) };
	vVar0[2 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, 0f, 2f, 0f) };
	vVar0[3 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, 0f, -2f, 0f) };
	if (unk_0x7889AC6F93E89660(vVar0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x7889AC6F93E89660(vVar0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x7889AC6F93E89660(vVar0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x7889AC6F93E89660(vVar0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_390()//Position - 0x12330
{
	return Global_10AB8;
}

int func_391()//Position - 0x1233C
{
	if (unk_0xB731B8C5BCE89836(joaat("carwash1")) > 0 || unk_0xB731B8C5BCE89836(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_392()//Position - 0x12368
{
	if (!func_471(iLocal_49, 128))
	{
		func_393(39, 1);
		func_393(40, 1);
		func_393(41, 1);
		func_393(42, 1);
		func_393(43, 1);
		func_393(44, 1);
		func_463(&iLocal_49, 128);
	}
}

void func_393(int iParam0, bool bParam1)//Position - 0x123AE
{
	if (bParam1)
	{
		if (!func_397(iParam0, 2, 1))
		{
			func_396(iParam0, 2, 1);
		}
	}
	else if (func_397(iParam0, 2, 1))
	{
		func_394(iParam0, 2, 1);
	}
}

void func_394(int iParam0, int iParam1, bool bParam2)//Position - 0x123E5
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_395(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_131(func_395(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_395(int iParam0)//Position - 0x1244E
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

void func_396(int iParam0, int iParam1, bool bParam2)//Position - 0x12742
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_395(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_131(func_395(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_397(int iParam0, int iParam1, bool bParam2)//Position - 0x127AB
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_134(func_395(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_398(var uParam0)//Position - 0x1280B
{
	if (func_471(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_521();
	if (func_530())
	{
		func_516(uParam0);
	}
}

void func_399()//Position - 0x12842
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		if (unk_0xE642C1AC73CE364E(iLocal_90, unk_0xBC25C936A095B5BA(), 5f, 5f, 5f, 0, 1, 0) || func_471(iLocal_49, 8192))
		{
			unk_0xBBC4195AD74D153D(0, 101, 1);
			unk_0xBBC4195AD74D153D(0, 74, 1);
			unk_0xD55638CE45B2B948(0, 51);
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x5237AF95232D78C5(iLocal_90, 0))
			{
				unk_0xAF9FC4463EA3090B(iLocal_90, 50);
				unk_0x4A506C72BFC368E4(iLocal_90, 5f);
				if (func_471(iLocal_49, 16))
				{
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_93 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0xE59B7F5A03335350(iLocal_93, 0))
				{
					if (unk_0x25EF720B1CAB1E23(iLocal_90, iLocal_93) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_93, 0))
					{
						func_472("***** prostitute IN VEHICLE****** ");
						if (func_471(iLocal_49, 8))
						{
							if (unk_0x320539481B2F0121(func_86()))
							{
								if (func_409(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_408(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_407(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_406(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_405(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_404(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_403(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_402(iLocal_93))
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else
								{
									unk_0xAF882903653590B0(iLocal_90, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_530())
						{
							unk_0x77815D3407C6700D(iLocal_90, false, 0);
						}
						else
						{
							unk_0x77815D3407C6700D(iLocal_90, true, 1);
						}
						func_175(iLocal_90, 0);
						func_379();
						iLocal_62 = unk_0x105601648511CC64();
						func_34(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_472("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_401(iLocal_90, unk_0xBC25C936A095B5BA(), 1) > 11f || func_400(20f)) || !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_93, 0))
				{
					func_108(&iLocal_107);
					if (!unk_0x5237AF95232D78C5(iLocal_90, 0))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_90);
						func_454(0);
						func_472("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (!unk_0xE59B7F5A03335350(iLocal_93, 0))
					{
						iLocal_93 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					}
					else if (!unk_0x2101FAC9A9D4C29D(iLocal_90, iLocal_93, 0, 0, false))
					{
						if (!func_105())
						{
							if (!func_471(iLocal_73, 1))
							{
								func_34(&iLocal_113);
								func_463(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_119();
								func_472("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_471(iLocal_73, 1))
		{
			func_472("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xA4E856A8CD53B8DF(iLocal_90);
			func_89(15);
		}
	}
}

bool func_400(float fParam0)//Position - 0x12B42
{
	if (!func_10(&iLocal_107))
	{
		func_34(&iLocal_107);
	}
	return func_114(&iLocal_107) > fParam0;
}

float func_401(int iParam0, int iParam1, bool bParam2)//Position - 0x12B63
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

int func_402(int iParam0)//Position - 0x12BC1
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_403(int iParam0)//Position - 0x12BEC
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_404(int iParam0)//Position - 0x12C1D
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_405(int iParam0)//Position - 0x12C48
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_406(int iParam0)//Position - 0x12C73
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x12CA4
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_408(int iParam0)//Position - 0x12CD5
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x12D0C
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
				return 1;
				break;
			}
	}
	return 0;
}

void func_410(var uParam0)//Position - 0x12D61
{
	int iVar0;
	
	if (!func_419(0))
	{
		return;
	}
	if (!func_471(iLocal_49, 16))
	{
		unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 0);
		func_463(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_107))
	{
		func_453(&iLocal_107);
	}
	if (func_114(&iLocal_107) >= 20f || !unk_0xE642C1AC73CE364E(iLocal_90, unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_471(iLocal_73, 524288))
		{
			func_108(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_418())
		{
			func_34(&iLocal_107);
			func_463(&iLocal_73, 524288);
		}
	}
	func_63(iLocal_90);
	if (((unk_0xE642C1AC73CE364E(iLocal_90, unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0) || func_471(iLocal_73, 1)) && !func_209(0)) && !func_390())
	{
		if (!unk_0x2101FAC9A9D4C29D(iLocal_90, iLocal_93, 0, 0, false))
		{
			if (!func_105())
			{
				if (!func_471(iLocal_73, 1))
				{
					func_34(&iLocal_113);
					func_463(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_62();
					unk_0xA4E856A8CD53B8DF(iLocal_90);
					func_472("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_411();
		}
	}
	else if (func_451("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_449();
		if (func_530())
		{
			iVar0 = unk_0xF4FCC3C1048FF2AB(iLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_411()//Position - 0x12EDC
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_351(&sVar0, 0))
	{
		func_414();
		if (func_412(iLocal_72, 1) || unk_0xD95B48C451FB1A20(unk_0xB5CEFD608600A09F()))
		{
			unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_463(&iLocal_49, 8192);
			func_34(&iLocal_107);
		}
		if (func_471(iLocal_49, 8192))
		{
			func_449();
			Global_6353 = 1;
			Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_190 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, -1794415470) != 1 && !unk_0x62F3A07C43FFB568(iLocal_90, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1))
				{
					unk_0xD179FA0466FA4FE3(iLocal_90, iLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = func_44(unk_0xBC25C936A095B5BA(), 1, 0);
			unk_0x522053D86D6E1C7A(sLocal_61);
			sLocal_61 = func_44(unk_0xBC25C936A095B5BA(), 0, 1);
			unk_0x522053D86D6E1C7A(sLocal_61);
			func_34(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_412(int iParam0, bool bParam1)//Position - 0x12FD7
{
	int iVar0;
	
	iVar0 = func_413(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] == 1 && Global_8F05[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8F05[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8F05[iVar0 /*32*/].f_5 = 1;
			Global_8F05[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8F05[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8F05[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_413(int iParam0)//Position - 0x1308F
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_414()//Position - 0x130CA
{
	if (Global_6353)
	{
		if (unk_0xE186ACC7BE9B244E())
		{
			return;
		}
		unk_0xBBC4195AD74D153D(0, 101, 1);
		unk_0xBBC4195AD74D153D(0, 74, 1);
		unk_0xD55638CE45B2B948(0, 51);
		if (!func_471(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_416(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_415(iLocal_72, 0))
	{
		func_449();
	}
}

int func_415(int iParam0, int iParam1)//Position - 0x1312C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_413(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_8F05[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_8F05[iVar0 /*32*/].f_C)
	{
		unk_0xF07D20149ECBC61E(&(Global_8F05[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	else
	{
		unk_0xF07D20149ECBC61E(&(Global_8F05[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		if (Global_8F05[iVar0 /*32*/].f_1E)
		{
			unk_0x607C19B90D297FE2(&(Global_8F05[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0xC9C304D0AABE1335(&(Global_8F05[iVar0 /*32*/].f_D));
		}
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	return iVar1;
}

void func_416(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x131E1
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_417(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/] = 1;
			Global_8F05[iVar0 /*32*/].f_1 = Global_8FCE;
			Global_8FCE++;
			Global_8F05[iVar0 /*32*/].f_4 = 0;
			Global_8F05[iVar0 /*32*/].f_1D = 0;
			Global_8F05[iVar0 /*32*/].f_5 = 0;
			Global_8F05[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8F05[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8F05[iVar0 /*32*/].f_6 = iParam3;
			Global_8F05[iVar0 /*32*/].f_1F = unk_0x8A55B15F4133C912();
			Global_8F05[iVar0 /*32*/].f_7 = 0;
			Global_8F05[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_8F05[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8F05[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8F05[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8F05[iVar0 /*32*/].f_C = 0;
				Global_8F05[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_417(int iParam0)//Position - 0x1330C
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_413(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_418()//Position - 0x13363
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x724D816EA203A79E(iLocal_90) || unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return 1;
	}
	if (!func_530())
	{
		func_62();
		if (unk_0x5237AF95232D78C5(iLocal_90, 1))
		{
			unk_0x8CE2798B9A7027EC(iLocal_90, 1193033728, 0);
		}
		else if (func_471(iLocal_49, 4194304))
		{
			iVar0 = unk_0x491B2241281A03B7(8, 11);
			unk_0xC5A6DFE2B8987B17(&iVar1);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iVar1);
			unk_0xA8E6405305C0D7DF(iLocal_90, iVar1);
			unk_0x02DAF06EA4F08219(&iVar1);
		}
		return 1;
	}
	if (unk_0x5237AF95232D78C5(iLocal_90, 1))
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_90))
		{
			unk_0x8CE2798B9A7027EC(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xC7587327285D9984(iLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_471(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_90);
			}
			break;
		
		case 2:
			if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x491B2241281A03B7(8, 11);
					unk_0xE896C0AD02364F2A(iLocal_90, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_419(bool bParam0)//Position - 0x1351A
{
	if (unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		return 0;
	}
	if (func_471(iLocal_49, 8192))
	{
	}
	if (func_401(iLocal_90, unk_0xBC25C936A095B5BA(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (func_530())
	{
		if (unk_0x5168CF98709EAA95(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0x541C2AEF053615BC(iLocal_90, true), 1106247680))
	{
		if (!func_471(iLocal_50, 8192) && !unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA()))
		{
			func_334("PROS_COPS", -1);
			func_463(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_365())
	{
		if (!func_530())
		{
			if ((!iLocal_86 && !Global_1974B) && func_421(unk_0xBC25C936A095B5BA(), 0) == -1)
			{
				func_334("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_420();
		}
		else if (!func_504(4096))
		{
			func_334("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_420()//Position - 0x13643
{
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (!func_471(iLocal_49, 1))
	{
		if (!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()) && !unk_0x8C2668F45F2BB3F2(iLocal_90))
		{
			unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_463(&iLocal_49, 1);
		}
	}
}

int func_421(int iParam0, int iParam1)//Position - 0x13694
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

void func_422()//Position - 0x13719
{
	if (func_419(0))
	{
		func_411();
		if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 242628503) == 7 && !func_471(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&iLocal_107);
				iLocal_62 = unk_0x105601648511CC64();
				func_472("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		unk_0xA4E856A8CD53B8DF(iLocal_90);
		func_89(15);
	}
}

void func_423(var uParam0)//Position - 0x1377B
{
	if (func_419(0))
	{
		func_411();
		if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 242628503) == 7 || func_471(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_400(20f))
		{
			func_108(&iLocal_107);
			func_454(0);
		}
		else
		{
			func_424(uParam0);
		}
	}
	else
	{
		unk_0xA4E856A8CD53B8DF(iLocal_90);
		func_89(15);
	}
}

void func_424(var uParam0)//Position - 0x137E4
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (!unk_0x724D816EA203A79E(iLocal_93))
	{
		return;
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_93), &vVar2, &vVar1);
	vVar0 = { vVar1 - vVar2 };
	vVar0 = { vVar0 / Vector(2f, 2f, 2f) };
	vVar3 = { unk_0xA4455714F3DCE207(iLocal_93, -(vVar0.x + 0.2f), 0f, 0f) };
	vVar4 = { unk_0xA4455714F3DCE207(iLocal_93, (vVar0.x + 0.2f), 0f, 0f) };
	vVar5 = { unk_0x541C2AEF053615BC(iLocal_90, true) };
	if (SYSTEM::VDIST(vVar5, vVar4) < SYSTEM::VDIST(vVar5, vVar3))
	{
		vVar3 = { vVar4 };
	}
	if ((unk_0xF4FCC3C1048FF2AB(iLocal_90, -1794415470) != 1 || !func_471(iLocal_49, 8192)) && SYSTEM::VDIST2(vLocal_89, vVar3) > 0f)
	{
		if (func_530())
		{
			if (!unk_0x5CAE759AE8219D20(iLocal_90))
			{
				unk_0x77815D3407C6700D(iLocal_90, false, 1);
			}
			func_434(&uLocal_281, func_61(iLocal_284));
			func_428(uParam0, 1);
			func_425(&uLocal_281, uParam0);
		}
		unk_0xC5A6DFE2B8987B17(&iVar6);
		unk_0x346129B364057FF6(0, vVar3.x, vVar3.y, vVar3.z, 1f, -1, 1f, 8192, 1193033728);
		unk_0xCF4C6C235CD09F4F(0, unk_0x823166D9421223CA(unk_0xBC25C936A095B5BA(), 31086, 0f, 0f, 0f), 0);
		unk_0x535008C596714F9E(iVar6);
		unk_0xA8E6405305C0D7DF(iLocal_90, iVar6);
		unk_0x02DAF06EA4F08219(&iVar6);
		vLocal_89 = { vVar3 };
	}
}

void func_425(var uParam0, var uParam1)//Position - 0x13932
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEAEFBBEC1AEA464B((*uParam0)[iVar0]))
		{
			func_426(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_426(var uParam0, char* sParam1)//Position - 0x13968
{
	func_427(uParam0, 1, -1, sParam1, 0);
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1397B
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

void func_428(var uParam0, bool bParam1)//Position - 0x13A65
{
	int iVar0;
	
	if (!bParam1)
	{
		func_430(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_429(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_10F = 0;
	uParam0->f_110 = -1;
	uParam0->f_111 = 1;
}

void func_429(var uParam0)//Position - 0x13AA8
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_430(var uParam0)//Position - 0x13AC1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_431(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_10F = 1;
}

void func_431(var uParam0)//Position - 0x13AFB
{
	func_432(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_432(int iParam0, char* sParam1, int iParam2)//Position - 0x13B12
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_433(iParam0))
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

int func_433(int iParam0)//Position - 0x13BD2
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

int func_434(var uParam0, char* sParam1)//Position - 0x13BFE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEAEFBBEC1AEA464B((*uParam0)[iVar0]))
		{
			if (unk_0x3362CDE8460ED38B((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_435(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_435(var uParam0)//Position - 0x13C63
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0xEAEFBBEC1AEA464B((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_436(var uParam0)//Position - 0x13C92
{
	char* sVar0;
	
	if (func_419(1))
	{
		if (!func_10(&iLocal_107))
		{
			func_453(&iLocal_107);
		}
		func_463(&iLocal_49, 4);
		Global_6354 = 1;
		func_411();
		if (func_452(&iLocal_107, 2f) || func_471(iLocal_49, 8192))
		{
			func_463(&iLocal_49, 2);
			if (func_351(&sVar0, 0))
			{
				unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 0);
				unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_90, -1, 2048, 4);
				func_424(uParam0);
				func_463(&iLocal_49, 4);
				Global_6353 = 1;
				Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_190 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (unk_0x3362CDE8460ED38B(func_448(&sVar0), "PIM_HHIDCR"))
				{
					func_447(&sVar0, 30000);
					func_445(1);
				}
				else
				{
					func_334(&sVar0, -1);
				}
				if (!unk_0xF1734B55490E9045(&sVar0) && unk_0x3362CDE8460ED38B(&sVar0, "PROS_NO_MONEY"))
				{
					func_437();
				}
				func_89(0);
				iLocal_287 = 0;
				func_463(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_6353 = 0;
				Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_190 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_6354 = 0;
	}
}

void func_437()//Position - 0x13DB4
{
	if (!func_504(64))
	{
		func_438(0, 31, 5);
		func_189(64);
	}
}

void func_438(int iParam0, int iParam1, int iParam2)//Position - 0x13DD4
{
	int iVar0;
	
	if (!unk_0x69CD416923DBB24E())
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6() && func_442(unk_0xB5CEFD608600A09F(), 1))
	{
		return;
	}
	if (unk_0x8FCEEB789599BD9B(2, 199) || unk_0xD3C4A010282C31F2(2, 199))
	{
		return;
	}
	if (unk_0x0352C1B6B66A87AC() != 0)
	{
		return;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return;
	}
	if (unk_0x14973A77EAB7E05A())
	{
		return;
	}
	if (unk_0x18158A50125911B6())
	{
		return;
	}
	if (func_441())
	{
		return;
	}
	if (!func_439())
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6() || iParam0)
	{
		if (!Global_16B4F.f_569 && !unk_0x4F2BFB7C2A730EC7())
		{
			iVar0 = 18;
			UI::_SET_WARNING_MESSAGE_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_25847E = iParam1;
			Global_16B4F.f_569 = 1;
			Global_16B4F.f_56A = iParam2;
		}
	}
}

int func_439()//Position - 0x13EAE
{
	if (func_440())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_440()//Position - 0x13ECE
{
	return Global_258255;
}

bool func_441()//Position - 0x13EDA
{
	return Global_2584E7;
}

int func_442(int iParam0, bool bParam1)//Position - 0x13EE6
{
	if (bParam1)
	{
		if (func_443(iParam0))
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

bool func_443(int iParam0)//Position - 0x13F12
{
	return func_444(iParam0);
}

bool func_444(int iParam0)//Position - 0x13F20
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

void func_445(int iParam0)//Position - 0x13F3A
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_446())
	{
		unk_0xC4BA30B532FE260F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_446()//Position - 0x13F69
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

void func_447(char* sParam0, int iParam1)//Position - 0x13F7F
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam1);
}

char* func_448(char* sParam0)//Position - 0x13F96
{
	return sParam0;
}

void func_449()//Position - 0x13FA0
{
	if (iLocal_72 != -1)
	{
		func_417(&iLocal_72);
	}
}

void func_450(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x13FB4
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

int func_451(char* sParam0)//Position - 0x14051
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_452(int iParam0, float fParam1)//Position - 0x14064
{
	if (func_216(iParam0, fParam1))
	{
		func_108(iParam0);
		return 1;
	}
	return 0;
}

void func_453(int iParam0)//Position - 0x14082
{
	if (!func_10(iParam0))
	{
		func_34(iParam0);
	}
}

void func_454(int iParam0)//Position - 0x1409A
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_530())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_455()//Position - 0x140DC
{
	if ((((((func_462() || func_461()) || func_460()) || func_459()) || func_456()) || Global_248A6D) || Global_248A6D.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_456()//Position - 0x14130
{
	if (func_458() || func_457())
	{
		return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_62 == 8;
	}
	return 0;
}

var func_457()//Position - 0x1415D
{
	return Global_255A46.f_26E;
}

bool func_458()//Position - 0x1416C
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 11);
}

bool func_459()//Position - 0x14180
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 5);
}

bool func_460()//Position - 0x14191
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 2);
}

bool func_461()//Position - 0x141A2
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 20);
}

var func_462()//Position - 0x141B4
{
	return Global_255A46.f_24A;
}

void func_463(int iParam0, int iParam1)//Position - 0x141C3
{
	func_464(iParam0, iParam1);
}

void func_464(var uParam0, var uParam1)//Position - 0x141D3
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_465()//Position - 0x141E4
{
	if (Global_6355)
	{
		return 0;
	}
	if (func_530())
	{
		return 0;
	}
	if (!func_468())
	{
		return 0;
	}
	if (func_466())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_466()//Position - 0x1421D
{
	int iVar0;
	
	iLocal_92 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(iLocal_90, true), 15f, 0, 6);
	if (unk_0x724D816EA203A79E(iLocal_92) && !unk_0x1D403DFADBC2DE3C(iLocal_92, 0))
	{
		if (unk_0xE59B7F5A03335350(iLocal_92, 0))
		{
			if (func_85(&iLocal_92))
			{
				iLocal_91 = unk_0x3187EF5798B5D209(iLocal_92, -1, 0);
				if (!iLocal_91 == 0)
				{
					if (func_467(&iLocal_91))
					{
						iVar0 = unk_0x6F79ECA8C83E4357(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x5CAE759AE8219D20(iLocal_91))
							{
								unk_0x77815D3407C6700D(iLocal_91, true, 0);
							}
							if (!unk_0x5CAE759AE8219D20(iLocal_92))
							{
								unk_0x77815D3407C6700D(iLocal_92, true, 0);
							}
							unk_0x2E35C4FA5F0ED22F(iLocal_91, true);
							unk_0xB71D41C0310C93DE(iLocal_91, false, 1);
							unk_0xB71D41C0310C93DE(iLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
	return 0;
}

int func_467(int iParam0)//Position - 0x142E5
{
	if (!unk_0x36CEFBE9B745A58D(*iParam0))
	{
		if (unk_0xB6FD7D587FE0A1B4(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_468()//Position - 0x14307
{
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) || unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		return 0;
	}
	return 1;
}

int func_469()//Position - 0x1432D
{
	if ((!func_468() || !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || func_471(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_471(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_93(2);
		func_472("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_470()//Position - 0x14381
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		if (!unk_0x889DA6CE8E4DB344(iLocal_90))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 1805844857) != 1)
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_90, false);
				unk_0xABA7AE40608505F2(iLocal_90, 196628, true);
				unk_0x3D669AF9A68FF281(iLocal_90);
				unk_0x5558ED6D4A2DEC93(iLocal_90, unk_0xBC25C936A095B5BA(), 300f, -1, 1, 0);
				unk_0x22321800954A532E(iLocal_90, true);
				func_89(15);
			}
		}
	}
}

bool func_471(int iParam0, int iParam1)//Position - 0x143E4
{
	return (iParam0 && iParam1) != 0;
}

void func_472(char* sParam0)//Position - 0x143F3
{
}

int func_473()//Position - 0x143FB
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return 0;
	}
	if (unk_0xF4FCC3C1048FF2AB(iLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xD8BE87198802B1F7(iLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_474()//Position - 0x14431
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_530())
			{
				func_434(&uLocal_281, func_61(iLocal_284));
				func_425(&uLocal_281, &uLocal_362);
				func_472("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_530())
			{
				unk_0xD1CF2F876BAD2600(1);
				unk_0xA6E7E0EC9E48D44C(1);
				unk_0xC7587327285D9984(iLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_530())
			{
				if (func_475(&uLocal_362))
				{
					func_463(&iLocal_49, 4194304);
					func_472("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_530())
			{
				func_463(&iLocal_49, 4194304);
				func_472("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			iLocal_288 = 0;
			iLocal_67 = iLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			iLocal_91 = 0;
			iLocal_92 = 0;
			func_472("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(iLocal_90))
			{
				if (!func_530())
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_90, false);
					unk_0xEA2C4A582CD26EF5(iLocal_90, 0);
					func_450(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x4DF785C4DF542CD0(iLocal_90))
				{
					unk_0xC7587327285D9984(iLocal_90);
				}
				else
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_90, false);
					func_450(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					unk_0xEA2C4A582CD26EF5(iLocal_90, 0);
					unk_0x27602C068792FFD1(iLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_475(var uParam0)//Position - 0x14595
{
	return func_476(uParam0);
}

int func_476(var uParam0)//Position - 0x145A3
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
			if (!func_477(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_10F = 0;
	return 1;
}

bool func_477(var uParam0)//Position - 0x14607
{
	return func_478(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_478(int iParam0, char* sParam1, int iParam2)//Position - 0x1461E
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_433(iParam0))
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

int func_479()//Position - 0x14712
{
	if (unk_0x7930B3E9C919E90F())
	{
		if (func_18() == 0)
		{
			if (func_480(iLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0xB248FAA35ED47DB9(iLocal_90, 1))
				{
					if (func_530())
					{
						unk_0x77815D3407C6700D(iLocal_90, false, 0);
					}
					else
					{
						unk_0x77815D3407C6700D(iLocal_90, true, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_480(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x14772
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

int func_481()//Position - 0x147AC
{
	if (unk_0x4DF0825BB012BDB0(iLocal_90, func_59(0)))
	{
		if (unk_0xA83C5CB91839E2CD(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xA83C5CB91839E2CD(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x4DF0825BB012BDB0(iLocal_90, func_59(1)))
	{
		if (unk_0xA83C5CB91839E2CD(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xA83C5CB91839E2CD(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_482()//Position - 0x14825
{
	if (unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_483(unk_0xBC25C936A095B5BA());
	}
	else if (iLocal_285 == 3)
	{
		func_483(iLocal_91);
	}
}

void func_483(int iParam0)//Position - 0x14864
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	if (func_530())
	{
		if (!unk_0x4DF785C4DF542CD0(iParam0))
		{
			unk_0xC7587327285D9984(iParam0);
			return;
		}
	}
	if (func_401(iParam0, iLocal_90, 1) < 30f)
	{
		if (!unk_0x640A454FD54BBEF2(iLocal_90, iParam0))
		{
			if (func_530())
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_90))
				{
					unk_0x44C98C11ED6DD327(iLocal_90);
					unk_0x56F2E1B5599188FA(iLocal_90, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x44C98C11ED6DD327(iLocal_90);
				unk_0x56F2E1B5599188FA(iLocal_90, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x640A454FD54BBEF2(iLocal_90, iParam0))
	{
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				unk_0x44C98C11ED6DD327(iLocal_90);
			}
		}
		else
		{
			unk_0x44C98C11ED6DD327(iLocal_90);
		}
	}
}

void func_484()//Position - 0x14918
{
	if (Global_6353)
	{
		if (unk_0xE59B7F5A03335350(iLocal_93, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_90, iLocal_93, 0))
			{
				func_485();
			}
		}
		return;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iLocal_90, 0) || !unk_0x724D816EA203A79E(iLocal_90))
	{
		if (Global_6357 != unk_0x8A55B15F4133C912() && func_471(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_90, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < Global_6356 || Global_6356 == 0f) && iLocal_287 != 4)
	{
		Global_6356 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_90, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
		Global_6357 = unk_0x8A55B15F4133C912();
		func_463(&iLocal_49, 32);
	}
	else if (Global_6357 == unk_0x8A55B15F4133C912())
	{
		Global_6356 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_90, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_485()//Position - 0x14A11
{
	if (func_530())
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_90))
		{
			unk_0x2E9860A2B72187F5(iLocal_90, 323, true);
		}
	}
	else
	{
		unk_0x2E9860A2B72187F5(iLocal_90, 323, true);
	}
}

void func_486(var uParam0)//Position - 0x14A40
{
	if (!iLocal_286 == 12)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (func_490())
			{
				if (func_530())
				{
					func_116(0);
					unk_0xABA7AE40608505F2(iLocal_90, 196624, true);
					if (!unk_0x5CAE759AE8219D20(iLocal_90))
					{
						unk_0x77815D3407C6700D(iLocal_90, true, 0);
					}
					unk_0x5558ED6D4A2DEC93(iLocal_90, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_90, true);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_521();
					func_516(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0xD9C1758D86688CEA(iLocal_90, unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_472("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_472("prostitute BEEN HIT BY PLAYER");
					unk_0x5502708AECB47F5D(iLocal_90);
				}
			}
			else if (func_488())
			{
				func_487();
				iLocal_286 = 12;
			}
		}
	}
}

void func_487()//Position - 0x14B1E
{
	if (unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		return;
	}
	unk_0xAFD2CBD312D69CFA(iLocal_90);
	unk_0x53D8178763EDCE60(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_488()//Position - 0x14B47
{
	int iVar0;
	
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (!func_489())
	{
		return 0;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA()))
	{
		return unk_0xAAED47028764A78D(iVar0);
	}
	return 0;
}

int func_489()//Position - 0x14B9B
{
	if (!func_530())
	{
		return 1;
	}
	else if (unk_0x724D816EA203A79E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
	{
		if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
		{
			if (unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == unk_0xBC25C936A095B5BA())
			{
				if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					if (!unk_0x5CAE759AE8219D20(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						unk_0x77815D3407C6700D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false, 0);
					}
					return 1;
				}
				else
				{
					unk_0xC7587327285D9984(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
				}
			}
		}
		else
		{
			unk_0xCE1EBDF53DEA0B16(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
		}
	}
	return 0;
}

int func_490()//Position - 0x14C41
{
	vector3 vVar0;
	
	if (!func_471(iLocal_49, 4096))
	{
		if (func_401(iLocal_90, unk_0xBC25C936A095B5BA(), 1) < 30f)
		{
			vVar0 = { unk_0x541C2AEF053615BC(iLocal_90, true) };
			if ((((((unk_0x6103B6A8E33A21D1(86, vVar0, 30f) || unk_0x6103B6A8E33A21D1(89, vVar0, 30f)) || unk_0x6103B6A8E33A21D1(88, vVar0, 30f)) || unk_0x6103B6A8E33A21D1(102, vVar0, 30f)) || unk_0x6103B6A8E33A21D1(114, vVar0, 30f)) || (unk_0x6103B6A8E33A21D1(112, vVar0, 30f) && !func_530())) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				if (!func_530())
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_90, false);
				}
				func_463(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_491()//Position - 0x14D25
{
	if ((unk_0x724D816EA203A79E(iLocal_90) && !unk_0x1D403DFADBC2DE3C(iLocal_90, 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_530())
		{
			if (func_532(unk_0xB5CEFD608600A09F(), 0))
			{
				func_472("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x5237AF95232D78C5(iLocal_90, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_90))
		{
			if (!unk_0x5237AF95232D78C5(iLocal_90, 0))
			{
				if (!func_493(9))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_90, unk_0xBC25C936A095B5BA(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_472("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_492() || unk_0x7930B3E9C919E90F()))
				{
					func_472("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_472("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_493(9) && !func_493(5))
			{
				return 1;
			}
			else if (!(func_492() || (unk_0x7930B3E9C919E90F() && !func_391())))
			{
				func_472("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_472("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_90))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_492()//Position - 0x14EC8
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x14EE2
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_494(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_494(int iParam0)//Position - 0x14F04
{
	return func_495(iParam0, Global_8C41);
}

int func_495(int iParam0, int iParam1)//Position - 0x14F15
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

void func_496()//Position - 0x150F6
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &Var2, 2);
			if (Var2 == 1500932196)
			{
				if (Var2.f_1 == unk_0xB5CEFD608600A09F())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_497()//Position - 0x1514A
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (!unk_0x32405B7614E36453())
	{
		return;
	}
	if (unk_0xBC93E1C9C8F877D9(false, 0) != 1)
	{
		if (func_498(1, 0, 1))
		{
			if (unk_0xC77EC38683AB49CC(0) <= 1)
			{
				unk_0xD1CF2F876BAD2600(1);
			}
		}
	}
}

bool func_498(int iParam0, bool bParam1, bool bParam2)//Position - 0x1518A
{
	return func_499(0, iParam0, 1, bParam1, bParam2);
}

int func_499(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1519E
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_14FADF, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_503(iParam0) - func_502(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_502(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_503(iParam0) - func_501(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_502(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_503(iParam0) - func_502(iParam0, 1));
		}
		if (!bParam4 && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_500(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x15267
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_501(int iParam0)//Position - 0x152A1
{
	switch (iParam0)
	{
		case 0:
			return Global_14FADF.f_1;
			break;
		
		case 1:
			return Global_14FADF.f_2;
			break;
		
		case 2:
			return Global_14FADF.f_3;
			break;
	}
	return 0;
}

int func_502(int iParam0, bool bParam1)//Position - 0x152E7
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CD;
			}
			else
			{
				return unk_0xBC93E1C9C8F877D9(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CE;
			}
			else
			{
				return unk_0x146F82F73FA40AB0(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CF;
			}
			else
			{
				return unk_0x2B3A16ECF7925A20(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_503(int iParam0)//Position - 0x15384
{
	switch (iParam0)
	{
		case 0:
			return Global_14FAE7;
			break;
		
		case 1:
			return Global_14FAE8;
			break;
		
		case 2:
			return Global_14FAE9;
			break;
	}
	return 0;
}

bool func_504(int iParam0)//Position - 0x153C4
{
	return func_471(iLocal_52, iParam0);
}

void func_505(var uParam0)//Position - 0x153D4
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
						func_506(uParam0[iVar0 /*18*/]);
						uParam0->f_110 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_506(int iParam0)//Position - 0x15462
{
	func_507(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_507(int iParam0, char* sParam1, int iParam2)//Position - 0x15478
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_433(*iParam0))
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

void func_508(int iParam0)//Position - 0x15552
{
	if (func_471(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_509()//Position - 0x1556D
{
	func_2(0);
	if (unk_0x724D816EA203A79E(iLocal_90))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
		{
			func_2(1);
		}
		else
		{
			func_472("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_472("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_2(0);
		func_472("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_510(int iParam0, int iParam1, bool bParam2)//Position - 0x155D1
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_514();
			}
			else
			{
				return 0;
			}
		}
		if (!func_513())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_512())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_511(155))
				{
					if (!bParam2)
					{
						func_514();
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
					func_514();
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
				func_514();
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
			func_514();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_511(int iParam0)//Position - 0x156E6
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_512()//Position - 0x156FD
{
	return Global_255A46.f_245;
}

bool func_513()//Position - 0x1570C
{
	return Global_14083F;
}

void func_514()//Position - 0x15718
{
	unk_0x95E4B6F3ED223F5A();
}

void func_515()//Position - 0x15724
{
	func_189(1);
}

void func_516(var uParam0)//Position - 0x15731
{
	func_519();
	if (func_42(0, 1))
	{
		unk_0x4AED68BFACFB14CB(true);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		if (unk_0x5CAE759AE8219D20(iLocal_90))
		{
			if ((func_530() && unk_0xF4FCC3C1048FF2AB(iLocal_90, 1805844857) != 1) && unk_0xF4FCC3C1048FF2AB(iLocal_90, -251125078) != 1)
			{
				unk_0x8CE2798B9A7027EC(iLocal_90, 1193033728, 0);
				if (unk_0x4DF785C4DF542CD0(iLocal_90))
				{
					unk_0x22321800954A532E(iLocal_90, true);
				}
				if (unk_0xE37F7B0CBE8148BF(iLocal_90))
				{
					unk_0x02537C8C1BEEB477(&iLocal_90);
				}
				unk_0xAFD2CBD312D69CFA(iLocal_90);
			}
			else
			{
				if (unk_0xE37F7B0CBE8148BF(iLocal_90))
				{
					unk_0x02537C8C1BEEB477(&iLocal_90);
				}
				unk_0xAFD2CBD312D69CFA(iLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_471(iLocal_49, 64))
	{
		Global_6355 = 0;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_91))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_91);
	}
	iLocal_91 = 0;
	iLocal_287 = 0;
	if (func_471(iLocal_49, 2048))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	func_518();
	if (func_530())
	{
		if (unk_0x2A0D5F9585271A68(iLocal_83))
		{
			unk_0x5BF83EEC9AFDCD0E(iLocal_83);
		}
	}
	iLocal_92 = 0;
	func_519();
	func_517();
	Global_6356 = 0f;
	if (!Global_198196.f_1089 && !Global_198196.f_108D)
	{
		unk_0x7A89E6B582BCD8C2();
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_504(256))
		{
			unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 6, iLocal_84, iLocal_85, 0);
			func_189(1024);
		}
	}
	if (func_451("PROS_ACCEPT") && !Global_6353)
	{
		unk_0x7456702622C62EA0(1);
	}
	if (Global_6357 == unk_0x8A55B15F4133C912())
	{
		Global_6353 = 0;
		Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_190 = 0;
	}
	func_428(uParam0, 0);
	if (func_530())
	{
		func_189(2048);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
}

void func_517()//Position - 0x158F4
{
}

void func_518()//Position - 0x158FC
{
	Global_252E21.f_47F.f_A = 0;
}

void func_519()//Position - 0x1590E
{
}

void func_520(bool bParam0)//Position - 0x15916
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_90))
	{
		if (unk_0x5237AF95232D78C5(iLocal_90, 0))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_90, -828834893) != 1)
			{
				unk_0xA3981DED4FC2E56E(iLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_530())
			{
				if (unk_0x5CAE759AE8219D20(iLocal_90))
				{
					if (unk_0xE37F7B0CBE8148BF(iLocal_90))
					{
						if (unk_0xDD5EE7D9FC37FA16(unk_0x2F3B70ED60C4B9EB(iLocal_90)))
						{
							unk_0x22321800954A532E(iLocal_90, true);
						}
					}
				}
			}
			else
			{
				unk_0x22321800954A532E(iLocal_90, true);
			}
		}
	}
}

void func_521()//Position - 0x15988
{
	if (!func_530())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_90, 0))
	{
		if (!unk_0x889DA6CE8E4DB344(iLocal_90))
		{
			func_89(0);
			iLocal_285 = 1;
		}
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_90))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_90, false);
				unk_0x2A022CF97A7A1A9B(iLocal_90);
			}
		}
		else
		{
			unk_0x2A022CF97A7A1A9B(iLocal_90);
		}
		unk_0x38E412DB4A45B900(iLocal_90, 0);
	}
	if (unk_0xE59B7F5A03335350(iLocal_93, 0) && !unk_0x1D403DFADBC2DE3C(iLocal_93, 0))
	{
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_93))
			{
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_15 <= 0 && !unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 11))
				{
					unk_0xAC11493FE23DE883(iLocal_93, false);
					unk_0x93D3868AE0D83B7C(iLocal_93, 3);
					unk_0xBDB583AA8DCA5600(iLocal_93, 0);
				}
				unk_0xD38EB677CBE7440A(iLocal_93, true, 0);
			}
		}
		else
		{
			unk_0xAC11493FE23DE883(iLocal_93, false);
			unk_0x93D3868AE0D83B7C(iLocal_93, 3);
			unk_0xBDB583AA8DCA5600(iLocal_93, 0);
		}
	}
	func_529(iLocal_74);
	func_529(iLocal_75);
	func_529(iLocal_76);
	func_529(iLocal_77);
	func_529(iLocal_78);
	func_529(iLocal_79);
	func_529(iLocal_80);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
		if ((func_530() && iLocal_288 != 3) && func_471(iLocal_49, 2048))
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		}
		unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
		unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 1);
	}
	if (func_471(iLocal_49, 2048))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x5EFA245B45A49778(2, 19, 1);
	unk_0x5EFA245B45A49778(2, 37, 1);
	func_518();
	iLocal_287 = 0;
	if (func_471(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_6353 = 0;
		Global_6354 = 0;
		Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_190 = 0;
	}
	if (func_471(iLocal_49, 8))
	{
		if (unk_0x320539481B2F0121(func_86()))
		{
			unk_0xFC4EC4916831BFC8(func_86());
		}
	}
	func_528();
	func_449();
	if (((func_451("PROS_ACCEPT") || func_451("PROS_CAM_TOG")) || func_451("PROS_RESPONSE")) || func_451("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x7456702622C62EA0(1);
	}
	func_350(0);
	unk_0x43F06392C4EF25E0(true);
	if (func_471(iLocal_49, 8))
	{
		if (unk_0x320539481B2F0121(func_86()))
		{
			unk_0xFC4EC4916831BFC8(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0xC32C243942383443();
	func_116(0);
	unk_0x4AED68BFACFB14CB(true);
	func_522();
	if (func_530())
	{
		if (func_504(2))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						unk_0x42793EADF14EC888(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
						unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
					}
				}
			}
			else if (unk_0x270072584099CC42(iLocal_93))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_93))
				{
					unk_0xD421BC740C5340C3(iLocal_93, 1);
					unk_0x42793EADF14EC888(iLocal_93, 0);
					unk_0x7EE3B21D7AC635E8(iLocal_93, 0);
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_93);
					unk_0xD421BC740C5340C3(iLocal_93, 1);
					unk_0x42793EADF14EC888(iLocal_93, 0);
					unk_0x7EE3B21D7AC635E8(iLocal_93, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_522()//Position - 0x15CB9
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_527())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_526(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		unk_0x18054B9E2612CC6D(131, func_525(), 0f);
		unk_0x18054B9E2612CC6D(117, func_524(), 0f);
		unk_0x18054B9E2612CC6D(118, func_523(), 0f);
	}
}

int func_523()//Position - 0x15D3E
{
	return iLocal_46;
}

int func_524()//Position - 0x15D48
{
	return iLocal_45;
}

int func_525()//Position - 0x15D52
{
	return 0;
}

int func_526(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x15D5B
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
				Var2 = { func_307(unk_0xB5CEFD608600A09F()) };
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

int func_527()//Position - 0x15E8F
{
	if ((unk_0x57D316754A262B34() && unk_0x7E3A4CFA5545546C()) && unk_0x670C0C6C780A3F84())
	{
		return 1;
	}
	return 0;
}

void func_528()//Position - 0x15EB5
{
	if (func_471(iLocal_49, 128))
	{
		func_393(39, 0);
		func_393(40, 0);
		func_393(41, 0);
		func_393(42, 0);
		func_393(43, 0);
		func_393(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_529(int iParam0)//Position - 0x15EFA
{
	if (func_530())
	{
		if (func_210(iParam0))
		{
			unk_0x913ADDC330AF164E(iParam0);
		}
	}
}

bool func_530()//Position - 0x15F18
{
	return func_504(1);
}

bool func_531(int iParam0)//Position - 0x15F25
{
	return Global_8C41 == iParam0;
}

int func_532(int iParam0, int iParam1)//Position - 0x15F33
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0xA95CF30C72EB526E(iParam0);
		if (unk_0x5237AF95232D78C5(iVar0, iParam1))
		{
			iVar3 = unk_0x9FE9D386222EEE47(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0xA95CF30C72EB526E(iVar2) != iVar0)
					{
						if (unk_0x62F3A07C43FFB568(unk_0xA95CF30C72EB526E(iVar2), iVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_533(int iParam0, bool bParam1)//Position - 0x15FA9
{
	if (bParam1)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_18402B[iParam0 /*770*/] == 2 || Global_18402B[iParam0 /*770*/] == 1) || Global_18402B[iParam0 /*770*/] == 0) || Global_18402B[iParam0 /*770*/] == 3) || Global_18402B[iParam0 /*770*/] == 8)
	{
		return 1;
	}
	return 0;
}

