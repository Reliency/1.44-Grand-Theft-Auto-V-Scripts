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
	struct<110> Local_28[4];
	struct<94> Local_29 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46[5];
	int iLocal_47[1] = { 0 };
	struct<4> Local_48 = { 0, 0, 0, 0 } ;
	char cLocal_49[64] = "";
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59[24] = "";
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 30;
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
	var uLocal_221 = 10;
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
	var uLocal_272 = 10;
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
	var uLocal_343 = 20;
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
	var uLocal_444 = 20;
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
	var uLocal_545 = 30;
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
	var uLocal_726 = 5;
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
	var uLocal_757 = 7;
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
	var uLocal_807 = 5;
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
	var uLocal_833 = 3;
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
	var uLocal_849 = 16;
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
	var uLocal_949 = 10;
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
	var uLocal_1000 = 5;
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
	var uLocal_1026 = 5;
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
	int iLocal_1055 = 0;
	var uLocal_1056 = 3;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 1092616192;
	var uLocal_1063 = 1101004800;
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
	struct<8> Local_1080[5];
	struct<32> Local_1081[20];
	char cLocal_1082[32] = "";
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
	bool bLocal_1252 = 0;
	int iLocal_1253 = 0;
	int iLocal_1254 = 0;
	int iLocal_1255 = 0;
	int iLocal_1256 = 0;
	int iLocal_1257 = 0;
	int iLocal_1258 = 0;
	char cLocal_1259[16] = "";
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	char cLocal_1262[16] = "";
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	int iLocal_1265 = 0;
	float fLocal_1266 = 0f;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	int iLocal_1272 = 0;
	char cLocal_1273[16] = "";
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	bool bLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	struct<2> Local_1283 = { 0, 0 } ;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	struct<2> Local_1286 = { 0, 0 } ;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	int iLocal_1289 = 0;
	bool bLocal_1290 = 0;
	int iLocal_1291 = 0;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	bool bLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	int iLocal_1298 = 0;
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
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
	StringCopy(&Local_48, "JHP1ADS", 16);
	StringCopy(&cLocal_49, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	vLocal_58 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_59, "jhp1a_sec_arrive", 24);
	iLocal_63 = 0;
	iLocal_69 = 6;
	iLocal_1253 = -1;
	iLocal_1257 = -1;
	iLocal_1258 = -1;
	StringCopy(&cLocal_1259, "", 16);
	StringCopy(&cLocal_1262, "", 16);
	fLocal_1266 = 1E+08f;
	iLocal_1269 = 1;
	iLocal_1272 = -1;
	StringCopy(&cLocal_1273, "", 16);
	iLocal_1276 = -1;
	iLocal_1277 = 1;
	iLocal_1281 = -1;
	iLocal_1282 = -1;
	StringCopy(&Local_1283, "", 16);
	StringCopy(&Local_1286, "", 16);
	iLocal_1289 = 1;
	iLocal_1291 = 1;
	iLocal_1295 = -1;
	iLocal_1297 = -1;
	iLocal_1298 = -1;
	if (unk_0xE8A79675302ED812(3))
	{
		func_283(6);
	}
	unk_0x25A523E067E06F54(1);
	func_276();
	func_235();
	while (true)
	{
		unk_0x2E94C9549322098D("M_JewelStoreJobPrep1A", 0);
		if (bLocal_68)
		{
			func_233();
		}
		func_230(&uLocal_70);
		func_181();
		if (!bLocal_66)
		{
			func_179();
			func_168();
			func_167(&Local_1080);
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x143
{
	switch (iLocal_63)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x175
{
	int iVar0;
	
	if ((iLocal_1298 != -1 && unk_0x724D816EA203A79E(Local_46[iLocal_1298 /*8*/])) && unk_0xE59B7F5A03335350(Local_46[iLocal_1298 /*8*/], 0))
	{
		iVar0 = unk_0x8D66276473ABD7CC(Local_46[iLocal_1298 /*8*/]);
		func_23(Local_46[iLocal_1298 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_15DB5 = 1000;
	}
	else
	{
		Global_15DB5 = iVar0;
	}
	if (!func_22(&(Local_1080[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_3(bool bParam0, int iParam1)//Position - 0x21C
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

int func_4()//Position - 0x2F2
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

int func_5(int iParam0)//Position - 0x327
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

bool func_6(bool bParam0)//Position - 0x365
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_7(int iParam0)//Position - 0x390
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_8(bool bParam0)//Position - 0x3BC
{
	int iVar0;
	int iVar1;
	
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	if (bParam0)
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
		unk_0x3857DADBD6EC8A54("JHP1A_FAIL");
	}
	else
	{
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x3B3C317B9102719D(unk_0xB5CEFD608600A09F(), 1f);
	}
	unk_0xAEC867D0DBB7AFEB(5);
	unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 1);
	unk_0x6E52C7765A0F4382(1);
	func_18(&Local_1080);
	func_13(&iLocal_1055, 1, 0);
	bLocal_1252 = false;
	iLocal_1253 = -1;
	iLocal_1292 = 0;
	iLocal_1293 = 0;
	bLocal_1294 = false;
	iLocal_1295 = -1;
	iLocal_1297 = -1;
	iLocal_1298 = -1;
	iLocal_1299 = 0;
	iLocal_1300 = 0;
	iLocal_1296 = 0;
	if (bParam0)
	{
		func_11();
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
		unk_0xA0C0B32E74BE8DB7(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xD2A8FC9FE0044C83(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x4516EDD0A096FB5B(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xEDAD35A0D81ED3FB(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, false, 0);
		unk_0xADC7E88690E324EB(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x6A54FD861D871600(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (unk_0x724D816EA203A79E(iLocal_47[iVar0]))
		{
			if (bParam0)
			{
				unk_0xA35241BCE4C1A24B(&(iLocal_47[iVar0]));
			}
			else
			{
				unk_0xF8ED8988FAF2823F(&(iLocal_47[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_29, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0xF845620A03C7425B(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x02537C8C1BEEB477(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xCF6040807CC0E4A5(&(Local_46[iVar0 /*8*/]));
			}
			else
			{
				unk_0x1E7A09C1710FB071(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x44DA9856E0BBDF59(&cLocal_49))
	{
		unk_0x2D23F487A48A1C6D(&cLocal_49, bParam0);
	}
	if (iLocal_1302 != 0)
	{
		unk_0x483687B0FCA5415A(iLocal_1302, 0);
	}
	func_9();
}

void func_9()//Position - 0x613
{
	Global_15B7B = 0;
}

void func_10(int iParam0, bool bParam1)//Position - 0x620
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (bParam1)
		{
			unk_0xF845620A03C7425B(iParam0);
		}
		else
		{
			unk_0x02537C8C1BEEB477(iParam0);
		}
	}
	iParam0->f_5 = 0;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_27 = 0;
	iParam0->f_29 = 0;
	iParam0->f_5D = 1;
	iParam0->f_66 = 0;
	iParam0->f_2F = 0;
	iParam0->f_2E = 0;
	iParam0->f_30 = 0;
	iParam0->f_25 = -1;
	iParam0->f_67 = -1;
	iParam0->f_28 = 0;
	iParam0->f_5C = -1;
	iParam0->f_2B = { 0f, 0f, 0f };
	iParam0->f_58 = { 0f, 0f, 0f };
	iParam0->f_5B = 0;
	if (unk_0x724D816EA203A79E(iParam0->f_69))
	{
		if (unk_0xE7E55F7532DEE345(iParam0->f_69))
		{
			unk_0x17175087F2DB6AC8(iParam0->f_69, 1, 1);
		}
		if (bParam1)
		{
			unk_0xA35241BCE4C1A24B(&(iParam0->f_69));
		}
		else
		{
			unk_0xF8ED8988FAF2823F(&(iParam0->f_69));
		}
	}
	iParam0->f_6A = -1;
	iParam0->f_6B = 0;
	iParam0->f_6D = 0;
	iParam0->f_68 = 0;
}

void func_11()//Position - 0x6EF
{
	Global_394A = 0;
	func_12();
}

void func_12()//Position - 0x6FF
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x720
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_17(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(iParam0->f_1[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1[iVar0]));
		}
		func_16(iVar0, iParam0);
		func_15(iVar0, iParam0);
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
				if (unk_0x9488E18994C5C83D(iParam0->f_11[iVar0], func_14()) && iParam0->f_11[iVar0] != unk_0xBC25C936A095B5BA())
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

int func_14()//Position - 0x8D1
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

void func_15(int iParam0, var uParam1)//Position - 0x8E1
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

void func_16(int iParam0, var uParam1)//Position - 0x929
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

void func_17(int iParam0)//Position - 0x971
{
	if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
	}
}

void func_18(var uParam0)//Position - 0x98C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)//Position - 0x9B2
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)//Position - 0x9C8
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)//Position - 0x9DF
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

int func_22(var uParam0)//Position - 0xA50
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)//Position - 0xA7E
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

void func_24(int iParam0)//Position - 0xAE9
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_64 = 0;
		bLocal_65 = false;
		iLocal_63 = iParam0;
	}
}

int func_25()//Position - 0xB07
{
	bool bVar0;
	
	if (!bLocal_65)
	{
		func_166(&uLocal_70, "SCRIPT\JWL_HA_RAID_STORE");
		func_165(&uLocal_70, joaat("s_m_m_security_01"));
		func_164(&(Local_1080[1 /*8*/]), 0, 0, 1);
		func_164(&(Local_1080[0 /*8*/]), 0, 0, 1);
		func_164(&(Local_1080[4 /*8*/]), 0, 0, 1);
		func_106(0f, 0f, 0f, 0f, 1, func_160());
		Global_15DB5 = 1000;
		unk_0xDF53A66AEE1401AA(0.1f);
		func_105("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_65 = true;
	}
	if (bLocal_65)
	{
		switch (iLocal_64)
		{
			case 0:
				if (func_100(1) == 0)
				{
					func_13(&iLocal_1055, 1, 0);
					func_23(0, -1);
					func_99(0, -1);
				}
				else if ((func_98() && unk_0x724D816EA203A79E(Local_46[func_97() /*8*/])) && unk_0xE59B7F5A03335350(Local_46[func_97() /*8*/], 0))
				{
					unk_0x12FC760610FCE787(0.5f);
					if (iLocal_1298 != func_97())
					{
						unk_0x1D1C393C7689E5A6(5f, 10f, 4);
						func_23(Local_46[func_97() /*8*/], -1);
						func_99(Local_46[func_97() /*8*/], -1);
						iLocal_1298 = func_97();
					}
					if (func_95(&iLocal_1055, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_46[func_97() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_64++;
					}
				}
				else if (func_94())
				{
					unk_0x12FC760610FCE787(0.5f);
					func_50(&iLocal_1055, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_1299, "", "", "", 1, 0, 1, -1);
					if (unk_0x0C265B3C448E6954(Local_46[func_49() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						iLocal_64++;
					}
				}
				else
				{
					func_17(&iLocal_1055);
					func_23(0, -1);
					func_99(0, -1);
				}
				break;
			
			case 1:
				if (func_98())
				{
					if (func_47(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_94())
				{
					if (func_47(iLocal_1299, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0x1D1C393C7689E5A6(5f, 10f, 4);
						unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
						func_46(1);
						func_45(1, 0);
						iLocal_64 = 1000;
					}
					else
					{
						unk_0x1D1C393C7689E5A6(5f, 10f, 4);
						iLocal_64++;
					}
					if (func_98())
					{
						unk_0x8300C56586249382(Local_46[iLocal_1298 /*8*/], 0);
					}
					else if (func_94())
					{
						unk_0x8300C56586249382(Local_46[func_49() /*8*/], 0);
						unk_0x6FA721E3E050370C(Local_46[func_49() /*8*/], 1);
						unk_0xBD2B21F4319C9475(Local_46[func_49() /*8*/]);
					}
					unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_45(1, 0);
				if (!func_43())
				{
					func_41();
				}
				else
				{
					func_40(&uLocal_1087, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_1087, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_64++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					unk_0x1D1C393C7689E5A6(5f, 10f, 4);
					iLocal_64++;
				}
				break;
			
			case 1002:
				func_45(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()//Position - 0xEB9
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

int func_27()//Position - 0xF6C
{
	if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xF95
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)//Position - 0xFF4
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_36();
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
				func_34();
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
				if (func_33())
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
			if (func_32())
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
			func_31();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_30();
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
		func_38();
	}
	return 0;
}

void func_30()//Position - 0x12C0
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

void func_31()//Position - 0x12F1
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

int func_32()//Position - 0x1386
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x13AD
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

void func_34()//Position - 0x1446
{
	if (func_35(14))
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
		Global_389D = func_160();
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

bool func_35(int iParam0)//Position - 0x14E8
{
	return Global_8C41 == iParam0;
}

void func_36()//Position - 0x14F6
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

bool func_37(int iParam0, int iParam1)//Position - 0x154D
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

void func_38()//Position - 0x1588
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15DF
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

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1635
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

void func_41()//Position - 0x16D0
{
	Global_394A = 0;
	func_42();
}

void func_42()//Position - 0x16E0
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

int func_43()//Position - 0x1704
{
	if (func_44())
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

int func_44()//Position - 0x172A
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)//Position - 0x174C
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

void func_46(bool bParam0)//Position - 0x1806
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

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1882
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
	func_48(iParam0);
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

void func_48(int iParam0)//Position - 0x1A11
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

int func_49()//Position - 0x1A3D
{
	int iVar0;
	
	if (func_94())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x27C9F6C1391327CF(iLocal_1299, Local_46[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_50(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x1A94
{
	return func_51(iParam0, vParam1, vParam2, func_93(), func_93(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_92(), func_92(), func_92(), func_92(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_51(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1AE3
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
	func_91(iParam0);
	func_90(iParam0);
	func_89();
	if (func_73(iParam0, iParam0->f_11[0], iParam0->f_11[1], iParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_72(sParam12);
		func_72(sParam13);
		func_72(sParam14);
		func_72(sParam15);
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
				if (func_70(iParam0, iParam21))
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
				func_72(sParam16);
				func_72(sParam19);
				func_72("MORE_SEATS");
				if (bParam18 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						func_72(sParam11);
					}
					if (unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(iParam0);
					}
					if ((!func_67(iParam0, 1) && !func_66(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_65(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_63(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_72("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_67(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_63(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
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
						iParam0->f_5 = func_62(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xBF0E22F3E083C33D(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_61(iParam0->f_5, iParam0);
						}
					}
					else if (!func_60(vVar3, unk_0x5DC00ADB7E2FD7C2(iParam0->f_5), 0.1f, 0))
					{
						unk_0x1423825E528B4DE1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_61(iParam0->f_5, iParam0);
						}
					}
					if (!func_67(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 2))
						{
							func_65(iParam0, sParam11, 0);
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
								else if (!unk_0x9488E18994C5C83D(iParam0->f_11[iVar2], func_14()) || !func_58(iParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_55(iParam0))
							{
								func_72(sParam11);
								func_72(sParam16);
								func_72(sParam12);
								func_72(sParam13);
								func_72(sParam14);
								func_72(sParam15);
								func_72("LOSE_WANTED");
								func_72("MORE_SEATS");
								func_72(sParam19);
								func_13(iParam0, 1, 0);
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
					func_72(sParam16);
					func_72(sParam19);
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5) || unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						unk_0x07B8ECB35A4ED3AC(iParam0);
						func_72(sParam11);
					}
					if ((!func_67(iParam0, 1) && !func_66(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_65(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_63(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_72("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_67(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_63(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
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
								func_72(sParam11);
							}
							*iParam0 = func_52(iParam10, 0, 0);
							unk_0x2E9308F22ABD4DF5(*iParam0, 2);
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_61(*iParam0, iParam0);
							}
						}
						if (!func_67(iParam0, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_65(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
							{
								if (!unk_0xEAEFBBEC1AEA464B(sParam19))
								{
									if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
									{
										func_65(iParam0, sParam19, 0);
										unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
									}
								}
								else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_65(iParam0, sParam16, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 23))
								{
									if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
									{
										func_63(iParam0->f_11[0], "GET_IN_CAR", 3);
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
					func_72(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_67(iParam0, 2))
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
										func_63(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_65(iParam0, "MORE_SEATS", 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 13);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_65(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
								{
									func_65(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_67(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
						{
							func_65(iParam0, sParam16, 0);
							unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
						}
						else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
						{
							if (!unk_0xEAEFBBEC1AEA464B(sParam19))
							{
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_65(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_65(iParam0, sParam16, 0);
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
		func_72(sParam11);
		func_72(sParam16);
		func_72(sParam19);
		func_72(sParam16);
		func_72("LOSE_WANTED");
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

int func_52(int iParam0, bool bParam1, bool bParam2)//Position - 0x243C
{
	return func_53(iParam0, !bParam1, bParam2);
}

int func_53(int iParam0, bool bParam1, bool bParam2)//Position - 0x244F
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_54(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_54(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_54(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_54(bool bParam0, float fParam1, float fParam2)//Position - 0x24F3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_55(int iParam0)//Position - 0x250A
{
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 12))
	{
		if (func_57(unk_0xBC25C936A095B5BA()))
		{
			if (func_56(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_56(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2568
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

int func_57(int iParam0)//Position - 0x264D
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

int func_58(int iParam0, int iParam1)//Position - 0x2684
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && iParam1)
		{
			if (func_59(unk_0xBC25C936A095B5BA(), iParam0))
			{
				unk_0x567FA6DC2DF8E19A(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x9488E18994C5C83D(iParam0, func_14()))
		{
			unk_0x567FA6DC2DF8E19A(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)//Position - 0x26EF
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

int func_60(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2737
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

void func_61(int iParam0, int iParam1)//Position - 0x27B2
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

int func_62(vector3 vParam0, bool bParam1)//Position - 0x27ED
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_54(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_63(int iParam0, char* sParam1, int iParam2)//Position - 0x2819
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_64(iParam2), 1);
}

int func_64(int iParam0)//Position - 0x2830
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

void func_65(int iParam0, char* sParam1, bool bParam2)//Position - 0x2A25
{
	if (!bParam2)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_105(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = unk_0x105601648511CC64();
}

int func_66(int iParam0)//Position - 0x2A5C
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

int func_67(int iParam0, int iParam1)//Position - 0x2A80
{
	if (iParam1 != 1 || unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 1;
		}
		if (func_69(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x11D38424F1DD3B8F())
	{
		if (func_44() && !func_68())
		{
			return 1;
		}
	}
	return 0;
}

int func_68()//Position - 0x2AD8
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0)//Position - 0x2AEF
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

int func_70(var uParam0, int iParam1)//Position - 0x2B12
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_71(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0, var uParam1, int iParam2)//Position - 0x2B43
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

void func_72(char* sParam0)//Position - 0x2BD7
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		unk_0xBB5629E7D44054AE(sParam0);
	}
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2BEF
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
						if (func_71(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
								{
									unk_0xDBA0F5674ACCE43C(uParam0->f_11[iVar0], 1f);
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
									if (unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470) == 7 && !func_88(uParam0->f_11[iVar0], uParam0->f_15))
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
					{
						if (func_86(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 26))
	{
		if ((!func_85(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())) && !unk_0x724D816EA203A79E(iParam10))
		{
			iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar10, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_67(uParam0, 2))
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
							func_63(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_65(uParam0, "MORE_SEATS", 0);
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
			func_72("MORE_SEATS");
		}
		if (!unk_0x724D816EA203A79E(iParam10))
		{
			if ((!unk_0x36CEFBE9B745A58D(uParam0->f_11[0]) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[1])) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[2]))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 31))
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && !func_67(uParam0, 2))
					{
						iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (func_84(iVar10, uParam0))
						{
							func_65(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 31);
					func_72("CMN_VEHSUIT");
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
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
							if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
							{
								if (!func_85(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
								{
									if (!func_83(uParam0->f_11[iVar0]))
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
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
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
					if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
					{
						iVar21 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
						if (unk_0x724D816EA203A79E(iVar21))
						{
							if (func_71(iVar21, uParam0, 0))
							{
								if (func_82(iVar0, uParam0) || !unk_0xFA30DFD0084E92FE(uParam0->f_D, 27))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF0059F27F7BB6680(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_82(iVar0, uParam0))
							{
								if (unk_0x6F79ECA8C83E4357(iVar21) == joaat("sentinel2"))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 4);
								}
								else
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 2);
								}
								func_81(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()) && !func_80(uParam0->f_11[iVar0], iParam10)) && !func_79(uParam0->f_11[iVar0], iParam10))
					{
						if (func_86(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
							{
								if (((!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
									}
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_14());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x105601648511CC64();
								uParam0->f_1[iVar0] = func_52(uParam0->f_11[iVar0], 0, 0);
								unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_61(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
					{
						if (((func_58(uParam0->f_11[iVar0], 1) || func_80(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xE59B7F5A03335350(iParam10, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
						{
							if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
								func_72(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_61(uParam0->f_1[iVar0], uParam0);
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
										if (!func_58(uParam0->f_11[iVar0], 1))
										{
											if (func_57(uParam0->f_11[iVar0]))
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
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7 && !func_88(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0xBF3C2E756849EEF4(unk_0xBC25C936A095B5BA())) && !func_78(uParam0->f_11[iVar0], 2f)) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
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
										uParam0->f_1[iVar0] = func_52(uParam0->f_11[iVar0], 0, 0);
										unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
							{
								if (func_86(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
										}
										unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], false);
										unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
								{
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_14());
								}
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
							{
								unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
							}
						}
						else if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_14()) && !unk_0x7544D2465B934445(iParam10))
						{
							unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_72(uVar12[iVar0]);
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
		if (!func_67(uParam0, 2))
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
							if (func_83(uParam0->f_11[iVar0]) || unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
					{
						if (!unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_83(uParam0->f_11[iVar0]))
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
								func_65(uParam0, sParam7, 0);
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
									if (!func_77(iVar0, uParam0))
									{
										if (!unk_0xEAEFBBEC1AEA464B(uVar13[iVar0]))
										{
											if (!unk_0x3362CDE8460ED38B(uVar13[iVar0], ""))
											{
												func_75(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_74(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_77(iVar0, uParam0))
										{
											func_65(uParam0, uVar12[iVar0], 0);
											func_74(iVar0, uParam0);
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
					func_72(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_72("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0, var uParam1)//Position - 0x3C5F
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

void func_75(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3CA7
{
	if (!bParam3)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_76(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = unk_0x105601648511CC64();
}

void func_76(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3CE0
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

int func_77(int iParam0, var uParam1)//Position - 0x3CFF
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

int func_78(int iParam0, float fParam1)//Position - 0x3D48
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

int func_79(int iParam0, int iParam1)//Position - 0x3D7F
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x9488E18994C5C83D(iParam0, func_14()))
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

int func_80(int iParam0, int iParam1)//Position - 0x3DE6
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

void func_81(int iParam0, var uParam1)//Position - 0x3E1B
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

int func_82(int iParam0, var uParam1)//Position - 0x3E63
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

int func_83(int iParam0)//Position - 0x3EAC
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

int func_84(int iParam0, var uParam1)//Position - 0x3F39
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

int func_85(var uParam0)//Position - 0x409B
{
	int iVar0;
	
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_71(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x40CA
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
						if (func_85(uParam0))
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
					if (func_71(iVar0, uParam0, 0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (func_87(iVar0))
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

int func_87(int iParam0)//Position - 0x41A8
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

int func_88(int iParam0, int iParam1)//Position - 0x41E0
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

void func_89()//Position - 0x4210
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

void func_90(var uParam0)//Position - 0x427D
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

void func_91(var uParam0)//Position - 0x4320
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

var func_92()//Position - 0x43B6
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_93()//Position - 0x43C0
{
	vector3 vVar0;
	
	return vVar0;
}

int func_94()//Position - 0x43CC
{
	if (unk_0x724D816EA203A79E(iLocal_1299) && unk_0xE59B7F5A03335350(iLocal_1299, 0))
	{
		return 1;
	}
	return 0;
}

bool func_95(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x43F0
{
	return func_51(iParam0, vParam1, func_96(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_92(), func_92(), func_92(), func_92(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_92(), func_92(), func_92(), 1, fParam4);
}

Vector3 func_96()//Position - 0x4445
{
	return 0f, 0f, 2f;
}

int func_97()//Position - 0x4450
{
	int iVar0;
	
	if (func_98())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_46[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_98()//Position - 0x44B7
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_46[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_99(int iParam0, int iParam1)//Position - 0x4514
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

int func_100(bool bParam0)//Position - 0x4526
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0x724D816EA203A79E(Local_46[iVar1 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar1 /*8*/], 0)) && !func_104(Local_46[iVar1 /*8*/])) && (!bParam0 || func_101(Local_46[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_101(int iParam0)//Position - 0x4591
{
	if (unk_0x645938DA8ED5E0BA(iParam0) == iLocal_1256)
	{
		if (func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_102(iParam0, unk_0xBC25C936A095B5BA(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_102(int iParam0, int iParam1, bool bParam2)//Position - 0x45DC
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

float func_103(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x463A
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

int func_104(int iParam0)//Position - 0x4674
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if ((unk_0xBCDD4514E5CAE591(iParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(iParam0, 1, 7000)) || unk_0xBCDD4514E5CAE591(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(char* sParam0, int iParam1, int iParam2)//Position - 0x46B8
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_106(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x46D1
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_159(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_156(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_107(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_107(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x474C
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
		func_155(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_150(iParam0, &Var0);
		if (func_149(vParam1, 0f, 0f, 0f, 0))
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
		func_142(iParam3, &Var0, vParam1, fParam2, func_148(iParam0));
		func_108(iParam3, iParam0, 0);
	}
}

void func_108(int iParam0, int iParam1, int iParam2)//Position - 0x4875
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_138(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_127();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_159(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_109(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_109(int iParam0, int iParam1)//Position - 0x4992
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_110(iParam0))
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
	func_150(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_110(int iParam0)//Position - 0x4B94
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_125(iParam0, 0, 0)) || func_125(iParam0, 1, 0)) || func_125(iParam0, 2, 0)) || func_148(iParam0) != 145) || func_124(iParam0)) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || !func_111(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_123(iParam0))
		{
		}
		if (func_123(iParam0))
		{
		}
		if (func_125(iParam0, 0, 0))
		{
		}
		if (func_125(iParam0, 1, 0))
		{
		}
		if (func_125(iParam0, 2, 0))
		{
		}
		if (func_148(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_111(int iParam0)//Position - 0x4C71
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_112(iParam0, 0))
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

int func_112(int iParam0, bool bParam1)//Position - 0x4E22
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
		if (!func_120())
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
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_117())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_115(iParam0))
		{
			return 0;
		}
	}
	if (!func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)//Position - 0x4FB0
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_114())
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

int func_114()//Position - 0x507C
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x5093
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

int func_116()//Position - 0x6B3A
{
	return 0;
}

int func_117()//Position - 0x6B43
{
	return 1;
}

int func_118()//Position - 0x6B4C
{
	return 1;
}

int func_119()//Position - 0x6B55
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_120()//Position - 0x6B6E
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

int func_121(int iParam0)//Position - 0x6C29
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_112(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x6C6F
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

int func_123(int iParam0)//Position - 0x6CAA
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

int func_124(int iParam0)//Position - 0x6D26
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

int func_125(int iParam0, int iParam1, bool bParam2)//Position - 0x6E0E
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_126(iParam1, iVar0, &sVar1, &iVar2))
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

int func_126(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x6E7F
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

var func_127()//Position - 0x6F57
{
	var uVar0;
	
	func_137(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_136(&uVar0, unk_0x7E09057438B9D216());
	func_135(&uVar0, unk_0x6E06C0DB9B43570D());
	func_130(&uVar0, unk_0xBE14F159908E4EE5());
	func_129(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_128(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_128(var uParam0, int iParam1)//Position - 0x6F9D
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

void func_129(var uParam0, int iParam1)//Position - 0x7023
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_130(var uParam0, int iParam1)//Position - 0x7056
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_132(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_131(int iParam0, int iParam1)//Position - 0x70A7
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

var func_132(int iParam0)//Position - 0x7149
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_133(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)//Position - 0x716E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_134(var uParam0)//Position - 0x7185
{
	return uParam0 & 15;
}

void func_135(var uParam0, int iParam1)//Position - 0x7192
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_136(var uParam0, int iParam1)//Position - 0x71CC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_137(var uParam0, int iParam1)//Position - 0x7207
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_138(var uParam0, int iParam1)//Position - 0x7243
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
			uParam0->f_4 = func_139(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_139(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_139(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_139(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_139(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_139(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_139(2, 1);
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
			if (func_120())
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
			if (func_120())
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
		if (!func_149(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_149(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_149(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1)//Position - 0x893B
{
	struct<82> Var0;
	
	if (func_141(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_140(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_140(int iParam0, var uParam1, int iParam2)//Position - 0x897D
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

bool func_141(int iParam0)//Position - 0x8BD9
{
	return iParam0 < 3;
}

void func_142(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x8BE5
{
	if (func_138(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_147(iParam0);
			func_146(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_143(iParam0, 1);
		}
	}
}

void func_143(int iParam0, bool bParam1)//Position - 0x8CE4
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_145(iParam0, 0))
		{
			func_144(iParam0, 1, 0);
			func_144(iParam0, 2, 0);
			func_144(iParam0, 3, 0);
			func_144(iParam0, 4, 0);
			func_144(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_144(iParam0, 0, 0);
	}
}

void func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x8D41
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

bool func_145(int iParam0, int iParam1)//Position - 0x8D7C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_146(var uParam0, var uParam1)//Position - 0x8D9F
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

void func_147(int iParam0)//Position - 0x8E6B
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_138(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_143(iParam0, 0);
		}
	}
}

int func_148(int iParam0)//Position - 0x8EE5
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

bool func_149(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x8F48
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_150(int iParam0, var uParam1)//Position - 0x8F8F
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_154(uParam1);
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
		if (uParam1->f_41 == -1 && !func_153(uParam1->f_42))
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
		func_152(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_151(iVar0 + 1));
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

int func_151(int iParam0)//Position - 0x923A
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

int func_152(int iParam0, var uParam1, var uParam2)//Position - 0x92EA
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

int func_153(int iParam0)//Position - 0x93C4
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

void func_154(var uParam0)//Position - 0x93E4
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

void func_155(int iParam0)//Position - 0x9494
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_147(iParam0);
	func_143(iParam0, 0);
}

int func_156(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x94BB
{
	int iVar0;
	
	iVar0 = func_157(vParam0, iParam1, 1);
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

int func_157(vector3 vParam0, int iParam1, int iParam2)//Position - 0x95D1
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
				if (func_158(iVar0) || iParam2 == 0)
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

bool func_158(int iParam0)//Position - 0x9660
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_159(int iParam0)//Position - 0x9678
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

int func_160()//Position - 0x9694
{
	func_161();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_161()//Position - 0x96AD
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_163(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_162(unk_0xBC25C936A095B5BA());
			if (func_141(iVar0) && (!func_35(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_141(Global_19B04.f_932.f_21B.f_10CD))
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

int func_162(int iParam0)//Position - 0x97AA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_163(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_163(int iParam0)//Position - 0x97E7
{
	if (func_141(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_164(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9811
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

int func_165(var uParam0, int iParam1)//Position - 0x9891
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

int func_166(var uParam0, char* sParam1)//Position - 0x993A
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

void func_167(var uParam0)//Position - 0x9A04
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

void func_168()//Position - 0x9A74
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) < 70f)
	{
		unk_0x146B993E26BD5111();
	}
	if (iLocal_1297 == 9)
	{
		if (!iLocal_1296)
		{
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1296 = 1;
			}
		}
		if (unk_0x724D816EA203A79E(Local_29))
		{
			if (func_102(Local_29, unk_0xBC25C936A095B5BA(), 1) > 300f)
			{
				unk_0x02537C8C1BEEB477(&Local_29);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_1299) && unk_0xE59B7F5A03335350(iLocal_1299, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x27C9F6C1391327CF(iLocal_1299, Local_46[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1299 = 0;
		}
	}
	if (func_178())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_46[iVar0 /*8*/]))
				{
					iLocal_1299 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				}
			}
			iVar0++;
		}
	}
	func_171();
	if (iLocal_63 == 0)
	{
		if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (unk_0x724D816EA203A79E(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_102(unk_0xBC25C936A095B5BA(), Local_28[iVar1 /*110*/], 1) > 300f) && func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) > 300f)
				{
					unk_0xF845620A03C7425B(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]))
			{
				if (!unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
				{
					unk_0x1E7A09C1710FB071(&(Local_46[iVar0 /*8*/]));
					if (unk_0x2DA8CA50A72528FB(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x07B8ECB35A4ED3AC(&(Local_46[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_104(Local_46[iVar0 /*8*/]))
				{
					if (unk_0x2DA8CA50A72528FB(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x07B8ECB35A4ED3AC(&(Local_46[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_101(Local_46[iVar0 /*8*/]))
				{
					if (unk_0x645938DA8ED5E0BA(Local_46[iVar0 /*8*/]) == iLocal_1256)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1297 == 9 && func_97() != -1) && unk_0x724D816EA203A79E(Local_46[func_97() /*8*/])) && unk_0xE59B7F5A03335350(Local_46[func_97() /*8*/], 0)) && !func_104(Local_46[func_97() /*8*/])) || (((iLocal_1297 == 10 && func_49() != -1) && unk_0x724D816EA203A79E(Local_46[func_49() /*8*/])) && unk_0xE59B7F5A03335350(Local_46[func_49() /*8*/], 0)))
			{
				if (unk_0x2DA8CA50A72528FB(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_46[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0)) && !func_104(Local_46[iVar0 /*8*/])) && func_101(Local_46[iVar0 /*8*/])) && iLocal_64 == 0)
			{
				if (!unk_0x2DA8CA50A72528FB(Local_46[iVar0 /*8*/].f_1))
				{
					Local_46[iVar0 /*8*/].f_1 = func_170(Local_46[iVar0 /*8*/], 0, 0);
					unk_0x12DB69036F6569F7(Local_46[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1297 == 9 || iLocal_1297 == 10)
		{
			if (func_169("JHP1A_BKIN", 0, 0) || func_169("JHP1A_BKINANY", 0, 0))
			{
				unk_0xEB233A3B7635D2AC();
			}
		}
		else if (iLocal_64 == 0)
		{
			if (!iLocal_1291)
			{
				if (func_100(1) == 1)
				{
					func_105("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1291 = 1;
			}
		}
		if (func_100(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_283(iVar4);
			}
		}
	}
}

var func_169(char* sParam0, int iParam1, char* sParam2)//Position - 0x9EB8
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

int func_170(int iParam0, bool bParam1, bool bParam2)//Position - 0x9ED6
{
	return func_53(iParam0, !bParam1, bParam2);
}

void func_171()//Position - 0x9EE9
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_46[3 /*8*/], 1))
		{
			iLocal_1297 = 11;
		}
		else if (func_177())
		{
			iLocal_1297 = 7;
		}
		else if (func_176())
		{
			iLocal_1297 = 6;
		}
		else if (func_98())
		{
			iLocal_1297 = 9;
			iLocal_1291 = 0;
		}
		else if (func_94())
		{
			iLocal_1297 = 10;
		}
		else if (func_175())
		{
			iLocal_1297 = 8;
		}
		else if (((unk_0x724D816EA203A79E(iLocal_1300) && unk_0xE59B7F5A03335350(iLocal_1300, 0)) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_1300, 1)) && unk_0x0C265B3C448E6954(iLocal_1300, vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1297 = 5;
		}
		else if (((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A())) && !func_174()) && unk_0x0C265B3C448E6954(unk_0x3E12B546F3F2597A(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1300 = unk_0x3E12B546F3F2597A();
			iLocal_1297 = 5;
		}
		else if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1297 = 2;
		}
		else if (((unk_0x724D816EA203A79E(iLocal_1300) && unk_0xE59B7F5A03335350(iLocal_1300, 0)) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_1300, 1)) && (unk_0x0C265B3C448E6954(iLocal_1300, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || unk_0x4DBCE270B354E123(iLocal_1300, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1297 = 4;
		}
		else if (((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A())) && !func_174()) && (unk_0x0C265B3C448E6954(unk_0x3E12B546F3F2597A(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1300 = unk_0x3E12B546F3F2597A();
			iLocal_1297 = 4;
		}
		else if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !func_174()) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1300 = unk_0x3E12B546F3F2597A();
			iLocal_1297 = 3;
		}
		else if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !func_174()) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0))
		{
			iLocal_1300 = unk_0x3E12B546F3F2597A();
			iLocal_1297 = 1;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_1297 = 1;
		}
		else
		{
			iLocal_1300 = 0;
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_1297 = 0;
			}
			else if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_1297 = 0;
			}
			else
			{
				iLocal_1297 = -1;
			}
		}
		if (iLocal_1297 == 1)
		{
			if (func_173(Local_28[0 /*110*/]))
			{
				func_172(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_173(Local_28[0 /*110*/]))
		{
			func_172(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1294)
		{
			unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 155, true);
		}
		if ((iLocal_1297 != -1 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && unk_0xBFED55DE95EA4B0C(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_172(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0xA3BD
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x6CCBC1B22488DC0C(iParam0, fParam1);
		unk_0xAA40189C27870A99(iParam0, fParam2);
		unk_0x3BA6DE071C07D143(iParam0, (fParam3 / 2f));
		unk_0x1BAA0038DD57C475(iParam0, fParam4);
		unk_0x9C4E6006A4F26EB5(iParam0, fParam5);
	}
}

int func_173(int iParam0)//Position - 0xA3F9
{
	if (iParam0 != 0 && unk_0x724D816EA203A79E(iParam0))
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

int func_174()//Position - 0xA467
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
		{
			if (unk_0x3E12B546F3F2597A() == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175()//Position - 0xA4B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xD9C1758D86688CEA(Local_46[iVar0 /*8*/], unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176()//Position - 0xA4F5
{
	int iVar0;
	
	if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0)) && unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()) == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_177()//Position - 0xA553
{
	int iVar0;
	
	if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())) && !unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_46[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_178()//Position - 0xA5CC
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0xE59B7F5A03335350(iVar0, 0) && (unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck") || unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_179()//Position - 0xA61D
{
	int iVar0;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_283(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (unk_0x724D816EA203A79E(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_5D)
			{
				if (Local_28[iVar0 /*110*/].f_66)
				{
					func_180(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_5E), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
				else
				{
					func_180(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_5E), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			if (!func_173(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_67 == -1)
				{
					Local_28[iVar0 /*110*/].f_67 = unk_0x105601648511CC64();
				}
				else if ((unk_0x105601648511CC64() - Local_28[iVar0 /*110*/].f_67) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && Local_46[iVar0 /*8*/].f_7)
		{
			if (!func_173(Local_46[iVar0 /*8*/]))
			{
				if (unk_0x2DA8CA50A72528FB(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_46[iVar0 /*8*/].f_1));
				}
				unk_0x1E7A09C1710FB071(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_180(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xA751
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

void func_181()//Position - 0xA928
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_66 == 1)
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
			func_24(iLocal_67);
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			func_8(1);
			if (!func_229())
			{
				func_228(iLocal_63, &vVar0, &fVar1);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fVar1);
				unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
				func_226(&uLocal_70, vVar0, 50f, 0);
			}
			func_225(&uLocal_70);
			switch (iLocal_63)
			{
				case 0:
					func_165(&uLocal_70, joaat("burrito2"));
					func_165(&uLocal_70, joaat("s_m_y_pestcont_01"));
					func_165(&uLocal_70, joaat("s_m_m_security_01"));
					func_165(&uLocal_70, joaat("dilettante2"));
					func_165(&uLocal_70, joaat("p_amb_clipboard_01"));
					func_224(&uLocal_70, &cLocal_59);
					func_223(&uLocal_70, "misslsdhsclipboard@base");
					func_223(&uLocal_70, "misslsdhsclipboard@idle_a");
					func_223(&uLocal_70, "misstrevor3");
					func_222(&uLocal_70, iLocal_1256);
					if (((func_221() && !unk_0xE7B3A320107C1379(func_220())) && !unk_0xA19D269B4B5A1532(func_220())) && !unk_0x8C1A6E7D5F410F4A(func_220()))
					{
						func_165(&uLocal_70, func_220());
					}
					break;
				
				case 1:
					func_165(&uLocal_70, joaat("burrito2"));
					break;
			}
			while (!func_219(&uLocal_70))
			{
				SYSTEM::WAIT(0);
				func_179();
			}
			switch (iLocal_63)
			{
				case 0:
					if (((func_221() && !unk_0xE7B3A320107C1379(func_220())) && !unk_0xA19D269B4B5A1532(func_220())) && !unk_0x8C1A6E7D5F410F4A(func_220()))
					{
						while (!func_218())
						{
							SYSTEM::WAIT(0);
						}
						Local_46[4 /*8*/] = func_188(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_229())
					{
						if (unk_0x724D816EA203A79E(Local_46[4 /*8*/]))
						{
							func_185(Local_46[4 /*8*/], -1, 1);
						}
						else
						{
							func_185(0, -1, 1);
						}
					}
					else
					{
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
						if (unk_0x724D816EA203A79E(Local_46[4 /*8*/]))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_46[4 /*8*/], -1);
						}
					}
					while (!func_182(0))
					{
						SYSTEM::WAIT(0);
					}
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_46[0 /*8*/] = unk_0x61C05BF08A1E0EFE(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						unk_0x8300C56586249382(Local_46[0 /*8*/], 0);
						unk_0xF0A40F19AAB79E88(Local_46[0 /*8*/], 1084227584);
					}
					if (func_229())
					{
						func_185(0, -1, 1);
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
				if (!func_7(88) || iLocal_63 != 1)
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
			bLocal_66 = false;
		}
	}
}

int func_182(bool bParam0)//Position - 0xAC80
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[0]))
		{
			Local_46[0 /*8*/] = Global_15DFD[0];
			unk_0x77815D3407C6700D(Local_46[0 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD[1]))
		{
			Local_46[1 /*8*/] = Global_15DFD[1];
			unk_0x77815D3407C6700D(Local_46[1 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD[2]))
		{
			Local_46[2 /*8*/] = Global_15DFD[2];
			unk_0x77815D3407C6700D(Local_46[2 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_15DFD.f_9[0];
			if (!unk_0x36CEFBE9B745A58D(Local_28[1 /*110*/]))
			{
				unk_0xB71D41C0310C93DE(Local_28[1 /*110*/], false, 1);
			}
			unk_0x77815D3407C6700D(Local_28[1 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_1C[0]))
		{
			Local_28[1 /*110*/].f_69 = Global_15DFD.f_1C[0];
			unk_0x77815D3407C6700D(Local_28[1 /*110*/].f_69, true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_15DFD.f_9[2];
			if (!unk_0x36CEFBE9B745A58D(Local_28[0 /*110*/]))
			{
				unk_0xB71D41C0310C93DE(Local_28[0 /*110*/], false, 1);
			}
			unk_0x77815D3407C6700D(Local_28[0 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_15DFD.f_9[3];
			if (!unk_0x36CEFBE9B745A58D(Local_28[3 /*110*/]))
			{
				unk_0xB71D41C0310C93DE(Local_28[2 /*110*/], false, 1);
			}
			unk_0x77815D3407C6700D(Local_28[2 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_15DFD.f_9[4];
			if (!unk_0x36CEFBE9B745A58D(Local_28[3 /*110*/]))
			{
				unk_0xB71D41C0310C93DE(Local_28[3 /*110*/], false, 1);
			}
			unk_0x77815D3407C6700D(Local_28[3 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[5]))
		{
			Local_29 = Global_15DFD.f_9[5];
			if (!unk_0x36CEFBE9B745A58D(Local_29))
			{
				unk_0xB71D41C0310C93DE(Local_29, false, 1);
			}
			unk_0x77815D3407C6700D(Local_29, true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x724D816EA203A79E(Global_15DFD[3]))
		{
			Local_46[3 /*8*/] = Global_15DFD[3];
			unk_0x77815D3407C6700D(Local_46[3 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0x724D816EA203A79E(Local_46[0 /*8*/]))
		{
			Local_46[0 /*8*/] = unk_0x61C05BF08A1E0EFE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		}
		if (!unk_0x724D816EA203A79E(Local_46[1 /*8*/]))
		{
			Local_46[1 /*8*/] = unk_0x61C05BF08A1E0EFE(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, true, true, false);
		}
		if (!unk_0x724D816EA203A79E(Local_46[2 /*8*/]))
		{
			Local_46[2 /*8*/] = unk_0x61C05BF08A1E0EFE(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, true, true, false);
		}
		if (!unk_0x724D816EA203A79E(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, true);
			unk_0x65E471E4A2D56226(Local_28[1 /*110*/], 150, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[1 /*110*/], 8, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[1 /*110*/], 0, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[1 /*110*/], 3, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[1 /*110*/], 4, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[1 /*110*/], 8, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[1 /*110*/], 10, 1, 0, 0);
			unk_0x70FF586D857F1A81(Local_28[1 /*110*/], 0, 1, 0, false);
			unk_0x70FF586D857F1A81(Local_28[1 /*110*/], 1, 0, 0, false);
			unk_0x4A506C72BFC368E4(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0x724D816EA203A79E(Local_28[1 /*110*/].f_69))
		{
			Local_28[1 /*110*/].f_69 = unk_0xB6896943DA475493(joaat("p_amb_clipboard_01"), unk_0x823166D9421223CA(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			unk_0x5DBE04849460E608(Local_28[1 /*110*/].f_69, Local_28[1 /*110*/], unk_0xFA18E720A39243D0(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!unk_0x724D816EA203A79E(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, true);
			unk_0xB0031DDAE4FF0BC3(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[0 /*110*/], 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[0 /*110*/], 4, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[0 /*110*/], 8, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[0 /*110*/], 10, 0, 0, 0);
			unk_0x70FF586D857F1A81(Local_28[0 /*110*/], 0, 0, 0, false);
			unk_0x4A506C72BFC368E4(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0x724D816EA203A79E(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, true);
			unk_0xB0031DDAE4FF0BC3(Local_28[2 /*110*/], 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[2 /*110*/], 3, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[2 /*110*/], 4, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[2 /*110*/], 8, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[2 /*110*/], 10, 1, 0, 0);
			unk_0x70FF586D857F1A81(Local_28[2 /*110*/], 1, 0, 0, false);
			unk_0x4A506C72BFC368E4(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0x724D816EA203A79E(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, true);
			unk_0xB0031DDAE4FF0BC3(Local_28[3 /*110*/], 0, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[3 /*110*/], 3, 0, 3, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[3 /*110*/], 4, 0, 3, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[3 /*110*/], 8, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_28[3 /*110*/], 10, 0, 0, 0);
			unk_0x70FF586D857F1A81(Local_28[3 /*110*/], 0, 0, 0, false);
			unk_0x4A506C72BFC368E4(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0x724D816EA203A79E(Local_29) && !unk_0x724D816EA203A79E(Local_46[3 /*8*/]))
		{
			if (unk_0x6E06C0DB9B43570D() >= 5 && unk_0x6E06C0DB9B43570D() < 21)
			{
				Local_46[3 /*8*/] = unk_0x61C05BF08A1E0EFE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
				Local_29 = unk_0xFD8987C090669BD5(Local_46[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, true);
			}
			else
			{
				Local_46[3 /*8*/] = unk_0x61C05BF08A1E0EFE(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, true, true, false);
				Local_29 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(Local_46[0 /*8*/]))
	{
		func_184(Local_46[0 /*8*/], 0);
		unk_0xD421BC740C5340C3(Local_46[0 /*8*/], 7);
		unk_0xEC6E535291C98050(Local_46[0 /*8*/], 1);
		unk_0xA73D1278857991A2(Local_46[0 /*8*/], true);
		Local_46[0 /*8*/].f_7 = 0;
	}
	if (unk_0x724D816EA203A79E(Local_46[1 /*8*/]))
	{
		func_184(Local_46[1 /*8*/], 1);
		unk_0x2D655AA68FA1736B(Local_46[1 /*8*/], true, true, 0);
		unk_0x155EA453CD198E4B(Local_46[1 /*8*/], 4, false);
		unk_0x1C5BDB4E5D257D63(Local_46[1 /*8*/], 0, 1, 0);
		unk_0x1C5BDB4E5D257D63(Local_46[1 /*8*/], 4, 0, 1);
		unk_0xA73D1278857991A2(Local_46[1 /*8*/], true);
		Local_46[1 /*8*/].f_7 = 0;
	}
	if (unk_0x724D816EA203A79E(Local_46[2 /*8*/]))
	{
		func_184(Local_46[2 /*8*/], 2);
		unk_0x1C5BDB4E5D257D63(Local_46[2 /*8*/], 2, 1, 0);
		unk_0x1C5BDB4E5D257D63(Local_46[2 /*8*/], 3, 1, 0);
		unk_0xA73D1278857991A2(Local_46[2 /*8*/], true);
		Local_46[2 /*8*/].f_7 = 0;
	}
	if (unk_0x724D816EA203A79E(Local_28[1 /*110*/]))
	{
		unk_0xF85FAED5BA864282(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0x2E35C4FA5F0ED22F(Local_28[1 /*110*/], true);
		unk_0x4106FAF8AA1D69D5(Local_28[1 /*110*/], iLocal_1254);
		unk_0x0DEF5E53360637F2(Local_28[1 /*110*/], 1);
		func_172(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x5AAB329BBC1053A1(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_2A = 20f;
		Local_28[1 /*110*/].f_56 = 1;
		Local_28[1 /*110*/].f_57 = 1;
		Local_28[1 /*110*/].f_6B = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_6A = 60309;
		Local_28[1 /*110*/].f_6C = 0;
	}
	if (unk_0x724D816EA203A79E(Local_28[0 /*110*/]))
	{
		unk_0xF85FAED5BA864282(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0x2E35C4FA5F0ED22F(Local_28[0 /*110*/], true);
		unk_0x4106FAF8AA1D69D5(Local_28[0 /*110*/], iLocal_1254);
		unk_0x0DEF5E53360637F2(Local_28[0 /*110*/], 1);
		func_172(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x5AAB329BBC1053A1(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_56 = 1;
		Local_28[0 /*110*/].f_57 = 1;
		Local_28[0 /*110*/].f_2A = 17.5f;
	}
	if (unk_0x724D816EA203A79E(Local_28[2 /*110*/]))
	{
		unk_0xF85FAED5BA864282(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0x2E35C4FA5F0ED22F(Local_28[2 /*110*/], true);
		unk_0x4106FAF8AA1D69D5(Local_28[2 /*110*/], iLocal_1254);
		func_172(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x0DEF5E53360637F2(Local_28[2 /*110*/], 1);
		unk_0x5AAB329BBC1053A1(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_56 = 0;
		Local_28[2 /*110*/].f_57 = 0;
		Local_28[2 /*110*/].f_2A = 17.5f;
	}
	if (unk_0x724D816EA203A79E(Local_28[3 /*110*/]))
	{
		unk_0xF85FAED5BA864282(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0x2E35C4FA5F0ED22F(Local_28[3 /*110*/], true);
		unk_0x4106FAF8AA1D69D5(Local_28[3 /*110*/], iLocal_1254);
		unk_0x5AAB329BBC1053A1(Local_28[3 /*110*/], 50f);
		func_172(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x0DEF5E53360637F2(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_56 = 0;
		Local_28[3 /*110*/].f_57 = 0;
		Local_28[3 /*110*/].f_2A = 17.5f;
	}
	if (unk_0x724D816EA203A79E(Local_29) && unk_0x724D816EA203A79E(Local_46[3 /*8*/]))
	{
		unk_0xF85FAED5BA864282(Local_29, &(Local_29.f_1));
		unk_0x2E35C4FA5F0ED22F(Local_29, true);
		unk_0x4106FAF8AA1D69D5(Local_29, iLocal_1254);
		unk_0xEB061E1EBFED4D59(Local_29, 2);
		unk_0x91629AC1E1F78419(Local_29, 2, false);
		unk_0x7A535CE1F001F3FE(Local_29, joaat("weapon_nightstick"), -1, false, true);
		unk_0xFC3C88E2313FA926(Local_29, 5);
		func_172(Local_29, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_29.f_1), "sec", 16);
		Local_29.f_56 = 1;
		Local_29.f_57 = 1;
		Local_29.f_5D = 0;
		if (Global_15DFD.f_165 == 1)
		{
			if (!func_183(Local_29, 242628503, 1))
			{
				if (unk_0xDF2CB88174A62E40(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_1301 = 0;
					unk_0xC5A6DFE2B8987B17(&iVar2);
					unk_0xEB469C5B92ADC7B0(0, Local_46[3 /*8*/], &cLocal_59, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					unk_0x932E201A82D2EDB8(0, Local_46[3 /*8*/], 0);
					unk_0xBE2047F9F9DE6F43(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0x535008C596714F9E(iVar2);
					unk_0xA8E6405305C0D7DF(Local_29, iVar2);
					unk_0x02DAF06EA4F08219(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_183(Local_29, -1680762137, 1))
		{
			if (unk_0xDF2CB88174A62E40(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_1301 = 1;
				unk_0xBD5B95F1BA6D43E4(Local_29, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0x724D816EA203A79E(Local_46[0 /*8*/]) && unk_0x724D816EA203A79E(Local_46[1 /*8*/])) && unk_0x724D816EA203A79E(Local_46[2 /*8*/])) && unk_0x724D816EA203A79E(Local_46[3 /*8*/])) && unk_0x724D816EA203A79E(Local_28[1 /*110*/])) && unk_0x724D816EA203A79E(Local_28[0 /*110*/])) && unk_0x724D816EA203A79E(Local_28[2 /*110*/])) && unk_0x724D816EA203A79E(Local_28[3 /*110*/])) && unk_0x724D816EA203A79E(Local_29)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, bool bParam2)//Position - 0xB841
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

void func_184(var uParam0, int iParam1)//Position - 0xB887
{
	Global_16B1B.f_16[iParam1] = uParam0;
}

void func_185(int iParam0, int iParam1, int iParam2)//Position - 0xB89B
{
	if (func_187() && func_229())
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
		func_186(0);
	}
}

void func_186(int iParam0)//Position - 0xB95F
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

int func_187()//Position - 0xB988
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

int func_188(vector3 vParam0, float fParam1)//Position - 0xB9AC
{
	return func_189(&(Global_181DF.f_B3B), vParam0, fParam1, 0);
}

int func_189(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xB9C6
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_217(uParam0))
	{
		if (func_149(vParam1, 0f, 0f, 0f, 0))
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
		if (func_216(uParam0))
		{
			unk_0x6C5F5B5F6894CCE3(vParam1, 5f, 1, 0, 0, false);
			func_215(vParam1, 5f, 0);
			iVar0 = unk_0x61C05BF08A1E0EFE(uParam0->f_C.f_42, vParam1, fParam2, true, true, false);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xD5874E4A4BF782FC(iVar0, vParam1, 0, 0, 1);
				}
				func_198(iVar0, &(uParam0->f_C), 0, 1);
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
							func_197(uParam0->f_B, 1);
						}
						else if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_197(uParam0->f_B, 2);
						}
					}
					unk_0x551DF575AE9A2969(iVar0, 0);
					unk_0x2487C8A04B65E2BD(iVar0, 0);
					unk_0xA73D1278857991A2(iVar0, true);
					func_196(iVar0, uParam0->f_B);
				}
				else if ((!func_194(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "startup_positioning"))
				{
					iVar4 = func_193(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_190(iVar4);
					}
				}
				if (((Global_16B1B != 13 && Global_16B1B != 10) && Global_16B1B != 11) && Global_16B1B != 12)
				{
					if (unk_0x56BEECB328B6D29D(&(Global_16B1B.f_3)) == Global_11484)
					{
						if (uParam0->f_C.f_42 == Global_19B04.f_7F22.f_45[21 /*78*/].f_42)
						{
							func_143(24, 0);
							func_190(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_109(iVar0, uParam0->f_B);
				}
				unk_0x2CA123B0622F495C(uParam0->f_C.f_42);
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_190(int iParam0)//Position - 0xBC78
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_138(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_145(iParam0, 0)) && Global_11435.f_42 == 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] != 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] > 3) && (!func_191(0, Global_110A8.f_22B[0 /*21*/].f_C) || !func_191(1, Global_110A8.f_22B[0 /*21*/].f_C)))
			{
				func_146(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), &Global_11435);
				Global_11483 = Global_19B04.f_7F22.f_15D7;
			}
			func_143(iParam0, 0);
		}
	}
}

int func_191(int iParam0, int iParam1)//Position - 0xBDEA
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
	if (iParam0 < 0 || iParam0 >= func_192(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_112(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_192(var uParam0)//Position - 0xBE5C
{
	return *uParam0;
}

int func_193(int iParam0)//Position - 0xBE67
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

int func_194(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xBF2A
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_195(iParam0, Global_110A8.f_8B[38], 0))
			{
				func_190(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_195(iParam0, Global_110A8.f_8B[43], 1))
			{
				func_190(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_195(iParam0, uVar1[iVar3], 1) && func_60(unk_0x541C2AEF053615BC(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_149(vParam1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(uVar1[iVar3], true), true) < 10f)
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
					func_190(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[20]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[20], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[20]) == joaat("swift2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[20]))
				{
					func_190(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_195(int iParam0, int iParam1, bool bParam2)//Position - 0xC133
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

void func_196(int iParam0, int iParam1)//Position - 0xC194
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

void func_197(int iParam0, int iParam1)//Position - 0xC216
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (iParam0 == 145 || Global_16149[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == func_139(iParam0, iParam1))
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

void func_198(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xC2B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_207(iParam0))
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_151(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_151(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_151(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_151(iVar1 + 1));
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
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_206(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_205())
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
		if (uParam1->f_41 == -1 && !func_153(uParam1->f_42))
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
						func_204(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_204(iParam0, uParam1->f_45);
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
			func_199(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_151(iVar2 + 1)))
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

int func_199(int iParam0, var uParam1, var uParam2)//Position - 0xC804
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
	if (func_203(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_202(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_202(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_201(iParam0);
	if (func_200(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, true);
		unk_0xA73D1278857991A2(*iParam0, true);
	}
	return 1;
}

int func_200(int iParam0)//Position - 0xC982
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

void func_201(var uParam0)//Position - 0xCA5E
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

int func_202(int iParam0, int iParam1)//Position - 0xCA9E
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

int func_203(int iParam0, int iParam1)//Position - 0xCB83
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

void func_204(int iParam0, int iParam1)//Position - 0xCDF6
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

bool func_205()//Position - 0xCE5B
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_206(int iParam0)//Position - 0xCE6C
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

int func_207(int iParam0)//Position - 0xCEB7
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_213(unk_0xB5CEFD608600A09F(), -1))
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
	if (func_209(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_208(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)//Position - 0xCF3E
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

int func_209(int iParam0)//Position - 0xCF6D
{
	if (func_212(iParam0) == 233)
	{
		return func_210(iParam0);
	}
	return -1;
}

int func_210(int iParam0)//Position - 0xCF8A
{
	if (func_211(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_211(int iParam0, int iParam1)//Position - 0xCFAD
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xCFE8
{
	if (func_211(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_213(int iParam0, int iParam1)//Position - 0xD00B
{
	int iVar0;
	
	if (func_214(iParam0, 1, 1))
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

int func_214(int iParam0, bool bParam1, bool bParam2)//Position - 0xD058
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

void func_215(vector3 vParam0, float fParam1, bool bParam2)//Position - 0xD0A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_138(&(Global_110A8.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(vParam0, Global_110A8.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_190(iVar0);
			}
		}
		iVar0++;
	}
}

int func_216(var uParam0)//Position - 0xD0F2
{
	if (func_217(uParam0))
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

int func_217(var uParam0)//Position - 0xD127
{
	if (uParam0->f_C.f_42 == 0)
	{
		return 0;
	}
	if (!func_112(uParam0->f_C.f_42, 0))
	{
		return 0;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_60(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_218()//Position - 0xD186
{
	return func_216(&(Global_181DF.f_B3B));
}

int func_219(var uParam0)//Position - 0xD199
{
	if (func_230(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_220()//Position - 0xD1B2
{
	return Global_181DF.f_B3B.f_C.f_42;
}

int func_221()//Position - 0xD1C5
{
	return func_217(&(Global_181DF.f_B3B));
}

int func_222(var uParam0, int iParam1)//Position - 0xD1D8
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBF697FA7422C0621(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2FB)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			if (uParam0->f_2FB[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_2FB[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_2FB[iVar0 /*5*/].f_1)
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
		unk_0x184188AF06D2A771(iParam1);
		uParam0->f_2FB[iVar1 /*5*/] = 1;
		uParam0->f_2FB[iVar1 /*5*/].f_3 = unk_0x105601648511CC64();
		uParam0->f_2FB[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_223(var uParam0, char* sParam1)//Position - 0xD29C
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

int func_224(var uParam0, char* sParam1)//Position - 0xD363
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

void func_225(var uParam0)//Position - 0xD42A
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

int func_226(var uParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xD682
{
	if (func_227(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_364)
	{
		if (func_149(uParam0->f_364.f_4, vParam1, 0) && uParam0->f_364.f_A == fParam2)
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

int func_227(vector3 vParam0)//Position - 0xD73A
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, var uParam1, var uParam2)//Position - 0xD764
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_229()//Position - 0xD7BB
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

int func_230(var uParam0)//Position - 0xD7CF
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
						func_232(uParam0[iVar1 /*5*/]);
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
						func_232(&(uParam0->f_111[iVar1 /*5*/]));
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
						func_232(&(uParam0->f_176[iVar1 /*5*/]));
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
						func_232(&(uParam0->f_290[iVar1 /*6*/]));
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
						func_232(&(uParam0->f_1DB[iVar1 /*6*/]));
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
						func_232(&(uParam0->f_CA[iVar1 /*7*/]));
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
						func_232(&(uParam0->f_97[iVar1 /*5*/]));
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
						func_232(&(uParam0->f_2E1[iVar1 /*5*/]));
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
						func_232(&(uParam0->f_2FB[iVar1 /*5*/]));
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
								func_232(&(uParam0->f_2AF[iVar1 /*7*/]));
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
							func_232(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_232(&(uParam0->f_2AF[iVar1 /*7*/]));
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
						func_232(&(uParam0->f_36F[iVar1 /*5*/]));
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
						func_232(&(uParam0->f_3A2[iVar1 /*5*/]));
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
						func_232(&(uParam0->f_30B[iVar1 /*5*/]));
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
					func_232(&(uParam0->f_35C));
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
					func_232(&(uParam0->f_360));
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
						func_231(uParam0);
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
				func_232(&(uParam0->f_364));
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
						func_232(&(uParam0->f_3BC[iVar1 /*5*/]));
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

void func_231(var uParam0)//Position - 0xE19F
{
	if (unk_0x719413B40BB63D86())
	{
		unk_0x13D5880CBA449AA9();
		func_232(&(uParam0->f_364));
	}
}

void func_232(var uParam0)//Position - 0xE1BB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_233()//Position - 0xE1D6
{
	if (func_234())
	{
		func_8(1);
		unk_0x95E4B6F3ED223F5A();
	}
}

int func_234()//Position - 0xE1EE
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

void func_235()//Position - 0xE21B
{
	func_253(&(Local_1080[1 /*8*/]), 61127/*func_254*/, "AI Controller");
	func_253(&(Local_1080[0 /*8*/]), 59492/*func_245*/, "Dialogue");
	func_253(&(Local_1080[3 /*8*/]), 58519/*func_240*/, "Alarms & Wanted Level");
	func_253(&(Local_1080[4 /*8*/]), 57967/*func_236*/, "Music Manager");
}

void func_236(var uParam0)//Position - 0xE26F
{
	if (!func_239(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x44DA9856E0BBDF59(&cLocal_49) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || func_22(&(Local_1080[3 /*8*/])))
			{
				unk_0x3857DADBD6EC8A54("JHP1A_ATTACK");
				func_238(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_103(unk_0xBC25C936A095B5BA(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x3857DADBD6EC8A54("JHP1A_START");
					func_238(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_1297 == 3 || iLocal_1297 == 2)
				{
					unk_0x3857DADBD6EC8A54("JHP1A_WAREHOUSE");
					func_238(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_1297 == 6 || iLocal_1297 == 9)
				{
					unk_0x3857DADBD6EC8A54("JHP1A_VAN");
					func_238(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (iLocal_1297 == 9 && func_103(unk_0xBC25C936A095B5BA(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x6FED2D1AA2EBF334("JHP1A_RADIO_1"))
						{
							unk_0x3857DADBD6EC8A54("JHP1A_RADIO_1");
							func_237(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x44DA9856E0BBDF59(&cLocal_49) && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && iLocal_1293)
				{
					func_238(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (unk_0x6FED2D1AA2EBF334("JHP1A_RADIO_2"))
					{
						unk_0x3857DADBD6EC8A54("JHP1A_RADIO_2");
						func_238(uParam0, 6, 0);
						func_237(uParam0);
					}
				}
				break;
			}
	}
	if (func_239(uParam0))
	{
		unk_0xDF53A66AEE1401AA(1f);
	}
}

void func_237(var uParam0)//Position - 0xE435
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x105601648511CC64();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_238(var uParam0, int iParam1, int iParam2)//Position - 0xE45A
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x105601648511CC64();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_239(var uParam0)//Position - 0xE480
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_240(var uParam0)//Position - 0xE497
{
	if (!func_239(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_238(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x2625AE158F7FFBAD(&cLocal_49))
				{
					unk_0xA1D24DCCB6F72A84(&cLocal_49, false);
					func_243(&cLocal_1082, vLocal_58, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1082, "", 32);
					func_238(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_241(&Local_29, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 2, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
				unk_0xAEC867D0DBB7AFEB(2);
				unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 0);
				unk_0x6E52C7765A0F4382(0);
				unk_0x8C78A370F973FB74(unk_0xB5CEFD608600A09F());
				unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
				uParam0->f_2 = unk_0x105601648511CC64() + 15000;
				func_238(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x105601648511CC64() > uParam0->f_2)
				{
					unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 1);
					unk_0x6E52C7765A0F4382(1);
					unk_0xAEC867D0DBB7AFEB(5);
					iLocal_1293 = 1;
					func_237(uParam0);
				}
				unk_0x8C78A370F973FB74(unk_0xB5CEFD608600A09F());
				unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
				break;
			}
	}
}

int func_241(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)//Position - 0xE5AC
{
	return func_242(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_242(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xE5C8
{
	if (func_173(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_26 = unk_0x105601648511CC64();
			if (iParam1 != uParam0->f_5 || !unk_0x3362CDE8460ED38B(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_11 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_24 = 1;
					uParam0->f_23 = 0;
				}
				else
				{
					uParam0->f_24 = 0;
					uParam0->f_23 = uParam6;
				}
				uParam0->f_2F = 0;
				uParam0->f_2E = 0;
				uParam0->f_30 = 0;
				uParam0->f_25 = unk_0x105601648511CC64();
				if (!func_227(vParam3))
				{
					uParam0->f_58 = { vParam3 };
				}
				if (iParam4 != 0 && unk_0x724D816EA203A79E(iParam4))
				{
					uParam0->f_5B = iParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_243(char* sParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE69B
{
	struct<32> Var0;
	
	Var0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_11), "", 24);
	Var0.f_1C = iParam3;
	Var0.f_1A = fParam2;
	Var0.f_1D = iParam4;
	Var0.f_1E = iParam5;
	Var0.f_1F = iParam6;
	Var0.f_17 = { vParam1 };
	func_244(&Var0, 0);
}

int func_244(var uParam0, char* sParam1)//Position - 0xE6E7
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xF1734B55490E9045(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0x724D816EA203A79E(Local_28[*uParam0 /*110*/]) || unk_0x36CEFBE9B745A58D(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xF1734B55490E9045(&(Local_1081[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1081 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xF1734B55490E9045(sParam1) || unk_0x3362CDE8460ED38B(sParam1, &(uParam0->f_11))))
		{
			Local_1081[iVar0 /*32*/] = *uParam0;
			Local_1081[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1081[iVar0 /*32*/].f_17 = { unk_0x541C2AEF053615BC(Local_28[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1081[iVar0 /*32*/].f_17 = { uParam0->f_17 };
			}
			Local_1081[iVar0 /*32*/].f_1A = uParam0->f_1A;
			Local_1081[iVar0 /*32*/].f_1C = uParam0->f_1C;
			Local_1081[iVar0 /*32*/].f_1D = uParam0->f_1D;
			Local_1081[iVar0 /*32*/].f_1B = unk_0x105601648511CC64();
			Local_1081[iVar0 /*32*/].f_1E = uParam0->f_1E;
			Local_1081[iVar0 /*32*/].f_1F = uParam0->f_1F;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_17 = { 0f, 0f, 0f };
		uParam0->f_1A = 0f;
		uParam0->f_1C = 0;
		uParam0->f_1D = 0;
		uParam0->f_1B = 0;
		uParam0->f_1E = 0;
		uParam0->f_1F = 0;
		return iVar1;
	}
	return 0;
}

void func_245(var uParam0)//Position - 0xE864
{
	vector3 vVar0[24];
	bool bVar1;
	vector3 vVar2;
	
	if (!func_239(uParam0))
	{
		if (func_44())
		{
			iLocal_1253 = -1;
		}
		else if (iLocal_1253 == -1)
		{
			iLocal_1253 = unk_0x105601648511CC64();
			iLocal_1276 = -1;
			iLocal_1277 = 1;
		}
		if (iLocal_1257 != -1 && !unk_0xF1734B55490E9045(&cLocal_1259))
		{
			if (((Local_28[iLocal_1257 /*110*/] != 0 && unk_0x724D816EA203A79E(Local_28[iLocal_1257 /*110*/])) && !unk_0x36CEFBE9B745A58D(Local_28[iLocal_1257 /*110*/])) && !unk_0x3B6AC4E16239A66F(Local_28[iLocal_1257 /*110*/]))
			{
				if (!unk_0x2CDE18D6C89522AD(Local_28[iLocal_1257 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_1267 && (iLocal_1277 || iLocal_1258 > iLocal_1276))
						{
							if (bLocal_1278)
							{
								iLocal_1281 = iLocal_1272;
								iLocal_1282 = iLocal_1276;
								MemCopy(&Local_1283, {func_252()}, 4);
								MemCopy(&Local_1286, {func_251()}, 4);
								iLocal_1289 = iLocal_1277;
								bLocal_1290 = iLocal_1279;
							}
							if (iLocal_1268)
							{
								func_11();
							}
							else
							{
								func_41();
							}
						}
					}
					if (func_43())
					{
						if ((unk_0x105601648511CC64() - iLocal_1253) > iLocal_1265)
						{
							if (func_250(iLocal_1257))
							{
								MemCopy(&cVar0, {Local_48}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1257)
							{
								case 0:
									func_40(&uLocal_1087, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_1087, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_1087, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_1087, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xF1734B55490E9045(&cLocal_1262))
							{
								if (func_249(&uLocal_1087, &cVar0, &cLocal_1259, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (func_248(&uLocal_1087, &cVar0, &cLocal_1259, &cLocal_1262, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_244(&(Local_28[iLocal_1257 /*110*/].f_32), &cLocal_1259);
								iLocal_1276 = iLocal_1258;
								iLocal_1277 = iLocal_1269;
								bLocal_1278 = iLocal_1271;
								iLocal_1279 = iLocal_1270;
								iLocal_1257 = -1;
								iLocal_1258 = -1;
								StringCopy(&cLocal_1259, "", 16);
								iLocal_1265 = 0;
								fLocal_1266 = 9999999f;
								iLocal_1267 = 0;
								iLocal_1268 = 0;
								iLocal_1269 = 1;
								iLocal_1271 = 0;
								iLocal_1270 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1257 = -1;
				iLocal_1258 = -1;
				StringCopy(&cLocal_1259, "", 16);
				iLocal_1265 = 0;
				fLocal_1266 = 9999999f;
				iLocal_1267 = 0;
				iLocal_1268 = 0;
				iLocal_1269 = 1;
				iLocal_1270 = 0;
			}
		}
		if (((func_44() && iLocal_1272 != -1) && iLocal_1279) && !unk_0xF1734B55490E9045(&cLocal_1273))
		{
			vVar2 = { unk_0x541C2AEF053615BC(Local_28[iLocal_1272 /*110*/], true) };
			if (func_103(unk_0xBC25C936A095B5BA(), vVar2, 1) >= 25f)
			{
				iLocal_1281 = iLocal_1272;
				iLocal_1282 = iLocal_1276;
				MemCopy(&Local_1283, {func_252()}, 4);
				MemCopy(&Local_1286, {func_251()}, 4);
				iLocal_1289 = iLocal_1277;
				bLocal_1290 = iLocal_1279;
				func_11();
				iLocal_1272 = -1;
				iLocal_1276 = -1;
				StringCopy(&cLocal_1273, "", 16);
				iLocal_1277 = 0;
				iLocal_1279 = 0;
			}
		}
		if (iLocal_1281 != -1 && !unk_0xF1734B55490E9045(&Local_1283))
		{
			if (Local_28[iLocal_1281 /*110*/].f_5 > iLocal_1282)
			{
				iLocal_1281 = -1;
				iLocal_1282 = -1;
				StringCopy(&Local_1283, "", 16);
				StringCopy(&Local_1286, "", 16);
				iLocal_1289 = 1;
			}
		}
		if (iLocal_1257 == -1 && unk_0xF1734B55490E9045(&cLocal_1259))
		{
			if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 10000)
			{
				if (iLocal_1281 != -1 && !unk_0xF1734B55490E9045(&Local_1283))
				{
					func_247(iLocal_1281, &Local_1283, iLocal_1282, 0, 0, iLocal_1289, 0, 1, &Local_1286, bLocal_1290);
					iLocal_1281 = -1;
					iLocal_1282 = -1;
					StringCopy(&Local_1283, "", 16);
					StringCopy(&Local_1286, "", 16);
					iLocal_1289 = 1;
				}
			}
		}
	}
	func_246(bLocal_1290);
}

void func_246(bool bParam0)//Position - 0xEC2A
{
	if (bParam0)
	{
	}
}

int func_247(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)//Position - 0xEC37
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_102(Local_28[iParam0 /*110*/], unk_0xBC25C936A095B5BA(), 1);
	if ((iParam2 > iLocal_1258 || iParam2 == 4) || ((iParam2 == iLocal_1258 && (fVar0 < fLocal_1266 || (func_250(iParam0) && !func_250(iLocal_1257)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1257 = iParam0;
			iLocal_1258 = iParam2;
			StringCopy(&cLocal_1259, sParam1, 16);
			StringCopy(&cLocal_1262, sParam8, 16);
			fLocal_1266 = fVar0;
			iLocal_1267 = iParam3;
			iLocal_1268 = iParam4;
			iLocal_1265 = iParam6;
			iLocal_1269 = iParam5;
			iLocal_1271 = iParam7;
			iLocal_1270 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_248(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xED10
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 1;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_29(sParam2, iParam4, 0);
}

bool func_249(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xED64
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_250(int iParam0)//Position - 0xEDB2
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_251()//Position - 0xEDD0
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		iVar1 = unk_0xC0A904C0F2775676();
		iVar1 = (iVar1 + Global_41AA);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar2 /*6*/])))
			{
				return Global_394C[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar3 /*6*/])))
					{
						return Global_394C[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_394C[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_252()//Position - 0xEE7C
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_253(var uParam0, int iParam1, char* sParam2)//Position - 0xEEA0
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

void func_254(var uParam0)//Position - 0xEEC7
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_239(uParam0))
	{
		bLocal_1294 = true;
		if (!iLocal_1292)
		{
			if (func_175())
			{
				iLocal_1292 = 1;
				iLocal_1295 = unk_0x105601648511CC64();
			}
		}
		else if ((unk_0x105601648511CC64() - iLocal_1295) > 3000)
		{
			iLocal_1292 = 0;
			iLocal_1295 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_173(Local_28[iVar0 /*110*/]))
			{
				func_274(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_173(Local_29))
		{
			func_274(&Local_29);
		}
		iVar1 = 0;
		while (iVar1 < Local_1081)
		{
			if (!unk_0xF1734B55490E9045(&(Local_1081[iVar1 /*32*/].f_1)) && Local_1081[iVar1 /*32*/].f_1B != -1)
			{
				if (Local_1081[iVar1 /*32*/].f_1C == -1 || (unk_0x105601648511CC64() - Local_1081[iVar1 /*32*/].f_1B) < Local_1081[iVar1 /*32*/].f_1C)
				{
					if (Local_1081[iVar1 /*32*/].f_1D <= 0 || (unk_0x105601648511CC64() - Local_1081[iVar1 /*32*/].f_1B) > Local_1081[iVar1 /*32*/].f_1D)
					{
						if (Local_1081[iVar1 /*32*/] != -1 && func_173(Local_28[Local_1081[iVar1 /*32*/] /*110*/]))
						{
							vVar2 = { unk_0x541C2AEF053615BC(Local_28[Local_1081[iVar1 /*32*/] /*110*/], true) };
							Local_1081[iVar1 /*32*/].f_17 = { vVar2 };
						}
						else
						{
							vVar2 = { Local_1081[iVar1 /*32*/].f_17 };
						}
						if (!func_22(&(Local_1080[3 /*8*/])))
						{
							if (Local_1081[iVar1 /*32*/].f_1F && unk_0xF0F2FC9DE291567F(vVar2, vLocal_58, true) < 35f)
							{
								func_164(&(Local_1080[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28)
						{
							if (Local_1081[iVar1 /*32*/] == -1 || (iVar0 != Local_1081[iVar1 /*32*/] && Local_28[Local_1081[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0x724D816EA203A79E(Local_28[iVar0 /*110*/]) && !unk_0x36CEFBE9B745A58D(Local_28[iVar0 /*110*/]))
								{
									if (func_103(Local_28[iVar0 /*110*/], vVar2, 1) < (Local_1081[iVar1 /*32*/].f_1A + Local_28[iVar0 /*110*/].f_2A))
									{
										Local_28[iVar0 /*110*/].f_22 = iVar1;
										if (Local_1081[iVar1 /*32*/].f_1E)
										{
											if (!func_22(&(Local_1080[3 /*8*/])))
											{
												func_164(&(Local_1080[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1082, {Local_1081[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x105601648511CC64() - Local_1081[iVar1 /*32*/].f_1B) > Local_1081[iVar1 /*32*/].f_1C + 2000)
				{
					StringCopy(&(Local_1081[iVar1 /*32*/].f_1), "", 64);
					Local_1081[iVar1 /*32*/] = -1;
					Local_1081[iVar1 /*32*/].f_17 = { 0f, 0f, 0f };
					Local_1081[iVar1 /*32*/].f_1A = 0f;
					Local_1081[iVar1 /*32*/].f_1B = -1;
					Local_1081[iVar1 /*32*/].f_1C = -1;
					Local_1081[iVar1 /*32*/].f_1D = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_173(Local_28[iVar0 /*110*/]))
			{
				func_268(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_173(Local_29))
		{
			func_259(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_173(Local_28[iVar0 /*110*/]))
			{
				func_258(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_173(Local_29))
		{
			func_256(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (unk_0x724D816EA203A79E(Local_28[iVar0 /*110*/].f_69))
			{
				if (((!unk_0x724D816EA203A79E(Local_28[iVar0 /*110*/]) || unk_0x36CEFBE9B745A58D(Local_28[iVar0 /*110*/])) || unk_0x12C10A73846FA35A(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_6C && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (unk_0xB6A16B5E7EB81F9B(Local_28[iVar0 /*110*/].f_69, Local_28[iVar0 /*110*/]))
					{
						unk_0x17175087F2DB6AC8(Local_28[iVar0 /*110*/].f_69, 1, 1);
					}
					if (bVar3)
					{
						unk_0xF8ED8988FAF2823F(&(Local_28[iVar0 /*110*/].f_69));
					}
					else if (bVar4)
					{
						unk_0xA35241BCE4C1A24B(&(Local_28[iVar0 /*110*/].f_69));
					}
					Local_28[iVar0 /*110*/].f_6D = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_6B != 0 && Local_28[iVar0 /*110*/].f_6A != -1)
			{
				if (Local_28[iVar0 /*110*/].f_6D && unk_0xD6513D668481290A(Local_28[iVar0 /*110*/].f_6B))
				{
					Local_28[iVar0 /*110*/].f_69 = unk_0xB6896943DA475493(Local_28[iVar0 /*110*/].f_6B, unk_0x823166D9421223CA(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_6A, 0f, 0f, 0f), true, true, false);
					unk_0x5DBE04849460E608(Local_28[iVar0 /*110*/].f_69, Local_28[iVar0 /*110*/], unk_0xFA18E720A39243D0(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_6A), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_6D = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (unk_0x724D816EA203A79E(Local_28[iVar1 /*110*/]) && !unk_0x36CEFBE9B745A58D(Local_28[iVar1 /*110*/]))
			{
				unk_0x5502708AECB47F5D(Local_28[iVar1 /*110*/]);
				unk_0xE452BE0597443B80(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_255();
	}
	if (func_239(uParam0))
	{
	}
}

void func_255()//Position - 0xF3F1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_173(Local_46[iVar0 /*8*/]))
		{
			unk_0x5502708AECB47F5D(Local_46[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_256(int iParam0)//Position - 0xF424
{
	int iVar0;
	int iVar1;
	
	unk_0x3D669AF9A68FF281(*iParam0);
	if (func_257(*iParam0))
	{
		Local_29.f_2E = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0x6E06C0DB9B43570D() >= 5 && unk_0x6E06C0DB9B43570D() < 21)
			{
				if ((!func_183(*iParam0, 1647992574, 1) && !func_183(*iParam0, 242628503, 1)) || iLocal_1301)
				{
					if (unk_0xABB25056487DF1D7(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						unk_0xBE2047F9F9DE6F43(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_1301 = 0;
					}
				}
			}
			else if (!func_183(*iParam0, -1680762137, 1) || !iLocal_1301)
			{
				if (unk_0xABB25056487DF1D7(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					unk_0xDAC1A196FF8C70B5(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_1301 = 1;
				}
			}
			break;
		
		case 3:
			unk_0x69194304DB679A9C(*iParam0, true, -1, "DEFAULT_ACTION");
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if (unk_0x7B2E29350659BE8E(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x133D1B11D62F99C0(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x7B2E29350659BE8E(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x7A535CE1F001F3FE(*iParam0, joaat("weapon_nightstick"), -1, true, true);
					}
					if (unk_0x9CDD10270A1ACF6F(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x8E25082A46F87892(*iParam0, joaat("weapon_nightstick"), false);
						}
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (unk_0x7B2E29350659BE8E(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x133D1B11D62F99C0(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x7B2E29350659BE8E(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x7A535CE1F001F3FE(*iParam0, joaat("weapon_pistol"), -1, true, true);
					}
					if (unk_0x9CDD10270A1ACF6F(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x8E25082A46F87892(*iParam0, joaat("weapon_pistol"), false);
						}
					}
					break;
			}
			if (!func_183(*iParam0, 780511057, 1) || func_257(*iParam0))
			{
				unk_0xB8CBD998685C0685(*iParam0, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x56F2E1B5599188FA(*iParam0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0x724D816EA203A79E(iParam0->f_5B))
					{
						if (!unk_0x053F9FA04F814AF3(*iParam0, unk_0x541C2AEF053615BC(iParam0->f_5B, true), 180f) && (unk_0x105601648511CC64() - iParam0->f_25) < 5000)
						{
							if (!func_183(*iParam0, -875674219, 1) || func_257(*iParam0))
							{
								unk_0x85DB484A637CEAB9(*iParam0, iParam0->f_5B, -1);
								unk_0x56F2E1B5599188FA(*iParam0, iParam0->f_5B, -1, 2048, 2);
							}
						}
						else if (!func_183(*iParam0, -2015108952, 1) || func_257(*iParam0))
						{
							unk_0x1615DB22266698DA(*iParam0, iParam0->f_5B, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_29 && !func_60(iParam0->f_58, iParam0->f_2B, 1f, 0))
					{
						iParam0->f_58 = { iParam0->f_2B };
						iVar1 = 1;
					}
					if (!func_227(iParam0->f_58))
					{
						if (!unk_0x053F9FA04F814AF3(*iParam0, iParam0->f_58, 90f) && (unk_0x105601648511CC64() - iParam0->f_25) < 5000)
						{
							if ((!func_183(*iParam0, 1464580341, 1) || func_257(*iParam0)) || iVar1)
							{
								unk_0xCF4C6C235CD09F4F(*iParam0, iParam0->f_58, 0);
								unk_0x4BED3C9D6EF14C38(*iParam0, iParam0->f_58, -1, 2048, 2);
							}
						}
						else if ((!func_183(*iParam0, 713668775, 1) || func_257(*iParam0)) || iVar1)
						{
							unk_0x346129B364057FF6(*iParam0, iParam0->f_2B, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_227(iParam0->f_58))
					{
						if (!func_183(*iParam0, 1464580341, 1) || func_257(*iParam0))
						{
							unk_0xCF4C6C235CD09F4F(*iParam0, iParam0->f_58, -1);
							unk_0x4BED3C9D6EF14C38(*iParam0, iParam0->f_58, -1, 2048, 2);
						}
					}
					else
					{
						unk_0xDE2D2B13F24A979D(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x724D816EA203A79E(iParam0->f_5B))
					{
						if (!func_183(*iParam0, -875674219, 1) || func_257(*iParam0))
						{
							unk_0x85DB484A637CEAB9(*iParam0, iParam0->f_5B, -1);
							unk_0x56F2E1B5599188FA(*iParam0, iParam0->f_5B, -1, 2048, 2);
						}
					}
					else
					{
						unk_0xDE2D2B13F24A979D(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_257(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)//Position - 0xF91F
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x3362CDE8460ED38B(&(Param0.f_9), &(Param0.f_19)))
	{
		return 1;
	}
	return 0;
}

void func_258(var uParam0)//Position - 0xF94B
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	unk_0x3D669AF9A68FF281(*uParam0);
	if (func_257(*uParam0))
	{
		uParam0->f_2E = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_183(*uParam0, 1647992574, 1))
						{
							if (unk_0xABB25056487DF1D7(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								unk_0xBE2047F9F9DE6F43(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_183(*uParam0, 242628503, 1) || func_257(*uParam0)) && unk_0xF9E082857622D91E("misslsdhsclipboard@base"))
						{
							if (!unk_0x96044E39418AAF17(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_1255);
								if (!func_60(unk_0x541C2AEF053615BC(*uParam0, true), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0x346129B364057FF6(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								unk_0xC0FDCDB0DF739C50(0, 264.2812f, 0);
								unk_0xE896C0AD02364F2A(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x535008C596714F9E(iLocal_1255);
								unk_0xA8E6405305C0D7DF(*uParam0, iLocal_1255);
								unk_0x02DAF06EA4F08219(&iLocal_1255);
							}
							if (unk_0x724D816EA203A79E(Local_46[2 /*8*/]))
							{
								unk_0x4BED3C9D6EF14C38(*uParam0, unk_0x3EA3A28A85F8C32F(Local_46[2 /*8*/], unk_0xB5B60A04E1654409(Local_46[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_2E = 0;
						}
						else if (unk_0xF9E082857622D91E("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_2E)
							{
								case 0:
								case 2:
									if (uParam0->f_2E == 0 && unk_0xD62938026B30481A(*uParam0) == 2)
									{
										uParam0->f_6D = 1;
									}
									if (((uParam0->f_2E == 0 && unk_0xD62938026B30481A(*uParam0) == 2) || uParam0->f_2E == 2) && unk_0x105601648511CC64() > uParam0->f_25)
									{
										unk_0xC5A6DFE2B8987B17(&iLocal_1255);
										switch (unk_0x491B2241281A03B7(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0xE896C0AD02364F2A(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0xE896C0AD02364F2A(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0x535008C596714F9E(iLocal_1255);
										unk_0xA8E6405305C0D7DF(*uParam0, iLocal_1255);
										unk_0x02DAF06EA4F08219(&iLocal_1255);
										uParam0->f_2E = 1;
									}
									break;
								
								case 1:
									if (unk_0xD62938026B30481A(*uParam0) == 1)
									{
										uParam0->f_2E++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_183(*uParam0, 1647992574, 1))
						{
							if (unk_0xABB25056487DF1D7(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								unk_0xBE2047F9F9DE6F43(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0xABB25056487DF1D7(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								unk_0xBE2047F9F9DE6F43(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0xABB25056487DF1D7(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								unk_0xBE2047F9F9DE6F43(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0x56BEECB328B6D29D(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0x724D816EA203A79E(uParam0->f_5B))
					{
						if (!unk_0x053F9FA04F814AF3(*uParam0, unk_0x541C2AEF053615BC(uParam0->f_5B, true), 180f) && (unk_0x105601648511CC64() - uParam0->f_25) < 5000)
						{
							if (!func_183(*uParam0, -875674219, 1) || func_257(*uParam0))
							{
								unk_0x85DB484A637CEAB9(*uParam0, uParam0->f_5B, -1);
								unk_0x56F2E1B5599188FA(*uParam0, uParam0->f_5B, -1, 2048, 2);
							}
						}
						else if (!func_183(*uParam0, -2015108952, 1) || func_257(*uParam0))
						{
							unk_0x1615DB22266698DA(*uParam0, uParam0->f_5B, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_29 && !func_60(uParam0->f_58, uParam0->f_2B, 1f, 0))
					{
						uParam0->f_58 = { uParam0->f_2B };
						iVar3 = 1;
					}
					if (!func_227(uParam0->f_58))
					{
						if (!unk_0x053F9FA04F814AF3(*uParam0, uParam0->f_58, 90f) && (unk_0x105601648511CC64() - uParam0->f_25) < 5000)
						{
							if ((!func_183(*uParam0, 1464580341, 1) || func_257(*uParam0)) || iVar3)
							{
								unk_0xCF4C6C235CD09F4F(*uParam0, uParam0->f_58, 0);
								unk_0x4BED3C9D6EF14C38(*uParam0, uParam0->f_58, -1, 2048, 2);
							}
						}
						else if ((!func_183(*uParam0, 713668775, 1) || func_257(*uParam0)) || iVar3)
						{
							unk_0x346129B364057FF6(*uParam0, uParam0->f_2B, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_227(uParam0->f_58))
					{
						if (!func_183(*uParam0, 1464580341, 1) || func_257(*uParam0))
						{
							unk_0xCF4C6C235CD09F4F(*uParam0, uParam0->f_58, -1);
							unk_0x4BED3C9D6EF14C38(*uParam0, uParam0->f_58, -1, 2048, 2);
						}
					}
					else
					{
						unk_0xDE2D2B13F24A979D(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x724D816EA203A79E(uParam0->f_5B))
					{
						if (!func_183(*uParam0, -875674219, 1) || func_257(*uParam0))
						{
							unk_0x85DB484A637CEAB9(*uParam0, uParam0->f_5B, -1);
							unk_0x56F2E1B5599188FA(*uParam0, uParam0->f_5B, -1, 2048, 2);
						}
					}
					else
					{
						unk_0xDE2D2B13F24A979D(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x3362CDE8460ED38B(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x3362CDE8460ED38B(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x3362CDE8460ED38B(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x3362CDE8460ED38B(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_183(*uParam0, 242628503, 1) || !unk_0xC5B8A5F778E321DD(*uParam0, unk_0xBC25C936A095B5BA(), 90f)) || func_257(*uParam0))
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_1255);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0xDE2D2B13F24A979D(0, 2000);
					unk_0xAFD74A5E065F57E0(iLocal_1255, 1);
					unk_0x535008C596714F9E(iLocal_1255);
					unk_0xA8E6405305C0D7DF(*uParam0, iLocal_1255);
					unk_0x02DAF06EA4F08219(&iLocal_1255);
					unk_0x56F2E1B5599188FA(*uParam0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0x724D816EA203A79E(iLocal_1300) && unk_0xE59B7F5A03335350(iLocal_1300, 0))
				{
					fVar6 = func_102(unk_0xBC25C936A095B5BA(), iLocal_1300, 1);
				}
				if ((iLocal_1297 == 3 || iLocal_1297 == 2) || iLocal_1297 == 8)
				{
					iVar4 = unk_0xBC25C936A095B5BA();
					fVar7 = 2f;
				}
				else if (iLocal_1297 == 0 || iLocal_1297 == 1)
				{
					iVar4 = unk_0xBC25C936A095B5BA();
					fVar7 = 1f;
				}
				else if (iLocal_1297 == 5 && unk_0x724D816EA203A79E(iLocal_1300))
				{
					if (fVar6 > 10f)
					{
						iVar4 = unk_0xBC25C936A095B5BA();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1300;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1297 == 4 && unk_0x724D816EA203A79E(iLocal_1300))
				{
					iVar4 = iLocal_1300;
					fVar7 = 1f;
				}
				if (unk_0x724D816EA203A79E(iVar4))
				{
					fVar5 = func_102(*uParam0, iVar4, 1);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!func_183(*uParam0, 242628503, 1) && !func_183(*uParam0, 1227113341, 1)) || !unk_0xC5B8A5F778E321DD(*uParam0, unk_0xBC25C936A095B5BA(), 90f)) || func_257(*uParam0))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_1255);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0xDE2D2B13F24A979D(0, 2000);
						unk_0xAFD74A5E065F57E0(iLocal_1255, 1);
						unk_0x535008C596714F9E(iLocal_1255);
						unk_0xA8E6405305C0D7DF(*uParam0, iLocal_1255);
						unk_0x02DAF06EA4F08219(&iLocal_1255);
						unk_0x56F2E1B5599188FA(*uParam0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					}
				}
				else if (!func_183(*uParam0, 1227113341, 1) || func_257(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					unk_0x9565F9267674873A(*uParam0, iVar4, -1, fVar8, fVar7, 1073741824, 0);
					unk_0x56F2E1B5599188FA(*uParam0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0x56BEECB328B6D29D(&(uParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x9CDD10270A1ACF6F(*uParam0, &iVar9, 1))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							unk_0x8E25082A46F87892(*uParam0, joaat("weapon_unarmed"), false);
						}
					}
					if (!func_183(*uParam0, 780511057, 1))
					{
						unk_0xB8CBD998685C0685(*uParam0, unk_0xBC25C936A095B5BA(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_183(*uParam0, 242628503, 1) || !unk_0xC5B8A5F778E321DD(*uParam0, unk_0xBC25C936A095B5BA(), 90f)) || func_257(*uParam0))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_1255);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0xDE2D2B13F24A979D(0, 2000);
						unk_0xAFD74A5E065F57E0(iLocal_1255, 1);
						unk_0x535008C596714F9E(iLocal_1255);
						unk_0xA8E6405305C0D7DF(*uParam0, iLocal_1255);
						unk_0x02DAF06EA4F08219(&iLocal_1255);
						unk_0x56F2E1B5599188FA(*uParam0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_103(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_183(*uParam0, 1805844857, 1))
				{
					unk_0x5558ED6D4A2DEC93(*uParam0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_183(*uParam0, 1805844857, 1) && !func_183(*uParam0, 713668775, 1)) || func_257(*uParam0))
			{
				unk_0x346129B364057FF6(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 1048576000, 1, 1193033728);
			}
			break;
		
		case 4:
			switch (unk_0x56BEECB328B6D29D(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_183(*uParam0, -1519143300, 1) || func_257(*uParam0))
					{
						unk_0x2A2F7485FD2B9A29(*uParam0, -1, unk_0xBC25C936A095B5BA(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_259(int iParam0)//Position - 0x10437
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &uVar0, 1);
	fVar1 = func_102(unk_0xBC25C936A095B5BA(), *iParam0, 1);
	if (unk_0x127812AA6652253F(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0xD9C1758D86688CEA(*iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		if (unk_0x3D3F3014B0F74446(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_266(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_241(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_241(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0xBF94E62A1FA7B7F3(*iParam0, 122) || unk_0xBF94E62A1FA7B7F3(*iParam0, 123)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 124)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 22)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 23)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 86))
	{
		func_241(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_27 && func_265(4))
	{
		func_241(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_27 && func_264(*iParam0, 2))
	{
		func_241(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_27 && fVar1 < 8f) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 5))
	{
		func_241(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 11)
	{
		if (iParam0->f_27)
		{
			func_241(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_263(iParam0, 1, "HEARD_SEC_CAR", Local_46[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 6)
	{
		if (iParam0->f_27)
		{
			func_241(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_97() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 10)
	{
		if (iParam0->f_27)
		{
			func_263(iParam0, 3, "STEALING_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0xBF94E62A1FA7B7F3(*iParam0, 41)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 112)) || func_261(*iParam0, 0))
	{
		func_241(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0xBF94E62A1FA7B7F3(*iParam0, 101)) || func_261(*iParam0, 1))
	{
		func_241(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_54) && (iParam0->f_27 || iParam0->f_29)) && (fVar1 < 8f || func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) < 40f))
	{
		if (iParam0->f_27)
		{
			func_241(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_241(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_241(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_22 > -1 && iParam0->f_22 < (Local_1081 - 1))
	{
		bVar8 = Local_1081[iParam0->f_22 /*32*/].f_1E;
		switch (unk_0x56BEECB328B6D29D(&(Local_1081[iParam0->f_22 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case 152436526:
			case 600040296:
				func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_260(iParam0, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_263(iParam0, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), Local_46[func_97() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_22 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x3362CDE8460ED38B(&(iParam0->f_19), &(iParam0->f_9)))
	{
		iParam0->f_21 = 1;
	}
	else
	{
		iParam0->f_21 = 0;
	}
	iParam0->f_19 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x105601648511CC64() - iParam0->f_25) > 3000)
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x105601648511CC64() - iParam0->f_25) > 4000 && func_103(*iParam0, iParam0->f_58, 1) < 3f) && unk_0x5959E151FBDFCAB6(*iParam0))
					{
						func_241(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x105601648511CC64() - iParam0->f_25) > 4000 && !unk_0x01D780A383381D10(*iParam0))
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if ((((unk_0x105601648511CC64() - iParam0->f_26) > 8000 && func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) > 65f) && (func_102(unk_0xBC25C936A095B5BA(), *iParam0, 1) > 10f || (unk_0x105601648511CC64() - iParam0->f_26) > 16000)) && !unk_0x01D780A383381D10(*iParam0))
					{
						func_241(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) > 300f && func_102(unk_0xBC25C936A095B5BA(), *iParam0, 1) > 150f)
					{
						func_241(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_260(int iParam0, int iParam1, char* sParam2, vector3 vParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x10B5B
{
	return func_242(iParam0, iParam1, sParam2, vParam3, 0, bParam4, iParam5, bParam6);
}

int func_261(struct<110> Param0, int iParam1)//Position - 0x10B78
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_262(Param0, Local_28[iVar0 /*110*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_262(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)//Position - 0x10BAF
{
	if (unk_0x724D816EA203A79E(iParam110) && unk_0xD9C1758D86688CEA(iParam110, unk_0xBC25C936A095B5BA(), iParam220))
	{
		if (func_102(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0x5CEC84BB4AC55121(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x10BF3
{
	return func_242(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_264(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)//Position - 0x10C10
{
	if ((iParam0 != 0 && unk_0x724D816EA203A79E(iParam0)) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), iParam110) && (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0)//Position - 0x10C67
{
	if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), iParam0) && (unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F())))
	{
		return 1;
	}
	return 0;
}

int func_266(struct<110> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x10C9C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_267(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_55 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_55)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_267(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)//Position - 0x10D45
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x724D816EA203A79E(Param71) && unk_0x36CEFBE9B745A58D(Param71))
	{
		vVar0 = { unk_0x541C2AEF053615BC(Param71, false) };
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Param0, true), vVar0, true) < 10f)
		{
			if (unk_0x5CEC84BB4AC55121(Param0, Param71))
			{
				if ((unk_0x105601648511CC64() - Param71.f_67) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					iVar1 = unk_0x08AB8FFCC3668639(Param71);
					if (unk_0x386592AF38881675(iVar1))
					{
						iVar2 = unk_0x399F7937FFE4DEBF(iVar1);
						if ((iVar2 == unk_0xBC25C936A095B5BA() && !unk_0x36CEFBE9B745A58D(iVar2)) && Param0.f_27)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				iVar3 = unk_0xEF16F494406FEE60(Param71);
				if (iVar3 == joaat("weapon_unarmed") || (iVar3 != joaat("weapon_unarmed") && unk_0xFFEEDE2296E3758E(iVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_268(int iParam0)//Position - 0x10E38
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	struct<4> Var18;
	
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &uVar0, 1);
	fVar1 = func_102(unk_0xBC25C936A095B5BA(), *iParam0, 1);
	if (unk_0x127812AA6652253F(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0xD9C1758D86688CEA(*iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		if (unk_0x3D3F3014B0F74446(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_266(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_241(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_241(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0xBF94E62A1FA7B7F3(*iParam0, 122) || unk_0xBF94E62A1FA7B7F3(*iParam0, 123)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 124)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 22)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 23)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 86))
	{
		func_241(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_27 && iParam0->f_5 != 4) && func_265(4))
	{
		func_241(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_27 && func_264(*iParam0, 2))
	{
		func_241(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_27 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 5))
	{
		func_241(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 7)
	{
		if (iParam0->f_27)
		{
			func_241(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 6)
	{
		if (iParam0->f_27)
		{
			func_241(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 10)
	{
		if (iParam0->f_27)
		{
			func_263(iParam0, 3, "STEALING_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0xBF94E62A1FA7B7F3(*iParam0, 41)) || unk_0xBF94E62A1FA7B7F3(*iParam0, 112)) || func_261(*iParam0, 0))
	{
		func_241(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0xBF94E62A1FA7B7F3(*iParam0, 101)) || func_261(*iParam0, 1))
	{
		func_241(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_54) && (iParam0->f_27 || iParam0->f_29)) && (fVar1 < 8f || func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) < 40f))
	{
		if (iParam0->f_27)
		{
			func_241(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_241(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_241(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_27 || iParam0->f_29) && (iParam0->f_56 || iParam0->f_57)) && iLocal_1297 == 9) && !unk_0x3362CDE8460ED38B(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x3362CDE8460ED38B(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x3362CDE8460ED38B(&(iParam0->f_9), "CHECK_DRIVER")) && func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) < 15f)
	{
		if (iParam0->f_27)
		{
			func_263(iParam0, 1, "SEE_VAN_LEAVING", Local_46[func_97() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_29)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_97() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1297 != 9)
	{
		if ((iParam0->f_56 && (((iLocal_1297 == 0 || iLocal_1297 == 1) || iLocal_1297 == 4) || iParam0->f_5 == 1)) || (iParam0->f_57 && ((iLocal_1297 == 3 || iLocal_1297 == 2) || iLocal_1297 == 5)))
		{
			if ((iLocal_1297 == 5 || iLocal_1297 == 4) && unk_0x4833C1F1F1364989(*iParam0, iLocal_1300, 19))
			{
				switch (iLocal_1297)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_241(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_27)
			{
				switch (iLocal_1297)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_241(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_29)
			{
				func_260(iParam0, 1, "HEARD_PLAYER", unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_22 > -1 && iParam0->f_22 < (Local_1081 - 1))
	{
		bVar9 = Local_1081[iParam0->f_22 /*32*/].f_1E;
		switch (unk_0x56BEECB328B6D29D(&(Local_1081[iParam0->f_22 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_103(*iParam0, Local_1081[iParam0->f_22 /*32*/].f_17, 1) < 5f)
					{
						func_241(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_241(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0x3362CDE8460ED38B(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x3362CDE8460ED38B(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x3362CDE8460ED38B(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 152436526:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -426892158:
				if (iParam0->f_56)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_56)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -972653884:
				if (iParam0->f_57)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -520621538:
				if (iParam0->f_57)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_57)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_57)
				{
					func_260(iParam0, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 1, 0, bVar9);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_57)
				{
					func_263(iParam0, 1, &(Local_1081[iParam0->f_22 /*32*/].f_1), Local_46[func_97() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	iParam0->f_22 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x3362CDE8460ED38B(&(iParam0->f_19), &(iParam0->f_9)))
	{
		iParam0->f_21 = 1;
	}
	else
	{
		iParam0->f_21 = 0;
	}
	iParam0->f_19 = { iParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_28)
	{
		if (Local_28[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 152436526:
				case 1921975061:
				case 880647822:
				case 953441746:
				case 1518302817:
				case -1298712083:
					if ((func_273(*iParam0) || (iParam0->f_30 % 2) == 0) || !func_173(Local_29))
					{
						if ((unk_0x56BEECB328B6D29D(&(iParam0->f_9)) == 152436526 || unk_0x56BEECB328B6D29D(&(iParam0->f_9)) == 1921975061) || unk_0x56BEECB328B6D29D(&(iParam0->f_9)) == 880647822)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_GUN1") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_30 == 0)
								{
									func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_30 == 0)
								{
									func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0x56BEECB328B6D29D(&(iParam0->f_9)) == 953441746 || unk_0x56BEECB328B6D29D(&(iParam0->f_9)) == 1518302817) || unk_0x56BEECB328B6D29D(&(iParam0->f_9)) == -1298712083)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_KILL") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_30 == 0)
								{
									func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_30++;
					}
					else
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_GETSEC") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_30++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_264(*iParam0, 4))
					{
						func_241(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x105601648511CC64() - iParam0->f_25) > 1000)
					{
						func_241(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_264(*iParam0, 4))
					{
						func_241(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x105601648511CC64() - iParam0->f_25) > 15000 || (unk_0x105601648511CC64() - iParam0->f_26) > 3000) && !unk_0x01D780A383381D10(*iParam0))
					{
						func_241(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_273(*iParam0) || iParam0->f_30 == 0)
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_HND1") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_30++;
					}
					else
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_HND1") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_30 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_30++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar11)
			{
				case 1:
					if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
					{
						switch (iLocal_1280)
						{
							case 0:
								func_247(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 1:
								func_247(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 2:
								func_247(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 3:
								func_247(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 4:
								func_247(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 5:
								func_247(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 6:
								func_247(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 7:
								func_247(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 8:
								func_247(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 9:
								func_247(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 10:
								func_247(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_31)
					{
						if (func_247(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_1087, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_1087, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_31 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x3362CDE8460ED38B(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x3362CDE8460ED38B(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				vVar16 = { func_270(unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0f, 1f, 0f) - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) };
				vVar17 = { func_270(unk_0x541C2AEF053615BC(Local_28[iVar11 /*110*/], true) - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) };
				fVar14 = func_269(vVar16, vVar17);
				fVar15 = unk_0xA0C2D0D31162D0F6(fVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_273(*iParam0) && unk_0x3362CDE8460ED38B(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_LVE1") };
							func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_263(iParam0, 1, "CHECK_DRIVER", Local_46[func_97() /*8*/], 0, 1, 0);
					}
					else if (func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_241(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_273(*iParam0))
					{
						Var12 = { func_272(iVar11, "JS_VAN_LVE2") };
						func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x105601648511CC64() - iParam0->f_25) > 3000)
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar13)
					{
						if ((unk_0x105601648511CC64() - iParam0->f_25) > 2000 && !unk_0x01D780A383381D10(*iParam0))
						{
							func_241(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_263(iParam0, 1, "SEE_VAN_LEAVING_1", Local_46[func_97() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x105601648511CC64() - iParam0->f_25) > 4000 && func_103(*iParam0, iParam0->f_58, 1) < 3f) && unk_0x5959E151FBDFCAB6(*iParam0))
					{
						func_241(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_SND_INV") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x105601648511CC64() - iParam0->f_25) > 4000 && !unk_0x01D780A383381D10(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_SNDLOST2") };
							func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_SNDLOST1") };
							func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x105601648511CC64() - iParam0->f_26) > 8000 && func_103(unk_0xBC25C936A095B5BA(), vLocal_58, 1) > 65f) && (func_102(unk_0xBC25C936A095B5BA(), *iParam0, 1) > 10f || (unk_0x105601648511CC64() - iParam0->f_26) > 16000)) && !unk_0x01D780A383381D10(*iParam0))
					{
						func_241(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_273(*iParam0) && iParam0->f_23)
					{
						if (!iParam0->f_54)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_MELE_1") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_54 = 1;
						}
						else if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_MELE_2") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x105601648511CC64() - iParam0->f_25) > 4000)
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_MELE_ESC") };
							func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x105601648511CC64() - iParam0->f_25) > 2000 && iParam0->f_27) && !unk_0x01D780A383381D10(*iParam0)) && iLocal_1297 != 9) && iLocal_1297 != 10)
					{
						func_241(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_IN2") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 2000)
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_TK") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_IN1") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 2000)
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_TK") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_IN2") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x105601648511CC64() - iParam0->f_26) > 5000 && !unk_0x01D780A383381D10(*iParam0))
			{
				if (iVar11 == 1)
				{
					func_247(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1280 = 0;
				}
				func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_27)
				{
					if ((unk_0x105601648511CC64() - iParam0->f_26) > 1000 && !unk_0x01D780A383381D10(*iParam0))
					{
						if (((unk_0x3362CDE8460ED38B(&(iParam0->f_9), "ENT_FOOT") || unk_0x3362CDE8460ED38B(&(iParam0->f_9), "ENT_VEH")) || unk_0x3362CDE8460ED38B(&(iParam0->f_9), "WH_FOOT")) || unk_0x3362CDE8460ED38B(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_241(iParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((unk_0x3362CDE8460ED38B(&(iParam0->f_9), "WH_FOOT") || unk_0x3362CDE8460ED38B(&(iParam0->f_9), "WH_VEH")) || (unk_0x3362CDE8460ED38B(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x01D780A383381D10(*iParam0)))
					{
						if (((iParam0->f_68 >= 6 && iLocal_1253 != -1) && (unk_0x105601648511CC64() - iLocal_1253) > 7000) && (unk_0x105601648511CC64() - iParam0->f_26) == 0)
						{
							func_241(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0x56BEECB328B6D29D(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_273(*iParam0))
						{
							if (!iParam0->f_52)
							{
								if (func_250(iVar11))
								{
									if (!iParam0->f_53)
									{
										Var12 = { func_272(iVar11, "JS_ENT_F1") };
										func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_ENT_F1_P") };
										func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_250(iVar11))
							{
								if (!iParam0->f_53)
								{
									Var12 = { func_272(iVar11, "JS_ENT_F2") };
									func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_272(iVar11, "JS_ENT_F2_P") };
									func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_52 = 1;
						}
						else if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
						{
							if (func_250(iVar11))
							{
								if (!iParam0->f_53)
								{
									Var12 = { func_272(iVar11, "JS_ENT_F") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_272(iVar11, "JS_ENT_F_P") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_273(*iParam0) || iParam0->f_30 == 0)
						{
							if (!iParam0->f_52)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_30++;
									}
								}
								iParam0->f_52 = 1;
							}
							else if (unk_0x3362CDE8460ED38B(&(iParam0->f_11), "WH_VEH"))
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_30++;
									}
								}
							}
							else if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_ENT_V3") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_30++;
								}
							}
						}
						else if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_ENT_V3") };
								func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_273(*iParam0))
						{
							if (iParam0->f_68 == 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH2") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 1;
						}
						else if (iParam0->f_68 < 6)
						{
							if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
							{
								if (func_250(iVar11))
								{
									if (iParam0->f_68 < 5)
									{
										Var12 = { func_272(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_WH_F") };
									}
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_273(*iParam0))
						{
							if (iParam0->f_68 == 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH2") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 1;
						}
						else if (iParam0->f_68 < 6)
						{
							if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
							{
								if (func_250(iVar11))
								{
									if (iParam0->f_68 < 5)
									{
										if (((iParam0->f_68 - 1) % 2) == 0)
										{
											Var12 = { func_272(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_272(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_WH_F") };
									}
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_273(*iParam0))
						{
							if (iParam0->f_68 == 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH2") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 1;
						}
						else if (iParam0->f_68 < 6)
						{
							if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
							{
								if (func_250(iVar11))
								{
									if (iParam0->f_68 < 5)
									{
										if (((iParam0->f_68 - 1) % 2) == 0)
										{
											Var12 = { func_272(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_272(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_WH_F") };
									}
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_30 == 0)
						{
							if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 1000)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V4") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_30++;
							}
						}
						else if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 5000)
						{
							if (((iParam0->f_30 - 1) % 3) == 0)
							{
								Var12 = { func_272(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_272(iVar11, "JS_ENT_V3") };
							}
							func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_30++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_30 == 0)
						{
							if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 1000)
							{
								if (func_250(iVar11))
								{
									if (!iParam0->f_53)
									{
										Var12 = { func_272(iVar11, "JS_ENT_F3") };
										func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_ENT_F3_P") };
										func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_30++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_30 == 0)
						{
							if (func_43() && (unk_0x105601648511CC64() - iLocal_1253) > 1000)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V5") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_30++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_269(vector3 vParam0, vector3 vParam1)//Position - 0x1350A
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_270(vector3 vParam0)//Position - 0x1352B
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

void func_271(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x1356A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_32 = iVar1;
	StringCopy(&(iParam0->f_32.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_32.f_11), sParam2, 24);
	iParam0->f_32.f_1C = iParam4;
	iParam0->f_32.f_1A = fParam3;
	iParam0->f_32.f_1D = iParam5;
	iParam0->f_32.f_1E = iParam7;
	iParam0->f_32.f_1F = iParam8;
	if (bParam6)
	{
		func_244(&(iParam0->f_32), 0);
	}
}

struct<6> func_272(int iParam0, char* sParam1)//Position - 0x135E6
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_273(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)//Position - 0x13606
{
	if (Param0.f_8 || Param0.f_21)
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0)//Position - 0x13624
{
	if (unk_0x1028B6250119A74B(*iParam0, unk_0xBC25C936A095B5BA()))
	{
		iParam0->f_28 = unk_0x105601648511CC64();
		iParam0->f_27 = 1;
	}
	else if ((unk_0x105601648511CC64() - iParam0->f_28) > 2000 || !unk_0xC5B8A5F778E321DD(*iParam0, unk_0xBC25C936A095B5BA(), 90f))
	{
		iParam0->f_28 = unk_0x105601648511CC64();
		iParam0->f_27 = 0;
	}
	if (iParam0->f_27)
	{
		bLocal_1294 = false;
	}
	if (bLocal_1294)
	{
		unk_0x2E9860A2B72187F5(*iParam0, 188, true);
	}
	if (!func_275())
	{
		iParam0->f_29 = unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), *iParam0);
		if (iParam0->f_29)
		{
			iParam0->f_2B = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		}
	}
	else
	{
		iParam0->f_29 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_66 = 1;
			break;
		
		default:
			iParam0->f_66 = 0;
			break;
	}
}

int func_275()//Position - 0x136F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x724D816EA203A79E(Local_46[iVar0 /*8*/]) && unk_0xE59B7F5A03335350(Local_46[iVar0 /*8*/], 0))
		{
			if (unk_0x43A3A9130D742158(Local_46[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_276()//Position - 0x13745
{
	vector3 vVar0;
	var uVar1;
	
	unk_0xB2CB6EAA6B280A84("BUGSTAR", &iLocal_1254);
	unk_0xA902E18EDF6FA0C8(3, 1862763509, iLocal_1254);
	unk_0xA902E18EDF6FA0C8(5, iLocal_1254, 1862763509);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_1254);
	unk_0xA902E18EDF6FA0C8(1, iLocal_1254, -1533126372);
	unk_0x379ACE23D404525C(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, 1);
	unk_0xDD56BACCCF835044(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0x6C5F5B5F6894CCE3(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, false);
	if (func_187() || func_6(0))
	{
		iLocal_67 = 0;
		if (func_187())
		{
			if (Global_154ED)
			{
				iLocal_67++;
			}
		}
		if (func_187())
		{
			func_228(iLocal_67, &vVar0, &uVar1);
			func_282(vVar0, uVar1, 1, 0);
		}
		bLocal_66 = true;
	}
	else
	{
		while (!func_182(1))
		{
			SYSTEM::WAIT(0);
			func_281(&uLocal_70);
		}
	}
	func_280(&uLocal_70, "JHP1A", 0);
	func_223(&uLocal_70, "misslsdhsclipboard@base");
	func_223(&uLocal_70, "misslsdhsclipboard@idle_a");
	func_223(&uLocal_70, "misstrevor3");
	func_165(&uLocal_70, joaat("p_amb_clipboard_01"));
	func_222(&uLocal_70, iLocal_1256);
	func_224(&uLocal_70, &cLocal_59);
	unk_0x3B3C317B9102719D(unk_0xB5CEFD608600A09F(), 0.15f);
	func_278(87);
	func_40(&uLocal_1087, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	func_40(&uLocal_1087, 3, 0, "LESTER", 0, 1);
	func_246(bLocal_1252);
	func_277();
	iLocal_1256 = unk_0x5E29F9399E0829A3(vLocal_58, "po1_08_warehouseint1");
	unk_0x2625AE158F7FFBAD(&cLocal_49);
	iLocal_1302 = unk_0x1DAA351326EA3537(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0xFA9040D29FE330BD(0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_277()//Position - 0x1397D
{
	Global_154EE = 1;
}

void func_278(int iParam0)//Position - 0x1398A
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

void func_279(int iParam0)//Position - 0x13A18
{
	unk_0xF0059F27F7BB6680(&Global_15B7B, iParam0);
}

int func_280(var uParam0, char* sParam1, int iParam2)//Position - 0x13A2A
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

void func_281(var uParam0)//Position - 0x13ACE
{
	func_230(uParam0);
}

void func_282(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x13ADD
{
	if (func_187())
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
		func_186(1);
	}
}

void func_283(int iParam0)//Position - 0x13B72
{
	vector3 vVar0;
	char[] cVar1[8];
	
	if (iParam0 == 6)
	{
		func_295();
		func_8(0);
		unk_0x3857DADBD6EC8A54("JHP1A_FAIL");
		unk_0x95E4B6F3ED223F5A();
	}
	else if (!bLocal_68)
	{
		bLocal_68 = true;
		iLocal_69 = iParam0;
		switch (iLocal_69)
		{
			case 1:
				StringCopy(&vVar0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&vVar0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&vVar0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&vVar0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&vVar0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&vVar0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0xF1734B55490E9045(&cVar1))
		{
			func_293(&vVar0);
		}
		else
		{
			func_284(&vVar0, &cVar1);
		}
		unk_0x3857DADBD6EC8A54("JHP1A_FAIL");
	}
}

void func_284(char* sParam0, char* sParam1)//Position - 0x13C38
{
	func_292(sParam0, sParam1);
	func_285(0);
}

void func_285(int iParam0)//Position - 0x13C4D
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_286(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_286(int iParam0)//Position - 0x13C92
{
	int iVar0;
	int iVar1;
	
	func_291();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_290(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_287(&(Global_19B04.f_932.f_21B), iVar1);
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

void func_287(var uParam0, int iParam1)//Position - 0x13DA9
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
			if (!func_289(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_288(&(uParam0->f_8E4[iVar0]));
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

void func_288(var uParam0)//Position - 0x13F72
{
	*uParam0 = -15;
}

int func_289(int iParam0, var uParam1, float fParam2)//Position - 0x13F80
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
			return func_289(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_289(8, uParam1, fParam2);
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

void func_290(int iParam0, bool bParam1)//Position - 0x14968
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

void func_291()//Position - 0x149A6
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_160())
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
			switch (func_160())
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

void func_292(char* sParam0, char* sParam1)//Position - 0x14A93
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

void func_293(char* sParam0)//Position - 0x14AD1
{
	func_294(sParam0);
	func_285(0);
}

void func_294(char* sParam0)//Position - 0x14AE4
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

void func_295()//Position - 0x14B23
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_6(0))
	{
		if (!func_296())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_286(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_291();
		}
	}
}

int func_296()//Position - 0x14B94
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

