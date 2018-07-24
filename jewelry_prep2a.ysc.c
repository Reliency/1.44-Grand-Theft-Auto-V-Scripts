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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 10;
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
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_750 = 5;
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
	var uLocal_781 = 7;
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
	var uLocal_831 = 5;
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
	var uLocal_857 = 3;
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
	var uLocal_873 = 16;
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
	var uLocal_973 = 10;
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
	var uLocal_1024 = 5;
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
	var uLocal_1050 = 5;
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
	struct<8> Local_1079[2];
	int iLocal_1080 = 0;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 16;
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
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
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
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 1000;
	var uLocal_1280 = 1000;
	var uLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	int iLocal_1284 = 0;
	vector3 vLocal_1285 = { 0f, 0f, 0f };
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	var uLocal_1294 = 0;
	struct<2> Local_1295 = { 0, 0 } ;
	int iLocal_1296 = 0;
	var uLocal_1297 = 0;
	struct<2> Local_1298[3];
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	float fLocal_1303 = 0f;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	vector3 vLocal_1309[24] = "";
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	bool bLocal_1320 = 0;
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
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	vLocal_86 = { 0f, 0.175f, 0f };
	vLocal_87 = { 0f, -3.6f, 0f };
	iLocal_88 = 0;
	fLocal_1303 = 0f;
	iLocal_1318 = -1;
	if (unk_0xE8A79675302ED812(3))
	{
		func_297(5);
	}
	unk_0x25A523E067E06F54(1);
	func_276();
	while (true)
	{
		unk_0x2E94C9549322098D("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_274();
		}
		func_272(&uLocal_94);
		func_200();
		func_198();
		if (!bLocal_91)
		{
			func_194();
			func_193(&Local_1079);
			func_1();
		}
		unk_0x598D851D7D0D2BA3(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x105
{
	switch (iLocal_88)
	{
		case 0:
			if (func_21())
			{
				func_20(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x136
{
	unk_0x3857DADBD6EC8A54("JHP2A_STOP");
	unk_0xEB233A3B7635D2AC();
	unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_3(bool bParam0, int iParam1)//Position - 0x173
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
		if ((func_6(0) && Global_11638.f_1 == 1) && func_5(Global_11638))
		{
		}
		else
		{
			Global_DA9F = 1;
		}
	}
	if (Global_19B04.f_2360 || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()//Position - 0x249
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

int func_5(int iParam0)//Position - 0x27E
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

bool func_6(bool bParam0)//Position - 0x2BC
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_7(int iParam0)//Position - 0x2E7
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_8(bool bParam0)//Position - 0x313
{
	int iVar0;
	
	unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
	unk_0x8510BC031C24B862(joaat("boxville3"), false);
	unk_0x23180B0A9E8D2951(joaat("s_m_m_armoured_01"), false);
	if (func_19())
	{
		func_13(0);
	}
	iLocal_1305 = 0;
	Global_10B26 = 0;
	if (bParam0)
	{
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
		Global_10B26 = 0;
	}
	if (unk_0x724D816EA203A79E(iLocal_1293))
	{
		if (bParam0)
		{
			unk_0xCF6040807CC0E4A5(&iLocal_1293);
		}
		else
		{
			unk_0x1E7A09C1710FB071(&iLocal_1293);
		}
	}
	if (unk_0x724D816EA203A79E(vLocal_1285.x))
	{
		if (bParam0)
		{
			unk_0xF845620A03C7425B(&vLocal_1285);
		}
		else
		{
			unk_0x02537C8C1BEEB477(&vLocal_1285);
		}
	}
	if (unk_0x724D816EA203A79E(Local_1295))
	{
		if (bParam0 && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xCF6040807CC0E4A5(&Local_1295);
		}
		else
		{
			unk_0x1E7A09C1710FB071(&Local_1295);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1298)
	{
		if (unk_0x724D816EA203A79E(Local_1298[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0xA35241BCE4C1A24B(&(Local_1298[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xE7E55F7532DEE345(Local_1298[iVar0 /*2*/]))
				{
					unk_0x17175087F2DB6AC8(Local_1298[iVar0 /*2*/], 1, 1);
				}
				unk_0xF8ED8988FAF2823F(&(Local_1298[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x724D816EA203A79E(iLocal_1299))
	{
		if (bParam0)
		{
			unk_0xA35241BCE4C1A24B(&iLocal_1299);
		}
		else
		{
			if (unk_0xE7E55F7532DEE345(iLocal_1299))
			{
				unk_0x17175087F2DB6AC8(iLocal_1299, 1, 1);
			}
			unk_0xF8ED8988FAF2823F(&iLocal_1299);
		}
	}
	if (iLocal_1300 != 0)
	{
		unk_0x483687B0FCA5415A(iLocal_1300, 0);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
		{
			unk_0x133D1B11D62F99C0(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1270, 0, 0);
	func_10();
	if (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
	{
		unk_0x133D1B11D62F99C0(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)//Position - 0x4CB
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

void func_10()//Position - 0x4ED
{
	Global_15B7B = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)//Position - 0x4FA
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
	unk_0x4AED68BFACFB14CB(1);
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
		if (func_12(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_12(char* sParam0)//Position - 0x5D0
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_13(bool bParam0)//Position - 0x5E3
{
	if (bParam0)
	{
		func_18();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
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

void func_14(int iParam0)//Position - 0x646
{
	if (Global_3943)
	{
		func_16(0, 0);
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

int func_15()//Position - 0x6B6
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)//Position - 0x6DD
{
	if (bParam0)
	{
		if (func_17(0))
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

int func_17(int iParam0)//Position - 0x751
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

void func_18()//Position - 0x7AB
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

int func_19()//Position - 0x7D4
{
	if (Global_389D.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)//Position - 0x7ED
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_21()//Position - 0x808
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	vVar0 = { 692.8256f, -1012.544f, 21.722f };
	vVar1 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_90)
	{
		if (func_192(Local_1295))
		{
			if (unk_0x6D01571F8E6286B4(Local_1295) != 0)
			{
				Local_1295.f_1 = unk_0x6D01571F8E6286B4(Local_1295);
			}
			else
			{
				Local_1295.f_1 = func_191(Local_1295, 0, 0);
			}
			func_190("JHP2A_STEAL", 7500, 1);
			func_189("JHP2A_HLP2", 15000);
		}
		else if (unk_0x6D01571F8E6286B4(Local_1295) != 0)
		{
			unk_0xB5AD2E78802711D6(1);
			iVar3 = unk_0x6D01571F8E6286B4(Local_1295);
			unk_0x07B8ECB35A4ED3AC(&iVar3);
			unk_0xB5AD2E78802711D6(0);
		}
		unk_0x3857DADBD6EC8A54("JHP2A_START");
		func_132(0f, 0f, 0f, 0f, 1, func_185());
		unk_0x1D1C393C7689E5A6(5f, 5f, 4);
		iLocal_1313 = 0;
		iLocal_90 = 1;
		bLocal_1320 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_131();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1282 == 0 && unk_0x724D816EA203A79E(Local_1295)) && unk_0xE59B7F5A03335350(Local_1295, 0)) && unk_0x724D816EA203A79E(vLocal_1285.x)) && !unk_0x36CEFBE9B745A58D(vLocal_1285.x)) && unk_0x62F3A07C43FFB568(vLocal_1285.x, Local_1295, 0)) && func_128(&(Local_1079[0 /*8*/])))
				{
					func_99(&uLocal_1270, Local_1295, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1270, 0, 0);
				}
				if (iLocal_1282 == 3 || iLocal_1282 == 2)
				{
					unk_0x1D1C393C7689E5A6(5f, 5f, 4);
					func_96(&iLocal_1080, 1, 0);
					if (unk_0xF16DAFF595E80F7C() && func_12("JHP2A_HLP2"))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (!iLocal_1313)
					{
						func_190("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((unk_0x724D816EA203A79E(iLocal_1296) && unk_0xE59B7F5A03335350(iLocal_1296, 0)) && unk_0x27C9F6C1391327CF(iLocal_1296, Local_1295))
				{
					if (unk_0x2DA8CA50A72528FB(Local_1295.f_1))
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						unk_0xB5AD2E78802711D6(1);
						unk_0x07B8ECB35A4ED3AC(&(Local_1295.f_1));
						unk_0xB5AD2E78802711D6(0);
						func_95(705, 0);
					}
					func_94(&iLocal_1080, vVar0, 0.1f, 0.1f, 0.1f, 1, iLocal_1296, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0x0C265B3C448E6954(Local_1295, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						unk_0x241D744C1CCBC526(iLocal_1296, 5f, -1, 0);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1282 == 1)
				{
					func_96(&iLocal_1080, 1, 0);
					if (!unk_0x2DA8CA50A72528FB(Local_1298[0 /*2*/].f_1))
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						Local_1298[0 /*2*/].f_1 = func_93(Local_1298[0 /*2*/]);
						func_190("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1313 = 1;
						unk_0x8300C56586249382(Local_1295, 0);
					}
				}
				else if (iLocal_1282 == 0)
				{
					if (unk_0x2DA8CA50A72528FB(Local_1295.f_1))
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						unk_0xB5AD2E78802711D6(1);
						unk_0x07B8ECB35A4ED3AC(&(Local_1295.f_1));
						unk_0xB5AD2E78802711D6(0);
						func_95(705, 0);
					}
					if (func_91(&iLocal_1080, vVar0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1295, "JHP2A_RTNVAN", "", "", unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_1295, 0), 0, 1, -1))
					{
						iLocal_89 = 101;
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_1080) && unk_0xBC27F7BE8808F46F(iLocal_1080))
					{
						unk_0x0BBAABB52887CF8C(iLocal_1080, false);
					}
				}
				break;
			
			case 101:
				if (unk_0x724D816EA203A79E(Local_1295) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_1295, 0))
				{
					iVar4 = Local_1295;
				}
				else if (unk_0x724D816EA203A79E(iLocal_1296) && unk_0x27C9F6C1391327CF(iLocal_1296, Local_1295))
				{
					iVar4 = iLocal_1296;
				}
				if (func_89(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
						iLocal_89++;
					}
				}
				break;
			
			case 102:
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					unk_0xEB233A3B7635D2AC();
					unk_0x8300C56586249382(Local_1295, 0);
					unk_0x6FA721E3E050370C(Local_1295, 1);
					if (unk_0x724D816EA203A79E(iLocal_1296))
					{
						unk_0x241D744C1CCBC526(iLocal_1296, 5f, 1, 0);
					}
					func_88(0, -1);
					if (unk_0x724D816EA203A79E(Local_1298[0 /*2*/]))
					{
						unk_0xA35241BCE4C1A24B(&(Local_1298[0 /*2*/]));
					}
					if (unk_0x724D816EA203A79E(Local_1298[1 /*2*/]))
					{
						unk_0xA35241BCE4C1A24B(&(Local_1298[1 /*2*/]));
					}
					if (unk_0x724D816EA203A79E(Local_1298[2 /*2*/]))
					{
						unk_0xA35241BCE4C1A24B(&(Local_1298[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
				{
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x724D816EA203A79E(Local_1298[iVar2 /*2*/]) && !unk_0xE7E55F7532DEE345(Local_1298[iVar2 /*2*/]))
						{
							if (unk_0x2DA8CA50A72528FB(Local_1295.f_1))
							{
								unk_0xB5AD2E78802711D6(1);
								unk_0x07B8ECB35A4ED3AC(&(Local_1295.f_1));
								unk_0xB5AD2E78802711D6(0);
							}
							if (!unk_0x2DA8CA50A72528FB(Local_1298[iVar2 /*2*/].f_1))
							{
								Local_1298[iVar2 /*2*/].f_1 = func_93(Local_1298[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x724D816EA203A79E(Local_1298[iVar2 /*2*/]) && !unk_0xE7E55F7532DEE345(Local_1298[iVar2 /*2*/]))
						{
							if (!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
							{
								bVar5 = func_87(Local_1298[iVar2 /*2*/]);
								if ((bVar5 && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(Local_1295, 0f, -3f, -0.5f), unk_0xA4455714F3DCE207(Local_1295, 0f, -4.5f, 1f), 1.68f, 0, true, 1)) || (!bVar5 && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(Local_1298[iVar2 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 1, false, false);
									unk_0xA35241BCE4C1A24B(&(Local_1298[iVar2 /*2*/]));
									unk_0xEB233A3B7635D2AC();
									unk_0xC4BA30B532FE260F(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					func_95(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x2DA8CA50A72528FB(Local_1298[iVar2 /*2*/].f_1))
						{
							unk_0x07B8ECB35A4ED3AC(&(Local_1298[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					func_41(&iLocal_1080, vVar1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar6, 1);
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, false, true, 0))
					{
						iVar8 = 1;
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) && bLocal_1320))
					{
						unk_0xBBC4195AD74D153D(0, 37, 1);
						unk_0xBBC4195AD74D153D(0, 44, 1);
						if (!func_19())
						{
							func_13(1);
						}
						if (!unk_0x12C10A73846FA35A(unk_0xBC25C936A095B5BA()))
						{
							if (!unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0) && !func_17(0))
							{
								if (iVar6 != joaat("weapon_briefcase"))
								{
									unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_40("JHP2A_HLP1");
							}
						}
						if (unk_0x694514BD37EC4E94(0, 51) && iVar6 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x7456702622C62EA0(1);
							}
							iVar9 = unk_0x1FF1E288D3B650F5(unk_0xBC25C936A095B5BA(), 1);
							unk_0x46913653D1C7E82E(iVar9);
							unk_0x1D1C393C7689E5A6(3f, 5f, 4);
							unk_0xF2C27FE5A8B98CB5(-1, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", 0, 0);
							unk_0xF8ED8988FAF2823F(&iVar9);
							unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
							unk_0x133D1B11D62F99C0(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"));
							func_88(0, -1);
							func_39(706);
							func_96(&iLocal_1080, 1, 0);
							if (func_7(87))
							{
								if (func_19())
								{
									func_13(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_19())
						{
							func_13(0);
						}
						if (unk_0xF16DAFF595E80F7C())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x7456702622C62EA0(1);
							}
						}
					}
					bLocal_1320 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1);
				}
				break;
			
			case 1000:
				unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
				unk_0x8300C56586249382(Local_1295, 0);
				unk_0x6FA721E3E050370C(Local_1295, 1);
				func_38(1);
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0x1D1C393C7689E5A6(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			
			case 1001:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_89++;
				}
				break;
			
			case 1002:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			
			case 2000:
				unk_0x1D1C393C7689E5A6(5f, 5f, 4);
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
				Global_10B26 = 1;
				func_38(1);
				func_37(1, 0);
				iLocal_89++;
				break;
			
			case 2001:
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			
			case 2002:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_89++;
				}
				break;
			
			case 2003:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_22()//Position - 0x1187
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), false, false, false, false, false, false, 0, false);
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 157, true);
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_16165[iVar0]))
		{
			if (!unk_0x1D403DFADBC2DE3C(Global_16165[iVar0], 0))
			{
				unk_0x06D93FD5E4D394CF(Global_16165[iVar0], false, false, false, false, false, false, 0, false);
				unk_0x1E5C2A1EAB944289(Global_16165[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_8C41 != 0 && Global_8C41 != 3) && Global_8C41 != 2)
	{
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0xDF53A66AEE1401AA(1f);
	}
}

int func_23()//Position - 0x123A
{
	if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1263
{
	func_34(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	if (iParam5 == 1)
	{
		Global_3DC4 = 1;
	}
	else
	{
		Global_3DC4 = 0;
	}
	Global_280001 = 0;
	return func_25(sParam3, iParam4, bParam8);
}

int func_25(char* sParam0, int iParam1, bool bParam2)//Position - 0x12C2
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
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_31();
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
				func_29();
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
				if (func_28())
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
			func_27();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_26();
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
		func_33();
	}
	return 0;
}

void func_26()//Position - 0x158E
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

void func_27()//Position - 0x15BF
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

int func_28()//Position - 0x1654
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

void func_29()//Position - 0x16ED
{
	if (func_30(14))
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
		Global_389D = func_185();
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

bool func_30(int iParam0)//Position - 0x178F
{
	return Global_8C41 == iParam0;
}

void func_31()//Position - 0x179D
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

bool func_32(int iParam0, int iParam1)//Position - 0x17F4
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

void func_33()//Position - 0x182F
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1886
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

int func_35()//Position - 0x18DC
{
	if (func_36())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 0;
		}
	}
	return 1;
}

int func_36()//Position - 0x1902
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0, bool bParam1)//Position - 0x1924
{
	if (!bParam1)
	{
		unk_0xBBC4195AD74D153D(0, 21, 1);
	}
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0xBBC4195AD74D153D(0, 24, 1);
	unk_0xBBC4195AD74D153D(0, 257, 1);
	unk_0xBBC4195AD74D153D(0, 141, 1);
	unk_0xBBC4195AD74D153D(0, 140, 1);
	unk_0xBBC4195AD74D153D(0, 22, 1);
	unk_0xBBC4195AD74D153D(0, 44, 1);
	unk_0xBBC4195AD74D153D(0, 23, 1);
	unk_0xBBC4195AD74D153D(0, 47, 1);
	unk_0xBBC4195AD74D153D(0, 36, 1);
	if (bParam0)
	{
		unk_0xBBC4195AD74D153D(0, 37, 1);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (bParam1)
		{
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 2f);
		}
		else
		{
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 1f);
		}
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 102, true);
	}
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	}
}

void func_38(bool bParam0)//Position - 0x19DE
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), true, true, true, true, true, false, 0, false);
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 157, false);
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
		unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
		if (bParam0)
		{
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), false);
		}
		unk_0x9965F1612928953B(unk_0xBC25C936A095B5BA(), 0);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	}
	unk_0xAEC867D0DBB7AFEB(0);
	unk_0xDF53A66AEE1401AA(0f);
}

void func_39(int iParam0)//Position - 0x1A5A
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

void func_40(char* sParam0)//Position - 0x1ACB
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_41(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1AE1
{
	return func_42(iParam0, vParam1, vParam2, func_86(), func_86(), bParam3, 3, 0, 0, 0, 0, sParam4, func_85(), func_85(), func_85(), func_85(), func_85(), 0, bParam5, func_85(), 0, 0, bParam6, iParam7, func_85(), func_85(), func_85(), bParam8, 1065353216);
}

int func_42(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1B3C
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
	func_84(iParam0);
	func_83(iParam0);
	func_82();
	if (func_65(iParam0, iParam0->f_11[0], iParam0->f_11[1], iParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_64(sParam12);
		func_64(sParam13);
		func_64(sParam14);
		func_64(sParam15);
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
				if (func_62(iParam0, iParam21))
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
				func_64(sParam16);
				func_64(sParam19);
				func_64("MORE_SEATS");
				if (bParam18 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						func_64(sParam11);
					}
					if (unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(iParam0);
					}
					if ((!func_59(iParam0, 1) && !func_58(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_57(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_55(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_64("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_59(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_55(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
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
						iParam0->f_5 = func_54(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xBF0E22F3E083C33D(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_53(iParam0->f_5, iParam0);
						}
					}
					else if (!func_52(vVar3, unk_0x5DC00ADB7E2FD7C2(iParam0->f_5), 0.1f, 0))
					{
						unk_0x1423825E528B4DE1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_53(iParam0->f_5, iParam0);
						}
					}
					if (!func_59(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 2))
						{
							func_57(iParam0, sParam11, 0);
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
								else if (!unk_0x9488E18994C5C83D(iParam0->f_11[iVar2], func_51()) || !func_49(iParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_46(iParam0))
							{
								func_64(sParam11);
								func_64(sParam16);
								func_64(sParam12);
								func_64(sParam13);
								func_64(sParam14);
								func_64(sParam15);
								func_64("LOSE_WANTED");
								func_64("MORE_SEATS");
								func_64(sParam19);
								func_96(iParam0, 1, 0);
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
					func_64(sParam16);
					func_64(sParam19);
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5) || unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						unk_0x07B8ECB35A4ED3AC(iParam0);
						func_64(sParam11);
					}
					if ((!func_59(iParam0, 1) && !func_58(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_57(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_55(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_64("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_59(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_55(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
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
								func_64(sParam11);
							}
							*iParam0 = func_43(iParam10, 0, 0);
							unk_0x2E9308F22ABD4DF5(*iParam0, 2);
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_53(*iParam0, iParam0);
							}
						}
						if (!func_59(iParam0, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_57(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
							{
								if (!unk_0xEAEFBBEC1AEA464B(sParam19))
								{
									if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
									{
										func_57(iParam0, sParam19, 0);
										unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
									}
								}
								else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_57(iParam0, sParam16, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 23))
								{
									if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
									{
										func_55(iParam0->f_11[0], "GET_IN_CAR", 3);
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
					func_64(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_59(iParam0, 2))
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
										func_55(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_57(iParam0, "MORE_SEATS", 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 13);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_57(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
								{
									func_57(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_59(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
						{
							func_57(iParam0, sParam16, 0);
							unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
						}
						else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
						{
							if (!unk_0xEAEFBBEC1AEA464B(sParam19))
							{
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_57(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_57(iParam0, sParam16, 0);
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
		func_64(sParam11);
		func_64(sParam16);
		func_64(sParam19);
		func_64(sParam16);
		func_64("LOSE_WANTED");
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

int func_43(int iParam0, bool bParam1, bool bParam2)//Position - 0x24A4
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x24B7
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)//Position - 0x255B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_46(int iParam0)//Position - 0x2572
{
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 12))
	{
		if (func_48(unk_0xBC25C936A095B5BA()))
		{
			if (func_47(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_47(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_47(bool bParam0, bool bParam1, bool bParam2)//Position - 0x25D0
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

int func_48(int iParam0)//Position - 0x26B5
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

int func_49(int iParam0, int iParam1)//Position - 0x26EC
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && iParam1)
		{
			if (func_50(unk_0xBC25C936A095B5BA(), iParam0))
			{
				unk_0x567FA6DC2DF8E19A(func_51(), 50f);
				return 1;
			}
		}
		else if (unk_0x9488E18994C5C83D(iParam0, func_51()))
		{
			unk_0x567FA6DC2DF8E19A(func_51(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x2757
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

int func_51()//Position - 0x279F
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_52(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x27AF
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

void func_53(int iParam0, int iParam1)//Position - 0x282A
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

int func_54(vector3 vParam0, bool bParam1)//Position - 0x2865
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_55(int iParam0, char* sParam1, int iParam2)//Position - 0x2891
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_56(iParam2), 1);
}

int func_56(int iParam0)//Position - 0x28A8
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

void func_57(int iParam0, char* sParam1, bool bParam2)//Position - 0x2A9D
{
	if (!bParam2)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_190(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = unk_0x105601648511CC64();
}

int func_58(int iParam0)//Position - 0x2AD4
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

int func_59(int iParam0, int iParam1)//Position - 0x2AF8
{
	if (iParam1 != 1 || unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 1;
		}
		if (func_61(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x11D38424F1DD3B8F())
	{
		if (func_36() && !func_60())
		{
			return 1;
		}
	}
	return 0;
}

int func_60()//Position - 0x2B50
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

int func_61(var uParam0)//Position - 0x2B67
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

int func_62(var uParam0, int iParam1)//Position - 0x2B8A
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_63(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2)//Position - 0x2BBB
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

void func_64(char* sParam0)//Position - 0x2C4F
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		unk_0xBB5629E7D44054AE(sParam0);
	}
}

int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2C67
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
						if (func_63(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
								{
									unk_0xDBA0F5674ACCE43C(uParam0->f_11[iVar0], 1f);
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
									if (unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470) == 7 && !func_81(uParam0->f_11[iVar0], uParam0->f_15))
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
					{
						if (func_79(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_51());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 26))
	{
		if ((!func_78(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())) && !unk_0x724D816EA203A79E(iParam10))
		{
			iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar10, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_59(uParam0, 2))
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
							func_55(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_57(uParam0, "MORE_SEATS", 0);
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
			func_64("MORE_SEATS");
		}
		if (!unk_0x724D816EA203A79E(iParam10))
		{
			if ((!unk_0x36CEFBE9B745A58D(uParam0->f_11[0]) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[1])) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[2]))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 31))
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && !func_59(uParam0, 2))
					{
						iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (func_77(iVar10, uParam0))
						{
							func_57(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 31);
					func_64("CMN_VEHSUIT");
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
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
							if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
							{
								if (!func_78(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
								{
									if (!func_76(uParam0->f_11[iVar0]))
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
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
					if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
					{
						iVar21 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
						if (unk_0x724D816EA203A79E(iVar21))
						{
							if (func_63(iVar21, uParam0, 0))
							{
								if (func_75(iVar0, uParam0) || !unk_0xFA30DFD0084E92FE(uParam0->f_D, 27))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
									func_74(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF0059F27F7BB6680(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_75(iVar0, uParam0))
							{
								if (unk_0x6F79ECA8C83E4357(iVar21) == joaat("sentinel2"))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 4);
								}
								else
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 2);
								}
								func_73(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()) && !func_72(uParam0->f_11[iVar0], iParam10)) && !func_71(uParam0->f_11[iVar0], iParam10))
					{
						if (func_79(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
							{
								if (((!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
									}
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_51());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x105601648511CC64();
								uParam0->f_1[iVar0] = func_43(uParam0->f_11[iVar0], 0, 0);
								unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_53(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
					{
						if (((func_49(uParam0->f_11[iVar0], 1) || func_72(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xE59B7F5A03335350(iParam10, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
						{
							if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
								func_64(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_53(uParam0->f_1[iVar0], uParam0);
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
										if (!func_49(uParam0->f_11[iVar0], 1))
										{
											if (func_48(uParam0->f_11[iVar0]))
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
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7 && !func_81(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0xBF3C2E756849EEF4(unk_0xBC25C936A095B5BA())) && !func_70(uParam0->f_11[iVar0], 2f)) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
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
										uParam0->f_1[iVar0] = func_43(uParam0->f_11[iVar0], 0, 0);
										unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
							{
								if (func_79(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
										}
										unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], false);
										unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_51());
									}
								}
							}
						}
						else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
								{
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_51());
								}
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
							{
								unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
							}
						}
						else if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_51()) && !unk_0x7544D2465B934445(iParam10))
						{
							unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_64(uVar12[iVar0]);
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
		if (!func_59(uParam0, 2))
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
							if (func_76(uParam0->f_11[iVar0]) || unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
					{
						if (!unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_76(uParam0->f_11[iVar0]))
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
								func_57(uParam0, sParam7, 0);
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
									if (!func_69(iVar0, uParam0))
									{
										if (!unk_0xEAEFBBEC1AEA464B(uVar13[iVar0]))
										{
											if (!unk_0x3362CDE8460ED38B(uVar13[iVar0], ""))
											{
												func_67(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_66(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_69(iVar0, uParam0))
										{
											func_57(uParam0, uVar12[iVar0], 0);
											func_66(iVar0, uParam0);
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
					func_64(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_64("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1)//Position - 0x3CDB
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

void func_67(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3D23
{
	if (!bParam3)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_68(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = unk_0x105601648511CC64();
}

void func_68(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3D5C
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

int func_69(int iParam0, var uParam1)//Position - 0x3D7B
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

int func_70(int iParam0, float fParam1)//Position - 0x3DC4
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

int func_71(int iParam0, int iParam1)//Position - 0x3DFB
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x9488E18994C5C83D(iParam0, func_51()))
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

int func_72(int iParam0, int iParam1)//Position - 0x3E62
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

void func_73(int iParam0, var uParam1)//Position - 0x3E97
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

void func_74(int iParam0, var uParam1)//Position - 0x3EDF
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

int func_75(int iParam0, var uParam1)//Position - 0x3F27
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

int func_76(int iParam0)//Position - 0x3F70
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

int func_77(int iParam0, var uParam1)//Position - 0x3FFD
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

int func_78(var uParam0)//Position - 0x4160
{
	int iVar0;
	
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_63(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x418F
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
						if (func_78(uParam0))
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
					if (func_63(iVar0, uParam0, 0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (func_80(iVar0))
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

int func_80(int iParam0)//Position - 0x426D
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

int func_81(int iParam0, int iParam1)//Position - 0x42A5
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

void func_82()//Position - 0x42D5
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

void func_83(var uParam0)//Position - 0x4342
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

void func_84(var uParam0)//Position - 0x43E5
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

int func_85()//Position - 0x447B
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_86()//Position - 0x4485
{
	vector3 vVar0;
	
	return vVar0;
}

int func_87(int iParam0)//Position - 0x4491
{
	vector3 vVar0;
	
	if (unk_0x1D403DFADBC2DE3C(Local_1295, 0))
	{
		return 0;
	}
	vVar0 = { unk_0x6A1001313D072F7B(unk_0x541C2AEF053615BC(iParam0, true), unk_0xA4455714F3DCE207(Local_1295, vLocal_86), unk_0xA4455714F3DCE207(Local_1295, vLocal_87), 0) };
	if (SYSTEM::VDIST2(vVar0, unk_0xA4455714F3DCE207(Local_1295, vLocal_86)) <= SYSTEM::VDIST2(unk_0xA4455714F3DCE207(Local_1295, vLocal_87), unk_0xA4455714F3DCE207(Local_1295, vLocal_86)))
	{
		return 1;
	}
	return 0;
}

void func_88(bool bParam0, int iParam1)//Position - 0x4507
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

int func_89(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x45A1
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
	func_90(iParam0);
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

void func_90(int iParam0)//Position - 0x4730
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

bool func_91(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x475C
{
	return func_42(iParam0, vParam1, func_92(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_85(), func_85(), func_85(), func_85(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_85(), func_85(), func_85(), 1, fParam4);
}

Vector3 func_92()//Position - 0x47B1
{
	return 0f, 0f, 2f;
}

int func_93(int iParam0)//Position - 0x47BC
{
	return func_44(iParam0, 1, 0);
}

int func_94(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x47CC
{
	return func_42(iParam0, vParam1, vParam2, func_86(), func_86(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_85(), func_85(), func_85(), func_85(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

void func_95(int iParam0, bool bParam1)//Position - 0x481B
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

void func_96(int iParam0, bool bParam1, bool bParam2)//Position - 0x4865
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_98(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(iParam0->f_1[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1[iVar0]));
		}
		func_97(iVar0, iParam0);
		func_74(iVar0, iParam0);
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
				if (unk_0x9488E18994C5C83D(iParam0->f_11[iVar0], func_51()) && iParam0->f_11[iVar0] != unk_0xBC25C936A095B5BA())
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

void func_97(int iParam0, var uParam1)//Position - 0x4A16
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

void func_98(var uParam0)//Position - 0x4A5E
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
	}
}

void func_99(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4A79
{
	func_100(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_100(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4A96
{
	func_101(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_101(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AB4
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_102(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_102(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AEC
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
	if (func_12(iVar0))
	{
		func_127();
	}
	if (func_126(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
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
			if (func_121(uParam0, bParam5, bParam7, 0))
			{
				func_117(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_106(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_12(iVar0))
							{
								func_189(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_105(1);
								}
							}
						}
					}
				}
			}
			else if (func_106(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_12(iVar0))
						{
							func_189(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_105(1);
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
				if (func_12(sParam3))
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
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_121(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_104(uParam0))
				{
					func_103(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_103(var uParam0)//Position - 0x4E55
{
	if (func_126(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
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

int func_104(var uParam0)//Position - 0x4EB9
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

int func_105(bool bParam0)//Position - 0x4EE4
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

int func_106(char* sParam0)//Position - 0x4F8E
{
	if (!func_107(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_105(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_107(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5026
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
	if (func_17(0))
	{
		return 0;
	}
	if (func_116())
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
	if ((func_115() || func_114(Global_440000.f_243FE)) || func_113())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_112(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_111(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_108(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x5274
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_109(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_109(int iParam0, bool bParam1, bool bParam2)//Position - 0x52DA
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

int func_110()//Position - 0x5324
{
	return -1;
}

int func_111(int iParam0, int iParam1)//Position - 0x532D
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

int func_112(int iParam0, int iParam1)//Position - 0x538F
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

var func_113()//Position - 0x5414
{
	return Global_255A46.f_10;
}

bool func_114(int iParam0)//Position - 0x5422
{
	return iParam0 == 51;
}

var func_115()//Position - 0x542F
{
	return Global_255A46.f_F;
}

bool func_116()//Position - 0x543D
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_117(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x5452
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
		func_11(uParam0, 0, 0);
	}
	if (func_120(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_118())
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
	unk_0x4AED68BFACFB14CB(0);
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

bool func_118()//Position - 0x555E
{
	return func_119(unk_0xB5CEFD608600A09F());
}

int func_119(int iParam0)//Position - 0x556E
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_120(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x558D
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x55D4
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
					if (func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_124(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_124(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_104(uParam0))
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
						if (!func_125(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_125(bParam1, bParam2, bParam3))
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
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_124(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_124(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_125(bParam1, bParam2, bParam3))
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
						if (func_123(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_122(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_122(bParam1, bParam2, bParam3))
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
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_104(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_107(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_122(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5940
{
	if (!func_107(bParam0, bParam1, bParam2))
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

int func_123(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5992
{
	if (!func_107(bParam0, bParam1, bParam2))
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
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)//Position - 0x59DB
{
	if (!func_107(bParam0, bParam1, bParam2))
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

int func_125(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5A3A
{
	if (!func_107(bParam0, bParam1, bParam2))
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
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x5A90
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

void func_127()//Position - 0x5AEB
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

int func_128(var uParam0)//Position - 0x5AFB
{
	if (func_130(uParam0) && !func_129(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_129(var uParam0)//Position - 0x5B20
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0)//Position - 0x5B37
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_131()//Position - 0x5B65
{
	int iVar0;
	
	if (iLocal_1282 == 0 || iLocal_1282 == 1)
	{
		if (((unk_0x1D403DFADBC2DE3C(Local_1295, 0) || (unk_0x724D816EA203A79E(Local_1298[0 /*2*/]) && !unk_0xE7E55F7532DEE345(Local_1298[0 /*2*/]))) || (unk_0x724D816EA203A79E(Local_1298[1 /*2*/]) && !unk_0xE7E55F7532DEE345(Local_1298[1 /*2*/]))) || (unk_0x724D816EA203A79E(Local_1298[2 /*2*/]) && !unk_0xE7E55F7532DEE345(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 2;
		}
	}
	if (iLocal_1282 == 2)
	{
		if ((((!unk_0x724D816EA203A79E(Local_1295) || !unk_0xE59B7F5A03335350(Local_1295, 0)) || (unk_0x724D816EA203A79E(Local_1298[0 /*2*/]) && !func_87(Local_1298[0 /*2*/]))) || (unk_0x724D816EA203A79E(Local_1298[1 /*2*/]) && !func_87(Local_1298[1 /*2*/]))) || (unk_0x724D816EA203A79E(Local_1298[2 /*2*/]) && !func_87(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 3;
		}
	}
	if (iLocal_1282 == 0)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck") || unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck2"))
			{
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (unk_0x27C9F6C1391327CF(iVar0, Local_1295))
					{
						iLocal_1296 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1282 == 0)
	{
		if (!unk_0xE59B7F5A03335350(Local_1295, 0))
		{
			iLocal_1282 = 1;
		}
	}
	if (iLocal_1282 == 1 && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_1295, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_132(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x5D0D
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_184(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_181(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_133(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_133(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x5D88
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
		func_180(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_175(iParam0, &Var0);
		if (func_120(vParam1, 0f, 0f, 0f, 0))
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
		func_168(iParam3, &Var0, vParam1, fParam2, func_174(iParam0));
		func_134(iParam3, iParam0, 0);
	}
}

void func_134(int iParam0, int iParam1, int iParam2)//Position - 0x5EB1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_164(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_153();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_184(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_135(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_135(int iParam0, int iParam1)//Position - 0x5FCE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_136(iParam0))
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
	func_175(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_136(int iParam0)//Position - 0x61D0
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_151(iParam0, 0, 0)) || func_151(iParam0, 1, 0)) || func_151(iParam0, 2, 0)) || func_174(iParam0) != 145) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || func_147(iParam0)) || !func_137(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_149(iParam0))
		{
		}
		if (func_149(iParam0))
		{
		}
		if (func_151(iParam0, 0, 0))
		{
		}
		if (func_151(iParam0, 1, 0))
		{
		}
		if (func_151(iParam0, 2, 0))
		{
		}
		if (func_174(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_137(int iParam0)//Position - 0x62AD
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_138(iParam0, 0))
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

int func_138(int iParam0, bool bParam1)//Position - 0x645E
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
		if (!func_146())
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
		if ((((!func_145() && !func_144()) && !func_143()) && !func_142()) && !func_146())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_143())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_141(iParam0))
		{
			return 0;
		}
	}
	if (!func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0)//Position - 0x65EC
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_140())
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

int func_140()//Position - 0x66B8
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x66CF
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

int func_142()//Position - 0x817A
{
	return 0;
}

int func_143()//Position - 0x8183
{
	return 1;
}

int func_144()//Position - 0x818C
{
	return 1;
}

int func_145()//Position - 0x8195
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_146()//Position - 0x81AE
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

int func_147(int iParam0)//Position - 0x8269
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_138(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x82AF
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

int func_149(int iParam0)//Position - 0x82EA
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

int func_150(int iParam0)//Position - 0x8366
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

int func_151(int iParam0, int iParam1, bool bParam2)//Position - 0x844E
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_152(iParam1, iVar0, &sVar1, &iVar2))
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

int func_152(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x84BF
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

var func_153()//Position - 0x8597
{
	var uVar0;
	
	func_163(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_162(&uVar0, unk_0x7E09057438B9D216());
	func_161(&uVar0, unk_0x6E06C0DB9B43570D());
	func_156(&uVar0, unk_0xBE14F159908E4EE5());
	func_155(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_154(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_154(var uParam0, int iParam1)//Position - 0x85DD
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

void func_155(var uParam0, int iParam1)//Position - 0x8663
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)//Position - 0x8696
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_160(*uParam0);
	iVar1 = func_158(*uParam0);
	if (iParam1 < 1 || iParam1 > func_157(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_157(int iParam0, int iParam1)//Position - 0x86E7
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

var func_158(int iParam0)//Position - 0x8789
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_159(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_159(bool bParam0, int iParam1, int iParam2)//Position - 0x87AE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_160(var uParam0)//Position - 0x87C5
{
	return uParam0 & 15;
}

void func_161(var uParam0, int iParam1)//Position - 0x87D2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_162(var uParam0, int iParam1)//Position - 0x880C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_163(var uParam0, int iParam1)//Position - 0x8847
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_164(var uParam0, int iParam1)//Position - 0x8883
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
			uParam0->f_4 = func_165(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_165(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_165(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_165(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_165(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_165(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_165(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_165(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_165(2, 1);
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
			if (func_146())
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
			if (func_146())
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
		if (!func_120(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_120(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_120(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_165(int iParam0, int iParam1)//Position - 0x9F7A
{
	struct<82> Var0;
	
	if (func_167(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_166(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_166(int iParam0, var uParam1, int iParam2)//Position - 0x9FBC
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

bool func_167(int iParam0)//Position - 0xA218
{
	return iParam0 < 3;
}

void func_168(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xA224
{
	if (func_164(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_173(iParam0);
			func_172(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_169(iParam0, 1);
		}
	}
}

void func_169(int iParam0, bool bParam1)//Position - 0xA323
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_171(iParam0, 0))
		{
			func_170(iParam0, 1, 0);
			func_170(iParam0, 2, 0);
			func_170(iParam0, 3, 0);
			func_170(iParam0, 4, 0);
			func_170(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_170(iParam0, 0, 0);
	}
}

void func_170(int iParam0, int iParam1, bool bParam2)//Position - 0xA380
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

bool func_171(int iParam0, int iParam1)//Position - 0xA3BB
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_172(var uParam0, var uParam1)//Position - 0xA3DE
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

void func_173(int iParam0)//Position - 0xA4AA
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_164(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_169(iParam0, 0);
		}
	}
}

int func_174(int iParam0)//Position - 0xA524
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

void func_175(int iParam0, var uParam1)//Position - 0xA587
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_179(uParam1);
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
		if (uParam1->f_41 == -1 && !func_178(uParam1->f_42))
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
		func_177(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_176(iVar0 + 1));
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

int func_176(int iParam0)//Position - 0xA832
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

int func_177(int iParam0, var uParam1, var uParam2)//Position - 0xA8E2
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

int func_178(int iParam0)//Position - 0xA9BC
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

void func_179(var uParam0)//Position - 0xA9DC
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

void func_180(int iParam0)//Position - 0xAA8C
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_173(iParam0);
	func_169(iParam0, 0);
}

int func_181(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0xAAB3
{
	int iVar0;
	
	iVar0 = func_182(vParam0, iParam1, 1);
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

int func_182(vector3 vParam0, int iParam1, int iParam2)//Position - 0xABC9
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
				if (func_183(iVar0) || iParam2 == 0)
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

bool func_183(int iParam0)//Position - 0xAC58
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_184(int iParam0)//Position - 0xAC70
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

int func_185()//Position - 0xAC8C
{
	func_186();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_186()//Position - 0xACA5
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_188(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_187(unk_0xBC25C936A095B5BA());
			if (func_167(iVar0) && (!func_30(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_167(Global_19B04.f_932.f_21B.f_10CD))
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

int func_187(int iParam0)//Position - 0xADA2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_188(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_188(int iParam0)//Position - 0xADDF
{
	if (func_167(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_189(char* sParam0, int iParam1)//Position - 0xAE09
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_190(char* sParam0, int iParam1, int iParam2)//Position - 0xAE20
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_191(int iParam0, bool bParam1, bool bParam2)//Position - 0xAE39
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_192(int iParam0)//Position - 0xAE4C
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		switch (unk_0x85E45FFA901BF1E6(iParam0))
		{
			case 1:
				if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_193(var uParam0)//Position - 0xAEB1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x105601648511CC64() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_194()//Position - 0xAF21
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!iLocal_1319)
		{
			func_197(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1);
			func_196(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1);
			iLocal_1319 = 1;
		}
	}
	else if (iLocal_1319)
	{
		func_196(0, -1);
		func_197(0, -1);
		iLocal_1319 = 0;
	}
	if (!iLocal_1317)
	{
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_1295, 1))
			{
				unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1317 = 1;
			}
			else if (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
			{
				unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1317 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1282)
		{
			case 0:
				if ((unk_0x724D816EA203A79E(vLocal_1285.x) && !unk_0x36CEFBE9B745A58D(vLocal_1285.x)) && func_128(&(Local_1079[0 /*8*/])))
				{
					if (Local_1079[0 /*8*/].f_1 == 1)
					{
						if (func_195(unk_0xBC25C936A095B5BA(), Local_1295, 1) > 500f)
						{
							func_297(1);
						}
					}
					else if (Local_1079[0 /*8*/].f_1 == 4)
					{
						if (func_195(unk_0xBC25C936A095B5BA(), Local_1295, 1) > 250f)
						{
							func_297(1);
						}
					}
					else if (func_195(unk_0xBC25C936A095B5BA(), Local_1295, 1) > 250f)
					{
						func_297(2);
					}
				}
				else if (func_195(unk_0xBC25C936A095B5BA(), Local_1295, 1) > 250f)
				{
					func_297(2);
				}
				break;
			
			case 1:
				if (func_195(unk_0xBC25C936A095B5BA(), Local_1295, 1) > 250f)
				{
					func_297(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0x724D816EA203A79E(Local_1298[0 /*2*/]) && func_195(unk_0xBC25C936A095B5BA(), Local_1298[0 /*2*/], 1) > 250f) && unk_0x724D816EA203A79E(Local_1298[1 /*2*/])) && func_195(unk_0xBC25C936A095B5BA(), Local_1298[1 /*2*/], 1) > 250f) && unk_0x724D816EA203A79E(Local_1298[2 /*2*/])) && func_195(unk_0xBC25C936A095B5BA(), Local_1298[2 /*2*/], 1) > 250f)
					{
						func_297(3);
					}
				}
				break;
			}
	}
	if (unk_0x724D816EA203A79E(Local_1295))
	{
		if ((unk_0x149E9368A11035DE(Local_1295) && !unk_0xE59B7F5A03335350(Local_1295, 0)) && !unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
		{
			func_297(4);
		}
	}
}

float func_195(int iParam0, int iParam1, bool bParam2)//Position - 0xB18A
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

void func_196(int iParam0, int iParam1)//Position - 0xB1E8
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

void func_197(int iParam0, int iParam1)//Position - 0xB1FA
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

void func_198()//Position - 0xB265
{
	if (unk_0x724D816EA203A79E(vLocal_1285.x))
	{
		if (!unk_0x5237AF95232D78C5(vLocal_1285.x, 0))
		{
			func_199(vLocal_1285.x, &(vLocal_1285.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
	}
	if (unk_0x724D816EA203A79E(Local_1295))
	{
		if (((!func_192(Local_1295) && unk_0x1D403DFADBC2DE3C(Local_1295, 0)) && iLocal_1314) && func_195(Local_1295, unk_0xBC25C936A095B5BA(), 1) > 200f)
		{
			unk_0x1E7A09C1710FB071(&Local_1295);
		}
	}
}

int func_199(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xB2E5
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

void func_200()//Position - 0xB4BC
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_91 == 1)
	{
		if (!unk_0x17FAADF9916EF741())
		{
			if (!unk_0x422F9EDE839E6ABB())
			{
				unk_0x7A41D32A383895D8(1000);
			}
		}
		else
		{
			if (unk_0x102F1A3BD4B68933())
			{
				unk_0x73F91C7985A4C83B(0);
				unk_0xD103510B8989BEB2();
			}
			iLocal_88 = iLocal_92;
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			func_8(1);
			if (unk_0x102F1A3BD4B68933())
			{
				unk_0xD103510B8989BEB2();
			}
			if (!func_271())
			{
				func_270(iLocal_88, &vVar0, &fVar1);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fVar1);
				unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
				func_268(&uLocal_94, vVar0, 50f, 0);
			}
			func_267(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					func_266(&uLocal_94, iLocal_82);
					func_266(&uLocal_94, iLocal_83);
					func_266(&uLocal_94, iLocal_84);
					func_265(&uLocal_94, &Global_15F6A);
					break;
				
				case 1:
					func_266(&uLocal_94, joaat("burrito2"));
					break;
			}
			while (!func_264(&uLocal_94))
			{
				SYSTEM::WAIT(0);
				func_198();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_257(0))
					{
						SYSTEM::WAIT(0);
					}
					if (unk_0x3362CDE8460ED38B(&Global_15F6A, "jhp2a_main"))
					{
						while (!func_204(&iLocal_1293, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							SYSTEM::WAIT(0);
							unk_0xEDAD35A0D81ED3FB(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					else
					{
						while (!func_204(&iLocal_1293, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							SYSTEM::WAIT(0);
							unk_0xEDAD35A0D81ED3FB(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					unk_0x6012A6A4F2950585(iLocal_1293, 0);
					unk_0xE54F7105CEA81918(iLocal_1293, 1, false);
					unk_0xE54F7105CEA81918(iLocal_1293, 2, true);
					unk_0xF0A40F19AAB79E88(iLocal_1293, 1084227584);
					unk_0x2D655AA68FA1736B(iLocal_1293, true, true, 0);
					if (func_271())
					{
						func_201(iLocal_1293, -1, 1);
					}
					else
					{
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
						unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_1293, -1);
					}
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1295 = unk_0x61C05BF08A1E0EFE(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						unk_0x8300C56586249382(Local_1295, 0);
						unk_0xF0A40F19AAB79E88(Local_1295, 1084227584);
					}
					if (func_271())
					{
						func_201(0, -1, 1);
					}
					else
					{
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
					}
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 692.067f, -1004.812f, 21.9059f, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 359.5735f);
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					break;
			}
			if (unk_0x17FAADF9916EF741() || !unk_0x26641E1BFD792DBC())
			{
				unk_0x829FA4611BD56B44(1000);
			}
			bLocal_91 = false;
		}
	}
}

void func_201(int iParam0, int iParam1, int iParam2)//Position - 0xB7A9
{
	if (func_203() && func_271())
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

void func_202(int iParam0)//Position - 0xB86D
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

int func_203()//Position - 0xB896
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xB8BA
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_3B = 2;
	if (func_203())
	{
		if (func_256())
		{
			func_172(&(Global_181DF.f_B3B.f_C), &Var0);
		}
	}
	else if (func_254())
	{
		func_172(&(Global_17646.f_B3B.f_C), &Var0);
	}
	if (Var0.f_42 != 0)
	{
		if (!func_253(0, &Var0))
		{
			if (unk_0x7C28D15641461C68(Var0.f_42) || unk_0x7512ED01F3F46714(Var0.f_42))
			{
				unk_0xF243B7A14FCFD0F4(Var0.f_42);
				if (unk_0xD6513D668481290A(Var0.f_42))
				{
					*iParam0 = unk_0x61C05BF08A1E0EFE(Var0.f_42, vParam1, fParam2, true, true, false);
					func_242(*iParam0, &Var0, 0, 1);
					unk_0x2CA123B0622F495C(Var0.f_42);
					unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!unk_0x724D816EA203A79E(*iParam0))
		{
			if (func_205(iParam0, 0, vParam1, fParam2, 1, 0))
			{
				unk_0x8510BC031C24B862(func_165(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_205(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0xB9C5
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_167(iParam1))
	{
		Var2.f_B = 12;
		Var2.f_1F = 49;
		Var2.f_51 = 2;
		func_166(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x724D816EA203A79E(*iParam0))
		{
			if (unk_0x6F79ECA8C83E4357(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_19B04.f_932.f_21B.f_10C8) && Global_19B04.f_2360.f_63.f_3A[131])
		{
			Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xF243B7A14FCFD0F4(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, 0);
				unk_0xA73D1278857991A2(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4C59702AC1076A88(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_7, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar3 + 1, !Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_241(&uVar1, &iVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, iVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_54, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_55, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_56);
				unk_0xE82050D41B744FF3(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_58);
				unk_0x84A3F4F29630A320(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_57);
				unk_0x13CA55A989DEB72C(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5D, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5E, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_237(iParam0, &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_235(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
				}
				func_234(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xF243B7A14FCFD0F4(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, 0);
				unk_0xA73D1278857991A2(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4C59702AC1076A88(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_7, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar4 + 1, !Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_241(&uVar1, &iVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, iVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_54, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_55, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_56);
				unk_0xE82050D41B744FF3(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_58);
				unk_0x84A3F4F29630A320(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_57);
				unk_0x13CA55A989DEB72C(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5D, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5E, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_237(iParam0, &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_235(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
				}
				func_234(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xF243B7A14FCFD0F4(Var2);
			if (unk_0xD6513D668481290A(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0x61C05BF08A1E0EFE(Var2, vParam2, fParam3, true, true, false);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, 0);
				unk_0xA73D1278857991A2(*iParam0, true);
				StringCopy(&cVar6, unk_0x2232934AD664DD49(*iParam0), 16);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x4C59702AC1076A88(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Var2.f_18);
				}
				if (func_241(&uVar1, &iVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, iVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0 && Var2.f_1A < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Var2.f_1A);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Var2.f_54, Var2.f_55, Var2.f_56);
				unk_0xE82050D41B744FF3(*iParam0, Var2.f_58);
				unk_0x84A3F4F29630A320(*iParam0, Var2.f_57);
				unk_0x13CA55A989DEB72C(*iParam0, Var2.f_5D, Var2.f_5E, Var2.f_5F);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Var2.f_5C, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Var2.f_5C, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Var2.f_5C, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Var2.f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Var2.f_59 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Var2.f_59);
				}
				if (Var2.f_5A > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Var2.f_5A == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Var2.f_5A);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Var2.f_5A);
						}
					}
				}
				func_237(iParam0, &(Var2.f_1F), &(Var2.f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 1)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bagger") && !Global_19B04.f_2360.f_63.f_3A[118])
					{
						unk_0xEA0AB6C644C58C1D(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_235(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_19B04.f_932.f_21B.f_10C8) && Global_19B04.f_2360.f_63.f_3A[131]) && unk_0x6F79ECA8C83E4357(*iParam0) == joaat("tailgater"))
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, 6, 1, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 14, 7, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 11, 2, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 2, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 7, 5, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 0, 0, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 3, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 13, 1, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 4, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 12, 2, false);
					unk_0xB25E25030D61B529(*iParam0, 22, true);
					unk_0xD2F70373DBF15801(*iParam0, 2);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 23, 11, false);
					unk_0x84A3F4F29630A320(*iParam0, 2);
					Global_19B04.f_932.f_21B.f_10C8 = 1;
					func_206(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Var2);
				}
				if (bVar5)
				{
					func_234(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xC80A
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_167(iParam0) && unk_0x724D816EA203A79E(*iParam1)) && unk_0xE59B7F5A03335350(*iParam1, 0))
	{
		if (iParam2 > Global_19B04.f_932.f_21B.f_953)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_135(*iParam1, iParam0);
		}
		if (unk_0xA6BE0954FC6BAA16(*iParam1) != 0)
		{
			unk_0x1345B3BF11EDB0CF(*iParam1, 0);
		}
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/] = unk_0x6F79ECA8C83E4357(*iParam1);
		if (unk_0xA6705B5DA0B723DE(*iParam1, &iVar1))
		{
			Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x6F79ECA8C83E4357(iVar1);
		}
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x49C9CB91F370BC53(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8D66276473ABD7CC(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[0] = unk_0xFC8A228C62614C5C(*iParam1, 1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[1] = unk_0xFC8A228C62614C5C(*iParam1, 2);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[2] = unk_0xFC8A228C62614C5C(*iParam1, 3);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[3] = unk_0xFC8A228C62614C5C(*iParam1, 4);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[4] = unk_0xFC8A228C62614C5C(*iParam1, 5);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[5] = unk_0xFC8A228C62614C5C(*iParam1, 6);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[6] = unk_0xFC8A228C62614C5C(*iParam1, 7);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[7] = unk_0xFC8A228C62614C5C(*iParam1, 8);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[8] = unk_0xFC8A228C62614C5C(*iParam1, 9);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[9] = unk_0xFC8A228C62614C5C(*iParam1, 10);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[10] = unk_0xFC8A228C62614C5C(*iParam1, 11);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[11] = unk_0xFC8A228C62614C5C(*iParam1, 12);
		if (unk_0x6DB86B1ADD81CED4(*iParam1, 0))
		{
			iVar2 = unk_0xAA1A0B747CDFC807(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 1;
			}
			else
			{
				Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
			}
		}
		else
		{
			Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
		}
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_19 = unk_0x93DD0CE3F3963C56();
		StringCopy(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B), unk_0x2232934AD664DD49(*iParam1), 16);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A = unk_0x89FC8F09D6647DEC(*iParam1);
		unk_0x87F182D2DA225F0D(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x375E42DA279E7FED(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x5F73107BDF663316(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56));
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58 = unk_0xB830044A99FABAAF(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57 = unk_0x2629793241883F74(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_59 = unk_0x0FF608FD384AF8FA(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A = unk_0xC2587DF549B15BB6(*iParam1);
		unk_0x2774857472EBCE0F(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5D), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5E), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5F));
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 2))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 3))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 0))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 1))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		Global_19B04.f_932.f_21B.f_10C9[iParam0] = 10;
		if (unk_0x1092AA16A9506AA1(*iParam1) >= 0 && func_210(*iParam1, 0, &uVar0))
		{
			func_177(iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_51));
			if (bParam3)
			{
				Global_19B04.f_4E79[iParam0 /*43*/].f_28 = 1;
				Global_19B04.f_4E79[iParam0 /*43*/] = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/];
				Global_19B04.f_4E79[iParam0 /*43*/].f_3 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57;
				Global_19B04.f_4E79[iParam0 /*43*/].f_4 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54;
				Global_19B04.f_4E79[iParam0 /*43*/].f_5 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55;
				Global_19B04.f_4E79[iParam0 /*43*/].f_6 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56;
				Global_19B04.f_4E79[iParam0 /*43*/].f_A = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A;
				Global_19B04.f_4E79[iParam0 /*43*/].f_10 = !Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58;
				Global_19B04.f_4E79[iParam0 /*43*/].f_13 = { Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B };
				Global_19B04.f_4E79[iParam0 /*43*/].f_17 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A;
				Global_19B04.f_4E79[iParam0 /*43*/].f_7 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[11];
				Global_19B04.f_4E79[iParam0 /*43*/].f_8 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[12];
				Global_19B04.f_4E79[iParam0 /*43*/].f_9 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[23];
				Global_19B04.f_4E79[iParam0 /*43*/].f_B = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[4];
				Global_19B04.f_4E79[iParam0 /*43*/].f_C = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[15];
				Global_19B04.f_4E79[iParam0 /*43*/].f_D = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[16];
				Global_19B04.f_4E79[iParam0 /*43*/].f_E = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[14];
				Global_19B04.f_4E79[iParam0 /*43*/].f_F = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[22];
				Global_19B04.f_4E79[iParam0 /*43*/].f_12 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[20];
				Global_19B04.f_4E79[iParam0 /*43*/].f_11 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[18];
				Global_19B04.f_4E79[iParam0 /*43*/].f_18 = unk_0x34374BDFA570F489(*iParam1, 11) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_19 = unk_0x34374BDFA570F489(*iParam1, 12) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1A = unk_0x34374BDFA570F489(*iParam1, 4) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1B = unk_0x34374BDFA570F489(*iParam1, 23) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1C = unk_0x34374BDFA570F489(*iParam1, 14) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1D = unk_0x34374BDFA570F489(*iParam1, 16) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1E = unk_0x34374BDFA570F489(*iParam1, 15) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_20 = unk_0xE0ED9CF8FA3974E1(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[0] = unk_0xC28362974F1C5F02(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[1] = unk_0x9CC28989969C6738(*iParam1, 14, 0);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[2] = unk_0x9CC28989969C6738(*iParam1, 14, 1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[3] = unk_0x9CC28989969C6738(*iParam1, 14, 2);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[4] = unk_0x9CC28989969C6738(*iParam1, 14, 3);
				Global_19B04.f_4E79[iParam0 /*43*/].f_27 = unk_0x9F1E01FDF55720DC(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_1F = func_209(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[0] = unk_0x46223EA23DD520FE(*iParam1);
				unk_0x2FE0800842DB5EF4(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_207(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_19B04.f_4E79[iParam0 /*43*/].f_1));
				unk_0x033614E4CFF449DB(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_207(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_19B04.f_4E79[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_207(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0xD41E
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_208(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_208(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xD491
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_209(int iParam0)//Position - 0xE983
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0x1092AA16A9506AA1(iParam0) >= 0)
	{
		if (unk_0x9F1E01FDF55720DC(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 0)
		{
			if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_210(int iParam0, bool bParam1, var uParam2)//Position - 0xEA33
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	if ((!func_232(iVar0, bParam1, uParam2) && !func_231(unk_0xB5CEFD608600A09F())) && !func_216(iParam0))
	{
		return 0;
	}
	if (func_231(unk_0xB5CEFD608600A09F()))
	{
		if (func_215(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_214(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iVar0) || unk_0xA19D269B4B5A1532(iVar0)))
	{
		bVar1 = true;
	}
	if (((((((unk_0x10A01B0B02B273EF(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != -32236122) && unk_0x6F79ECA8C83E4357(iParam0) != 177270108) && unk_0x6F79ECA8C83E4357(iParam0) != 387748548) && unk_0x6F79ECA8C83E4357(iParam0) != 1502869817) && unk_0x6F79ECA8C83E4357(iParam0) != -1881846085) && !bVar1) && !(func_213(unk_0x6F79ECA8C83E4357(iParam0)) && func_211(unk_0xB5CEFD608600A09F())))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if ((func_148(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("sentinel2")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_211(int iParam0)//Position - 0xEBB0
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_212(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xEBF7
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

int func_213(int iParam0)//Position - 0xEF43
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xEF85
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_212(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xEFCB
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xF000
{
	if (func_230(unk_0xB5CEFD608600A09F()) || func_229(unk_0xB5CEFD608600A09F()))
	{
		if (func_217(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0)//Position - 0xF02F
{
	if ((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (func_220(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "Player_Vehicle"))
	{
		if (unk_0x67CFC62D543B19EF(iParam0, "Player_Vehicle") == unk_0x6985F05381EF147F(unk_0xB5CEFD608600A09F()))
		{
			if (func_218(iParam0))
			{
				return 1;
			}
			switch (unk_0x6F79ECA8C83E4357(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xF0E6
{
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_219(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xF11C
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_220(int iParam0, bool bParam1)//Position - 0xF175
{
	switch (unk_0x6F79ECA8C83E4357(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_222(unk_0x6F79ECA8C83E4357(iParam0), 0))
			{
				if (Global_267214.f_122 == iParam0)
				{
					return 1;
				}
				else if (func_221(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_221(int iParam0)//Position - 0xF1D0
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_252E21.f_26F[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_222(int iParam0, int iParam1)//Position - 0xF20A
{
	if (iParam1 == 0)
	{
		if (func_228(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_227();
			break;
		
		case joaat("sabregt"):
			if (Global_40001.f_351A)
			{
				return func_226();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_40001.f_351B)
			{
				return func_226();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_40001.f_3519)
			{
				return func_226();
			}
			break;
		
		case joaat("minivan"):
			if (Global_40001.f_351C)
			{
				return func_226();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_40001.f_351E)
			{
				return func_226();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_225();
			break;
		
		case joaat("comet2"):
			if (Global_40001.f_4677)
			{
				return func_224();
			}
			break;
		
		case joaat("diablous"):
			if (Global_40001.f_4679)
			{
				return func_224();
			}
			break;
		
		case joaat("fcr"):
			if (Global_40001.f_467D)
			{
				return func_224();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_40001.f_467A)
			{
				return func_224();
			}
			break;
		
		case joaat("nero"):
			if (Global_40001.f_4681)
			{
				return func_224();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_40001.f_467F)
			{
				return func_224();
			}
			break;
		
		case joaat("specter"):
			if (Global_40001.f_4684)
			{
				return func_224();
			}
			break;
		
		case joaat("technical"):
			if (Global_40001.f_4E1B)
			{
				return func_223();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_40001.f_4E1C)
			{
				return func_223();
			}
			break;
	}
	return 0;
}

bool func_223()//Position - 0xF3EA
{
	return unk_0x7B2F21BFE86AEB61(2067165443);
}

bool func_224()//Position - 0xF3FB
{
	return unk_0x7B2F21BFE86AEB61(-957277403);
}

bool func_225()//Position - 0xF40C
{
	return unk_0x7B2F21BFE86AEB61(210122941);
}

bool func_226()//Position - 0xF41D
{
	return unk_0x7B2F21BFE86AEB61(-1894522408);
}

bool func_227()//Position - 0xF42E
{
	return unk_0x7B2F21BFE86AEB61(1630677557);
}

int func_228(int iParam0, int iParam1)//Position - 0xF43F
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

int func_229(int iParam0)//Position - 0xF6B2
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_110())
			{
				return func_212(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_230(int iParam0)//Position - 0xF711
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_110())
			{
				return func_212(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_231(int iParam0)//Position - 0xF771
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_212(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_232(int iParam0, bool bParam1, var uParam2)//Position - 0xF7B8
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_214(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iParam0) || unk_0xA19D269B4B5A1532(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x7C28D15641461C68(iParam0) && !unk_0x7512ED01F3F46714(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_233(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_233(int iParam0)//Position - 0xFBD0
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_234(int iParam0, int iParam1)//Position - 0xFBF9
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

void func_235(int iParam0)//Position - 0xFC7B
{
	if (!func_236(*iParam0))
	{
		unk_0xE54F7105CEA81918(*iParam0, 5, !Global_19B04.f_2360.f_63.f_3A[119]);
	}
}

bool func_236(int iParam0)//Position - 0xFCA6
{
	return unk_0xFC8A228C62614C5C(iParam0, 5);
}

int func_237(int iParam0, var uParam1, var uParam2)//Position - 0xFCB5
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
	if (func_228(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_240(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_240(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_239(iParam0);
	if (func_238(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, true);
		unk_0xA73D1278857991A2(*iParam0, true);
	}
	return 1;
}

int func_238(int iParam0)//Position - 0xFE33
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

void func_239(var uParam0)//Position - 0xFF0F
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

int func_240(int iParam0, int iParam1)//Position - 0xFF4F
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

int func_241(var uParam0, int iParam1)//Position - 0x10037
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else if (Global_19B04.f_4E79.f_105)
	{
		*uParam0 = { Global_19B04.f_4E79.f_10B };
		*iParam1 = Global_19B04.f_4E79.f_10F;
		return 1;
	}
	return 0;
}

void func_242(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x10078
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_246(iParam0))
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_176(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_176(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_176(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_176(iVar1 + 1));
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
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_245(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_244())
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
		if (uParam1->f_41 == -1 && !func_178(uParam1->f_42))
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
						func_243(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_243(iParam0, uParam1->f_45);
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
			func_237(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_176(iVar2 + 1)))
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

void func_243(int iParam0, int iParam1)//Position - 0x105C8
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

bool func_244()//Position - 0x1062D
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_245(int iParam0)//Position - 0x1063E
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

int func_246(int iParam0)//Position - 0x10689
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_252(unk_0xB5CEFD608600A09F(), -1))
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
	if (func_248(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_247(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x10710
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

int func_248(int iParam0)//Position - 0x1073F
{
	if (func_251(iParam0) == 233)
	{
		return func_249(iParam0);
	}
	return -1;
}

int func_249(int iParam0)//Position - 0x1075C
{
	if (func_250(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_250(int iParam0, int iParam1)//Position - 0x1077F
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x107BA
{
	if (func_250(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_252(int iParam0, int iParam1)//Position - 0x107DD
{
	int iVar0;
	
	if (func_109(iParam0, 1, 1))
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

int func_253(int iParam0, var uParam1)//Position - 0x1082A
{
	struct<82> Var0;
	
	if (!func_167(iParam0))
	{
		return 0;
	}
	if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam0 /*98*/] == uParam1->f_42 && unk_0x56BEECB328B6D29D(&(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam0 /*98*/].f_1B)) == unk_0x56BEECB328B6D29D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam0 /*98*/] == uParam1->f_42 && unk_0x56BEECB328B6D29D(&(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam0 /*98*/].f_1B)) == unk_0x56BEECB328B6D29D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_B = 12;
	Var0.f_1F = 49;
	Var0.f_51 = 2;
	func_166(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_42 && unk_0x56BEECB328B6D29D(&(Var0.f_1B)) == unk_0x56BEECB328B6D29D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_166(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_42 && unk_0x56BEECB328B6D29D(&(Var0.f_1B)) == unk_0x56BEECB328B6D29D(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_254()//Position - 0x10984
{
	return func_255(&(Global_17646.f_B3B));
}

int func_255(var uParam0)//Position - 0x10997
{
	if (uParam0->f_C.f_42 == 0)
	{
		return 0;
	}
	if (!func_138(uParam0->f_C.f_42, 0))
	{
		return 0;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_52(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_256()//Position - 0x109F6
{
	return func_255(&(Global_181DF.f_B3B));
}

int func_257(bool bParam0)//Position - 0x10A09
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	func_265(&uLocal_94, &Global_15F6A);
	func_266(&uLocal_94, joaat("s_m_m_armoured_01"));
	func_266(&uLocal_94, iLocal_84);
	func_266(&uLocal_94, iLocal_85);
	if ((unk_0xD6513D668481290A(joaat("s_m_m_armoured_01")) && unk_0xD6513D668481290A(iLocal_84)) && unk_0xD6513D668481290A(iLocal_85))
	{
		if (bParam0)
		{
			if (!unk_0x724D816EA203A79E(Local_1295))
			{
				if (unk_0x724D816EA203A79E(Global_15DFD[0]))
				{
					unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
					Local_1295 = Global_15DFD[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0x724D816EA203A79E(vLocal_1285.x))
			{
				if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
				{
					unk_0x77815D3407C6700D(Global_15DFD.f_9[0], true, 1);
					vLocal_1285.x = Global_15DFD.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_266(&uLocal_94, iLocal_83);
			if (unk_0xD6513D668481290A(iLocal_83) && unk_0x1E8349F219AC5AF9(&Global_15F6A))
			{
				if (unk_0x3362CDE8460ED38B(&Global_15F6A, "jhp2a_main"))
				{
					unk_0x393B6E06ED8B1152(&Global_15F6A, 23, &vVar1);
					unk_0xEDAD35A0D81ED3FB(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = unk_0x61C05BF08A1E0EFE(iLocal_83, vVar1, 119.4988f, true, true, false);
					vLocal_1285.x = unk_0xFD8987C090669BD5(Local_1295, 26, iLocal_82, -1, 1, true);
					unk_0xF0A40F19AAB79E88(Local_1295, 1084227584);
					unk_0xEB469C5B92ADC7B0(vLocal_1285.x, Local_1295, &Global_15F6A, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0x393B6E06ED8B1152(&Global_15F6A, 29, &vVar1);
					unk_0xEDAD35A0D81ED3FB(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = unk_0x61C05BF08A1E0EFE(iLocal_83, vVar1, 134.0011f, true, true, false);
					vLocal_1285.x = unk_0xFD8987C090669BD5(Local_1295, 26, iLocal_82, -1, 1, true);
					unk_0xF0A40F19AAB79E88(Local_1295, 1084227584);
					unk_0xEB469C5B92ADC7B0(vLocal_1285.x, Local_1295, &Global_15F6A, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0x724D816EA203A79E(Local_1295))
		{
			func_263(Local_1295, 0);
			if (unk_0xE59B7F5A03335350(Local_1295, 0))
			{
				unk_0xA73D1278857991A2(Local_1295, true);
				unk_0xB71D41C0310C93DE(Local_1295, true, 1);
				unk_0x7387EA04915F201E(Local_1295, true);
				unk_0x6FA721E3E050370C(Local_1295, 1);
			}
		}
		if (unk_0x724D816EA203A79E(vLocal_1285.x))
		{
			if (!unk_0x36CEFBE9B745A58D(vLocal_1285.x))
			{
				unk_0x2E35C4FA5F0ED22F(vLocal_1285.x, true);
				unk_0x4106FAF8AA1D69D5(vLocal_1285.x, iLocal_1284);
				unk_0xFC3C88E2313FA926(vLocal_1285.x, 5);
				unk_0xB105531EDD3DE51B(vLocal_1285.x, false);
				unk_0x91629AC1E1F78419(vLocal_1285.x, 1, false);
				unk_0x7A535CE1F001F3FE(vLocal_1285.x, joaat("weapon_pistol"), 15, false, true);
				func_262(&uLocal_1105, 3, vLocal_1285.x, "JHP2A_Driver", 0, 1);
				func_261(&(Local_1079[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0x724D816EA203A79E(Local_1295) && unk_0x724D816EA203A79E(vLocal_1285.x))
		{
			func_260();
			func_261(&(Local_1079[1 /*8*/]), 0, 0, 1);
			func_258(&uLocal_94, joaat("boxville3"));
			func_258(&uLocal_94, joaat("s_m_m_armoured_01"));
			func_258(&uLocal_94, iLocal_84);
			func_258(&uLocal_94, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_258(var uParam0, int iParam1)//Position - 0x10D00
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
					func_259(uParam0[iVar0 /*5*/]);
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

void func_259(var uParam0)//Position - 0x10D65
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_260()//Position - 0x10D80
{
	vector3 vVar0;
	
	if (unk_0x724D816EA203A79E(Local_1295))
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_1295, 0) && !unk_0x724D816EA203A79E(iLocal_1299))
		{
			iLocal_1299 = unk_0xB6896943DA475493(iLocal_85, unk_0x541C2AEF053615BC(Local_1295, true), true, true, false);
			unk_0x2FBD8BF42E7AF9CC(iLocal_1299, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0xB2B9C9EBD478732C(iLocal_1299, Local_1295, -1, -1, unk_0x1483995DFFF0DEEA(Local_1295, unk_0x3EA3A28A85F8C32F(Local_1295, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0xDC078F87049ECECE(iLocal_1299, false, 0);
		}
		if (!unk_0x724D816EA203A79E(Local_1298[0 /*2*/]))
		{
			if (unk_0x1D403DFADBC2DE3C(Local_1295, 0))
			{
				vVar0 = { unk_0xA4455714F3DCE207(Local_1295, unk_0x55AEFCD285ECC0F2(-2.5f, 2.5f), -5f, 0f) };
				unk_0x2084D4C6C2DF616F(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[0 /*2*/] = unk_0xB6896943DA475493(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[0 /*2*/] = unk_0xB6896943DA475493(iLocal_84, unk_0x541C2AEF053615BC(Local_1295, true), true, true, false);
				unk_0x2FBD8BF42E7AF9CC(Local_1298[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x5DBE04849460E608(Local_1298[0 /*2*/], Local_1295, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x656194E145691D3E(Local_1298[0 /*2*/], true);
			}
		}
		if (!unk_0x724D816EA203A79E(Local_1298[1 /*2*/]))
		{
			if (unk_0x1D403DFADBC2DE3C(Local_1295, 0))
			{
				vVar0 = { unk_0xA4455714F3DCE207(Local_1295, unk_0x55AEFCD285ECC0F2(-2.5f, 2.5f), -5f, 0f) };
				unk_0x2084D4C6C2DF616F(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[1 /*2*/] = unk_0xB6896943DA475493(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[1 /*2*/] = unk_0xB6896943DA475493(iLocal_84, unk_0x541C2AEF053615BC(Local_1295, true), true, true, false);
				unk_0x2FBD8BF42E7AF9CC(Local_1298[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x5DBE04849460E608(Local_1298[1 /*2*/], Local_1295, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x656194E145691D3E(Local_1298[1 /*2*/], true);
			}
		}
		if (!unk_0x724D816EA203A79E(Local_1298[2 /*2*/]))
		{
			if (unk_0x1D403DFADBC2DE3C(Local_1295, 0))
			{
				vVar0 = { unk_0xA4455714F3DCE207(Local_1295, unk_0x55AEFCD285ECC0F2(-2.5f, 2.5f), -5f, 0f) };
				unk_0x2084D4C6C2DF616F(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[2 /*2*/] = unk_0xB6896943DA475493(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[2 /*2*/] = unk_0xB6896943DA475493(iLocal_84, unk_0x541C2AEF053615BC(Local_1295, true), true, true, false);
				unk_0x2FBD8BF42E7AF9CC(Local_1298[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x5DBE04849460E608(Local_1298[2 /*2*/], Local_1295, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x656194E145691D3E(Local_1298[2 /*2*/], true);
			}
		}
	}
}

int func_261(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1105B
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x105601648511CC64();
		uParam0->f_5 = unk_0x105601648511CC64();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_262(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x110DB
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

void func_263(int iParam0, int iParam1)//Position - 0x11176
{
	Global_16B1B.f_16[iParam1] = iParam0;
}

int func_264(var uParam0)//Position - 0x1118A
{
	if (func_272(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, char* sParam1)//Position - 0x111A3
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

int func_266(var uParam0, int iParam1)//Position - 0x1126A
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

void func_267(var uParam0)//Position - 0x11313
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

int func_268(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x1156B
{
	if (func_269(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_364)
	{
		if (func_120(uParam0->f_364.f_4, vParam1, 0) && uParam0->f_364.f_A == fParam2)
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

int func_269(vector3 vParam0)//Position - 0x11623
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_270(int iParam0, var uParam1, var uParam2)//Position - 0x1164D
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_271()//Position - 0x116A4
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

int func_272(var uParam0)//Position - 0x116B8
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
						func_259(uParam0[iVar1 /*5*/]);
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
						func_259(&(uParam0->f_111[iVar1 /*5*/]));
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
						func_259(&(uParam0->f_176[iVar1 /*5*/]));
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
						func_259(&(uParam0->f_290[iVar1 /*6*/]));
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
						func_259(&(uParam0->f_1DB[iVar1 /*6*/]));
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
						func_259(&(uParam0->f_CA[iVar1 /*7*/]));
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
						func_259(&(uParam0->f_97[iVar1 /*5*/]));
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
						func_259(&(uParam0->f_2E1[iVar1 /*5*/]));
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
						func_259(&(uParam0->f_2FB[iVar1 /*5*/]));
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
								func_259(&(uParam0->f_2AF[iVar1 /*7*/]));
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
							func_259(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_259(&(uParam0->f_2AF[iVar1 /*7*/]));
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
						func_259(&(uParam0->f_36F[iVar1 /*5*/]));
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
						func_259(&(uParam0->f_3A2[iVar1 /*5*/]));
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
						func_259(&(uParam0->f_30B[iVar1 /*5*/]));
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
					func_259(&(uParam0->f_35C));
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
					func_259(&(uParam0->f_360));
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
						func_273(uParam0);
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
				func_259(&(uParam0->f_364));
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
						func_259(&(uParam0->f_3BC[iVar1 /*5*/]));
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

void func_273(var uParam0)//Position - 0x12088
{
	if (unk_0x719413B40BB63D86())
	{
		unk_0x13D5880CBA449AA9();
		func_259(&(uParam0->f_364));
	}
}

void func_274()//Position - 0x120A4
{
	if (bLocal_93 && (func_275() || unk_0x17FAADF9916EF741()))
	{
		func_8(1);
		unk_0x95E4B6F3ED223F5A();
	}
}

int func_275()//Position - 0x120CD
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

void func_276()//Position - 0x120FA
{
	vector3 vVar0;
	var uVar1;
	
	func_283();
	unk_0xB2CB6EAA6B280A84("SECDRIVER", &iLocal_1284);
	unk_0xA902E18EDF6FA0C8(1, iLocal_1284, -1533126372);
	unk_0xA902E18EDF6FA0C8(1, iLocal_1284, -183807561);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_1284);
	if (func_6(0) || func_203())
	{
		iLocal_92 = 0;
		if (func_203())
		{
			if (Global_154ED)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_15F6A, "jhp2a_alt", 64);
		if (func_203())
		{
			func_270(iLocal_92, &vVar0, &uVar1);
			func_282(vVar0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_257(1))
		{
			SYSTEM::WAIT(0);
			func_281(&uLocal_94);
		}
	}
	func_280(&uLocal_94, "JHP2A", 0);
	unk_0xDF53A66AEE1401AA(0.1f);
	unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
	func_278(88);
	func_262(&uLocal_1105, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	func_262(&uLocal_1105, 3, 0, "Lester", 0, 1);
	unk_0x8510BC031C24B862(joaat("boxville3"), true);
	unk_0x23180B0A9E8D2951(joaat("s_m_m_armoured_01"), true);
	if (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"), 0))
	{
		unk_0x133D1B11D62F99C0(unk_0xBC25C936A095B5BA(), joaat("weapon_briefcase"));
	}
	func_277();
	if (unk_0xF1734B55490E9045(&Global_15F6A))
	{
	}
	iLocal_1300 = unk_0x1DAA351326EA3537(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0xFA9040D29FE330BD(0))
	{
		SYSTEM::WAIT(0);
	}
	Global_10B26 = 1;
}

void func_277()//Position - 0x1226E
{
	Global_154EE = 1;
}

void func_278(int iParam0)//Position - 0x1227B
{
	Global_15B7B = 0;
	switch (iParam0)
	{
		case 72:
			func_279(2);
			func_279(4);
			break;
		
		case 73:
			func_279(0);
			func_279(1);
			func_279(7);
			break;
		
		case 92:
			func_279(10);
			func_279(9);
			func_279(13);
			func_279(6);
			break;
		
		case 68:
			func_279(11);
			break;
		
		case 78:
			func_279(14);
			break;
		
		case 79:
			func_279(3);
			break;
		
		default:
			break;
	}
}

void func_279(int iParam0)//Position - 0x12309
{
	unk_0xF0059F27F7BB6680(&Global_15B7B, iParam0);
}

int func_280(var uParam0, char* sParam1, int iParam2)//Position - 0x1231B
{
	if (uParam0->f_30B[iParam2 /*5*/].f_1 || uParam0->f_30B[iParam2 /*5*/])
	{
		if (unk_0x3362CDE8460ED38B(uParam0->f_30B[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_30B[iParam2 /*5*/].f_2 = 0;
			uParam0->f_3D6 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0xBF8DAF77B7A8FB64(sParam1, iParam2);
		}
		else
		{
			unk_0x900CF084251DED26(sParam1, iParam2);
		}
		uParam0->f_30B[iParam2 /*5*/] = 1;
		uParam0->f_30B[iParam2 /*5*/].f_3 = unk_0x105601648511CC64();
		uParam0->f_30B[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

void func_281(var uParam0)//Position - 0x123BF
{
	func_272(uParam0);
}

void func_282(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x123CE
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

void func_283()//Position - 0x12463
{
	func_291(&(Local_1079[0 /*8*/]), 76250/*func_292*/, "Van Driver Manager");
	func_291(&(Local_1079[1 /*8*/]), 74897/*func_284*/, "Cargo Manager");
}

void func_284(var uParam0)//Position - 0x12491
{
	if (!func_129(uParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(Local_1295, 0))
		{
			func_289(Local_1298[0 /*2*/], 1);
			func_289(Local_1298[1 /*2*/], 1);
			func_289(Local_1298[2 /*2*/], 1);
			iLocal_1314 = 1;
			func_288(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_287(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0x284F2ACE6839D3C0("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, -1))
					{
						if ((unk_0x105601648511CC64() - iLocal_1306) > 150)
						{
							if (unk_0xD9C1758D86688CEA(iLocal_1299, unk_0xBC25C936A095B5BA(), 0))
							{
								if ((((unk_0x3D3F3014B0F74446(iLocal_1299, joaat("weapon_molotov"), 0) || unk_0x3D3F3014B0F74446(iLocal_1299, joaat("weapon_bzgas"), 0)) || unk_0x3D3F3014B0F74446(iLocal_1299, joaat("weapon_knife"), 0)) || unk_0x3D3F3014B0F74446(iLocal_1299, joaat("weapon_unarmed"), 0)) || unk_0x3D3F3014B0F74446(iLocal_1299, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0xE452BE0597443B80(iLocal_1299);
								}
								else
								{
									unk_0x5502708AECB47F5D(iLocal_1299);
									iLocal_1306 = unk_0x105601648511CC64();
									iLocal_1305++;
									if (iLocal_1305 >= 3)
									{
										unk_0xF2C27FE5A8B98CB5(-1, "Lock_Destroyed", iLocal_1299, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										unk_0xF2C27FE5A8B98CB5(-1, "Lock_Damage", iLocal_1299, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							unk_0x5502708AECB47F5D(iLocal_1299);
						}
					}
					if (((((iLocal_1305 >= 3 || unk_0x1D403DFADBC2DE3C(iLocal_1299, 0)) || unk_0xA499BE1E93004FF2(Local_1295, 2)) || unk_0xA499BE1E93004FF2(Local_1295, 3)) || unk_0x9BA320A867CC80B3(Local_1295, 2) > 0f) || unk_0x9BA320A867CC80B3(Local_1295, 3) > 0f)
					{
						if (unk_0x724D816EA203A79E(iLocal_1299))
						{
							unk_0xA35241BCE4C1A24B(&iLocal_1299);
						}
						if (!unk_0xA499BE1E93004FF2(Local_1295, 2))
						{
							unk_0x1C5BDB4E5D257D63(Local_1295, 2, 0, 0);
						}
						if (!unk_0xA499BE1E93004FF2(Local_1295, 3))
						{
							unk_0x1C5BDB4E5D257D63(Local_1295, 3, 0, 0);
						}
						iLocal_1315 = 0;
						iLocal_1316 = 0;
						func_289(Local_1298[0 /*2*/], 0);
						func_289(Local_1298[1 /*2*/], 0);
						func_289(Local_1298[2 /*2*/], 0);
						func_286(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_285(Local_1295))
					{
						if (unk_0x357058E632979E65(unk_0x9BA320A867CC80B3(Local_1295, 2)) > 0.5f && unk_0x357058E632979E65(unk_0x9BA320A867CC80B3(Local_1295, 3)) > 0.5f)
						{
							func_286(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_285(Local_1295))
					{
						if (!unk_0xA499BE1E93004FF2(Local_1295, 2))
						{
							if (unk_0x5D4A2D469411FA21(Local_1295, 2))
							{
								unk_0x1C5BDB4E5D257D63(Local_1295, 2, 1, 0);
								unk_0x4AAC154DDE9D031F(Local_1295, 2, 0, 0, 1);
								iLocal_1315 = 1;
							}
						}
						else
						{
							iLocal_1315 = 1;
						}
						if (!unk_0xA499BE1E93004FF2(Local_1295, 3))
						{
							if (unk_0x5D4A2D469411FA21(Local_1295, 3))
							{
								unk_0x1C5BDB4E5D257D63(Local_1295, 3, 1, 0);
								unk_0x4AAC154DDE9D031F(Local_1295, 3, 0, 0, 1);
								iLocal_1316 = 1;
							}
						}
						else
						{
							iLocal_1316 = 1;
						}
						if (iLocal_1315 && iLocal_1316)
						{
							iLocal_1314 = 1;
							func_286(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_129(uParam0))
	{
	}
}

int func_285(int iParam0)//Position - 0x12781
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

void func_286(var uParam0, int iParam1, int iParam2)//Position - 0x127A2
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x105601648511CC64();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_287(var uParam0, char* sParam1)//Position - 0x127C8
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

void func_288(var uParam0)//Position - 0x12892
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x105601648511CC64();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_289(int iParam0, bool bParam1)//Position - 0x128B7
{
	vector3 vVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE7E55F7532DEE345(iParam0))
		{
			unk_0x17175087F2DB6AC8(iParam0, 1, bParam1);
			unk_0xD434A01DEA38A939(iParam0, true, 0);
			unk_0x46913653D1C7E82E(iParam0);
		}
		if (bParam1)
		{
			vVar0 = { func_290(unk_0x541C2AEF053615BC(iParam0, true) - unk_0xA4455714F3DCE207(Local_1295, unk_0x55AEFCD285ECC0F2(-0.15f, 0.15f), IntToFloat(-unk_0x491B2241281A03B7(3, 6)), unk_0x55AEFCD285ECC0F2(-0.1f, 0.1f))) };
			unk_0x31C1FC8FA0753412(iParam0, 1, vVar0 * FtoV(unk_0x55AEFCD285ECC0F2(0.25f, 0.5f)), 0, 1, 1, 0);
			unk_0x31C1FC8FA0753412(iParam0, 5, IntToFloat(unk_0x491B2241281A03B7(0, 10)), IntToFloat(unk_0x491B2241281A03B7(0, 10)), IntToFloat(unk_0x491B2241281A03B7(0, 10)), 0, 1, 1, 0);
			unk_0x22F5005A525A1855(iParam0, Local_1295, true);
		}
	}
}

Vector3 func_290(vector3 vParam0)//Position - 0x12974
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

int func_291(var uParam0, int iParam1, char* sParam2)//Position - 0x129B3
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_292(var uParam0)//Position - 0x129DA
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	float fVar4;
	
	if (!func_129(uParam0))
	{
		if (((!unk_0x724D816EA203A79E(vLocal_1285.x) || unk_0x36CEFBE9B745A58D(vLocal_1285.x)) || (unk_0x724D816EA203A79E(Local_1295) && func_195(Local_1295, vLocal_1285.x, 1) > 200f)) || (!unk_0x5237AF95232D78C5(vLocal_1285.x, 0) && func_195(Local_1295, vLocal_1285.x, 1) > 200f))
		{
			if (unk_0x724D816EA203A79E(Local_1295) && unk_0xE59B7F5A03335350(Local_1295, 0))
			{
				unk_0x6FA721E3E050370C(Local_1295, 0);
			}
			unk_0x02537C8C1BEEB477(&vLocal_1285);
			func_288(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0x724D816EA203A79E(Local_1295) || !unk_0xE59B7F5A03335350(Local_1295, 0)) || !unk_0x62F3A07C43FFB568(vLocal_1285.x, Local_1295, 0)))
			{
				iLocal_1307 = 0;
				iLocal_1308 = 0;
				StringCopy(&cLocal_1309, "", 24);
				func_286(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xE921F8171F0733B3(iVar0, Local_1295))
					{
						if ((!iLocal_1302 && (unk_0x105601648511CC64() - iLocal_1304) > 500) && fLocal_1303 >= 4f)
						{
							iLocal_1302 = 1;
							iLocal_1301++;
						}
					}
					else if (iLocal_1302)
					{
						iLocal_1304 = unk_0x105601648511CC64();
						iLocal_1302 = 0;
					}
					vVar1 = { func_290(unk_0x541C2AEF053615BC(iVar0, true) - unk_0x541C2AEF053615BC(Local_1295, true)) };
					vVar2 = { unk_0xB5D9AE572C19509E(Local_1295) - unk_0xB5D9AE572C19509E(iVar0) };
					fLocal_1303 = func_296(vVar2, vVar1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0xD9C1758D86688CEA(Local_1295, unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(vLocal_1285.x, unk_0xBC25C936A095B5BA(), 1)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 122)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 123)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 124)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 29)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 116)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 121)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 22)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 24)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 46)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 61)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 61)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 136)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 86)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 87)) || unk_0xA4813477CC5DD00F(vLocal_1285.x)) || unk_0x7544D2465B934445(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_286(uParam0, 4, 0);
					}
					else
					{
						if (unk_0x724D816EA203A79E(Local_1295) && unk_0xE59B7F5A03335350(Local_1295, 0))
						{
							if ((unk_0xAF1DD0A735416F90(unk_0xBC25C936A095B5BA()) || fLocal_1303 > 0.5f) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(Local_1295, 0f, 2f, -0.5f), unk_0xA4455714F3DCE207(Local_1295, 0f, 10f, 2f), 4.5f, 0, true, 0))
							{
								if (!unk_0x9200CB79F5F6CAF6(Local_1295))
								{
									if (iLocal_1318 == -1)
									{
										iLocal_1318 = unk_0x105601648511CC64();
									}
									else if ((unk_0x105601648511CC64() - iLocal_1318) > 5000)
									{
										unk_0x840ADECDE0532B84(Local_1295, 2000, 1330140418, 0);
									}
								}
								else
								{
									iLocal_1318 = -1;
								}
							}
						}
						if (func_295(Local_1295, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_265(&uLocal_94, "jhp2a_airport");
						}
						if (!func_294(vLocal_1285.x, -235832601, 1))
						{
							if (unk_0x0C265B3C448E6954(Local_1295, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, true, 0))
							{
								if (unk_0x1E8349F219AC5AF9("jhp2a_airport"))
								{
									iLocal_1307 = 0;
									iLocal_1308 = 0;
									StringCopy(&cLocal_1309, "", 24);
									func_286(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0xEB469C5B92ADC7B0(vLocal_1285.x, Local_1295, &Global_15F6A, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0xD9C1758D86688CEA(Local_1295, unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(vLocal_1285.x, unk_0xBC25C936A095B5BA(), 1)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 122)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 123)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 124)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 29)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 116)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 121)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 22)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 24)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 46)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 61)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 61)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 136)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 86)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 87)) || unk_0xA4813477CC5DD00F(vLocal_1285.x)) || unk_0x7544D2465B934445(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_286(uParam0, 5, 0);
					}
					else if (!func_294(vLocal_1285.x, -235832601, 1))
					{
						if (unk_0x0C265B3C448E6954(Local_1295, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, true, 0))
						{
							iLocal_1307 = 0;
							iLocal_1308 = 0;
							StringCopy(&cLocal_1309, "", 24);
							func_286(uParam0, 3, 0);
						}
						else
						{
							unk_0xEB469C5B92ADC7B0(vLocal_1285.x, Local_1295, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0xD9C1758D86688CEA(Local_1295, unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(vLocal_1285.x, unk_0xBC25C936A095B5BA(), 1)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 122)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 123)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 124)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 29)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 116)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 121)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 22)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 24)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 46)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 61)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 61)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 136)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 86)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 87)) || unk_0xA4813477CC5DD00F(vLocal_1285.x)) || unk_0x7544D2465B934445(Local_1295)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_1295, 1)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_286(uParam0, 5, 0);
					}
					else if (unk_0x62F3A07C43FFB568(vLocal_1285.x, Local_1295, 1))
					{
						if (!func_294(vLocal_1285.x, 451360105, 1))
						{
							unk_0x932E201A82D2EDB8(vLocal_1285.x, Local_1295, 0);
						}
					}
					else
					{
						unk_0xD421BC740C5340C3(Local_1295, 2);
						if (!func_294(vLocal_1285.x, 242628503, 1))
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_1283);
							unk_0x346129B364057FF6(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0x535008C596714F9E(iLocal_1283);
							unk_0xA8E6405305C0D7DF(vLocal_1285.x, iLocal_1283);
							unk_0x02DAF06EA4F08219(&iLocal_1283);
						}
					}
					break;
				
				case 4:
					if (unk_0xE1A8FD31526DD6C8(Local_1295, 0, 1))
					{
						iVar3++;
					}
					if (unk_0xE1A8FD31526DD6C8(Local_1295, 1, 1))
					{
						iVar3++;
					}
					if (unk_0xE1A8FD31526DD6C8(Local_1295, 4, 1))
					{
						iVar3++;
					}
					if (unk_0xE1A8FD31526DD6C8(Local_1295, 5, 1))
					{
						iVar3++;
					}
					if (((((IntToFloat(unk_0x8D66276473ABD7CC(Local_1295)) <= 0f || unk_0x77F5C030D3238E26(Local_1295) <= 250f) || unk_0xA6EB9CEADFB819EC(Local_1295) <= 400f) || unk_0x36CEFBE9B745A58D(vLocal_1285.x)) || iVar3 >= 2) || iLocal_1301 > 6)
					{
						if (unk_0x724D816EA203A79E(Local_1295) && unk_0xE59B7F5A03335350(Local_1295, 0))
						{
							unk_0x6FA721E3E050370C(Local_1295, 0);
						}
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_286(uParam0, 5, 0);
					}
					else if (!func_294(vLocal_1285.x, -1273030092, 1))
					{
						unk_0x1A06AE15BF21D407(vLocal_1285.x, Local_1295, unk_0xBC25C936A095B5BA(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0x724D816EA203A79E(Local_1295) && !unk_0x1D403DFADBC2DE3C(Local_1295, 0))
					{
						if (unk_0x62F3A07C43FFB568(vLocal_1285.x, Local_1295, 0))
						{
							if (!func_80(Local_1295))
							{
								if (!func_294(vLocal_1285.x, -2118855366, 1))
								{
									unk_0xA4E856A8CD53B8DF(vLocal_1285.x);
									unk_0x194CCBD594974E0D(vLocal_1285.x, Local_1295, 5, -1);
								}
							}
							else if (!func_294(vLocal_1285.x, 451360105, 1))
							{
								unk_0x932E201A82D2EDB8(vLocal_1285.x, Local_1295, 256);
							}
						}
						else if (!func_294(vLocal_1285.x, 780511057, 1))
						{
							unk_0xB105531EDD3DE51B(vLocal_1285.x, true);
							unk_0xB8CBD998685C0685(vLocal_1285.x, unk_0xBC25C936A095B5BA(), 0, 16);
						}
					}
					if (unk_0x724D816EA203A79E(Local_1295) && !unk_0x1D403DFADBC2DE3C(Local_1295, 0))
					{
						unk_0x155EA453CD198E4B(Local_1295, 2, true);
						unk_0x155EA453CD198E4B(Local_1295, 3, true);
					}
					break;
				}
		}
		if ((unk_0x724D816EA203A79E(vLocal_1285.x) && !unk_0x36CEFBE9B745A58D(vLocal_1285.x)) && !unk_0x3B6AC4E16239A66F(vLocal_1285.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1307)
					{
						case 0:
							if (func_35() && !unk_0x9986AD62CA3DE747(vLocal_1285.x))
							{
								if (unk_0xA4813477CC5DD00F(vLocal_1285.x))
								{
									func_55(vLocal_1285.x, "JACKED_GENERIC", 10);
								}
								else
								{
									func_55(vLocal_1285.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1307++;
							}
							break;
						
						case 1:
							if (!unk_0x62F3A07C43FFB568(vLocal_1285.x, Local_1295, 0) || iLocal_1282 == 3)
							{
								if (!unk_0x62F3A07C43FFB568(vLocal_1285.x, Local_1295, 0))
								{
									iLocal_1307 = 4;
								}
								else
								{
									iLocal_1307++;
								}
							}
							else if (func_35() && !unk_0x9986AD62CA3DE747(vLocal_1285.x))
							{
								if (func_293(&uLocal_1105, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1307++;
								}
							}
							break;
						
						case 2:
							if (func_35() && !unk_0x9986AD62CA3DE747(vLocal_1285.x))
							{
								if (unk_0xF1734B55490E9045(&cLocal_1309))
								{
									fVar4 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(vLocal_1285.x, true));
									if ((((((iLocal_1302 || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 122)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 123)) || unk_0xBF94E62A1FA7B7F3(vLocal_1285.x, 124)) || fVar4 < 49f) && (unk_0x105601648511CC64() - iLocal_1308) > 5000) && fVar4 < 225f)
									{
										if (unk_0x491B2241281A03B7(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0xF1734B55490E9045(&cLocal_1309))
								{
									if (unk_0x3362CDE8460ED38B(&cLocal_1309, "GENERIC_CURSE_HIGH"))
									{
										func_55(vLocal_1285.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1307++;
									}
									else
									{
										if (func_293(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
										{
											iLocal_1307++;
										}
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_36() && !unk_0x9986AD62CA3DE747(vLocal_1285.x))
							{
								iLocal_1308 = unk_0x105601648511CC64();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1307)
					{
						case 0:
							if (func_35() && !unk_0x9986AD62CA3DE747(vLocal_1285.x))
							{
								if (unk_0xF1734B55490E9045(&cLocal_1309))
								{
									if ((unk_0x105601648511CC64() - iLocal_1308) > 5000 && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(vLocal_1285.x, true)) < 400f)
									{
										if (unk_0x491B2241281A03B7(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0xF1734B55490E9045(&cLocal_1309))
								{
									if (unk_0x3362CDE8460ED38B(&cLocal_1309, "GENERIC_INSULT_HIGH"))
									{
										func_55(vLocal_1285.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1307++;
									}
									else if (func_293(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
									{
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_36() && !unk_0x9986AD62CA3DE747(vLocal_1285.x))
							{
								iLocal_1308 = unk_0x105601648511CC64();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_129(uParam0))
	{
	}
}

bool func_293(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13708
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_294(int iParam0, int iParam1, bool bParam2)//Position - 0x13756
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

float func_295(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1379C
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

float func_296(vector3 vParam0, vector3 vParam1)//Position - 0x137D6
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_297(int iParam0)//Position - 0x137F7
{
	struct<2> Var0;
	char[] cVar1[8];
	
	unk_0x3857DADBD6EC8A54("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_309();
		func_8(0);
		unk_0x95E4B6F3ED223F5A();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0xF1734B55490E9045(&cVar1))
		{
			func_307(&Var0);
		}
		else
		{
			func_298(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_298(char* sParam0, char* sParam1)//Position - 0x1389D
{
	func_306(sParam0, sParam1);
	func_299(0);
}

void func_299(int iParam0)//Position - 0x138B2
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_300(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_300(int iParam0)//Position - 0x138F7
{
	int iVar0;
	int iVar1;
	
	func_305();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_304(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_301(&(Global_19B04.f_932.f_21B), iVar1);
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

void func_301(var uParam0, int iParam1)//Position - 0x13A0E
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
			if (!func_303(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_302(&(uParam0->f_8E4[iVar0]));
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

void func_302(var uParam0)//Position - 0x13BD7
{
	*uParam0 = -15;
}

int func_303(int iParam0, var uParam1, float fParam2)//Position - 0x13BE5
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
			return func_303(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_303(8, uParam1, fParam2);
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

void func_304(int iParam0, bool bParam1)//Position - 0x14555
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

void func_305()//Position - 0x14593
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_185())
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
			switch (func_185())
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

void func_306(char* sParam0, char* sParam1)//Position - 0x14680
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			if (unk_0x5D29F91E567588E2(sParam1) <= 16)
			{
				StringCopy(&Global_1162A, sParam0, 16);
				StringCopy(&Global_1162E, sParam1, 16);
			}
		}
	}
}

void func_307(char* sParam0)//Position - 0x146BE
{
	func_308(sParam0);
	func_299(0);
}

void func_308(char* sParam0)//Position - 0x146D1
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

void func_309()//Position - 0x14710
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_6(0))
	{
		if (!func_310())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_300(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_305();
		}
	}
}

int func_310()//Position - 0x14781
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

