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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	struct<22> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_96[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 12;
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
	var uLocal_790 = 1065353216;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	vector3 vLocal_793 = { 0f, 0f, 0f };
	float fLocal_794 = 0f;
	var uLocal_795 = 16;
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
	bool bLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	int iLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	float fLocal_966 = 0f;
	float fLocal_967 = 0f;
	float fLocal_968 = 0f;
	float fLocal_969 = 0f;
	struct<21> Local_970 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_963 = 15000;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_142(ScriptParam_970))
		{
			func_137();
		}
	}
	while (true)
	{
		func_136();
		if (func_126())
		{
			func_137();
		}
		if (unk_0x2F7EEEA6378AC19B() != bLocal_960)
		{
			func_137();
		}
		switch (func_125(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_124() == 1)
				{
					func_123();
					func_122();
					vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 1;
				}
				else if (func_124() == 4)
				{
					vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_95();
				if (func_124() == 1)
				{
					func_69();
				}
				else if (func_124() == 4)
				{
					vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				if (func_67(Local_95.f_2))
				{
					if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1), 200f, 200f, 200f, 0, 1, 0))
					{
						vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_66(&(Local_95.f_12));
				if (func_65(&(Local_95.f_12)))
				{
					vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 4;
			
			case 4:
				func_137();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_124())
			{
				case 0:
					if (func_63(&(Local_95.f_10), 10000, 0))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_95, 12))
						{
							Local_95.f_4 = unk_0xB5CEFD608600A09F();
							Local_95.f_5 = func_62();
							Local_95.f_A = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) + Vector(0f, 5f, 0f) };
							Local_95.f_7 = { func_60(Local_95.f_5) };
							unk_0xF0059F27F7BB6680(&Local_95, 12);
						}
						if (func_35())
						{
							func_123();
							Local_95.f_1 = 1;
						}
					}
					func_31();
					break;
				
				case 1:
					func_30();
					func_29();
					func_27();
					func_31();
					if (func_1())
					{
						Local_95.f_1 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x266
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x27A
{
	var uVar0;
	var uVar1;
	
	if (func_26())
	{
		if (Local_95.f_15 >= 0 || Local_95.f_15 <= 3)
		{
			func_6(func_20(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_95.f_15 >= 0 || Local_95.f_15 <= 3)
	{
		if (unk_0x7FFE36DB9042AF23(Local_95.f_2))
		{
			if (!func_67(Local_95.f_2))
			{
				if (unk_0xDF6ED6F322C4F404(Local_95.f_2, &uVar0) == unk_0xB5CEFD608600A09F())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (unk_0x7FFE36DB9042AF23(Local_95.f_3))
		{
			if (func_4(Local_95.f_3))
			{
				if (unk_0xDF6ED6F322C4F404(Local_95.f_3, &uVar1) == unk_0xB5CEFD608600A09F())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)//Position - 0x34E
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

int func_4(int iParam0)//Position - 0x398
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

void func_5(int iParam0, int iParam1)//Position - 0x3B7
{
	if (Global_252E21.f_F1F[iParam0] < iParam1)
	{
		Global_252E21.f_F1F[iParam0] = iParam1;
	}
	unk_0xF0059F27F7BB6680(&(Global_252E21.f_F1E), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3E9
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_19(iParam1), 16);
	StringCopy(&Var1, func_18(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
	}
	if (func_17())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_41092C[iVar3 /*80*/].f_8.f_2B = { Var0 };
		Global_41092C[iVar3 /*80*/].f_8.f_2F = { Var1 };
	}
	else
	{
		unk_0xFCB169DE2DC9317A(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x565
{
	int iVar0;
	
	if (!func_17())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xA2B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_17())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_14(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBCF
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0xC07
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_17())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_11(var uParam0)//Position - 0xC59
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
	func_12(&(uParam0->f_8.f_3));
	func_12(&(uParam0->f_8.f_10));
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

void func_12(var uParam0)//Position - 0xD4B
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

int func_13(int iParam0)//Position - 0xD93
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1)//Position - 0xDBB
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_15(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xDCF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_17())
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

int func_16()//Position - 0xEC8
{
	return Global_1407E0;
}

int func_17()//Position - 0xED4
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

char* func_18(int iParam0)//Position - 0xEEB
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_19(int iParam0)//Position - 0xF74
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

int func_20(int iParam0)//Position - 0x104C
{
	int iVar0;
	
	iVar0 = 0;
	if (func_25(iParam0) >= 0)
	{
		iVar0 = func_25(iParam0);
	}
	else
	{
		iVar0 = func_21(iParam0);
	}
	return iVar0;
}

int func_21(int iParam0)//Position - 0x1076
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_22())
			{
				return 0;
			}
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 1)
			{
				return 200;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 2)
			{
				return 400;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 3)
			{
				return 600;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 4)
			{
				return 800;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_22()//Position - 0x1288
{
	return unk_0xFA30DFD0084E92FE(func_23(6420, -1, 0), 19);
}

int func_23(int iParam0, int iParam1, int iParam2)//Position - 0x129F
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_24(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_24(var uParam0)//Position - 0x12D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

int func_25(int iParam0)//Position - 0x1305
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_1794;
			break;
		
		case 10:
			return Global_40001.f_1015;
			break;
		
		case 11:
			return Global_40001.f_1016;
			break;
		
		case 8:
			return Global_40001.f_1013;
			break;
		
		case 0:
			return Global_40001.f_1005;
			break;
		
		case 9:
			return Global_40001.f_1014;
			break;
		
		case 13:
			return Global_40001.f_1018;
			break;
		
		case 12:
			return Global_40001.f_1017;
			break;
		
		case 2:
			return Global_40001.f_100F;
			break;
		
		case 14:
			return Global_40001.f_1019;
			break;
		
		case 20:
			if (func_22())
			{
				return 0;
			}
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 1)
			{
				return Global_40001.f_179B;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 2)
			{
				return Global_40001.f_179C;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 3)
			{
				return Global_40001.f_179D;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 4)
			{
				return Global_40001.f_179E;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 5)
			{
				return Global_40001.f_179F;
			}
			break;
		
		case 6:
			return Global_40001.f_1012;
			break;
		
		case 22:
			return Global_40001.f_101F;
			break;
		
		case 23:
			return Global_40001.f_1020;
			break;
		
		case 24:
			return Global_40001.f_1021;
			break;
		
		case 25:
			return Global_40001.f_1022;
			break;
		
		case 26:
			return Global_40001.f_1023;
			break;
		
		case 35:
			return Global_40001.f_19D4;
			break;
		
		case 15:
			return Global_40001.f_1795;
			break;
		
		case 17:
			return Global_40001.f_1795;
			break;
		
		case 18:
			return Global_40001.f_1795;
			break;
		
		case 19:
			return Global_40001.f_1795;
			break;
		
		case 21:
			return Global_40001.f_1795;
			break;
		
		case 36:
			return Global_40001.f_1BA5;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_40001.f_2FE5;
			break;
		
		case 41:
			return Global_40001.f_2FE6;
			break;
		
		case 42:
			return Global_40001.f_2FE7;
			break;
		
		case 43:
			return Global_40001.f_39D4;
			break;
		
		case 44:
			return Global_40001.f_39D6;
			break;
		
		case 57:
			return Global_40001.f_1021;
			break;
	}
	return 0;
}

bool func_26()//Position - 0x15D7
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

void func_27()//Position - 0x15EE
{
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return;
	}
	if (Local_95.f_14 != 7)
	{
		if (func_4(Local_95.f_3) || !func_67(Local_95.f_2))
		{
			Local_95.f_14 = 7;
		}
		else if (!unk_0x62F3A07C43FFB568(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0))
		{
			Local_95.f_14 = 7;
		}
	}
	if (!func_4(Local_95.f_3) && func_67(Local_95.f_2))
	{
		if (Local_95.f_14 != 1)
		{
			if (unk_0x8D66276473ABD7CC(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) <= 600 || unk_0x8D66276473ABD7CC(unk_0xE48AD7BF7762E114(Local_95.f_3)) <= 150)
			{
				Local_95.f_14 = 1;
			}
		}
		switch (Local_95.f_14)
		{
			case 2:
				if (Local_95.f_15 == 3)
				{
					Local_95.f_14 = 4;
				}
				else if (Local_95.f_15 == 5)
				{
					Local_95.f_14 = 7;
				}
				else if (!unk_0xFA30DFD0084E92FE(Local_95, 7) && unk_0xE642C1AC73CE364E(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_14 = 3;
				}
				break;
			
			case 4:
				unk_0xF0059F27F7BB6680(&iLocal_97, 8);
				if (unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) <= 0)
				{
					Local_95.f_14 = 3;
					unk_0x7CB6FD92BE491AD9(&iLocal_97, 8);
				}
				else if (!unk_0xFA30DFD0084E92FE(Local_95, 7) && unk_0x4DBCE270B354E123(unk_0xE48AD7BF7762E114(Local_95.f_3), Local_95.f_7, 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_14 = 5;
				}
				break;
			
			case 5:
				if ((unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) <= 0 && !unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2))) && func_28(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_14 = 6;
				}
				break;
			
			case 3:
				if (unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) >= 1)
				{
					Local_95.f_14 = 4;
				}
				break;
			
			case 6:
				if ((unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) <= 0 && !unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2))) && func_28(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1) >= 10f)
				{
					if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), 242628503) == 1)
					{
						Local_95.f_14 = 7;
					}
				}
				break;
			
			case 1:
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), 242628503) == 1 && func_28(unk_0xBC25C936A095B5BA(), unk_0xE48AD7BF7762E114(Local_95.f_3), 1) >= 10f)
				{
					Local_95.f_14 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_28(int iParam0, int iParam1, bool bParam2)//Position - 0x1888
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

void func_29()//Position - 0x18E6
{
	switch (Local_95.f_15)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(Local_95, 8) || unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) > 0)
			{
				Local_95.f_15 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7FFE36DB9042AF23(Local_95.f_2))
			{
				if (unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) > 0)
				{
					Local_95.f_15 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) > 0)
			{
				Local_95.f_15 = 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Local_95, 10))
			{
				Local_95.f_15 = 4;
			}
			break;
		
		case 3:
			if (unk_0x7FFE36DB9042AF23(Local_95.f_2))
			{
				if (unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) <= 0)
				{
					Local_95.f_15 = 1;
				}
				else if (unk_0xFA30DFD0084E92FE(Local_95, 10))
				{
					Local_95.f_15 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x7FFE36DB9042AF23(Local_95.f_2))
			{
				if ((unk_0x5168CF98709EAA95(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) <= 0 && !unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2))) && func_28(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_15 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_30()//Position - 0x1A1F
{
	int iVar0;
	int iVar1;
	
	unk_0x7CB6FD92BE491AD9(&Local_95, 9);
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_67(Local_95.f_2))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_95, 8))
					{
						if (unk_0x4DBCE270B354E123(unk_0x19D7F09C2FABDDA0(Local_95.f_2), Local_95.f_A, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
						{
							unk_0xF0059F27F7BB6680(&Local_95, 8);
						}
					}
					if (!unk_0xFA30DFD0084E92FE(Local_95, 7) || unk_0xFA30DFD0084E92FE(Local_95, 11))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_95, 10))
						{
							if (unk_0x4DBCE270B354E123(unk_0x19D7F09C2FABDDA0(Local_95.f_2), Local_95.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
							{
								unk_0xF0059F27F7BB6680(&Local_95, 10);
							}
						}
					}
					if (!unk_0xFA30DFD0084E92FE(Local_95, 9))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_96[iVar0 /*3*/].f_1, 6))
						{
							unk_0xF0059F27F7BB6680(&Local_95, 9);
							unk_0x7CB6FD92BE491AD9(&(vLocal_96[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_95.f_14 != 3)
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_96[iVar0 /*3*/].f_1, 5))
						{
							Local_95.f_14 = 3;
							unk_0x7CB6FD92BE491AD9(&(vLocal_96[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_31()//Position - 0x1B81
{
	vector3 vVar0;
	var uVar1;
	
	if ((Local_95.f_15 <= 2 || Local_95.f_14 == 2) || Local_95.f_14 == 3)
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		if ((!unk_0x7AC7E3A8F843B334(vVar0, &uVar1) || func_33()) || func_32())
		{
			Local_95.f_1 = 4;
		}
	}
}

int func_32()//Position - 0x1BDE
{
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x1C86
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), func_34(iVar0), 50f, 50f, 50f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x1CC9
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		
		case 1:
			return 1551.805f, 6686.052f, 0f;
		
		case 2:
			return 3260.507f, 5309.454f, 0f;
		
		case 3:
			return 3788.334f, 3812.693f, 0f;
		
		case 4:
			return 2945.665f, 1773.192f, 0f;
		
		case 5:
			return 2866.816f, -658.5848f, 0f;
		
		case 6:
			return 2342.881f, -2167.953f, 0f;
		
		case 7:
			return 1215.167f, -2728.054f, 0f;
		
		case 8:
			return 1305.229f, -3364.572f, 0f;
		
		case 9:
			return 293.8953f, -3361.616f, 0f;
		
		case 10:
			return -484.948f, -2940.643f, 0f;
		
		case 11:
			return -1387.61f, -1704.374f, 0f;
		
		case 12:
			return -1566.04f, -1312.232f, 0f;
		
		case 13:
			return -1920.23f, -849.6466f, 0f;
		
		case 14:
			return -2876.76f, -74.3269f, 0f;
		
		case 15:
			return -3133.45f, 604.7179f, 0f;
		
		case 16:
			return -3286.57f, 1285.372f, 0f;
		
		case 17:
			return -3205.53f, 3285.199f, 0f;
		
		case 18:
			return -2520.42f, 4240.671f, 0f;
		
		case 19:
			return -909.632f, 5830.909f, 0f;
		
		case 20:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_35()//Position - 0x1E87
{
	if (unk_0x16CC0D3F6523391B(1, 1, 0, 0))
	{
		if (func_59(joaat("dinghy2")) && func_59(joaat("s_m_y_blackops_01")))
		{
			if (func_38() && func_36())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_36()//Position - 0x1EC9
{
	if ((!unk_0x7FFE36DB9042AF23(Local_95.f_3) && func_59(joaat("s_m_y_blackops_01"))) && unk_0x7FFE36DB9042AF23(Local_95.f_2))
	{
		if (func_67(Local_95.f_2))
		{
			if (func_37(&(Local_95.f_3), Local_95.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_95.f_3), 0, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_95.f_3), 2, 1, 0, 0);
				unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_95.f_3), 3, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_95.f_3), 4, 0, 2, 0);
				unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_95.f_3), 8, 1, 0, 0);
				unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_95.f_3), 9, 0, 0, 0);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 0)
				{
					unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_95.f_3), Global_180791);
				}
				else
				{
					unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_95.f_3), Global_180654[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_95.f_3), 1);
				unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_95.f_3), 1);
				unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_95.f_3), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
				unk_0x0130A557FECA322C(unk_0xE48AD7BF7762E114(Local_95.f_3), 0);
				unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_95.f_3), 255, true);
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_95.f_3))
	{
		return 0;
	}
	unk_0x2CA123B0622F495C(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_37(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x202D
{
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	if (!unk_0x7FFE36DB9042AF23(iParam1))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x5902CDB733CD6ADE(unk_0xFD8987C090669BD5(unk_0x19D7F09C2FABDDA0(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(unk_0xE48AD7BF7762E114(*uParam0), iParam7);
		if (unk_0x270072584099CC42(unk_0xE48AD7BF7762E114(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x20B5
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (!unk_0x7FFE36DB9042AF23(Local_95.f_2))
	{
		if (func_59(joaat("dinghy2")))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_97, 10))
			{
				func_56(&vLocal_793, &fLocal_794);
				if (unk_0xD841AD3F7B98FC00(vLocal_793 + Vector(2f, 0f, 0f), vLocal_793 - Vector(10f, 0f, 0f), &vLocal_793))
				{
					if (func_40(vLocal_793, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar2 = { vLocal_793 + Vector(12f, 0f, 0f) };
						iLocal_791 = unk_0x214FB3B40BB28D3C(vVar2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_791 == 0)
						{
							return 0;
						}
						else
						{
							unk_0xF0059F27F7BB6680(&iLocal_97, 10);
						}
					}
				}
			}
			else if (unk_0xB0695CD48A28A3A9(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_791 = 0;
				if (iLocal_792 == 0)
				{
					if (func_39(&(Local_95.f_2), joaat("dinghy2"), vLocal_793, fLocal_794, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x6364EF367CF6875E(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1);
						unk_0x2D655AA68FA1736B(unk_0x19D7F09C2FABDDA0(Local_95.f_2), true, 1, 0);
						unk_0xA4DFFFD5B234240D(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 12f);
						unk_0xD7E19B03E0EB54E5(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1);
						unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0);
					}
				}
				else
				{
					iLocal_792 = 0;
					unk_0x7CB6FD92BE491AD9(&iLocal_97, 10);
				}
			}
			else if (unk_0xB0695CD48A28A3A9(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_791 = 0;
				unk_0x7CB6FD92BE491AD9(&iLocal_97, 10);
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_95.f_2))
	{
		return 0;
	}
	unk_0x2CA123B0622F495C(joaat("dinghy2"));
	return 1;
}

int func_39(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x224A
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

int func_40(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x2344
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
		if (func_49(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_41(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_41(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x2455
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_45(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_3(iVar1, 1, 1))
		{
			if (!func_43(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_42(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
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
								if (unk_0xF0F2FC9DE291567F(func_45(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0xF0F2FC9DE291567F(func_45(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_42(int iParam0)//Position - 0x260C
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

bool func_43(int iParam0, int iParam1)//Position - 0x2637
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_44(-1, 0) == 8;
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

int func_44(int iParam0, bool bParam1)//Position - 0x2682
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

Vector3 func_45(int iParam0)//Position - 0x26C3
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_47(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_46(iParam0);
}

Vector3 func_46(int iParam0)//Position - 0x2716
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_47(vector3 vParam0)//Position - 0x2729
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_48()//Position - 0x2753
{
	return Global_255A46.f_10;
}

int func_49(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2761
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_42(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_50(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_46(iVar1), vParam0, true) < fParam1)
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

int func_50(int iParam0)//Position - 0x285D
{
	if (func_55(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_54(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_51(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x28A4
{
	int iVar0;
	
	iVar0 = func_53(iParam0);
	if (!iVar0 == func_52())
	{
		if (iVar0 == func_53(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()//Position - 0x28CF
{
	return -1;
}

int func_53(int iParam0)//Position - 0x28D8
{
	if (iParam0 != func_52())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_52();
}

struct<13> func_54(int iParam0)//Position - 0x28FB
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_55(int iParam0, int iParam1)//Position - 0x2912
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_54(iParam0) };
		Global_26211A = { func_54(iParam1) };
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

void func_56(var uParam0, var uParam1)//Position - 0x297F
{
	*uParam0 = { func_57(Local_95.f_A, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0xFDC254CE02DB0919((Local_95.f_A - *uParam0), (Local_95.f_A.f_1 - uParam0->f_1));
}

Vector3 func_57(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x29C0
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x55AEFCD285ECC0F2(-1f, 1f), unk_0x55AEFCD285ECC0F2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_58(vVar0, unk_0x55AEFCD285ECC0F2(fParam1, fParam2)) };
	vVar0.z = unk_0x55AEFCD285ECC0F2(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_58(vector3 vParam0, float fParam1)//Position - 0x2A09
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_59(int iParam0)//Position - 0x2A40
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

Vector3 func_60(int iParam0)//Position - 0x2A5E
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = unk_0xF0F2FC9DE291567F(Local_95.f_A, func_34(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_D = { Local_95.f_A, 8000f, 0f };
			return vVar2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = unk_0xF0F2FC9DE291567F(Local_95.f_A, func_34(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_D = { 5000f, Local_95.f_A.f_1, 0f };
			return vVar2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = unk_0xF0F2FC9DE291567F(Local_95.f_A, func_34(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_D = { Local_95.f_A, -5000f, 0f };
			return vVar2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = unk_0xF0F2FC9DE291567F(Local_95.f_A, func_34(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_34(iVar1) };
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_6 = func_61(iVar1);
			Local_95.f_D = { -5000f, Local_95.f_A.f_1, 0f };
			return vVar2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_61(int iParam0)//Position - 0x2C57
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		
		case 1:
			return 186.4808f;
		
		case 2:
			return 65.4787f;
		
		case 3:
			return 56.421f;
		
		case 4:
			return 76.4749f;
		
		case 5:
			return 79.1503f;
		
		case 6:
			return 24.8224f;
		
		case 7:
			return 27.7851f;
		
		case 8:
			return 32.1401f;
		
		case 9:
			return 329.6803f;
		
		case 10:
			return 328.7837f;
		
		case 11:
			return 283.9666f;
		
		case 12:
			return 295.5786f;
		
		case 13:
			return 314.4354f;
		
		case 14:
			return 0.4088f;
		
		case 15:
			return 287.0804f;
		
		case 16:
			return 249.5385f;
		
		case 17:
			return 270.7522f;
		
		case 18:
			return 260.8947f;
		
		case 19:
			return 248.4225f;
		
		case 20:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_62()//Position - 0x2D91
{
	vector3 vVar0;
	
	vVar0 = { func_46(unk_0xB5CEFD608600A09F()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

int func_63(var uParam0, int iParam1, bool bParam2)//Position - 0x2E07
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_64(uParam0, bParam2, 0);
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

void func_64(var uParam0, bool bParam1, bool bParam2)//Position - 0x2E65
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

int func_65(var uParam0)//Position - 0x2EAA
{
	if (uParam0->f_1)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_66(var uParam0)//Position - 0x2ED3
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_64(uParam0, 0, 0);
		}
	}
}

int func_67(int iParam0)//Position - 0x2EF2
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return !func_68(unk_0x19D7F09C2FABDDA0(iParam0));
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x2F12
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_69()//Position - 0x2F4B
{
	if (func_3(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (Local_95.f_15 == 5)
		{
			vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 5;
		}
		switch (vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2)
		{
			case 0:
				func_92();
				if (Local_95.f_15 > 0)
				{
					vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_67(Local_95.f_2))
				{
					func_122();
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0))
					{
						func_91();
						vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 3;
						unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
						unk_0x7CB6FD92BE491AD9(&(vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_67(Local_95.f_2))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0))
					{
						vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 3;
						unk_0x7CB6FD92BE491AD9(&(vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_1), 5);
						unk_0xF0059F27F7BB6680(&(vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_1), 6);
						if (Local_95.f_15 >= 4)
						{
							vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_67(Local_95.f_2))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0))
					{
						if (Local_95.f_15 >= 4)
						{
							vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 4;
						}
						func_90();
					}
					else
					{
						vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_67(Local_95.f_2))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_97, 3))
					{
						if (unk_0x8910237449BB6F79(unk_0x19D7F09C2FABDDA0(Local_95.f_2)) < 3f)
						{
							unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
							unk_0xF0059F27F7BB6680(&iLocal_97, 3);
						}
					}
					if ((!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0) && !unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2))) && func_28(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1) >= 10f)
					{
						vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_137();
				break;
		}
		func_70();
	}
}

void func_70()//Position - 0x3157
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0xA7F138B5B1AB2CF6(iLocal_103))
	{
		if (func_85(1, 1))
		{
			if (((vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 1 || vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 2) || vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 3) || vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_84() };
				func_82(&uLocal_104);
				if (vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 1)
				{
					if (func_67(Local_95.f_2))
					{
						if ((unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 10f, 10f, 3f, 0, 1, 0) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !func_81(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0))
						{
							func_80(unk_0xE57EAD1FEA2A6FAF(2, 23, true), "BTX_ENTER", &uLocal_104, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_90();
					func_79(1);
					func_71(&iLocal_103, &Var1, &uLocal_104, func_78(&uLocal_104));
				}
			}
		}
	}
	else
	{
		iLocal_103 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
	}
}

void func_71(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3269
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x8A0D8839261BAEEF(2))
	{
		*uParam2 = 0;
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(false);
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(*iParam0, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
		}
		func_77(uParam2);
	}
	if (Global_14136C < 2)
	{
		func_76(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			*iParam0 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
		}
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			unk_0x4523F5B652CA041D(*iParam0, "CLEAR_ALL");
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_2A8)
			{
				if (unk_0xFA30DFD0084E92FE(uParam2->f_2A4, iVar0))
				{
					unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar0);
					if (!unk_0xFA30DFD0084E92FE(uParam2->f_2A5, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_35;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_36;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_37;
						func_75(unk_0xE57EAD1FEA2A6FAF(iVar1, iVar2, true));
						if (iVar3 < 358)
						{
							func_75(unk_0xE57EAD1FEA2A6FAF(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_35;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_36;
						func_75(unk_0xC7CF72D26EA6A227(iVar4, iVar5, true));
					}
					if (unk_0xFA30DFD0084E92FE(uParam2->f_2A2, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_20));
						if (uParam2->f_2A9 == iVar0)
						{
							unk_0x4C36886AAFD04CF8(uParam2->f_1[iVar0 /*56*/].f_24, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(uParam2->f_1[iVar0 /*56*/].f_24);
						}
						unk_0x64989E60CF560CA1();
					}
					else if (unk_0xFA30DFD0084E92FE(uParam2->f_2A3, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_20));
						unk_0x607C19B90D297FE2(&(uParam2->f_1[iVar0 /*56*/].f_25));
						unk_0x64989E60CF560CA1();
					}
					else
					{
						func_74(&(uParam2->f_1[iVar0 /*56*/].f_20));
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (unk_0xFA30DFD0084E92FE(uParam2->f_2A6, iVar0))
						{
							unk_0x5E5DBD0A6623969E(true);
							unk_0x1E1FB49121565EB6(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(false);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar0);
					func_75(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xF1734B55490E9045(&(uParam2->f_1[iVar0 /*56*/].f_10)))
					{
						func_75(&(uParam2->f_1[iVar0 /*56*/].f_10));
					}
					if (unk_0xFA30DFD0084E92FE(uParam2->f_2A2, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_20));
						if (uParam2->f_2A9 == iVar0)
						{
							unk_0x4C36886AAFD04CF8(uParam2->f_1[iVar0 /*56*/].f_24, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(uParam2->f_1[iVar0 /*56*/].f_24);
						}
						unk_0x64989E60CF560CA1();
					}
					else if (unk_0xFA30DFD0084E92FE(uParam2->f_2A3, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_20));
						unk_0x607C19B90D297FE2(&(uParam2->f_1[iVar0 /*56*/].f_25));
						unk_0x64989E60CF560CA1();
					}
					else
					{
						func_74(&(uParam2->f_1[iVar0 /*56*/].f_20));
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						unk_0x5E5DBD0A6623969E(false);
						unk_0x1E1FB49121565EB6(358);
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar0++;
			}
			unk_0x29CD142125FE177B(*iParam0, "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88(uParam2->f_2AE);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1E1FB49121565EB6(0);
			unk_0xF9FBC2F3F73D94C9();
			*uParam2 = 1;
		}
	}
	uParam2->f_2AA = 0.05f;
	uParam2->f_2AB = 0.045f;
	uParam2->f_2AC = 0f;
	uParam2->f_2AD = 0f;
	if (*uParam2 == 1)
	{
		func_73(*iParam0, uParam1);
	}
	func_72();
}

void func_72()//Position - 0x35E7
{
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
}

void func_73(int iParam0, var uParam1)//Position - 0x3605
{
	unk_0x4B6031094354FED6(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_74(char* sParam0)//Position - 0x3624
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_75(char* sParam0)//Position - 0x3636
{
	unk_0xCB30200B8055CA57(sParam0);
}

void func_76(int iParam0)//Position - 0x3644
{
	Global_14136C = iParam0;
}

void func_77(var uParam0)//Position - 0x3652
{
	uParam0->f_2A7 = 0;
}

int func_78(var uParam0)//Position - 0x3660
{
	return uParam0->f_2A7;
}

void func_79(int iParam0)//Position - 0x366D
{
	Global_14D262.f_437 = iParam0;
}

void func_80(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x367E
{
	int iVar0;
	
	if (uParam2->f_2A8 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_2A8;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_10), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_20), sParam1, 16);
	uParam2->f_2A8++;
}

int func_81(int iParam0, bool bParam1)//Position - 0x36CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar1 = unk_0x524ABB0435146845(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x1AAF0C23233C57AF(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0x3187EF5798B5D209(iParam0, (iVar0 - 1), 0);
				if (unk_0x36CEFBE9B745A58D(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_82(var uParam0)//Position - 0x3734
{
	func_83(uParam0);
	uParam0->f_2A7 = 1;
}

void func_83(var uParam0)//Position - 0x3748
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_10), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_20), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_24 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_25), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_35 = 2;
		uParam0->f_1[iVar0 /*56*/].f_36 = 358;
		uParam0->f_1[iVar0 /*56*/].f_37 = 358;
		iVar0++;
	}
	uParam0->f_2A2 = 0;
	uParam0->f_2A3 = 0;
	uParam0->f_2A4 = 0;
	uParam0->f_2A6 = 0;
	uParam0->f_2A5 = 0;
	uParam0->f_2A7 = 0;
	uParam0->f_2A8 = 0;
	uParam0->f_2AA = 0f;
	uParam0->f_2AB = 0f;
	uParam0->f_2AC = 0f;
	uParam0->f_2AD = 0f;
	uParam0->f_2AE = 1f;
}

struct<9> func_84()//Position - 0x3818
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_85(int iParam0, int iParam1)//Position - 0x385C
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_89())
		{
			return 0;
		}
	}
	if (func_26())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_88(0))
		{
			return 0;
		}
	}
	if (func_87(8, -1))
	{
		return 0;
	}
	if (unk_0x14973A77EAB7E05A())
	{
		return 0;
	}
	if (func_86())
	{
		return 0;
	}
	if (Global_CF9C)
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (Global_14080E)
	{
		return 0;
	}
	if (Global_18051B)
	{
		return 0;
	}
	return 1;
}

bool func_86()//Position - 0x38F8
{
	return Global_140856;
}

bool func_87(int iParam0, int iParam1)//Position - 0x3904
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

int func_88(int iParam0)//Position - 0x393F
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

bool func_89()//Position - 0x3999
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_90()//Position - 0x39AE
{
	Global_269AA6.f_102 = 1;
}

void func_91()//Position - 0x39BE
{
	if (unk_0x2DA8CA50A72528FB(iLocal_99))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_99);
	}
}

void func_92()//Position - 0x39D5
{
	int iVar0;
	
	if (!unk_0xF16DAFF595E80F7C())
	{
		iVar0 = func_23(1190, -1, 0);
		if (!unk_0xFA30DFD0084E92FE(iVar0, 15))
		{
			func_94("BTX_HELP1", -1);
			unk_0xF0059F27F7BB6680(&iVar0, 15);
			func_93(1190, iVar0, -1, 1, 0);
		}
	}
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3A19
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_24(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_94(char* sParam0, int iParam1)//Position - 0x3A49
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_95()//Position - 0x3A60
{
	if (!func_4(Local_95.f_3) && func_67(Local_95.f_2))
	{
		if (unk_0x89B5CBCE9D131B32(Local_95.f_3) || (!unk_0xDD5EE7D9FC37FA16(Local_95.f_3) && unk_0x0DE6397A2CB3EF75()))
		{
			func_120();
			func_99();
			if (func_98(Local_95.f_3))
			{
				unk_0x2E9860A2B72187F5(unk_0xE48AD7BF7762E114(Local_95.f_3), 323, 1);
			}
			switch (Local_95.f_14)
			{
				case 0:
					break;
				
				case 2:
					if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), -1273030092) != 0)
					{
						unk_0xF0CB7B9A194B76C2(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_97(unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0), Local_95.f_7);
					unk_0x4B656426561BA934(fLocal_966, fLocal_968, fLocal_967, fLocal_969);
					if (unk_0x37718415CE714A5B(fLocal_966, fLocal_968, fLocal_967, fLocal_969))
					{
						if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), 242628503) != 0)
						{
							unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_95.f_3), uLocal_102);
						}
					}
					break;
				
				case 5:
					if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), -1273030092) != 0)
					{
						unk_0x827661D9AAD4A354(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0x19D7F09C2FABDDA0(Local_95.f_2), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), -1273030092) != 0)
					{
						unk_0x827661D9AAD4A354(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0x19D7F09C2FABDDA0(Local_95.f_2), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_95.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!unk_0xFA30DFD0084E92FE(vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_1, 7))
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2)))
						{
							unk_0x63ECE17EEAC84602(unk_0xE48AD7BF7762E114(Local_95.f_3), 0);
							unk_0x508DCA0082E9A457(unk_0xE48AD7BF7762E114(Local_95.f_3), 0);
							unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_3), 2, false);
							unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_95.f_3), uLocal_100);
						}
						else
						{
							unk_0x63ECE17EEAC84602(unk_0xE48AD7BF7762E114(Local_95.f_3), 0);
							unk_0x508DCA0082E9A457(unk_0xE48AD7BF7762E114(Local_95.f_3), 0);
							unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_3), 2, true);
							unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_95.f_3), uLocal_101);
						}
						unk_0xF0059F27F7BB6680(&(vLocal_96[unk_0x6BAA0516CC970D99() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_95.f_3), 242628503) != 0)
					{
						unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_95.f_3), uLocal_101);
					}
					break;
				
				case 7:
					if (unk_0x7FFE36DB9042AF23(Local_95.f_2))
					{
						func_96(&(Local_95.f_2));
					}
					if (unk_0x7FFE36DB9042AF23(Local_95.f_3))
					{
						unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_95.f_3), 1);
						func_96(&(Local_95.f_3));
					}
					break;
				}
			}
	}
}

void func_96(var uParam0)//Position - 0x3DC7
{
	int iVar0;
	
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0x91BCA7FA73FFCDF2(&iVar0);
	}
}

void func_97(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x3DEB
{
	if (Param0 < Param2)
	{
		fLocal_966 = (Param0 - 25f);
		fLocal_967 = (Param2 + 25f);
	}
	else if (Param0 > Param2)
	{
		fLocal_966 = (Param2 - 25f);
		fLocal_967 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_968 = (Param0.f_1 - 25f);
		fLocal_969 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_968 = (Param2.f_1 - 25f);
		fLocal_969 = (Param0.f_1 + 25f);
	}
}

int func_98(int iParam0)//Position - 0x3E81
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
		return unk_0x89B5CBCE9D131B32(iParam0);
	}
	return 0;
}

void func_99()//Position - 0x3EA3
{
	int iVar0;
	struct<2> Var1;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_97, 4))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), unk_0xE48AD7BF7762E114(Local_95.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
				unk_0xF0059F27F7BB6680(&iLocal_97, 4);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_97, 6))
	{
		if (Local_95.f_14 == 4)
		{
			func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
				unk_0xF0059F27F7BB6680(&iLocal_97, 6);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_97, 5))
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_95.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0, 1, 0))
		{
			func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
				unk_0xF0059F27F7BB6680(&iLocal_97, 5);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_97, 7))
	{
		if (Local_95.f_14 == 5)
		{
			func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
				unk_0xF0059F27F7BB6680(&iLocal_97, 7);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_97, 8))
	{
		func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
			unk_0xF0059F27F7BB6680(&iLocal_97, 8);
		}
	}
	if (Local_95.f_14 == 3)
	{
		if (func_63(&uLocal_961, 30000, 0))
		{
			func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_103(&uLocal_795, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
				func_102(&uLocal_961, 0, 0);
			}
		}
	}
	if (Local_95.f_14 == 4)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) <= 0)
		{
			if (func_63(&uLocal_964, iLocal_963, 0))
			{
				iVar0 = unk_0x491B2241281A03B7(0, 17);
				StringCopy(&Var1, "", 16);
				if (!unk_0xFA30DFD0084E92FE(iLocal_98, iVar0))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0xF1734B55490E9045(&Var1))
					{
						func_119(&uLocal_795, 8, unk_0xE48AD7BF7762E114(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_103(&uLocal_795, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_102(&uLocal_964, 0, 0);
							unk_0xF0059F27F7BB6680(&iLocal_98, iVar0);
							unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 5000, 0, 2);
							iLocal_963 = (unk_0x491B2241281A03B7(20000, 30001) + iVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_95.f_3))
	{
		if (func_67(Local_95.f_2))
		{
			if (!unk_0x9986AD62CA3DE747(unk_0xE48AD7BF7762E114(Local_95.f_3)) && !unk_0xFC1C3D17D4EAE767(unk_0xE48AD7BF7762E114(Local_95.f_3)))
			{
				if (unk_0xD9C1758D86688CEA(unk_0x19D7F09C2FABDDA0(Local_95.f_2), unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(unk_0xE48AD7BF7762E114(Local_95.f_3), unk_0xBC25C936A095B5BA(), 1))
				{
					switch (unk_0x491B2241281A03B7(0, 6))
					{
						case 0:
							func_100(unk_0xE48AD7BF7762E114(Local_95.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_100(unk_0xE48AD7BF7762E114(Local_95.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_100(unk_0xE48AD7BF7762E114(Local_95.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_100(unk_0xE48AD7BF7762E114(Local_95.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_100(unk_0xE48AD7BF7762E114(Local_95.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_100(unk_0xE48AD7BF7762E114(Local_95.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					unk_0x5502708AECB47F5D(unk_0x19D7F09C2FABDDA0(Local_95.f_2));
					unk_0x5502708AECB47F5D(unk_0xE48AD7BF7762E114(Local_95.f_3));
				}
			}
			else
			{
				unk_0x5502708AECB47F5D(unk_0x19D7F09C2FABDDA0(Local_95.f_2));
				unk_0x5502708AECB47F5D(unk_0xE48AD7BF7762E114(Local_95.f_3));
			}
		}
	}
}

void func_100(int iParam0, char* sParam1, int iParam2)//Position - 0x4429
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_101(iParam2), 1);
}

int func_101(int iParam0)//Position - 0x4440
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

void func_102(var uParam0, bool bParam1, bool bParam2)//Position - 0x4635
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

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4672
{
	func_118(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 1;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)//Position - 0x46C0
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
					func_117();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_116();
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
				func_109();
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
				if (func_108())
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
			if (func_107())
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
			func_106();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_105();
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
		func_117();
	}
	return 0;
}

void func_105()//Position - 0x498C
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

void func_106()//Position - 0x49BC
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

int func_107()//Position - 0x4A51
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_108()//Position - 0x4A78
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

void func_109()//Position - 0x4B11
{
	if (func_115(14))
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
		Global_389D = func_110();
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

var func_110()//Position - 0x4BB3
{
	func_111();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_111()//Position - 0x4BCC
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_114(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_113(unk_0xBC25C936A095B5BA());
			if (func_112(iVar0) && (!func_115(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_112(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_112(int iParam0)//Position - 0x4CC9
{
	return iParam0 < 3;
}

int func_113(int iParam0)//Position - 0x4CD5
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_114(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_114(int iParam0)//Position - 0x4D12
{
	if (func_112(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_115(int iParam0)//Position - 0x4D3C
{
	return Global_8C41 == iParam0;
}

void func_116()//Position - 0x4D4A
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

void func_117()//Position - 0x4DA0
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

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4DF7
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

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4E4D
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

void func_120()//Position - 0x4EE8
{
	unk_0x9B90420B04C07704("MobileRadioInGame", 0);
	if (func_3(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2)) && !func_121(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_95.f_2), -1))
		{
			unk_0x9B90420B04C07704("MobileRadioInGame", 1);
		}
	}
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x4F39
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

void func_122()//Position - 0x4F77
{
	if (!unk_0x2DA8CA50A72528FB(iLocal_99))
	{
		if (func_67(Local_95.f_2))
		{
			iLocal_99 = unk_0x511FE22BCF5353CD(unk_0x19D7F09C2FABDDA0(Local_95.f_2));
			unk_0xBF0E22F3E083C33D(iLocal_99, 356);
			unk_0x436D0272182E484D(iLocal_99, "BTX_BLIP");
			unk_0x7A6BBF86FCBBCF7E(iLocal_99, 1);
			unk_0x906B52FF11E38F2D(iLocal_99, 6);
		}
	}
}

void func_123()//Position - 0x4FC3
{
	if (func_67(Local_95.f_2))
	{
		unk_0xC5A6DFE2B8987B17(&uLocal_102);
		unk_0xF0CB7B9A194B76C2(0, unk_0x19D7F09C2FABDDA0(Local_95.f_2), 0, 0, Local_95.f_7, 4, 12f, 786469, 10f, 1071);
		unk_0x535008C596714F9E(uLocal_102);
		unk_0xC5A6DFE2B8987B17(&uLocal_101);
		unk_0x827661D9AAD4A354(0, unk_0x19D7F09C2FABDDA0(Local_95.f_2), Local_95.f_D, 4, 12f, 786469, 0f, 0f, 1);
		unk_0x204BA7B1C7DD25F4(0, unk_0x19D7F09C2FABDDA0(Local_95.f_2), 12f, 786469);
		unk_0x535008C596714F9E(uLocal_101);
		unk_0xC5A6DFE2B8987B17(&uLocal_100);
		unk_0xA3981DED4FC2E56E(0, 0, 64);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
		}
		unk_0x535008C596714F9E(uLocal_100);
	}
}

int func_124()//Position - 0x508A
{
	return Local_95.f_1;
}

int func_125(int iParam0)//Position - 0x5096
{
	return vLocal_96[iParam0 /*3*/];
}

int func_126()//Position - 0x50A4
{
	var uVar0;
	
	func_133(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_132())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_131())
	{
		return 1;
	}
	if (func_130(157))
	{
		if (!func_129())
		{
			return 1;
		}
	}
	if (func_130(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_127() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_127()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()//Position - 0x512E
{
	switch (func_128())
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

int func_128()//Position - 0x5162
{
	return Global_62BD;
}

bool func_129()//Position - 0x516D
{
	return Global_255A46.f_24A;
}

int func_130(int iParam0)//Position - 0x517C
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_131()//Position - 0x5193
{
	return Global_258063;
}

bool func_132()//Position - 0x519F
{
	return Global_255A46.f_245;
}

void func_133(var uParam0)//Position - 0x51AE
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
					func_134(iVar0);
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

void func_134(int iParam0)//Position - 0x5221
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_135(iVar2, &bVar3))
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

int func_135(int iParam0, var uParam1)//Position - 0x52A2
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

void func_136()//Position - 0x5301
{
	SYSTEM::WAIT(0);
}

void func_137()//Position - 0x530E
{
	func_91();
	if (unk_0x7AF0088ABFA713B6())
	{
		if (Local_95.f_14 == 7)
		{
			if (func_67(Local_95.f_2) && !func_4(Local_95.f_3))
			{
				unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_95.f_3), uLocal_101);
			}
			if (unk_0x7FFE36DB9042AF23(Local_95.f_2))
			{
				if (unk_0x89B5CBCE9D131B32(Local_95.f_2))
				{
					func_96(&(Local_95.f_2));
				}
			}
			if (unk_0x7FFE36DB9042AF23(Local_95.f_3))
			{
				if (unk_0x89B5CBCE9D131B32(Local_95.f_3))
				{
					func_96(&(Local_95.f_3));
				}
			}
		}
	}
	func_140(func_141(1, 1), 9, func_52());
	func_139();
	unk_0xB0B0FE33F4F22679(&iLocal_103);
	func_138();
}

void func_138()//Position - 0x53AA
{
	unk_0x95E4B6F3ED223F5A();
}

void func_139()//Position - 0x53B6
{
	unk_0x02DAF06EA4F08219(&uLocal_100);
	unk_0x02DAF06EA4F08219(&uLocal_101);
	unk_0x02DAF06EA4F08219(&uLocal_102);
}

void func_140(int iParam0, int iParam1, var uParam2)//Position - 0x53D0
{
	struct<4> Var0;
	
	Var0 = 539742369;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 6, iParam0);
	}
}

int func_141(int iParam0, bool bParam1)//Position - 0x5408
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_43(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_142(struct<21> Param0)//Position - 0x546D
{
	func_146(32, Param0);
	unk_0xD1CF2F876BAD2600(1);
	unk_0xA6E7E0EC9E48D44C(1);
	func_144(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_95, 22);
	unk_0xE45D6A3FD6454198(&vLocal_96, 97);
	if (!func_143())
	{
		return 0;
	}
	unk_0x6C87EFD58B261C6F(0);
	if (unk_0x0DE6397A2CB3EF75())
	{
		Local_95.f_4 = unk_0xB5CEFD608600A09F();
		Local_95.f_5 = func_62();
		Local_95.f_A = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) + Vector(0f, 5f, 0f) };
		Local_95.f_7 = { func_60(Local_95.f_5) };
	}
	unk_0xF0059F27F7BB6680(&iLocal_97, 8);
	bLocal_960 = unk_0x2F7EEEA6378AC19B();
	vLocal_96[unk_0x6BAA0516CC970D99() /*3*/] = 0;
	return 1;
}

int func_143()//Position - 0x5503
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
		if (func_132())
		{
			return 0;
		}
		if (func_130(155))
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

int func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x555C
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_138();
			}
			else
			{
				return 0;
			}
		}
		if (!func_145())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_138();
					}
					else
					{
						return 0;
					}
				}
				if (func_132())
				{
					if (!bParam2)
					{
						func_138();
					}
					else
					{
						return 0;
					}
				}
				if (func_130(155))
				{
					if (!bParam2)
					{
						func_138();
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
					func_138();
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
				func_138();
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
			func_138();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_145()//Position - 0x5671
{
	return Global_14083F;
}

void func_146(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x567D
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_138();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

