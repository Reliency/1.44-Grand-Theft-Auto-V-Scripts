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
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	struct<68> Local_98 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 3;
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
	var uLocal_153 = 4;
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
	var uLocal_218 = 2;
	var uLocal_219 = 0;
	var uLocal_220 = 4;
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
	var uLocal_286 = 4;
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
	var uLocal_357 = 12;
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
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	struct<4> Local_548 = { 0, 0, 0, 0 } ;
	var uLocal_549 = 16;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	var uVar4;
	var uVar5;
	struct<27> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<11> Var11;
	var uVar12;
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
	vector3 vVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39[3];
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44[6];
	int iVar45;
	int iVar46;
	var uVar47;
	var uVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	var uVar52;
	char[] cVar53[8];
	char* sVar54;
	struct<4> Var55;
	vector3 vVar56;
	vector3 vVar57;
	vector3 vVar58;
	vector3 vVar59;
	var uVar60;
	vector3 vVar61;
	vector3 vVar62;
	var uVar63;
	var uVar64;
	float fVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar92;
	bool bVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	int iVar114;
	vector3 vVar115;
	int iVar116;
	bool bVar117;
	
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	vLocal_101 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var3.f_C = 12;
	uVar5 = 2;
	Var6.f_3 = 8;
	Var6.f_C = 8;
	Var6.f_15 = 4;
	Var6.f_1A.f_20 = 3;
	Var6.f_1A.f_24 = 1;
	Var6.f_1A.f_35 = 2;
	Var6.f_1A.f_39 = 13;
	Var6.f_1A.f_47 = 13;
	Var6.f_1A.f_118 = 13;
	Var6.f_1A.f_1E9 = 13;
	Var6.f_1A.f_1F7 = 13;
	Var6.f_1A.f_205 = 13;
	Var6.f_1A.f_213 = 13;
	Var11.f_A.f_2 = 8;
	Var11.f_A.f_2.f_1.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	iVar14 = -1;
	uVar32 = 16;
	iVar33 = ScriptParam_548;
	iVar42 = ScriptParam_548.f_3;
	cVar53 = "BJ_FAIL";
	sVar54 = "";
	vVar59 = { 5f, 5f, 10f };
	fVar65 = 1f;
	fVar69 = -1f;
	iVar70 = -1;
	iVar73 = -1;
	iVar77 = Global_19B04.f_49FA;
	iVar80 = 1;
	iVar81 = -1;
	bVar100 = false;
	bVar105 = true;
	bVar107 = false;
	bVar108 = false;
	bVar110 = true;
	bVar111 = false;
	bVar112 = false;
	bVar113 = false;
	if (unk_0x724D816EA203A79E(ScriptParam_548.f_1))
	{
		iVar40 = ScriptParam_548.f_1;
	}
	else
	{
		iVar40 = unk_0x3E12B546F3F2597A();
	}
	bVar111 = unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 0);
	bVar112 = unk_0x767EF32F6CCA0D55(unk_0xB5CEFD608600A09F());
	if (bVar111)
	{
		unk_0x0E8BABC73EF73371(unk_0xB5CEFD608600A09F(), &iVar86);
		unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &uVar87);
	}
	if (bVar112)
	{
		unk_0x1B3FE00BEE6A4E35(unk_0xB5CEFD608600A09F(), &uVar88);
	}
	if (unk_0x724D816EA203A79E(iVar40))
	{
		unk_0x77815D3407C6700D(iVar40, true, 1);
	}
	if (unk_0x6CACA595557C5755())
	{
		unk_0x01EB6657F2BCE9D3(0);
	}
	if (unk_0xE8A79675302ED812(82))
	{
		func_539(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, &iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
	}
	if (iVar77 < 0)
	{
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_49FA.f_1, iVar77))
	{
		fVar65 = 0.1f;
	}
	iVar13 = iVar77;
	func_538(0);
	unk_0x7456702622C62EA0(1);
	unk_0x25A523E067E06F54(1);
	func_537(23, 1);
	unk_0xCF9877018AE2E3BB(1500f, 0, 21);
	func_511(&Var3, iVar13);
	if (unk_0x724D816EA203A79E(iVar42))
	{
		unk_0x77815D3407C6700D(iVar42, true, 1);
	}
	if (unk_0x724D816EA203A79E(iVar33))
	{
		unk_0x77815D3407C6700D(iVar33, true, 1);
		if (func_510(&Var3) != 0 && unk_0x6F79ECA8C83E4357(iVar33) == func_510(&Var3))
		{
			iVar36 = iVar33;
			iVar33 = 0;
		}
	}
	while (true)
	{
		if (!bVar105)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			bVar105 = false;
		}
		if ((iVar7 >= 6 && iVar7 <= 10) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			iVar15 = func_499();
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
		}
		func_498();
		func_490(&uVar4);
		func_486(&Var6, iVar7);
		func_482(&Var6, iVar7, iVar13, bVar93);
		switch (iVar7)
		{
			case 0:
				func_481();
				if (unk_0x422F9EDE839E6ABB())
				{
					break;
				}
				func_475();
				func_474(1);
				func_470("AM_H_BASEJ", 1);
				unk_0xEB233A3B7635D2AC();
				unk_0x7456702622C62EA0(1);
				if (iVar13 == 0)
				{
					unk_0xA7FBEF44EF04D534(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, 0, 1);
					uVar41 = unk_0x0D0CFC7B4C3CFFA6(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar13 == 5)
				{
					unk_0xA7FBEF44EF04D534(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, 0, 1);
				}
				else if (iVar13 == 4)
				{
					func_466(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					unk_0x6C5F5B5F6894CCE3(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, false);
				}
				else if (iVar13 == 8)
				{
					func_466(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					unk_0x6C5F5B5F6894CCE3(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, false);
				}
				if (unk_0x724D816EA203A79E(iVar33))
				{
					func_465(&iVar23);
				}
				if ((iVar13 == 6 || iVar13 == 12) || iVar13 == 5)
				{
					if (unk_0x724D816EA203A79E(ScriptParam_548.f_2))
					{
						unk_0x77815D3407C6700D(ScriptParam_548.f_2, true, 1);
						unk_0xA35241BCE4C1A24B(&(ScriptParam_548.f_2));
					}
					func_456(&uVar5, &Var3, iVar13, iVar13 == 6);
					bVar102 = true;
				}
				iVar7 = 1;
				break;
			
			case 1:
				if (unk_0x17FAADF9916EF741() || (((iVar13 == 5 || iVar13 == 6) || iVar13 == 12) && !bVar93))
				{
					if (!bVar93)
					{
						if ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)
						{
							vVar57 = { func_455(iVar13) };
							vVar57 = { func_454(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x934CB3CB3BED1B3B(vVar57.x)) };
							if (func_453(iVar13))
							{
								unk_0x5C4048C4641BDB16(func_452(iVar13), vVar57, 4000f, 0);
							}
						}
						func_446(&Var3, iVar13, &uVar0, &iVar1, &iVar2, &uVar51, &iVar84);
					}
					else if (func_444(func_445(iVar13)))
					{
						vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_443(&Var3))), SYSTEM::SIN((-97.4239f + func_443(&Var3)))) };
						vVar61 = { unk_0xA4455714F3DCE207(iVar33, 1.12046f, -0.317773f, 1.3385f) };
						vVar62 = { func_442(vVar62, 8.909f) };
						if (func_453(iVar13))
						{
							unk_0x5C4048C4641BDB16(vVar61 + vVar62, vVar62, 4000f, 0);
						}
					}
					else
					{
						vVar57 = { -10f, 0f, func_443(&Var3) };
						vVar57 = { func_454(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x934CB3CB3BED1B3B(vVar57.x)) };
						if (func_453(iVar13))
						{
							unk_0x5C4048C4641BDB16(func_452(iVar13), vVar57, 4000f, 0);
						}
					}
					if (((bVar93 || iVar13 == 4) || iVar13 == 8) || iVar13 == 3)
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							unk_0x5AA1A8C2DAD4FF6F(unk_0xBC25C936A095B5BA(), 1);
						}
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), func_452(iVar13), 0, 0, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), func_443(&Var3));
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					}
					iVar7 = 2;
				}
				else if (!unk_0x422F9EDE839E6ABB() && (!func_441(&iVar23) || func_440(&iVar23) > 0.05f))
				{
					if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
					{
						unk_0x7A41D32A383895D8(2500);
					}
					else
					{
						unk_0x7A41D32A383895D8(800);
					}
				}
				break;
			
			case 2:
				if (func_438(&uVar0, &iVar16, &uVar51, iVar13, iVar84, ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)))
				{
					func_437(&iVar16);
					func_414(&Var3, &uVar32, &iVar72, &iVar33, &iVar34, &iVar36, &iVar35, &iVar37, &iVar42, &iVar43, iVar1, iVar2, &iVar19, iVar13, &iVar81);
					unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
					if (!bVar93 && !bVar102)
					{
						func_456(&uVar5, &Var3, iVar13, 0);
					}
					iVar7 = 3;
				}
				break;
			
			case 3:
				if (!func_441(&iVar16) && !bVar93)
				{
					func_413(0, 0, 1);
					func_465(&iVar16);
				}
				else if ((func_441(&iVar16) && func_440(&iVar16) > 0.2f) || bVar93)
				{
					if (func_444(func_445(iVar13)) && !unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar93)
					{
						unk_0x7A41D32A383895D8(800);
						if (func_441(&iVar16))
						{
							func_437(&iVar16);
						}
						if (func_510(&Var3) != 0)
						{
							unk_0x346478B12F69D4E3(iVar36, false);
							func_465(&iVar22);
						}
						iVar7 = 4;
					}
					else
					{
						func_437(&iVar16);
						if (unk_0x17FAADF9916EF741())
						{
							SYSTEM::WAIT(1000);
							unk_0xAE099C1ADC89C331(func_412(&uVar5, 1), func_412(&uVar5, 0), 10000, 1, 1);
							unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
							unk_0x829FA4611BD56B44(800);
						}
						unk_0x13D5880CBA449AA9();
						if (func_444(func_445(iVar13)))
						{
							vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_443(&Var3))), SYSTEM::SIN((-97.4239f + func_443(&Var3)))) };
							vVar61 = { unk_0xA4455714F3DCE207(iVar33, 1.12046f, -0.317773f, 1.3385f) };
							vVar62 = { func_442(vVar62, 8.909f) };
							if (func_453(iVar13))
							{
								unk_0x5C4048C4641BDB16(vVar61 + vVar62, vVar62, 4000f, 0);
							}
						}
						else
						{
							vVar57 = { -10f, 0f, func_443(&Var3) };
							vVar57 = { func_454(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x934CB3CB3BED1B3B(vVar57.x)) };
							if (func_453(iVar13))
							{
								unk_0x5C4048C4641BDB16(func_452(iVar13), vVar57, 4000f, 0);
							}
						}
						if (!func_410(func_411(iVar13)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
							unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
							if (unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()))
							{
								unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
							}
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), func_411(iVar13), 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), func_409(func_411(iVar13), func_452(iVar13)));
							unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
							if (func_407() == 0)
							{
								unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 9, 5, 0, 0);
							}
							else if (func_407() == 1)
							{
								unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 1, 0, 0);
							}
							else if (func_407() == 2)
							{
								unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 3, 0, 0);
							}
							unk_0xC5A6DFE2B8987B17(&uVar48);
							if (func_406(iVar13) > 0)
							{
								unk_0xDE2D2B13F24A979D(0, func_406(iVar13));
							}
							unk_0xDF14F570C0180463(0, func_452(iVar13), 1f, -1, func_443(&Var3), 0.5f);
							unk_0x535008C596714F9E(uVar48);
							unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), uVar48);
							unk_0x02DAF06EA4F08219(&uVar48);
						}
						if (!func_444(func_445(iVar13)))
						{
							if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &iVar39);
							}
							iVar82 = 0;
							while (iVar82 < iVar39)
							{
								if (unk_0x724D816EA203A79E(iVar39[iVar82]) && !unk_0x1D403DFADBC2DE3C(iVar39[iVar82], 0))
								{
									if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar39[iVar82], 0), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0)) < 2500f)
									{
										unk_0xAF9FC4463EA3090B(iVar39[iVar82], 1000);
										unk_0xB34BE463F164799F(iVar39[iVar82], 5f);
										unk_0xB71D41C0310C93DE(iVar39[iVar82], 1, 1);
									}
								}
								iVar82++;
							}
						}
						if (func_510(&Var3) != 0)
						{
							func_465(&iVar22);
						}
						if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
						}
						if (func_405(iVar13, iVar84) > 0f)
						{
							func_465(&iVar28);
						}
						iVar7 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar13 == 0)
				{
					unk_0x28E71F59848ACCFD(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
					{
						unk_0x829FA4611BD56B44(300);
						SYSTEM::WAIT(300);
					}
					unk_0x7456702622C62EA0(1);
					unk_0xEB233A3B7635D2AC();
					unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 1, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					iVar7 = 10;
				}
				else if (unk_0x17FAADF9916EF741())
				{
					func_397(0, 1, 1, 0, 0);
					if (func_444(func_445(iVar13)))
					{
						func_396(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
						iVar85 = unk_0x2F079D1FC5F6CB99();
						if (bVar110)
						{
							unk_0xF2C27FE5A8B98CB5(iVar85, "Helicopter_Wind_Idle", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						}
						if (bVar109)
						{
							unk_0xA31F3D22D28F0202(1, 300362576);
						}
					}
					else
					{
						if (unk_0x6CACA595557C5755())
						{
							unk_0x01EB6657F2BCE9D3(0);
						}
						unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 1, 0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
					}
					unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
					unk_0x9D13ACA4137D8A4F(unk_0xBC25C936A095B5BA());
					unk_0xAC9B0ED8D915D62B(unk_0xBC25C936A095B5BA());
					unk_0xC70E4601A4F9E28B(unk_0xBC25C936A095B5BA());
					unk_0x43F06392C4EF25E0(false);
					unk_0x59B038076F830627(false);
					iVar7 = 5;
				}
				else
				{
					if (!bVar104)
					{
						if (!func_441(&iVar30))
						{
							func_465(&iVar30);
						}
						else if (func_440(&iVar30) > 4f || (func_444(func_445(iVar13)) && func_440(&iVar30) > 0.5f))
						{
							func_385(&uVar32, "OJBJAUD", func_395(&Var3), 8, 0, 0, 0);
							bVar104 = true;
						}
					}
					if (!unk_0x422F9EDE839E6ABB() && !bVar93)
					{
						if (func_363(&Var3, iVar13, &iVar36, &uVar5, &uVar4, &iVar17, &iVar18, &iVar22, &iVar28, iVar84, &bVar94, &bVar106, bVar98))
						{
							unk_0x7456702622C62EA0(1);
							bVar98 = false;
							if (func_362(&Var3))
							{
								unk_0x7A41D32A383895D8(800);
							}
							else
							{
								unk_0x43F06392C4EF25E0(false);
								unk_0x59B038076F830627(false);
								iVar7 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar13 == 0)
				{
					unk_0x28E71F59848ACCFD(200f);
				}
				func_360();
				func_359();
				if (unk_0x17FAADF9916EF741())
				{
					if (bVar93 && bVar103)
					{
						unk_0xC2BB4D344E887586(func_358(iVar15), func_357(iVar15), func_356(iVar15));
					}
					SYSTEM::WAIT(2000);
					if (bVar93)
					{
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
						func_355(&iVar29);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
						}
						while (func_440(&iVar29) < 1.1f)
						{
							SYSTEM::WAIT(0);
							if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
							}
						}
						func_437(&iVar29);
					}
					unk_0x829FA4611BD56B44(800);
				}
				if (unk_0x724D816EA203A79E(iVar34) && !unk_0x1D403DFADBC2DE3C(iVar34, 0))
				{
					iVar45 = unk_0x390CF6C8AD6903B7(unk_0xA4455714F3DCE207(iVar34, func_354(&Var3)));
					unk_0x0D5352939CC40C16(iVar45, 5);
					unk_0x222805B89367761E(iVar45, 1);
					unk_0x436D0272182E484D(iVar45, "BJ_BLIP_TGT");
				}
				else
				{
					iVar45 = unk_0x390CF6C8AD6903B7(func_353(&Var3, 0));
					unk_0x0D5352939CC40C16(iVar45, 5);
					if (iVar72 == 1)
					{
						unk_0x436D0272182E484D(iVar45, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0x436D0272182E484D(iVar45, "BJ_BLIP_CHK");
					}
				}
				unk_0x3F5F1772D71D5EC4(iVar45, 1.2f);
				if (iVar72 > 1)
				{
					iVar46 = unk_0x390CF6C8AD6903B7(func_353(&Var3, 1));
					unk_0x0D5352939CC40C16(iVar46, 5);
					unk_0x222805B89367761E(iVar45, 1);
					unk_0x3F5F1772D71D5EC4(iVar46, 0.7f);
					if (iVar72 == 2)
					{
						unk_0x436D0272182E484D(iVar46, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0x436D0272182E484D(iVar46, "BJ_BLIP_CHK");
					}
				}
				if (unk_0x724D816EA203A79E(iVar34) && !unk_0x1D403DFADBC2DE3C(iVar34, 0))
				{
					unk_0xAF9FC4463EA3090B(iVar34, 2000);
					if (unk_0x724D816EA203A79E(iVar43) && !unk_0x36CEFBE9B745A58D(iVar43))
					{
						unk_0xA4E856A8CD53B8DF(iVar43);
					}
					if (func_351(func_352(&Var3)))
					{
						unk_0xCBD3B8A22DC34DE4(&iVar34);
					}
					else
					{
						unk_0x641B19E156645A92(iVar34, func_353(&Var3, 0), 1, 0, 0, 1);
					}
				}
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_49FA.f_1, (func_350(&Var3) - 125)))
				{
					unk_0x4C99B7E39FB088F0(unk_0xB5CEFD608600A09F(), true);
					unk_0x37947827189B4461(unk_0xB5CEFD608600A09F(), unk_0x491B2241281A03B7(0, 256), unk_0x491B2241281A03B7(0, 256), unk_0x491B2241281A03B7(0, 256));
				}
				if (func_349(func_445(iVar13)))
				{
					func_348(1, 1, 1);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_355(&iVar19);
					iVar7 = 6;
					func_347(88, 1);
				}
				else if (func_444(func_445(iVar13)))
				{
					func_348(0, 0, 1);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
					iVar7 = 7;
					func_347(88, 1);
				}
				else
				{
					func_348(1, 1, 1);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
					iVar7 = 6;
					func_347(88, 1);
				}
				if (iVar13 == 5)
				{
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 146, true);
				}
				if (!bVar94 && unk_0x724D816EA203A79E(iVar36))
				{
					func_346(&iVar36, 1);
					bVar94 = true;
				}
				if (!func_362(&Var3))
				{
					if (func_444(func_445(iVar13)))
					{
						func_396(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
					}
					else
					{
						if ((func_345(&Var3) && !bVar106) && !bVar93)
						{
							unk_0x9CB4DD3D88846081(1, 0, 3, 0);
						}
						else if (iVar13 == 4 && !func_344())
						{
							unk_0x6125108F6208C1F6(func_412(&uVar5, 0), -76.7226f, -829.9866f, 326.0427f);
							unk_0x3553F2A72957724E(func_412(&uVar5, 0), 0.8541f, 0f, -17.012f, 2);
							unk_0x9DF315A9EFFF87AC(func_412(&uVar5, 0), 53.883f);
							unk_0x348665177DBFB93B(func_412(&uVar5, 0), true);
						}
						else
						{
							if (unk_0x6CACA595557C5755())
							{
								unk_0x01EB6657F2BCE9D3(0);
							}
							unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 1, 0);
						}
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						unk_0x13D5880CBA449AA9();
					}
				}
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (bVar111)
					{
						if (!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 0))
						{
							unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1, false, true);
						}
						unk_0x076F5792DA9C1CEB(unk_0xBC25C936A095B5BA(), iVar86);
						if (bVar112)
						{
							if (!unk_0x767EF32F6CCA0D55(unk_0xB5CEFD608600A09F()))
							{
								unk_0xB353AEF46982B406(unk_0xB5CEFD608600A09F());
							}
							unk_0x34CE5D608A71109A(unk_0xBC25C936A095B5BA(), uVar88);
						}
					}
					else
					{
						unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1, false, true);
						unk_0x076F5792DA9C1CEB(unk_0xBC25C936A095B5BA(), (unk_0x491B2241281A03B7(0, 65535) % 8));
					}
				}
				unk_0x522053D86D6E1C7A("skydive@base");
				unk_0x522053D86D6E1C7A("skydive@freefall");
				unk_0x522053D86D6E1C7A("skydive@parachute@chute");
				unk_0x522053D86D6E1C7A("skydive@parachute@");
				break;
			
			case 6:
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					iVar7 = 12;
					break;
				}
				else if ((bVar97 || bVar96) || func_343(&Var3, iVar13, &bVar99))
				{
					unk_0x7456702622C62EA0(1);
					unk_0xEB233A3B7635D2AC();
					iVar7 = 10;
				}
				else
				{
					if (iVar13 == 5)
					{
						unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 146, unk_0xEDE30398504C632A(unk_0xBC25C936A095B5BA(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar98)
					{
						vVar58 = { func_353(&Var3, (iVar72 - 1)) };
						vVar58.z = (vVar58.z + 100f);
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar58, 1, 0, 0, 1);
						bVar98 = false;
					}
					if (!bVar101)
					{
						if (iVar13 == 4)
						{
							if (((((unk_0x8FCEEB789599BD9B(0, 71) || unk_0x8FCEEB789599BD9B(0, 72)) || unk_0x8FCEEB789599BD9B(0, 1)) || unk_0x8FCEEB789599BD9B(0, 2)) || unk_0x8FCEEB789599BD9B(0, 75)) || !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0x062C9995BFD27B2A(false, 1, 1300, 1, 1, 0);
								bVar101 = true;
							}
						}
					}
					func_342(&iVar19);
					func_332(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_331(&uVar52);
					if (func_441(&iVar16))
					{
						if (func_440(&iVar16) > 10f)
						{
							func_327(&iVar20, &iVar80);
						}
					}
					else
					{
						func_326(&iVar16, 0f);
					}
					if (unk_0x724D816EA203A79E(iVar36) && !unk_0x1D403DFADBC2DE3C(iVar36, 0))
					{
						if (!unk_0xD1DC4B08247A4317(iVar36) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar36, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > 40000f)
						{
							iVar114 = unk_0x3187EF5798B5D209(iVar36, -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar114))
							{
								unk_0xF845620A03C7425B(&iVar114);
							}
							unk_0xCF6040807CC0E4A5(&iVar36);
						}
					}
					if (!unk_0xFA30DFD0084E92FE(iVar78, 0))
					{
						if (unk_0x4B8E3E5901E59EB8() || !func_441(&iVar31))
						{
							func_355(&iVar31);
						}
						else if (func_440(&iVar31) > 0.25f)
						{
							Var55 = { func_325(iVar13) };
							func_324(&Var55, 7500, 0);
							func_437(&iVar31);
							unk_0xF0059F27F7BB6680(&iVar78, 0);
						}
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						func_323(&Var6, 1);
						iVar38 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
						if (unk_0xE59B7F5A03335350(iVar38, 0) && unk_0x2A348A3A98B80B13(iVar38))
						{
							if (!unk_0xFA30DFD0084E92FE(iVar78, 1))
							{
								if (!func_441(&iVar24))
								{
									func_465(&iVar24);
								}
								else if (func_440(&iVar24) > 0.15f)
								{
									func_322("BJ_VEHHELP", -1);
									func_437(&iVar24);
									unk_0xF0059F27F7BB6680(&iVar78, 1);
								}
							}
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&iVar78, 1);
							if (func_321("BJ_VEHHELP"))
							{
								unk_0x7456702622C62EA0(1);
							}
							if (func_441(&iVar24))
							{
								func_437(&iVar24);
							}
						}
					}
					else
					{
						func_323(&Var6, 0);
						unk_0x7CB6FD92BE491AD9(&iVar78, 1);
						if (func_321("BJ_VEHHELP"))
						{
							unk_0x7456702622C62EA0(1);
						}
						if (func_441(&iVar24))
						{
							func_437(&iVar24);
						}
					}
					if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != -1)
					{
						if (iVar13 == 5)
						{
							unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 146, false);
						}
						unk_0xDF089F4E40A431F9(1);
						unk_0x9B90420B04C07704("DisableFlightMusic", 0);
						iVar7 = 9;
						func_437(&iVar16);
					}
				}
				break;
			
			case 7:
				if (iVar13 == 0)
				{
					unk_0x28E71F59848ACCFD(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
					{
						unk_0x829FA4611BD56B44(300);
						SYSTEM::WAIT(300);
					}
					unk_0x7456702622C62EA0(1);
					unk_0xEB233A3B7635D2AC();
					if (unk_0x6CACA595557C5755())
					{
						unk_0x01EB6657F2BCE9D3(0);
					}
					unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					iVar7 = 10;
				}
				else
				{
					func_342(&iVar19);
					func_332(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_331(&uVar52);
					if (func_444(func_445(iVar13)) && !unk_0x1D403DFADBC2DE3C(iVar33, 0))
					{
						func_320(iVar33, func_452(iVar13));
					}
					if (func_441(&iVar16))
					{
						if (func_440(&iVar16) > 10f)
						{
							func_327(&iVar20, &iVar80);
						}
					}
					else
					{
						func_326(&iVar16, 0f);
					}
					if (func_316(&Var3, &uVar5, &uVar4, &iVar18, &vVar56, &uVar60, vVar61, vVar62) || bVar98)
					{
						func_437(&iVar16);
						unk_0x7456702622C62EA0(1);
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x724D816EA203A79E(iVar33) && !unk_0x1D403DFADBC2DE3C(iVar33, 0))
							{
								unk_0x641B19E156645A92(iVar33, func_452(iVar13), 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iVar33, func_443(&Var3));
								unk_0x346478B12F69D4E3(iVar33, true);
								iVar81 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x510CBEAEC917268A(iVar81, iVar33, unk_0xB5B60A04E1654409(iVar33, "Chassis"));
								unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iVar81, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								unk_0x0BD2283F2F727F2C(iVar81, 0.6f);
								func_314(iVar33, &uVar5, &iVar17);
								unk_0x13D5880CBA449AA9();
							}
						}
						if (bVar109)
						{
							unk_0xA31F3D22D28F0202(0, 300362576);
						}
						unk_0xF2C27FE5A8B98CB5(iVar85, "Helicopter_Wind", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						bVar98 = false;
						iVar7 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar13 == 0)
				{
					unk_0x28E71F59848ACCFD(200f);
				}
				func_342(&iVar19);
				func_332(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
				if (unk_0x77FC50899603581D(iVar81))
				{
					if (unk_0x8FD30584EB38411B(iVar81) > 0.92f)
					{
						unk_0xC5A6DFE2B8987B17(&uVar47);
						unk_0x03A13CB10449EA1B(0, -1161760501, 0);
						unk_0xCB287E61EF4199C6(0, 1, 0);
						unk_0x535008C596714F9E(uVar47);
						unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), uVar47);
						unk_0x02DAF06EA4F08219(&uVar47);
					}
				}
				if (unk_0x724D816EA203A79E(iVar33))
				{
					if (func_313(&uVar5, &iVar17, vVar61, vVar62, vVar56, &uVar63, &uVar64))
					{
						unk_0x22F5005A525A1855(unk_0xBC25C936A095B5BA(), iVar33, 0);
						if (!unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							unk_0x43F06392C4EF25E0(true);
							if (unk_0x6CACA595557C5755())
							{
								unk_0x01EB6657F2BCE9D3(0);
							}
							unk_0x9B90420B04C07704("DisableFlightMusic", 0);
							unk_0xDF089F4E40A431F9(1);
							iVar7 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar13 == 0)
				{
					unk_0x28E71F59848ACCFD(200f);
				}
				if (Global_4336.f_87)
				{
					unk_0xBBC4195AD74D153D(0, 144, 1);
				}
				if (Global_4336.f_87)
				{
					unk_0xBBC4195AD74D153D(0, 144, 1);
				}
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					iVar7 = 12;
					break;
				}
				if (bVar96 || bVar97)
				{
					unk_0x7456702622C62EA0(1);
					unk_0xEB233A3B7635D2AC();
					iVar7 = 10;
				}
				else if (func_312(&uVar4, 3, 1000) && !Global_4336.f_87)
				{
					unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
					unk_0x7A41D32A383895D8(800);
					while (unk_0x422F9EDE839E6ABB())
					{
						func_332(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
						SYSTEM::WAIT(0);
					}
					func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
					bVar93 = true;
					iVar7 = 0;
				}
				else
				{
					func_263(&iVar26, &iVar44);
					if (bVar98)
					{
						vVar58 = { func_353(&Var3, (iVar72 - 1)) };
						func_261(unk_0xBC25C936A095B5BA(), vVar58);
						bVar98 = false;
					}
					func_342(&iVar19);
					if (func_351(func_352(&Var3)))
					{
						if (!unk_0x724D816EA203A79E(iVar34) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), func_353(&Var3, 0), false) <= 200f)
						{
							iVar34 = unk_0xE6F956ED0C35CEC7(6, func_353(&Var3, 0), 1);
							if (!unk_0x1D403DFADBC2DE3C(iVar34, 0))
							{
								unk_0x3BC0D8886158D9A7(iVar34, 7.5f);
							}
						}
					}
					else if ((unk_0x724D816EA203A79E(iVar34) && !unk_0x1D403DFADBC2DE3C(iVar34, 0)) && !func_410(func_353(&Var3, 0)))
					{
						unk_0x36CEFBE9B745A58D(iVar43);
						if (func_260(unk_0xBC25C936A095B5BA(), iVar34, 0) <= 325f)
						{
							if (iVar13 == 5)
							{
								vVar115 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar115 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (unk_0xF4FCC3C1048FF2AB(iVar43, -1273030092) != 1)
							{
								if (iVar13 == 5)
								{
									unk_0x827661D9AAD4A354(iVar43, iVar34, vVar115, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									unk_0x827661D9AAD4A354(iVar43, iVar34, vVar115, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_255(&iVar34);
							}
						}
					}
					iVar8 = func_332(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 1, 1, fVar65);
					if (iVar8 == 1 || iVar8 >= 2)
					{
						unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
						if (iVar8 >= 2)
						{
							if (unk_0xF16DAFF595E80F7C())
							{
								unk_0x7456702622C62EA0(1);
							}
							if (unk_0x4B8E3E5901E59EB8())
							{
								unk_0xEB233A3B7635D2AC();
							}
						}
						unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), false);
						if (iVar13 == 5)
						{
							unk_0xA4E856A8CD53B8DF(iVar43);
							unk_0xC8FD3EBBB90E8D7F(iVar43, 296, true);
						}
						iVar116 = 0;
						while (iVar116 < iVar44)
						{
							if (unk_0x724D816EA203A79E(iVar44[iVar116]) && !unk_0x1D403DFADBC2DE3C(iVar44[iVar116], 0))
							{
								unk_0xA4E856A8CD53B8DF(iVar44[iVar116]);
								iVar44[iVar116] = 0;
							}
							iVar116++;
						}
						iVar7 = 10;
					}
					func_254(&Var6, &Var3, iVar13, iVar72);
				}
				break;
			
			case 10:
				if (iVar13 == 0)
				{
					unk_0x28E71F59848ACCFD(200f);
				}
				if (unk_0x724D816EA203A79E(iVar43) && !unk_0x1D403DFADBC2DE3C(iVar43, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar43, -982327190) != 0 && unk_0xF4FCC3C1048FF2AB(iVar43, -982327190) != 1)
					{
						unk_0xA4E856A8CD53B8DF(iVar43);
						unk_0xDE2D2B13F24A979D(iVar43, -1);
					}
				}
				if ((!bVar96 && !bVar97) && !bVar99)
				{
					if (!func_441(&iVar21))
					{
						if (!func_441(&iVar18))
						{
							func_465(&iVar18);
						}
						if (unk_0x2DA8CA50A72528FB(iVar45))
						{
							unk_0x07B8ECB35A4ED3AC(&iVar45);
						}
						if (unk_0x2DA8CA50A72528FB(iVar46))
						{
							unk_0x07B8ECB35A4ED3AC(&iVar46);
						}
						if (iVar73 > -1)
						{
							unk_0x2A6C7715B55EA005(iVar49);
							unk_0x2A6C7715B55EA005(iVar50);
							iVar73 = -1;
						}
						func_326(&iVar21, 0f);
					}
					if (!func_441(&vVar27))
					{
						func_465(&vVar27);
					}
					if (func_352(&Var3) == 0)
					{
						func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
					}
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (((((unk_0x724D816EA203A79E(iVar34) && !unk_0x1D403DFADBC2DE3C(iVar34, 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0)) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iVar34, vVar59, 0, 1, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), func_353(&Var3, iVar71), vVar59, 0, 1, 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()))
						{
							bVar117 = false;
							if (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()) && (unk_0x724D816EA203A79E(iVar34) && !unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iVar34)))
							{
								bVar117 = true;
							}
							else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
							{
								bVar117 = true;
							}
							if (bVar117)
							{
								if (func_312(&uVar4, 3, 1000) && !Global_4336.f_87)
								{
									unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
									unk_0x7A41D32A383895D8(800);
									while (unk_0x422F9EDE839E6ABB())
									{
										func_332(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
										SYSTEM::WAIT(0);
									}
									func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
									bVar93 = true;
									iVar7 = 0;
								}
								break;
							}
						}
					}
				}
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					iVar7 = 12;
					break;
				}
				if (((bVar96 || bVar97) || bVar99) || (func_441(&iVar21) && func_440(&iVar21) > 0.25f))
				{
					if (func_441(&iVar21) && func_440(&iVar21) > 0.25f)
					{
						func_249(func_353(&Var3, iVar71), iVar34, iVar43, &iVar8, &iVar75, &fVar69);
					}
					func_437(&iVar21);
					if (bVar96 || iVar8 == 1)
					{
						iVar10 = func_248();
						while (!unk_0xA7F138B5B1AB2CF6(iVar10))
						{
							SYSTEM::WAIT(0);
							if (func_352(&Var3) == 0)
							{
								func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
							}
							iVar10 = func_248();
						}
						if (iVar13 == 0)
						{
							if (!unk_0x36CEFBE9B745A58D(iVar43))
							{
								func_385(&uVar32, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar7 = 11;
						if (!func_247(&Var6, 7))
						{
							iVar79 = 125;
							unk_0xF0059F27F7BB6680(&(Global_19B04.f_49FA.f_1), (func_350(&Var3) - iVar79));
							func_246(func_350(&Var3), 1);
							iVar89 = 1;
							bVar90 = true;
							bVar91 = true;
							iVar83 = 0;
							while (iVar83 < 13)
							{
								if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_49FA.f_1, iVar83))
								{
									if (func_444(func_445(iVar83)))
									{
										bVar91 = false;
									}
									else
									{
										bVar90 = false;
									}
									iVar89 = 0;
								}
								iVar83++;
							}
							if (iVar89 && !func_245(98))
							{
								func_244(98, 1);
							}
							if (bVar90)
							{
								func_241(128, 0, 0);
							}
							if (bVar91)
							{
								func_241(129, 0, 0);
							}
							func_208(&iVar74, iVar72, &iVar75, &iVar76, fVar65);
							if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), false);
							}
							func_207(&Var6, 7, 1);
							func_206(1, 0);
							func_465(&iVar25);
							func_205();
						}
					}
					else if ((bVar97 || bVar99) || iVar8 >= 2)
					{
						unk_0x7456702622C62EA0(1);
						unk_0xEB233A3B7635D2AC();
						if (!bVar99)
						{
							func_202();
						}
						if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							iVar92 = 1;
						}
						if (unk_0x97EF4023B86C354F())
						{
							func_200(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 358, 0, 358, 0);
						}
						else
						{
							func_207(&Var6, 27, 1);
							func_200(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
						}
						iVar7 = 12;
					}
					func_437(&iVar18);
				}
				break;
			
			case 11:
				unk_0xBBC4195AD74D153D(2, 200, 1);
				if (!bVar96 && !bVar97)
				{
					if (func_199() && !func_247(&Var6, 26))
					{
						func_190(iVar13);
						if (func_178(iVar13, iVar75, fVar69, iVar76))
						{
							func_200(&Var6, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_207(&Var6, 26, 1);
						}
					}
				}
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					bVar108 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0);
				}
				if (func_352(&Var3) == 0)
				{
					func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
				}
				if (!bVar113)
				{
					iVar9 = func_73(iVar13, &Var6, &uVar51, &uVar4, iVar74, iVar72, iVar75, &iVar76, fVar65, &bVar100);
					bVar113 = iVar9 == true;
				}
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (iVar77 == 0)
					{
						unk_0xA7FBEF44EF04D534(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
					}
					else if (iVar77 == 5)
					{
						unk_0xA7FBEF44EF04D534(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
					}
					func_72(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
				}
				else if (!unk_0x422F9EDE839E6ABB() && (!func_71() || func_440(&iVar25) >= 2f))
				{
					unk_0xBBC4195AD74D153D(0, 22, 1);
					unk_0xBBC4195AD74D153D(0, 21, 1);
					unk_0xBBC4195AD74D153D(0, 55, 1);
					unk_0xBBC4195AD74D153D(0, 140, 1);
					unk_0xBBC4195AD74D153D(0, 142, 1);
					unk_0xBBC4195AD74D153D(0, 141, 1);
					unk_0xBBC4195AD74D153D(0, 80, 1);
					unk_0xBBC4195AD74D153D(0, 95, 1);
					unk_0xBBC4195AD74D153D(0, 96, 1);
					unk_0xBBC4195AD74D153D(0, 97, 1);
					unk_0xBBC4195AD74D153D(0, 98, 1);
					unk_0xBBC4195AD74D153D(0, 0, 1);
					if (func_441(&iVar18))
					{
						if ((iVar9 == 1 || func_440(&iVar18) >= 60f) || ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA())) || (!bVar108 && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))))
						{
							if (!bVar113)
							{
								func_70(&(Var6.f_1A));
								bVar113 = true;
							}
							if (func_44(&(Var6.f_1A), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar96 && !bVar97)
								{
									if (func_199() && !func_247(&Var6, 26))
									{
										if (func_178(iVar13, iVar75, fVar69, iVar76))
										{
											func_207(&Var6, 26, 1);
										}
									}
								}
								func_41(&(Var6.f_1A));
								func_437(&iVar25);
								if (iVar13 == 0)
								{
									unk_0xA7FBEF44EF04D534(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
								}
								else if (iVar13 == 5)
								{
									unk_0xA7FBEF44EF04D534(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
								}
								func_72(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
							}
						}
						else if (iVar9 == 0)
						{
							if (!bVar96 && !bVar97)
							{
								if (func_199() && !func_247(&Var6, 26))
								{
									if (func_178(iVar13, iVar75, fVar69, iVar76))
									{
										func_207(&Var6, 26, 1);
									}
								}
							}
							func_41(&(Var6.f_1A));
							func_437(&iVar25);
							func_207(&Var6, 5, 0);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
							unk_0x7A41D32A383895D8(800);
							while (unk_0x422F9EDE839E6ABB())
							{
								SYSTEM::WAIT(0);
								if (func_352(&Var3) == 0)
								{
									func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
								}
							}
							func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
							bVar93 = true;
							iVar7 = 0;
							break;
						}
						else if (bVar100)
						{
							if (func_440(&iVar18) > (60f - 5f))
							{
								func_39(&iVar18, (60f - 5f));
							}
						}
					}
					else
					{
						func_326(&iVar18, 0f);
					}
				}
				break;
			
			case 12:
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					bVar108 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0);
				}
				unk_0xBBC4195AD74D153D(2, 200, 1);
				if (iVar76 > 0)
				{
					iVar76 = 0;
				}
				if (!bVar96 && !bVar97)
				{
					if (func_199() && !func_247(&Var6, 26))
					{
						func_190(iVar13);
						if (func_178(iVar13, iVar75, fVar69, iVar76))
						{
							func_200(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_207(&Var6, 26, 1);
						}
					}
				}
				if (!func_247(&Var6, 24))
				{
					if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						bVar103 = true;
					}
					else
					{
						bVar103 = false;
					}
					unk_0x748798F6C2AB96B7("OJBJ_START");
					unk_0x748798F6C2AB96B7("OJBJ_JUMPED");
					unk_0x748798F6C2AB96B7("OJBJ_LANDED");
					unk_0x3857DADBD6EC8A54("OJBJ_STOP");
					if (unk_0x2DA8CA50A72528FB(iVar45))
					{
						unk_0x07B8ECB35A4ED3AC(&iVar45);
					}
					if (unk_0x2DA8CA50A72528FB(iVar46))
					{
						unk_0x07B8ECB35A4ED3AC(&iVar46);
					}
					if (iVar13 == 0)
					{
						unk_0x28E71F59848ACCFD(200f);
					}
					iVar10 = func_248();
					while (!unk_0xA7F138B5B1AB2CF6(iVar10))
					{
						if (func_352(&Var3) == 0)
						{
							func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
						}
						SYSTEM::WAIT(0);
						iVar10 = func_248();
					}
					if (bVar103)
					{
						func_38(&uVar12, 0);
					}
					else
					{
						func_37(&Var11, 1050253722, 1073741824);
					}
					func_207(&Var6, 24, 1);
				}
				if (!bVar103 && unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					func_207(&Var6, 24, 0);
					break;
				}
				if (func_352(&Var3) == 0)
				{
					func_253(func_353(&Var3, (iVar72 - 1)), vVar27);
				}
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					switch (func_34(unk_0xBC25C936A095B5BA()))
					{
						case 0:
							sVar54 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar54 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar54 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar99)
				{
					sVar54 = "BJ_FAIL_02";
				}
				else
				{
					sVar54 = "BJ_FAIL_01";
				}
				bVar107 = false;
				unk_0xBBC4195AD74D153D(0, 0, 1);
				unk_0xBBC4195AD74D153D(0, 80, 1);
				if (bVar103)
				{
					bVar107 = func_16(&uVar12, &Var11, &iVar10, cVar53, sVar54, &bVar93, 78);
				}
				else
				{
					bVar107 = func_3(&iVar10, &Var11, cVar53, sVar54, &bVar93, 79, 7, 1, 1097859072, 1);
				}
				if (bVar107)
				{
					if (bVar93)
					{
						if (!bVar96 && !bVar97)
						{
							if (func_199() && !func_247(&Var6, 26))
							{
								if (func_178(iVar13, iVar75, fVar69, iVar76))
								{
									func_207(&Var6, 26, 1);
								}
							}
						}
						func_266(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
						iVar7 = 0;
					}
					else
					{
						if (!bVar96 && !bVar97)
						{
							if (func_199() && !func_247(&Var6, 26))
							{
								if (func_178(iVar13, iVar75, fVar69, iVar76))
								{
									func_207(&Var6, 26, 1);
								}
							}
						}
						func_2(bVar103, &Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
					}
					func_1(&iVar10);
				}
				iVar8 = 0;
				break;
		}
	}
}

void func_1(int iParam0)//Position - 0x2BB5
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0xB0B0FE33F4F22679(iParam0);
		*iParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, var uParam17, bool bParam18)//Position - 0x2BD1
{
	if (bParam0)
	{
		func_539(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_539(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x2C31
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
			if (func_15(iParam5, 4))
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
			unk_0x29CD142125FE177B(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x57016C44F10111F0("STRING");
			unk_0x449F0674640D94C0(6);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
			func_14(sParam3);
			unk_0x1E1FB49121565EB6(100);
			unk_0x5E5DBD0A6623969E(true);
			unk_0xC27A95D32A8160C0();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x29CD142125FE177B(*iParam0, "TRANSITION_UP");
					unk_0xD44E04EBBDC4CE88(uParam1->f_86);
					unk_0xF9FBC2F3F73D94C9();
					uParam1->f_88 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				unk_0xE93D261B305E994A(0);
			}
			func_13(&(uParam1->f_A), 0, 1, 1, 1);
			func_12(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				unk_0xC4BA30B532FE260F(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_407())
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
			if (!func_441(&(uParam1->f_1)))
			{
				func_465(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_441(&(uParam1->f_4)))
				{
					func_465(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x37CCF3DE21C7FD23();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x29CD142125FE177B(*iParam0, "TRANSITION_UP");
					unk_0xD44E04EBBDC4CE88(uParam1->f_86);
					unk_0xF9FBC2F3F73D94C9();
					uParam1->f_88 = 1;
				}
			}
			unk_0x996AC9A66B2A5A3F(iParam6);
			func_11(iParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_440(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x17FAADF9916EF741()))
			{
				func_5(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x08009E53F6E7E15C();
				if (unk_0x093484B35A948BFC(2, 201))
				{
					uParam1->f_8A = 1;
					unk_0xC4BA30B532FE260F(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x093484B35A948BFC(2, 202))
				{
					uParam1->f_8A = 0;
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_440(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(iParam0, 0, 0);
			unk_0x2991B7F8ABC4BB0C(1f);
			if (uParam1->f_8A || !((unk_0x3362CDE8460ED38B("stunt_plane_races", unk_0x1377080E9B0BD993()) || unk_0x3362CDE8460ED38B("pilot_school", unk_0x1377080E9B0BD993())) || (unk_0x3362CDE8460ED38B("bj", unk_0x1377080E9B0BD993()) && unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))))
			{
				unk_0x829FA4611BD56B44(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_8A)
			{
				unk_0x7A41D32A383895D8(500);
			}
			func_355(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xC4248B71D9B26306(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_440(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(int iParam0)//Position - 0x3014
{
	if (*iParam0 != 0)
	{
		unk_0xB0B0FE33F4F22679(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_7B = 0;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x3037
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
	if (!func_10(uParam0))
	{
		return;
	}
	unk_0x37CCF3DE21C7FD23();
	unk_0x996AC9A66B2A5A3F(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && unk_0x8A0D8839261BAEEF(2)))
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
			unk_0x5E5DBD0A6623969E(func_15(uParam0->f_1, 4096));
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
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xF1734B55490E9045(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (func_15(uParam0->f_1, 4096))
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
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x29CD142125FE177B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD44E04EBBDC4CE88(fVar8);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(80f);
		unk_0xF9FBC2F3F73D94C9();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)//Position - 0x32F7
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)//Position - 0x330C
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)//Position - 0x331D
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)//Position - 0x3334
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_10(var uParam0)//Position - 0x3342
{
	if (*uParam0 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)//Position - 0x3369
{
	if (!func_441(&(uParam0->f_2)))
	{
		func_355(&(uParam0->f_2));
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
	if (func_440(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_437(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x33FB
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

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x34C4
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4B4A22319BB70CD6("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xAD45B3B464AA7C2E(*uParam0, 1);
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(char* sParam0)//Position - 0x353E
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

bool func_15(var uParam0, int iParam1)//Position - 0x3550
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x355F
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xD6423910AAD8A379("DEATH_SCENE");
			unk_0xC4BA30B532FE260F(-1, "ScreenFlash", "WastedSounds", 1);
			func_33(&(uParam0->f_1));
			func_32();
			func_37(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xC4248B71D9B26306(true);
			break;
		
		case 1:
			if (func_24() || unk_0x17FAADF9916EF741())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (unk_0x284F2ACE6839D3C0("OFFMISSION_WASTED", false, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "Bed", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					unk_0xC4BA30B532FE260F(-1, "TextHit", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(iParam2, uParam1, sParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(iParam2, uParam1, sParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_32();
				if (*bParam5)
				{
					unk_0xE44AD04338101C64(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
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
				func_20(0, 1);
				func_18(0, 1);
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

void func_17(bool bParam0)//Position - 0x3720
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

void func_18(int iParam0, int iParam1)//Position - 0x3766
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		unk_0x9216004FAC08D1DC("DeathFailOut", 0, 0);
		unk_0xF0059F27F7BB6680(&iLocal_41, 1);
		func_19(1, 2, 0);
		unk_0xEBFF48776C732268(2);
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_41, 1) || iParam1)
		{
			unk_0x1A058EB0D1ACEC78("DeathFailOut");
			func_19(0, 2, 1);
			unk_0xEBFF48776C732268(0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_41, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)//Position - 0x37C7
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

void func_20(int iParam0, int iParam1)//Position - 0x3828
{
	char* sVar0;
	
	switch (func_407())
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
			func_19(1, 1, 0);
			unk_0xEBFF48776C732268(1);
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_41, 0) || iParam1)
		{
			unk_0x1A058EB0D1ACEC78(sVar0);
			func_19(0, 1, 1);
			unk_0xEBFF48776C732268(0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_41, 0);
	}
}

void func_21(var uParam0, int iParam1)//Position - 0x38C8
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)//Position - 0x38D8
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)//Position - 0x38E9
{
	return (uParam0 && iParam1) != 0;
}

int func_24()//Position - 0x38F8
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_41, 0) && !unk_0xFA30DFD0084E92FE(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_20(1, 0);
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
			func_18(1, 0);
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
				func_19(0, 2, 1);
				func_397(1, 1, 1, 0, 0);
				func_26(1);
				unk_0xD941904CB477C7EE(0);
				unk_0xD2EDBB43BBCA0E8B(0);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (unk_0x105601648511CC64() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)//Position - 0x3A3D
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

void func_26(bool bParam0)//Position - 0x3A84
{
	if (bParam0)
	{
		func_31();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_30(0))
		{
			func_27(0);
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

void func_27(int iParam0)//Position - 0x3AE7
{
	if (Global_3943)
	{
		func_29(0, 0);
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
	if (!func_28())
	{
		Global_389D.f_1 = 3;
	}
}

int func_28()//Position - 0x3B57
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)//Position - 0x3B7E
{
	if (bParam0)
	{
		if (func_30(0))
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

int func_30(int iParam0)//Position - 0x3BF2
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

void func_31()//Position - 0x3C4C
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_32()//Position - 0x3C75
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_397(0, 1, 1, 0, 0);
	func_26(1);
}

void func_33(int iParam0)//Position - 0x3C91
{
	if (!func_441(iParam0))
	{
		func_465(iParam0);
	}
	else
	{
		func_355(iParam0);
	}
}

int func_34(int iParam0)//Position - 0x3CB2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)//Position - 0x3CEF
{
	if (func_36(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_36(int iParam0)//Position - 0x3D19
{
	return iParam0 < 3;
}

void func_37(var uParam0, int iParam1, int iParam2)//Position - 0x3D25
{
	if (func_441(&(uParam0->f_1)))
	{
		func_437(&(uParam0->f_1));
	}
	if (func_441(&(uParam0->f_4)))
	{
		func_437(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_A));
	uParam0->f_86 = iParam1;
	uParam0->f_87 = iParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_38(var uParam0, int iParam1)//Position - 0x3D75
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x284F2ACE6839D3C0("OFFMISSION_WASTED", false, -1);
}

void func_39(int iParam0, float fParam1)//Position - 0x3D97
{
	iParam0->f_1 = (func_40(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_40(bool bParam0)//Position - 0x3DC5
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

void func_41(var uParam0)//Position - 0x3E1D
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
				if (unk_0x17FAADF9916EF741() && !func_43(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_42(0);
}

void func_42(int iParam0)//Position - 0x3EC4
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

bool func_43(bool bParam0)//Position - 0x3ED8
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_44(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x3F03
{
	bool bVar0;
	
	if (unk_0xC87A57742F7D3C06() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = unk_0xC87A57742F7D3C06();
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x610A1308608A0F91(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (unk_0x19B821A70FE4D11F(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
		{
			unk_0xC4248B71D9B26306(true);
			uParam0->f_234 = 1;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
			{
				unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			}
		}
	}
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(19);
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 21, 1);
	unk_0xBBC4195AD74D153D(0, 28, 1);
	unk_0xBBC4195AD74D153D(0, 29, 1);
	unk_0xBBC4195AD74D153D(0, 171, 1);
	func_69(0);
	if (unk_0x50465D2C022B9E04(2))
	{
		if (unk_0xD8169614C33872A0() || (unk_0x17FAADF9916EF741() && !unk_0x26641E1BFD792DBC()))
		{
			unk_0x08009E53F6E7E15C();
		}
	}
	Global_8E67 = 1;
	if (!uParam0->f_233)
	{
		switch (func_34(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			case 1:
				unk_0x9216004FAC08D1DC("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9216004FAC08D1DC("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9216004FAC08D1DC("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_68(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_68(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_68((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_68(30f) - func_68(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_42(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_47(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_46(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_46(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_OUT");
			unk_0xF9FBC2F3F73D94C9();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_46(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0x8A0D8839261BAEEF(2))
			{
				if (unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_45(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (unk_0x694514BD37EC4E94(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && unk_0xA7F138B5B1AB2CF6(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_45(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_22F = func_46((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_46((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_46((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_46((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (unk_0x694514BD37EC4E94(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_42(0);
			}
			return !bVar0;
		}
	}
	func_42(0);
	return 1;
}

void func_45(var uParam0, bool bParam1)//Position - 0x455F
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_9(unk_0xE57EAD1FEA2A6FAF(2, 215, true));
	func_14("ES_HELP");
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(215);
	}
	unk_0xF9FBC2F3F73D94C9();
	if (bParam1)
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(1);
		func_9(unk_0xE57EAD1FEA2A6FAF(2, 216, true));
		func_14("ES_XPAND");
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x5E5DBD0A6623969E(true);
			unk_0x1E1FB49121565EB6(216);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

float func_46(float fParam0, float fParam1, float fParam2)//Position - 0x4623
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

void func_47(var uParam0, float fParam1, bool bParam2)//Position - 0x464A
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_67() * 0.25f);
	if (unk_0xA7F138B5B1AB2CF6(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_22C == 4)
				{
					func_66(&(uParam0->f_D));
				}
				else
				{
					func_14(&(uParam0->f_D));
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					unk_0x1E1FB49121565EB6(150);
				}
				else
				{
					unk_0x1E1FB49121565EB6(100);
				}
				unk_0x5E5DBD0A6623969E(true);
				if (uParam0->f_22C == 4)
				{
					unk_0x1E1FB49121565EB6((uParam0->f_38 - 1));
				}
				else
				{
					unk_0x1E1FB49121565EB6(uParam0->f_38);
				}
				unk_0x5E5DBD0A6623969E(bParam2);
				if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
				{
					unk_0x1E1FB49121565EB6(2);
				}
				else
				{
					unk_0x1E1FB49121565EB6(69);
				}
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_UP");
				unk_0xD44E04EBBDC4CE88(0.15f);
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_3 = 1;
			}
		}
		func_65();
		unk_0x4B6031094354FED6(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_68((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_67());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 4)
	{
		fVar7 = func_64(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x3771EE4CB542D71E(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_64(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_67()) / 2.5f);
		if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0xD55638CE45B2B948(2, 215);
	unk_0xD55638CE45B2B948(2, 216);
	unk_0xD55638CE45B2B948(2, 200);
	unk_0xBBC4195AD74D153D(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * -1);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_61((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x37CCF3DE21C7FD23();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0x4B6031094354FED6(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				unk_0xBBC4195AD74D153D(2, 188, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 188))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xBBC4195AD74D153D(2, 187, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 187))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xBBC4195AD74D153D(2, 202, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 202))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_232)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				if (unk_0x694514BD37EC4E94(2, 215) || unk_0xF7DDAAF0EFDAFA22(2, 200))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xE45648BDBF3441F5(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, iVar0);
	unk_0x666751E43D377EAA(fVar9, fVar10);
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, 0.4f);
	fVar1 = (fVar1 - func_68(6f));
	fVar1 = (fVar1 + (func_68(30f) - func_68((2f * 2f))));
	fVar11 = (fVar2 - func_68((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_46((fVar11 / (0.6f * func_68(25f))), 0f, 1f);
		func_65();
		unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 - (func_68((2f - 0.5f)) - 0.001388889f)), fVar6, func_60(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_68((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_68((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_46((fVar11 / (0.8f * func_68(25f))), 0f, 1f);
			func_57(uParam0, iVar17, (fVar1 + func_68(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_68(25f));
		if (uParam0->f_22C == 4)
		{
			if (iVar17 == (uParam0->f_240 - 1))
			{
				fVar1 = (fVar1 + func_68((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_68(2f));
					fVar12 = func_46((fVar11 / (0.6f * func_68(25f))), 0f, 1f);
					func_65();
					unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_68((2f * 0.5f))), fVar6, func_60(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_68((2f * 0.3f)));
					if (uParam0->f_38 > 0)
					{
						fVar1 = (fVar1 + func_68((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 4)
	{
		return;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_68((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_68(2f));
			fVar12 = func_46((fVar11 / (0.6f * func_68(25f))), 0f, 1f);
			func_65();
			unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_68((2f * 0.5f))), fVar6, func_60(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_68((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_67())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_46((fVar11 / (0.8f * func_68(25f))), 0f, 1f);
			unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_50(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x83D607D7994DEF3A() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_67()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_67()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_67()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_67()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 3)
			{
				unk_0x666751E43D377EAA(fVar20, fVar21);
				unk_0x567A3300A78B3D65(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x567A3300A78B3D65(0);
			}
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			func_49(&(uParam0->f_226), fVar20, (fVar1 + func_68((2f * 2f))), 0, 0, 0);
			unk_0x666751E43D377EAA(fVar20, fVar21);
			unk_0x567A3300A78B3D65(2);
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			unk_0x8F62A12BC2768BE8(0);
			func_65();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x666751E43D377EAA(fVar20, fVar22);
			unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					unk_0x8B371195127AACF2("PERCENTAGE");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x8B371195127AACF2("FO_TWO_NUM");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0xAA5C5BF0489E5553(uParam0->f_22B);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x8B371195127AACF2("MTPHPER_XPNO");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x8B371195127AACF2("ESDOLLA");
					unk_0xBCDE00BFDE9A5BD1(uParam0->f_22A, 1);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_68((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						unk_0xE45648BDBF3441F5(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xE45648BDBF3441F5(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xE45648BDBF3441F5(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_48(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_68(10f)) + fVar29);
				if (uParam0->f_22C == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x51DA985AC0B70E2E(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_68(30f) - 2f));
		}
	}
}

float func_48(float fParam0)//Position - 0x52DA
{
	return (fParam0 * 0.00078125f);
}

void func_49(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x52EA
{
	unk_0x8F62A12BC2768BE8(iParam3);
	unk_0xC8793973D4960AC4(iParam5);
	func_65();
	if (bParam4)
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(sParam0);
	}
	else
	{
		unk_0x8B371195127AACF2(sParam0);
	}
	unk_0x3A8B9C7B1C825123(fParam1, fParam2, 0);
}

int func_50(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x5327
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_56(iParam0), 64);
	StringCopy(&cVar1, func_53(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_52())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_52())
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
		vVar7.x = (vVar7.x * (func_51(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_51(iParam0) / fVar4));
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

float func_51(int iParam0)//Position - 0x54D8
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

int func_52()//Position - 0x5577
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

var func_53(int iParam0, bool bParam1)//Position - 0x55A9
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_55(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_54(&uVar1);
			}
		}
		else
		{
			return func_54(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
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

var func_54(var uParam0)//Position - 0x59F9
{
	return uParam0;
}

struct<13> func_55(int iParam0)//Position - 0x5A03
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_56(int iParam0)//Position - 0x5A1A
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_55(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_54(&uVar0);
		}
		else
		{
			return func_54(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_57(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x5A8F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iParam5);
	unk_0x666751E43D377EAA(fParam3, fParam4);
	unk_0x567A3300A78B3D65(1);
	unk_0xB8F3C51875F7BEA3(1f, func_59(14f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_65();
	if (uParam0->f_213[iParam1])
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		unk_0x8B371195127AACF2(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			unk_0xAA5C5BF0489E5553(uParam0->f_1E9[iParam1]);
		}
	}
	unk_0x3A8B9C7B1C825123(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_50(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_53(7, 0), (fParam4 - 0.006f), ((fParam2 + func_68(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_50(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_53(5, 0), (fParam4 - 0.006f), ((fParam2 + func_68(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_50(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_53(6, 0), (fParam4 - 0.006f), ((fParam2 + func_68(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		unk_0x567A3300A78B3D65(1);
	}
	else
	{
		unk_0x567A3300A78B3D65(2);
	}
	unk_0xB8F3C51875F7BEA3(1f, func_59(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iParam5);
	func_58(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_58(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x5D1A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_65();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_59(18f));
			unk_0xC8793973D4960AC4(4);
			if (iParam0 < 0)
			{
				unk_0xE746379C2AF24EF6("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			else
			{
				unk_0xE746379C2AF24EF6("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_59(14f));
			break;
	}
	unk_0x449F0674640D94C0(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x8B371195127AACF2("PERCENTAGE");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 1:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 2:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_TWO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_59(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x8B371195127AACF2("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
			}
			else
			{
				unk_0x8B371195127AACF2("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x8B371195127AACF2(sParam4);
			break;
		
		case 7:
			unk_0x8B371195127AACF2("STRING");
			unk_0x607C19B90D297FE2(sParam4);
			break;
		
		case 8:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 14);
			break;
		
		case 9:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 6);
			break;
		
		case 10:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 18:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 12:
			unk_0x8B371195127AACF2("AHD_DIST");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 13:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 16:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x3A8B9C7B1C825123((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_59(14f));
		}
		else
		{
			unk_0x3A8B9C7B1C825123(fParam2, fParam3, 0);
		}
	}
}

float func_59(float fParam0)//Position - 0x6093
{
	return (fParam0 * 0.025f);
}

float func_60(float fParam0)//Position - 0x60A3
{
	return (fParam0 * 0.0009259259f);
}

void func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x60B3
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_63(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_62(7, iVar0);
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

void func_62(int iParam0, int iParam1)//Position - 0x6201
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_63(int iParam0, int iParam1)//Position - 0x621A
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

float func_64(char* sParam0)//Position - 0x6233
{
	unk_0xE746379C2AF24EF6(sParam0);
	return (unk_0x2207C0EA517B975D(1) / 2f);
}

void func_65()//Position - 0x6248
{
	unk_0x996AC9A66B2A5A3F(1);
	if (unk_0x422F9EDE839E6ABB() || unk_0x17FAADF9916EF741())
	{
		unk_0x996AC9A66B2A5A3F(7);
	}
	unk_0x6AEB48E3B648804A(0);
}

void func_66(char* sParam0)//Position - 0x6270
{
	unk_0xCB30200B8055CA57(sParam0);
}

float func_67()//Position - 0x627E
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8ACB0C3FACC09467())
	{
	}
	return fVar0;
}

float func_68(float fParam0)//Position - 0x6292
{
	return (fParam0 * 0.001388889f);
}

void func_69(int iParam0)//Position - 0x62A2
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_30(0))
		{
			func_27(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_70(var uParam0)//Position - 0x62CB
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

bool func_71()//Position - 0x62FE
{
	return Global_16B42.f_1;
}

void func_72(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)//Position - 0x630C
{
	func_539(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &iParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, uParam16, bParam17);
}

int func_73(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)//Position - 0x633C
{
	if (!func_247(iParam1, 5))
	{
		unk_0x7456702622C62EA0(1);
		func_173(iParam1, func_177(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		func_207(iParam1, 5, 1);
		SYSTEM::SETTIMERA(0);
	}
	if (!func_247(iParam1, 6))
	{
		if (func_169(&(iParam1->f_1A), 0, 0))
		{
			func_207(iParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_247(iParam1, 27) && unk_0x97EF4023B86C354F())
	{
		if (!func_247(iParam1, 26))
		{
			func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		}
		func_207(iParam1, 27, 0);
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		if (*iParam9)
		{
			if (unk_0x97EF4023B86C354F())
			{
				func_92(uParam2, iParam0);
				func_88(iParam1);
			}
			else if (func_75(&iLocal_542, 0))
			{
				iLocal_542 = 0;
				*iParam9 = 0;
				func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else
		{
			if (!func_247(iParam1, 10))
			{
				unk_0xC4BA30B532FE260F(-1, "BASE_JUMP_PASSED", "HUD_AWARDS", 1);
				func_207(iParam1, 10, 1);
			}
			func_44(&(iParam1->f_1A), 0, 1065353216, 0, 1, 0);
			func_88(iParam1);
		}
		if (*iParam9)
		{
			if (unk_0x97EF4023B86C354F())
			{
				if (!func_247(iParam1, 28) && func_74(&uLocal_105))
				{
					func_207(iParam1, 28, 1);
					func_200(iParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
			}
			if (func_312(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_200(iParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else if (func_312(uParam3, 5, 1000))
		{
			func_70(&(iParam1->f_1A));
			return 1;
		}
		else if (func_312(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_312(uParam3, 8, 1000)) && (!unk_0x97EF4023B86C354F() || func_247(iParam1, 26)))
		{
			*iParam9 = 1;
			if (unk_0x97EF4023B86C354F())
			{
				if (func_74(&uLocal_105))
				{
					func_207(iParam1, 28, 1);
					func_200(iParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
				else
				{
					func_207(iParam1, 28, 0);
					func_200(iParam1, 0, 202, "HUD_INPUT53", 358, 0, 358, 0, 358, 0);
				}
			}
		}
	}
	return 2;
}

int func_74(var uParam0)//Position - 0x65CB
{
	if ((unk_0xFA30DFD0084E92FE(uParam0->f_2A, 1) && Global_1C017E.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, bool bParam1)//Position - 0x6602
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171A.f_2 + 5 < unk_0xC87A57742F7D3C06() && Global_1C171A.f_2 > 0)
	{
		func_87(&Global_1C171A);
		func_87(&(Global_1C171A.f_31));
		*iParam0 = 0;
		Global_1C171A.f_2 = 0;
		func_86(0);
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
	if ((unk_0xF7E138CFA19B55E7() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_84() && unk_0x57D316754A262B34()))
	{
		if (unk_0x87080EF061A795E2())
		{
			func_81(&(Global_1C171A.f_3), func_83(&(Global_1C171A.f_3)));
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 4))
			{
				unk_0xF0059F27F7BB6680(iParam0, 4);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_79(&(Global_1C171A.f_3), 0);
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
			else if (!func_84())
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
				func_87(&(Global_1C171A.f_31));
				func_87(&Global_1C171A);
				*iParam0 = 0;
				Global_1C171A.f_2 = 0;
				func_86(0);
				return 1;
			}
		}
	}
	else
	{
		func_81(&(Global_1C171A.f_3), func_83(&(Global_1C171A.f_3)));
		if ((func_78(&(Global_1C171A.f_31)) && !func_76(&(Global_1C171A.f_31), 2000, 1)) && !unk_0x57D316754A262B34())
		{
			unk_0xF0059F27F7BB6680(iParam0, 3);
			StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
			func_79(&(Global_1C171A.f_3), 0);
		}
		else if (!unk_0xFA30DFD0084E92FE(*iParam0, 3))
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 1))
			{
				unk_0xDF332625237EA533(0);
				unk_0xF0059F27F7BB6680(iParam0, 1);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_79(&(Global_1C171A.f_3), 0);
			}
		}
		if (func_78(&Global_1C171A))
		{
			if (!func_76(&Global_1C171A, 4000, 1))
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
							func_87(&Global_1C171A);
							*iParam0 = 0;
							Global_1C171A.f_2 = 0;
							func_86(0);
							return 1;
						}
					}
				}
				else
				{
					func_87(&Global_1C171A);
					*iParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_86(0);
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
					func_87(&(Global_1C171A.f_31));
					func_87(&Global_1C171A);
					*iParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_86(0);
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
						func_87(&(Global_1C171A.f_31));
						func_87(&Global_1C171A);
						*iParam0 = 0;
						Global_1C171A.f_2 = 0;
						func_86(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_76(var uParam0, int iParam1, bool bParam2)//Position - 0x6A76
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_77(uParam0, bParam2, 0);
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

void func_77(var uParam0, bool bParam1, bool bParam2)//Position - 0x6AD4
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

bool func_78(var uParam0)//Position - 0x6B19
{
	return uParam0->f_1;
}

void func_79(var uParam0, bool bParam1)//Position - 0x6B25
{
	func_80(uParam0);
	if (bParam1)
	{
		func_86(0);
	}
	uParam0->f_23 = 1;
}

void func_80(var uParam0)//Position - 0x6B42
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_81(var uParam0, int iParam1)//Position - 0x6B5D
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_82(uParam0);
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

void func_82(var uParam0)//Position - 0x6C5B
{
	uParam0->f_23 = 0;
}

int func_83(var uParam0)//Position - 0x6C68
{
	return uParam0->f_23;
}

int func_84()//Position - 0x6C74
{
	if (func_85())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_85()//Position - 0x6C94
{
	return Global_258255;
}

void func_86(bool bParam0)//Position - 0x6CA0
{
	unk_0x21B00B24BEAA7264();
	if (bParam0)
	{
		unk_0xDC1A2868428162E5();
	}
}

void func_87(var uParam0)//Position - 0x6CB5
{
	uParam0->f_1 = 0;
}

void func_88(int iParam0)//Position - 0x6CC2
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_91(iParam0))
	{
		return;
	}
	unk_0x4B6031094354FED6(*iParam0, 255, 255, 255, 0, 0);
	if (unk_0x8A0D8839261BAEEF(2))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iParam0->f_3[iVar0] != 358)
			{
				iParam0->f_C[iVar0] = unk_0xE57EAD1FEA2A6FAF(2, iParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_89(&(iParam0->f_1), 4);
	}
	if (!func_23(iParam0->f_1, 4))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_CLEAR_SPACE");
		unk_0xD44E04EBBDC4CE88(200f);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xF9FBC2F3F73D94C9();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!unk_0xF1734B55490E9045(iParam0->f_15[iVar2]))
			{
				if (!unk_0xF1734B55490E9045(iParam0->f_C[iVar2 + 4]))
				{
					unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT");
					unk_0xD44E04EBBDC4CE88(fVar1);
					func_9(iParam0->f_C[iVar2 + 4]);
					func_9(iParam0->f_C[iVar2]);
					func_14(iParam0->f_15[iVar2]);
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT");
					unk_0xD44E04EBBDC4CE88(fVar1);
					func_9(iParam0->f_C[iVar2]);
					func_14(iParam0->f_15[iVar2]);
					unk_0xF9FBC2F3F73D94C9();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		unk_0x29CD142125FE177B(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(iParam0->f_2));
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*iParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(80f);
		unk_0xF9FBC2F3F73D94C9();
		func_21(&(iParam0->f_1), 4);
	}
}

void func_89(var uParam0, int iParam1)//Position - 0x6E5B
{
	func_90(uParam0, iParam1);
}

void func_90(var uParam0, var uParam1)//Position - 0x6E6B
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_91(var uParam0)//Position - 0x6E80
{
	if (*uParam0 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_92(var uParam0, int iParam1)//Position - 0x6EA7
{
	func_93(uParam0, &uLocal_105);
}

void func_93(var uParam0, var uParam1)//Position - 0x6EB7
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
	
	func_168(&(Global_1C171A.f_31), 1, 0);
	unk_0x39CC55A2108C1AB0();
	func_167();
	func_69(0);
	unk_0xDE7B9CB38D019BF0();
	func_165(1);
	unk_0x4E0EC60D119222B1(10);
	func_164(1);
	func_163(1);
	if (!func_160())
	{
		if (!unk_0x144E80F5C46A6B75("LEADERBOARD_SCENE"))
		{
			unk_0xD6423910AAD8A379("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 3))
	{
		*uParam0 = func_159();
		unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 3);
	}
	Var10 = { func_55(unk_0xB5CEFD608600A09F()) };
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
				func_158(*uParam0, Global_1C017E.f_ADC);
				if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
				{
					if (!func_157(uParam1->f_2C))
					{
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							Var6 = { Global_1C017E.f_ADC.f_9 };
							func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else if (!Global_1C017E.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					func_155(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
				}
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 4);
				func_154(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 5);
				func_154(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 6);
				func_154(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 1);
				func_153(*uParam0);
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
				unk_0x7456702622C62EA0(1);
			}
			else
			{
				func_153(*uParam0);
			}
		}
		else
		{
			if (Global_1C017E.f_B0D != 1)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
				Global_1C017E.f_B0D = 1;
			}
			if (!func_117(uParam1))
			{
				uParam1->f_F6.f_1 = -1;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
				if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 0))
				{
					unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xF9FBC2F3F73D94C9();
					func_158(*uParam0, Global_1C017E.f_ADC);
					if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_157(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C017E.f_ADC.f_9 };
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_155(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
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
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 5);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 6);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 7);
						func_116(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09 = 1;
					func_87(&(Global_1C017E.f_B07));
				}
				else if (func_76(&(Global_1C017E.f_B07), 300, 0))
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
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 5);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 6);
							func_154(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 7);
						func_116(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09++;
					if (Global_1C017E.f_B09 > 3)
					{
						Global_1C017E.f_B09 = 0;
					}
					func_87(&(Global_1C017E.f_B07));
				}
				func_153(*uParam0);
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
					func_158(*uParam0, Global_1C017E.f_ADC);
					if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_157(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C017E.f_ADC.f_9 };
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_156(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_155(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 6))
					{
						func_115(&Global_1C1269);
						func_111(uParam1, &Global_1C1269);
						func_110(uParam1, &Global_1C1269);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C017E.f_A90[0] > 1 || (Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_AD7[0] != -1)) || (((Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_ADC.f_1B) && func_157(uParam1->f_2C)) && Global_1C017E.f_AD7[0] != -1))
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
									func_154(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 5);
									if ((Global_1C017E.f_A90[1] < 1 && Global_1C017E.f_AD7[1] == -1) && !(((Global_1C017E.f_A90[1] > 0 && Global_1C017E.f_ADC.f_1B) && func_157(uParam1->f_2C)) && Global_1C017E.f_AD7[1] != -1))
									{
										func_154(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_154(*uParam0, &iVar3, iVar9, 0, 0);
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
									if ((Global_1C017E.f_A90[2] < 2 && Global_1C017E.f_AD7[2] == -1) && !(((Global_1C017E.f_A90[2] > 0 && Global_1C017E.f_ADC.f_1B) && func_157(uParam1->f_2C)) && Global_1C017E.f_AD7[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_154(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_154(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_109(Global_1C1269[iVar0 /*100*/].f_20))
							{
								if (func_157(uParam1->f_2C))
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
										if (func_108(&(Global_1C1269[iVar0 /*100*/].f_20), &Var10))
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
									if (func_157(uParam1->f_2C))
									{
										Var6 = { Global_1C1269[iVar0 /*100*/] };
										if (!unk_0xF1734B55490E9045(&(Global_1C1269[iVar0 /*100*/].f_54)) && !unk_0x3362CDE8460ED38B(&(Global_1C1269[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C1269[iVar0 /*100*/].f_54), 64);
										}
										func_107(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &Var6, &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_107(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &(Global_1C1269[iVar0 /*100*/]), &(Global_1C1269[iVar0 /*100*/].f_50));
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
												func_102(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], 0, Global_1C1269[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_102(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], Global_1C1269[iVar0 /*100*/].f_4A, Global_1C1269[iVar0 /*100*/].f_3A);
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
												func_99(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_99(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], Global_1C1269[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_98();
									uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C1269[iVar0 /*100*/].f_3B > 2)
										{
											unk_0xF0059F27F7BB6680(&iVar9, 2);
											unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_97(*uParam0, (iVar3 - 1), iVar9);
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
						func_154(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 5);
						func_154(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 6);
						func_154(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 1);
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
					func_153(*uParam0);
					unk_0x7456702622C62EA0(1);
					if (uParam1->f_F6.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1C017E.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_97(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_153(*uParam0);
					func_94(uParam0, uParam1);
				}
			}
		}
	}
}

void func_94(var uParam0, var uParam1)//Position - 0x7E94
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
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
		func_96(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 0))
		{
			if ((unk_0x8FCEEB789599BD9B(2, 188) || unk_0xD3C4A010282C31F2(2, 188)) || iVar6 < -100)
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + -1);
				unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 0);
				func_87(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_95(uParam1, 188))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 0);
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 1))
		{
			if ((unk_0x8FCEEB789599BD9B(2, 187) || unk_0xD3C4A010282C31F2(2, 187)) || iVar6 > 100)
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1++;
				unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 1);
				func_87(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_95(uParam1, 187))
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
			func_87(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_95(uParam1, 204))
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
				func_97(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_97(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
		}
		if (func_109(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 2))
			{
				if (unk_0x8FCEEB789599BD9B(2, 217) || unk_0xF7DDAAF0EFDAFA22(2, 217))
				{
					if (!unk_0x14973A77EAB7E05A())
					{
						unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
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

int func_95(var uParam0, int iParam1)//Position - 0x8237
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_96(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x8FCEEB789599BD9B(2, iParam1) && !unk_0xD3C4A010282C31F2(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_76(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x8FCEEB789599BD9B(2, iParam1) && !unk_0xD3C4A010282C31F2(2, iParam1)) || func_76(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_96(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x82D6
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

void func_97(int iParam0, int iParam1, int iParam2)//Position - 0x83AB
{
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT_STATE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0xF9FBC2F3F73D94C9();
}

void func_98()//Position - 0x83CE
{
	unk_0xF9FBC2F3F73D94C9();
}

void func_99(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x83DA
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
						fParam15 = func_101(fParam15);
					}
					else
					{
						fParam15 = func_100(fParam15);
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

float func_100(float fParam0)//Position - 0x84FC
{
	return (fParam0 / 0.3048f);
}

float func_101(float fParam0)//Position - 0x850C
{
	return (fParam0 / 1609.344f);
}

void func_102(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x851C
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
			if (func_106(iParam15) != 0)
			{
				unk_0x57016C44F10111F0(func_103(func_106(iParam15), 0));
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
						iParam15 = SYSTEM::FLOOR(func_101(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_100(SYSTEM::TO_FLOAT(iParam15)));
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

char* func_103(int iParam0, bool bParam1)//Position - 0x88B6
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
			if (func_105(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_104(&(Var0.f_1F));
				}
				else
				{
					return func_104(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_104(var uParam0)//Position - 0x94D5
{
	return uParam0;
}

int func_105(int iParam0, var uParam1)//Position - 0x94DF
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

int func_106(int iParam0)//Position - 0x951A
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

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x968D
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

int func_108(var uParam0, var uParam1)//Position - 0x96DF
{
	if (!func_109(*uParam0))
	{
		return 0;
	}
	if (!func_109(*uParam1))
	{
		return 0;
	}
	if (unk_0x8C3429C475E8DB5D(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_109(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x9719
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

void func_110(var uParam0, var uParam1)//Position - 0x9729
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

void func_111(var uParam0, var uParam1)//Position - 0x989A
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
			if (func_114(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_114(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_114(uParam1, iVar3, &uVar2, 2))
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
		func_112(uParam1);
	}
}

void func_112(var uParam0)//Position - 0x994F
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
	Var3 = { func_55(unk_0xB5CEFD608600A09F()) };
	if (unk_0xA8C9945AE39E6D48(Global_1C017E.f_B0A))
	{
		iVar4 = unk_0xD2159EC8D5CA5847(Global_1C017E.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_113(&Global_1C11E7);
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
					if (func_108(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
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

void func_113(var uParam0)//Position - 0x9B6F
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

int func_114(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9BE3
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
				(uParam0[iParam1 /*100*/])->f_20 = { func_55(unk_0xB5CEFD608600A09F()) };
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

void func_115(var uParam0)//Position - 0x9E8C
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
	func_87(&(Global_1C017E.f_B0E));
}

void func_116(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x9F6B
{
	unk_0xF0059F27F7BB6680(&iParam2, 7);
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0x57016C44F10111F0(sParam3);
	unk_0xCEC028A78CF8885E();
	unk_0xF9FBC2F3F73D94C9();
}

int func_117(var uParam0)//Position - 0x9F9F
{
	if (!Global_1C017C)
	{
		if (!func_78(&(Global_1C017E.f_B0B)))
		{
			func_77(&(Global_1C017E.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_76(&(Global_1C017E.f_B0B), 1000, 1))
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
		func_152(uParam0);
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
	if (!func_150(uParam0))
	{
		return 0;
	}
	if (!func_148(uParam0))
	{
		return 0;
	}
	if (!func_134(uParam0))
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		func_115(&Global_1C1269);
		func_111(uParam0, &Global_1C1269);
		func_110(uParam0, &Global_1C1269);
		unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 6);
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 7))
	{
		if (!func_78(&(Global_1C017E.f_B0E)))
		{
			func_77(&(Global_1C017E.f_B0E), 1, 0);
		}
		else if (func_76(&(Global_1C017E.f_B0E), 30000, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 7);
		}
		if (func_131(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_128(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_122(&Global_1C1269))
		{
			func_118(&Global_1C1269);
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 7);
			func_118(&Global_1C1269);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_118(var uParam0)//Position - 0xA164
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_121(Global_1C017E.f_B0A);
	if (Global_1C0DEF.f_51[iVar2] != 0)
	{
		func_120(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_113(&Global_1C11E7);
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
			if (func_109((uParam0[iVar0 /*100*/])->f_2D))
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
	Global_1C0DEF.f_57[iVar2 /*3*/] = { func_119(unk_0xB5CEFD608600A09F()) };
}

Vector3 func_119(int iParam0)//Position - 0xA34D
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

void func_120(int iParam0, int iParam1)//Position - 0xA360
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

int func_121(int iParam0)//Position - 0xA3DC
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

int func_122(var uParam0)//Position - 0xA46F
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_126(uParam0);
			if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_109((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_125(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177A))
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
			if (func_123(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177A.f_CE), &Global_1C177A, &(Global_1C177A.f_9D)))
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
					if (func_109((uParam0[iVar0 /*100*/])->f_20) && func_109(Global_1C177A[iVar1 /*13*/]))
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

int func_123(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xA612
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
					func_124(&uVar0, uParam3[iVar1 /*4*/]);
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

void func_124(var uParam0, char* sParam1)//Position - 0xA6CB
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

int func_125(var uParam0, var uParam1)//Position - 0xA6DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_109(*(uParam1[iVar0 /*13*/])))
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

void func_126(var uParam0)//Position - 0xA71C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_127(&(Global_1C177A[iVar0 /*13*/]));
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

void func_127(var uParam0)//Position - 0xA78C
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

int func_128(var uParam0)//Position - 0xA7D4
{
	int iVar0;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		return 1;
	}
	else if (unk_0xF49912B78E2591B6())
	{
		if (!func_130(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_129(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_129(var uParam0, var uParam1, char* sParam2)//Position - 0xA838
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_109(*uParam1))
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

int func_130(var uParam0)//Position - 0xA93F
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
				func_127(&(Global_1C017E.f_BD2[iVar1 /*13*/]));
				if (func_109((uParam0[iVar1 /*100*/])->f_20))
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
					if (func_109((uParam0[iVar1 /*100*/])->f_20))
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

int func_131(var uParam0)//Position - 0xAACA
{
	int iVar0;
	
	if (unk_0xF49912B78E2591B6())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_133(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C017E.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
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
			if (!func_132(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xAB5D
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
			if (func_109(Var0))
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

int func_133(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xAC75
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
			if (func_109(Var1[0 /*13*/]))
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

int func_134(var uParam0)//Position - 0xAD70
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
	Var12 = { func_55(unk_0xB5CEFD608600A09F()) };
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
			if (func_146(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_147(), 0, 0, 0))
			{
				func_145(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_147())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xD69860729CF9D123(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1C0005.f_169)))
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
								func_144(&Var0);
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
								if (func_147() && iVar5 == 0)
								{
									func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C017E.f_AD7[iVar9] = 0;
									Global_1C017E.f_A90[iVar9]++;
								}
								if (func_147() && (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_108(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C017E.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_142(uParam0->f_2C))
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
									if (func_157(uParam0->f_2C))
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
						if (!func_147())
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
						func_144(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar7, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_147() && iVar5 == iVar7)
								{
									if (!func_108(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_147() && (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									if (func_109(Var0) && !func_108(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_108(&Var0, &Var12))
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
										if (func_142(uParam0->f_2C))
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
										if (func_157(uParam0->f_2C))
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
							func_144(&Var0);
							iVar7++;
						}
						unk_0xF44A1E8325E80FF1();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_147())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
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
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
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
			if (func_136(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_145(&Var1, &(uParam0->f_2C));
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
								if (func_147() && (func_108(&Var0, &Var12) || func_108(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_142(uParam0->f_2C))
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
									if (func_157(uParam0->f_2C))
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
									if (func_142(uParam0->f_2C))
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
									if (func_157(uParam0->f_2C))
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
							func_144(&Var0);
							iVar2++;
						}
					}
					unk_0xF44A1E8325E80FF1();
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xF44A1E8325E80FF1();
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar9);
					Global_1C017E.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C017E.f_AD7[iVar9] == -1 && func_147())
				{
					if (Global_1C017E.f_A90[iVar9] >= 1)
					{
						func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
					Global_1C017E.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_135(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_135(int iParam0, int iParam1)//Position - 0xBBA3
{
	int iVar0;
	
	if ((func_147() && Global_1C017E.f_A90[iParam0] > Global_1C017E.f_AD7[iParam0]) && Global_1C017E.f_AD7[iParam0] >= 0)
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
		if (!func_147())
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

int func_136(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0xBCC8
{
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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

void func_137(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0xBD7E
{
	Global_1C0000 = 1;
	func_168(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_138()//Position - 0xBDA9
{
	if (unk_0xE186ACC7BE9B244E() && !func_160())
	{
		return 1;
	}
	return 0;
}

int func_139()//Position - 0xBDC7
{
	if (unk_0x8964C7ACF67E0DA4() || Global_1C0000)
	{
		func_140();
		return 1;
	}
	return 0;
}

void func_140()//Position - 0xBDE9
{
	if (func_76(&(Global_1C0000.f_1), 120000, 1))
	{
		unk_0xA94A29B5BBA15E49(Global_1C0000.f_3, Global_1C0000.f_4, -1);
		Global_1C0000 = 0;
		func_87(&(Global_1C0000.f_1));
	}
}

void func_141(var uParam0, var uParam1, var uParam2)//Position - 0xBE24
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_87(&(Global_1C0000.f_1));
	unk_0xA94A29B5BBA15E49(*uParam2, uParam2->f_1, -1);
}

int func_142(int iParam0)//Position - 0xBE50
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, char* sParam1, int iParam2)//Position - 0xBEAE
{
	int iVar0;
	int iVar1;
	
	if (func_157(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 64);
		sParam1->f_20 = { func_55(unk_0xB5CEFD608600A09F()) };
	}
	sParam1->f_3B = iParam2;
	if (func_142(uParam0->f_2C))
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

void func_144(var uParam0)//Position - 0xBFBB
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

void func_145(var uParam0, var uParam1)//Position - 0xC066
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_146(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xC081
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
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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

int func_147()//Position - 0xC1B9
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0)//Position - 0xC1D6
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
	Var10 = { func_55(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x0B61CFCE8597AF35();
			Global_1C017E.f_AD7[1] = -1;
			Global_1C0005.f_176 = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_147())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_149(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_145(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
					{
						if (func_147())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xD69860729CF9D123(iVar6, &Var0);
									if (func_157(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_108(&Var0, &(Global_1C0005.f_169)))
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
									func_144(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_147() && iVar4 == 0)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								Global_1C017E.f_AD7[iVar9] = 0;
								Global_1C017E.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xD69860729CF9D123(0, &Var0);
							if (func_147() && (func_108(&Var0, &Var10) || func_108(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_109(Var0) && Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_108(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C017E.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_142(uParam0->f_2C))
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
								if (func_157(uParam0->f_2C))
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
								func_144(&Var0);
								unk_0xF44A1E8325E80FF1();
								func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C017E.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C017E.f_AD7[iVar9] == -1 && func_147())
								{
									if (Global_1C017E.f_A90[iVar9] >= 1)
									{
										func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
									Global_1C017E.f_A90[iVar9]++;
								}
								return 0;
							}
							func_144(&Var0);
						}
						else
						{
							Global_1C017E.f_A90[1] = 0;
							func_144(&Var0);
							unk_0xF44A1E8325E80FF1();
							func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_147())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_147())
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
								if (func_147() && iVar4 == iVar6)
								{
									if (!func_108(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_147() && (func_108(&Var0, &Var10) || func_108(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[1] < 12)
								{
									if (func_109(Var0) && !func_108(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_108(&Var0, &Var10))
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
										if (func_142(uParam0->f_2C))
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
										if (func_157(uParam0->f_2C))
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
							func_144(&Var0);
							iVar6++;
						}
						unk_0xF44A1E8325E80FF1();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C017E.f_AD7[iVar9] == -1 && func_147())
						{
							if (Global_1C017E.f_A90[iVar9] >= 1)
							{
								func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_143(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
							Global_1C017E.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C017E.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_135(iVar9, Global_1C0005.f_176);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xCBD9
{
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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

int func_150(var uParam0)//Position - 0xCC95
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
	Var0 = { func_55(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C017E.f_AD7[iVar10] = -1;
			Global_1C017E.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = -1;
			Global_1C017D = 0;
			if (func_151(uParam0->f_2C))
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
			if (func_146(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_147(), 0, 0, 0))
			{
				func_145(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_147())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xD69860729CF9D123(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1C0005.f_169)))
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
								func_144(&Var1);
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
								if (func_147() && iVar6 == 0)
								{
									func_143(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C017E.f_AD7[iVar10] = 0;
									Global_1C017E.f_A90[iVar10]++;
								}
								if (func_147() && (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_108(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C017E.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_142(uParam0->f_2C))
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
									if (func_157(uParam0->f_2C))
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
						if (!func_147())
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
						func_144(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar8, &Var1);
							if (Global_1C017E.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_147() && iVar6 == iVar8)
								{
									if (!func_108(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_143(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
										Global_1C017E.f_A90[iVar10]++;
									}
								}
								if (func_147() && (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar10] < 12)
								{
									if (func_109(Var1) && !func_108(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_108(&Var1, &Var0))
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
										if (func_142(uParam0->f_2C))
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
										if (func_157(uParam0->f_2C))
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
							func_144(&Var1);
							iVar8++;
						}
						unk_0xF44A1E8325E80FF1();
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C017E.f_AD7[iVar10] == -1 && func_147())
							{
								if (Global_1C017E.f_A90[iVar10] >= 1)
								{
									func_143(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_143(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
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
						func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
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
			if (func_136(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_145(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xD69860729CF9D123(iVar3, &Var1);
							if (func_147() && (func_108(&Var1, &Var0) || func_108(&Var1, &(Global_1C0005.f_169))))
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
										if (func_142(uParam0->f_2C))
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
										if (func_157(uParam0->f_2C))
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
										if (func_142(uParam0->f_2C))
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
										if (func_157(uParam0->f_2C))
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
							func_144(&Var1);
							iVar3++;
						}
					}
					unk_0xF44A1E8325E80FF1();
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar10);
					func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C017E.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C017E.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C017E.f_AD7[iVar10] == -1 && func_147())
			{
				if (Global_1C017E.f_A90[iVar10] >= 1)
				{
					func_143(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_143(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
				Global_1C017E.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_135(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_151(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0xDAD0
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

void func_152(var uParam0)//Position - 0xDB68
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
			func_120(Global_1C017E.f_B0A, -1);
		}
	}
}

void func_153(int iParam0)//Position - 0xDBB8
{
	if (unk_0xA7F138B5B1AB2CF6(iParam0))
	{
		unk_0x4B6031094354FED6(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDBD8
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
				Var4 = { func_55(unk_0xB5CEFD608600A09F()) };
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
							Var6 = { func_55(unk_0xB5CEFD608600A09F()) };
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

void func_155(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xDEAD
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

void func_156(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xDEEF
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

int func_157(int iParam0)//Position - 0xDF7F
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0, int iParam1)//Position - 0xDFA1
{
	unk_0x29CD142125FE177B(iParam0, "SET_DISPLAY_TYPE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

int func_159()//Position - 0xDFBE
{
	return unk_0x9934FEFB3B8C6DB8("SC_LEADERBOARD");
}

bool func_160()//Position - 0xDFCE
{
	return func_161(unk_0xB5CEFD608600A09F());
}

int func_161(int iParam0)//Position - 0xDFDE
{
	switch (func_162(iParam0))
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

int func_162(int iParam0)//Position - 0xE03E
{
	return Global_18402B[iParam0 /*770*/].f_C4;
}

void func_163(int iParam0)//Position - 0xE051
{
	Global_14136C = iParam0;
}

void func_164(int iParam0)//Position - 0xE05F
{
	Global_14D262.f_437 = iParam0;
}

void func_165(bool bParam0)//Position - 0xE070
{
	if (bParam0)
	{
		func_167();
	}
	func_166(4, -1);
	func_166(6, -1);
	func_166(7, -1);
	func_166(3, -1);
	func_166(1, -1);
	func_166(2, -1);
	func_166(11, -1);
	func_166(13, -1);
	func_166(14, -1);
	func_166(16, -1);
}

void func_166(int iParam0, int iParam1)//Position - 0xE0C1
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

void func_167()//Position - 0xE0F7
{
	Global_267214.f_11A6 = 0;
}

void func_168(var uParam0, bool bParam1, bool bParam2)//Position - 0xE107
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

int func_169(var uParam0, bool bParam1, int iParam2)//Position - 0xE144
{
	uParam0->f_C = iParam2;
	func_172(uParam0);
	func_171(uParam0);
	if (unk_0x3362CDE8460ED38B(&(uParam0->f_226), "SPR_RESULT") || (unk_0x3362CDE8460ED38B(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x8AA3F48A15444B98("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x8AA3F48A15444B98("CommonMenu", false);
		unk_0x8AA3F48A15444B98("MPLeaderboard", false);
		unk_0x8AA3F48A15444B98("MPHud", false);
		uParam0->f_1 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4B4A22319BB70CD6("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_170(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_45(uParam0, 1);
		}
		else
		{
			func_45(uParam0, 0);
		}
	}
	Global_11647 = 1;
	return 1;
}

void func_170(var uParam0)//Position - 0xE2E3
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(2);
	func_9(unk_0xE57EAD1FEA2A6FAF(2, 188, true));
	func_14("ES_HELP_TU");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(1);
	func_9(unk_0xE57EAD1FEA2A6FAF(2, 187, true));
	func_14("ES_HELP_TD");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_9(unk_0xE57EAD1FEA2A6FAF(2, 202, true));
	func_14("ES_HELP_AB");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

void func_171(var uParam0)//Position - 0xE3A8
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, func_59(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			unk_0xE746379C2AF24EF6("STRING");
			unk_0x607C19B90D297FE2(&(uParam0->f_D));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
		else
		{
			unk_0xE746379C2AF24EF6(&(uParam0->f_D));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
	}
	else
	{
		unk_0xE746379C2AF24EF6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					unk_0xAA5C5BF0489E5553(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xC9C304D0AABE1335(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x607C19B90D297FE2(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_172(var uParam0)//Position - 0xE4B0
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

void func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)//Position - 0xE52F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_247(iParam0, 4))
	{
		return;
	}
	else
	{
		func_176(&(iParam0->f_1A));
		func_175(&(iParam0->f_1A), "BJ_SC_PASS", sParam1, 0);
		func_207(iParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_174(&(iParam0->f_1A), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_174(&(iParam0->f_1A), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_174(&(iParam0->f_1A), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_174(&(iParam0->f_1A), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_174(&(iParam0->f_1A), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_174(&(iParam0->f_1A), 3, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_174(&(iParam0->f_1A), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_174(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE682
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_175(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xE6F5
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_176(var uParam0)//Position - 0xE718
{
	func_172(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

char* func_177(int iParam0)//Position - 0xE742
{
	switch (iParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		
		case 1:
			return "BJ_JUMP_02";
		
		case 2:
			return "BJ_JUMP_03";
		
		case 3:
			return "BJ_JUMP_04";
		
		case 4:
			return "BJ_JUMP_05";
		
		case 5:
			return "BJ_JUMP_06";
		
		case 6:
			return "BJ_JUMP_07";
		
		case 7:
			return "BJ_JUMP_08";
		
		case 8:
			return "BJ_JUMP_09";
		
		case 9:
			return "BJ_JUMP_10";
		
		case 10:
			return "BJ_JUMP_11";
		
		case 11:
			return "BJ_JUMP_12";
		
		case 12:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_178(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xE7FD
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_187(iParam0, iParam1, fParam2, iParam3);
		Global_1C0005.f_2 = 1;
	}
	if (func_179(&uLocal_105))
	{
		Global_1C017C = 1;
		return 1;
	}
	return 0;
}

int func_179(var uParam0)//Position - 0xE840
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_157(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_55(unk_0xB5CEFD608600A09F()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_145(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x8731EA21A98ED1C3(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_185(uParam0->f_2C, iVar4))
					{
						if (func_184(uParam0->f_2C, 4, iVar4))
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
						if (!func_109(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_185(uParam0->f_2C, iVar4))
								{
									if (func_184(uParam0->f_2C, 4, iVar4))
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
				func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_183();
				if (Global_1C0005.f_4)
				{
					if (func_182(uParam0->f_2C))
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
			if (unk_0x7AF0088ABFA713B6() && func_181())
			{
				if (func_180())
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
			if (func_182(uParam0->f_2C))
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
			if (func_146(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_145(&Var1, &(uParam0->f_2C));
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
				func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_180()//Position - 0xEC63
{
	return unk_0xFA30DFD0084E92FE(Global_ED138.f_8, 1);
}

var func_181()//Position - 0xEC76
{
	return Global_2579BD.f_3;
}

int func_182(int iParam0)//Position - 0xEC84
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

void func_183()//Position - 0xED55
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_184(int iParam0, int iParam1, int iParam2)//Position - 0xEDB5
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

int func_185(int iParam0, int iParam1)//Position - 0xEEB7
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

int func_186(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xEF12
{
	switch (*uParam0)
	{
		case 0:
			if (!func_139() && !func_138())
			{
				func_137(*uParam2);
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

void func_187(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xEFC6
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	StringCopy(&(Var1[0 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_189(274, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_188(274, 131, iParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_188(274, 98, 1, 0f, 0);
		}
		else
		{
			func_188(274, 98, 0, 0f, 0);
		}
		func_188(274, 109, 1, 0f, 0);
		func_188(274, 8, iParam3, 0f, 0);
		func_188(274, 93, 0, fParam2, 0);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0xF155
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
				else if (func_184(iParam0, 4, iVar1))
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

int func_189(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xF270
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
				Var2 = { func_55(unk_0xB5CEFD608600A09F()) };
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

void func_190(int iParam0)//Position - 0xF3A4
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&vVar0, "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&vVar0, "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&vVar0, "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&vVar0, "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&vVar0, "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&vVar0, "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&vVar0, "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&vVar0, "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&vVar0, "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&vVar0, "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&vVar0, "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&vVar0, "BJUMP_13", 24);
			break;
	}
	func_191(&uLocal_105, 85, &vVar0, func_177(iParam0), iParam0, -1, 0, 0);
}

void func_191(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xF4A5
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 <= 0 || func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 <= 0 || func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 <= 0 || func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 <= 0 || func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 > 0 && !func_198())
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
				if (iParam5 <= 0 || func_198())
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
			MemCopy(&(Global_1C017E.f_ADC.f_9), {func_197(iParam1)}, 16);
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
				if (func_196(Global_440000.f_243FE) || func_193(Global_440000.f_243FE))
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
	Global_1C017E.f_B0A = func_192(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_192(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x13964
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_157(iParam1))
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

var func_193(int iParam0)//Position - 0x139D6
{
	return (func_195(iParam0) || func_194(iParam0));
}

bool func_194(int iParam0)//Position - 0x139F0
{
	return iParam0 == 44;
}

bool func_195(int iParam0)//Position - 0x139FD
{
	return iParam0 == 45;
}

bool func_196(int iParam0)//Position - 0x13A0A
{
	return iParam0 == 12;
}

struct<6> func_197(int iParam0)//Position - 0x13A17
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

int func_198()//Position - 0x13BA0
{
	if ((((((((Global_440000.f_C7AE == 1 || Global_440000.f_C7AE == 3) || Global_440000.f_C7AE == 5) || Global_440000.f_C7AE == 7) || Global_440000.f_C7AE == 19) || Global_440000.f_C7AE == 8) || Global_440000.f_C7AE == 9) || Global_440000.f_C7AE == 11) || Global_440000.f_C7AE == 13)
	{
		return 1;
	}
	return 0;
}

bool func_199()//Position - 0x13C51
{
	return unk_0x57D316754A262B34();
}

void func_200(int iParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x13C5D
{
	if (*iParam0 == 0)
	{
		*iParam0 = unk_0x4B4A22319BB70CD6("instructional_buttons");
	}
	iParam0->f_1 = 0;
	iParam0->f_3[0] = iParam2;
	iParam0->f_3[1] = iParam4;
	iParam0->f_3[2] = iParam6;
	iParam0->f_3[3] = iParam8;
	iParam0->f_3[4] = 358;
	iParam0->f_3[5] = 358;
	iParam0->f_3[6] = 358;
	iParam0->f_3[7] = 358;
	iParam0->f_C[0] = func_201(iParam2 != 358, unk_0xE57EAD1FEA2A6FAF(2, iParam2, true), "");
	iParam0->f_C[1] = func_201(iParam4 != 358, unk_0xE57EAD1FEA2A6FAF(2, iParam4, true), "");
	iParam0->f_C[2] = func_201(iParam6 != 358, unk_0xE57EAD1FEA2A6FAF(2, iParam6, true), "");
	iParam0->f_C[3] = func_201(iParam8 != 358, unk_0xE57EAD1FEA2A6FAF(2, iParam8, true), "");
	iParam0->f_C[4] = 0;
	iParam0->f_C[5] = 0;
	iParam0->f_C[6] = 0;
	iParam0->f_C[7] = 0;
	iParam0->f_15[0] = sParam3;
	iParam0->f_15[1] = sParam5;
	iParam0->f_15[2] = iParam7;
	iParam0->f_15[3] = iParam9;
	if (bParam1)
	{
		iParam0->f_2 = 1;
	}
	else
	{
		iParam0->f_2 = 0;
	}
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		func_21(&(iParam0->f_1), 1);
	}
}

char* func_201(bool bParam0, char* sParam1, char* sParam2)//Position - 0x13DA1
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_202()//Position - 0x13DB8
{
	func_203(unk_0xBC25C936A095B5BA(), "GENERIC_CURSE_MED", 24);
}

void func_203(int iParam0, char* sParam1, int iParam2)//Position - 0x13DCE
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_204(iParam2), 1);
}

int func_204(int iParam0)//Position - 0x13DE5
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

int func_205()//Position - 0x13FDA
{
	if (func_43(0))
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

void func_206(int iParam0, int iParam1)//Position - 0x14026
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

void func_207(int iParam0, int iParam1, bool bParam2)//Position - 0x1403E
{
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(iParam0->f_25B), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(iParam0->f_25B), iParam1);
	}
}

int func_208(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)//Position - 0x14064
{
	int iVar0;
	
	if (iParam1 > 1 && *uParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*uParam3 = 0;
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*uParam2))));
	func_209(func_407(), 1, *uParam3, 0, 0);
	return 1;
}

void func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x140D2
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
	func_210(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x141B9
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_240();
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
					func_347(99, 1);
					func_239(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_239(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_239(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_223(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_219(5))
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
							func_239(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_219(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_239(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_239(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_239(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_239(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_239(joaat("sp2_money_spent_property"), iParam3);
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
									func_239(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_239(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_219(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_239(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_239(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_239(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_239(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_218(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_347(95, iParam3);
					break;
				
				case 1:
					func_347(97, iParam3);
					break;
				
				case 2:
					func_347(96, iParam3);
					break;
			}
			func_347(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_213(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_213(iVar1);
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
					func_239(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_239(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_239(joaat("sp2_total_cash_earned"), iParam3);
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
	func_212(iParam0);
	if (Global_8C41 == 15)
	{
		func_211(0);
	}
	return 1;
}

void func_211(bool bParam0)//Position - 0x147B8
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

void func_212(int iParam0)//Position - 0x14A3A
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

void func_213(int iParam0)//Position - 0x14A94
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_216(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_215() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_215() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_214(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_214(int iParam0)//Position - 0x14B6A
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

int func_215()//Position - 0x14BF1
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_216(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x14BFE
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
		iParam2 = func_217();
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

int func_217()//Position - 0x15118
{
	return Global_1407E0;
}

void func_218(int iParam0)//Position - 0x15124
{
	func_347(93, iParam0);
	func_347(29, iParam0);
	func_347(30, iParam0);
}

bool func_219(int iParam0)//Position - 0x15144
{
	if (iParam0 == 8)
	{
		return func_220(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_215() /*12171*/].f_1E08.f_A, iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)//Position - 0x15192
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_217();
	}
	iVar1 = func_222(iParam0, iParam1);
	uVar2 = func_221(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_221(int iParam0)//Position - 0x151CF
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

int func_222(int iParam0, int iParam1)//Position - 0x154BB
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_217();
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

int func_223(bool bParam0)//Position - 0x15788
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
		func_238(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_224(27, 1);
	return 1;
}

int func_224(int iParam0, int iParam1)//Position - 0x1583F
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_225(iParam0, iParam1);
}

int func_225(int iParam0, int iParam1)//Position - 0x1585A
{
	if (func_237(14) && !func_236(iParam0))
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
	if (func_235(&Global_411EB6))
	{
		if (func_233(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_226(&Global_411EB6, iParam0))
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

int func_226(var uParam0, int iParam1)//Position - 0x158F7
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_237(14) && !func_236(iParam1))
	{
		return 0;
	}
	if (func_233(uParam0, iParam1))
	{
		return 0;
	}
	if (func_232(uParam0) < 0f)
	{
		func_231(uParam0, 0);
	}
	func_229(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_227(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_227(var uParam0, int iParam1)//Position - 0x159A8
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_237(14) && !func_236(iParam1))
	{
		return 0;
	}
	if (func_233(uParam0, iParam1))
	{
		return 0;
	}
	if (func_232(uParam0) < 0f)
	{
		func_231(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_228(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_228(var uParam0, int iParam1)//Position - 0x15A23
{
	return (*uParam0)[iParam1] == 78;
}

void func_229(var uParam0)//Position - 0x15A34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_230(uParam0, iVar0);
		iVar0++;
	}
	func_231(uParam0, (Global_411EB5 - 0.5f));
}

void func_230(var uParam0, int iParam1)//Position - 0x15A68
{
	(*uParam0)[iParam1] = 78;
}

void func_231(var uParam0, float fParam1)//Position - 0x15A78
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

float func_232(var uParam0)//Position - 0x15A95
{
	return uParam0->f_50;
}

bool func_233(var uParam0, int iParam1)//Position - 0x15AA1
{
	return func_234(uParam0, iParam1) != -1;
}

int func_234(var uParam0, int iParam1)//Position - 0x15AB3
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

bool func_235(var uParam0)//Position - 0x15AE0
{
	return uParam0->f_4F == 1;
}

int func_236(int iParam0)//Position - 0x15AEE
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

bool func_237(int iParam0)//Position - 0x15B3E
{
	return Global_8C41 == iParam0;
}

int func_238(int iParam0, int iParam1)//Position - 0x15B4C
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

void func_239(int iParam0, int iParam1)//Position - 0x15B9D
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_240()//Position - 0x15BC0
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

void func_241(int iParam0, int iParam1, int iParam2)//Position - 0x15C35
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
		func_216((891 + iParam0), 1, -1, 1);
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
		func_242();
	}
}

void func_242()//Position - 0x15D1D
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
		func_238(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_243() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_205();
				}
			}
		}
	}
}

int func_243()//Position - 0x161DE
{
	return Global_62BD;
}

void func_244(int iParam0, int iParam1)//Position - 0x161E9
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_19B04.f_2360.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19B04.f_2360.f_63.f_3A[iParam0] = iParam1;
}

int func_245(int iParam0)//Position - 0x1622E
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_246(int iParam0, bool bParam1)//Position - 0x1625B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 20);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 20);
	}
	if (Global_6413 == 1)
	{
		Global_6414 = 1;
	}
	Global_6413 = 1;
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 20);
}

bool func_247(int iParam0, int iParam1)//Position - 0x162E4
{
	return unk_0xFA30DFD0084E92FE(iParam0->f_25B, iParam1);
}

int func_248()//Position - 0x162F7
{
	return unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
}

void func_249(vector3 vParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)//Position - 0x16307
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar18;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	iVar1 = 0;
	bVar2 = unk_0x36CEFBE9B745A58D(iVar0);
	if (bVar2)
	{
		*iParam3 = 2;
		return;
	}
	iVar3 = unk_0xADC5538B9DCA2177(iVar0);
	uVar4 = unk_0xD4931190C66F57A3(iVar0);
	bVar5 = unk_0x2A348A3A98B80B13(iVar0);
	bVar6 = unk_0x2CDE18D6C89522AD(iVar0);
	bVar7 = unk_0x724D816EA203A79E(iParam1);
	bVar8 = (bVar7 && unk_0x702B2D223F333084(iVar0, iParam1));
	bVar9 = ((bVar7 && !unk_0x36CEFBE9B745A58D(iParam2)) && unk_0xE921F8171F0733B3(iVar0, iParam2));
	bVar10 = (bVar7 && unk_0xA6705B5DA0B723DE(iParam1, &iVar1));
	bVar11 = ((bVar10 && !unk_0x1D403DFADBC2DE3C(iVar1, 0)) && unk_0x702B2D223F333084(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_410(vParam0));
	if (bVar12)
	{
		vVar13 = { unk_0x541C2AEF053615BC(iVar0, 1) };
		vVar14 = { vVar13 - vParam0 };
		fVar15 = SYSTEM::SQRT(((vVar14.x * vVar14.x) + (vVar14.y * vVar14.y)));
		*fParam5 = fVar15;
		if ((vVar14.z < 5f && vVar14.z > -2f) && fVar15 < 15f)
		{
			*uParam4 = func_252(SYSTEM::CEIL(((100f * (15f - fVar15)) / 15f)) + 4, 0, 100);
			*iParam3 = 1;
		}
		else
		{
			*iParam3 = 3;
		}
	}
	if (bVar7)
	{
		if (func_250(iParam1, iParam2))
		{
			*fParam5 = 0f;
			*uParam4 = 100;
			*iParam3 = 1;
		}
		else
		{
			*uParam4 = 0;
			*iParam3 = 3;
		}
	}
	if (bVar10)
	{
		unk_0xA6705B5DA0B723DE(iParam1, &iVar16);
		vVar17 = { unk_0x541C2AEF053615BC(iVar0, 1) };
		vVar18 = { unk_0x541C2AEF053615BC(iVar16, 1) };
	}
}

int func_250(int iParam0, int iParam1)//Position - 0x1649E
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	
	if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x724D816EA203A79E(iParam0)) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		if (func_351(unk_0x6F79ECA8C83E4357(iParam0)))
		{
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar1 = unk_0xC74CFAE7ED4ED5A7(iParam0, iVar4);
				if (unk_0x724D816EA203A79E(iVar1))
				{
					vVar2 = { unk_0x541C2AEF053615BC(iParam0, 1) };
					if (unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), iVar1))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
		if (unk_0x724D816EA203A79E(iParam0))
		{
			unk_0xA6705B5DA0B723DE(iParam0, &iVar0);
			if ((unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), iParam0) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam0)) || ((unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0)) && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam1)))
			{
				if (vVar2.z < vVar3.z)
				{
					return 1;
				}
			}
		}
		if (unk_0x724D816EA203A79E(iVar0))
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), iVar0))
				{
					return 1;
				}
				else if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iVar0))
				{
					vVar5 = { unk_0x1483995DFFF0DEEA(iVar0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) };
					vVar5.x = func_251((unk_0x357058E632979E65(vVar5.x) - 1.305f), 0f);
					if (vVar5.y >= 0f)
					{
						vVar5.y = func_251((vVar5.y - 5.98f), 0f);
					}
					else
					{
						vVar5.y = func_251((-vVar5.y - 6.21f), 0f);
					}
					if (vVar5.y == 0f && vVar5.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_251(float fParam0, float fParam1)//Position - 0x16651
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_252(int iParam0, int iParam1, int iParam2)//Position - 0x16668
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_253(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1668D
{
	float fVar0;
	int iVar1;
	
	if (!func_441(&iParam1))
	{
		return;
	}
	fVar0 = func_440(&iParam1);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	unk_0xC6EA3A47240425C4(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	unk_0xC6EA3A47240425C4(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	unk_0xC6EA3A47240425C4(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
}

void func_254(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x16744
{
	int iVar0;
	
	iVar0 = func_352(uParam1);
	if (func_444(func_445(iParam2)))
	{
		if (!func_247(iParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_324("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_351(iVar0))
				{
					func_324("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_324("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_324("BJ_MG_STOBJ", 7500, 1);
			}
			func_207(iParam0, 0, 1);
		}
	}
	if (func_321("BJ_FALLHLP") && Global_4336.f_87)
	{
		unk_0x7456702622C62EA0(1);
		func_207(iParam0, 1, 0);
	}
	if (!func_247(iParam0, 1) && !Global_4336.f_87)
	{
		unk_0x563F749F78AC90A0(0);
		unk_0x7456702622C62EA0(1);
		func_322("BJ_FALLHLP", -1);
		func_207(iParam0, 1, 1);
	}
	else if (!func_247(iParam0, 2))
	{
		if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 1 || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
		{
			unk_0x7456702622C62EA0(1);
			if (unk_0x50465D2C022B9E04(0))
			{
				func_322("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_322("BJ_PARAHLP", 10000);
			}
			func_207(iParam0, 2, 1);
		}
	}
	else if (!func_247(iParam0, 3))
	{
		if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == -1 || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 3)
		{
			unk_0x7456702622C62EA0(1);
			func_207(iParam0, 3, 1);
		}
	}
}

void func_255(int iParam0)//Position - 0x168A6
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x724D816EA203A79E(unk_0xF46A5D8F869B203E(unk_0xBC25C936A095B5BA())))
		{
			vVar0 = { unk_0xA43418B5859810A6(unk_0xF46A5D8F869B203E(unk_0xBC25C936A095B5BA()), 0) };
		}
		else
		{
			vVar0 = { unk_0xA43418B5859810A6(unk_0xBC25C936A095B5BA(), 1) };
		}
		fVar7 = vVar0.y;
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		vVar1.z = 0f;
	}
	if (unk_0x724D816EA203A79E(*iParam0) && unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		vVar2 = { unk_0x541C2AEF053615BC(*iParam0, 1) };
		vVar2.z = 0f;
		vVar6 = { unk_0xB5D9AE572C19509E(*iParam0) };
	}
	if (unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		unk_0x14C662D0A4B959CE(*iParam0, &vVar3, &uVar5, &uVar5, &uVar5);
		vVar3.z = 0f;
	}
	vVar4 = { vVar1 - vVar2 };
	vVar4.z = 0f;
	fVar9 = unk_0x357058E632979E65(func_259(vVar4, vVar3));
	if (func_258(*iParam0))
	{
		fVar8 = func_46((fVar7 - (fVar9 / fVar7)), 2f, 3f);
	}
	else
	{
		fVar8 = func_46((fVar7 + (fVar9 / fVar7)), 3f, 10f);
	}
	uVar10 = func_46(func_256(vVar6.y, fVar8, 0.5f), vVar6.y, fVar7);
	vVar6.y = func_256(vVar6.y, fVar8, 0.5f);
	if (((unk_0x724D816EA203A79E(*iParam0) && unk_0xE59B7F5A03335350(*iParam0, 0)) && vVar6.y > 2f) && vVar6.y < unk_0x2D175DF90F6F05C3(*iParam0))
	{
		unk_0x85B293AC970558EE(unk_0x3187EF5798B5D209(*iParam0, -1, 0), uVar10);
	}
}

float func_256(float fParam0, float fParam1, float fParam2)//Position - 0x16A19
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_257((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_257(float fParam0)//Position - 0x16A48
{
	return (fParam0 * 57.29578f);
}

int func_258(int iParam0)//Position - 0x16A58
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		unk_0x14C662D0A4B959CE(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
	}
	vVar3 = { vVar0 - vVar1 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_259(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_259(vector3 vParam0, vector3 vParam1)//Position - 0x16AC2
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_260(int iParam0, int iParam1, bool bParam2)//Position - 0x16AE3
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

Vector3 func_261(int iParam0, vector3 vParam1)//Position - 0x16B41
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0x2084D4C6C2DF616F(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_262(iParam0))
	{
		unk_0x641B19E156645A92(iParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_262(int iParam0)//Position - 0x16B87
{
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	return !unk_0x1D403DFADBC2DE3C(iParam0, 0);
}

void func_263(int iParam0, var uParam1)//Position - 0x16BA5
{
	var uVar0[6];
	var uVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	if (!func_441(iParam0))
	{
		func_465(iParam0);
	}
	if (func_440(iParam0) < 1f)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return;
	}
	iVar4 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if ((unk_0x724D816EA203A79E((*uParam1)[iVar5]) && !unk_0x1D403DFADBC2DE3C((*uParam1)[iVar5], 0)) && !unk_0x36CEFBE9B745A58D((*uParam1)[iVar5]))
		{
			if (func_265((*uParam1)[iVar5], &uVar0) == -1)
			{
				func_264(uParam1[iVar5]);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - unk_0x541C2AEF053615BC((*uParam1)[iVar5], 1) };
				fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
				if (vVar2.z * vVar2.z) < (3f * fVar3)
				{
					func_264(uParam1[iVar5]);
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if ((((unk_0x724D816EA203A79E(uVar0[iVar5]) && !unk_0x1D403DFADBC2DE3C(uVar0[iVar5], 0)) && !unk_0x36CEFBE9B745A58D(uVar0[iVar5])) && unk_0x95FEE2A3FD506FA6(uVar0[iVar5])) && !unk_0x5237AF95232D78C5(uVar0[iVar5], 1))
			{
				if (func_265(uVar0[iVar5], uParam1) == -1)
				{
					vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - unk_0x541C2AEF053615BC(uVar0[iVar5], 1) };
					fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
					if (vVar2.z * vVar2.z) > (3f * fVar3)
					{
						bVar7 = false;
						iVar6 = 0;
						while (iVar6 < *uParam1)
						{
							if (!unk_0x724D816EA203A79E((*uParam1)[iVar6]) || unk_0x36CEFBE9B745A58D((*uParam1)[iVar6]))
							{
								(*uParam1)[iVar6] = uVar0[iVar5];
								unk_0xC5A6DFE2B8987B17(&uVar1);
								unk_0xE896C0AD02364F2A(0, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0xE896C0AD02364F2A(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x535008C596714F9E(uVar1);
								unk_0xA8E6405305C0D7DF(uVar0[iVar5], uVar1);
								unk_0x02DAF06EA4F08219(&uVar1);
								iVar6 = *uParam1;
								bVar7 = true;
							}
							iVar6++;
						}
						if (!bVar7)
						{
							return;
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_264(var uParam0)//Position - 0x16DE8
{
	unk_0xA4E856A8CD53B8DF(*uParam0);
	unk_0xE896C0AD02364F2A(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_265(int iParam0, var uParam1)//Position - 0x16E19
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0x724D816EA203A79E((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_266(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)//Position - 0x16E5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	unk_0x1428FF0F1ECE8FA7(*uParam36);
	func_360();
	func_359();
	func_475();
	func_41(&(iParam2->f_1A));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = -1;
	*uParam29 = 0;
	*bParam30 = 0;
	func_311(iParam2);
	if (func_441(iParam24))
	{
		func_437(iParam24);
	}
	if (func_441(iParam23))
	{
		func_437(iParam23);
	}
	if (unk_0x724D816EA203A79E(*iParam7))
	{
		if (func_351(func_352(uParam0)))
		{
			unk_0xCBD3B8A22DC34DE4(iParam7);
		}
		else
		{
			if (!unk_0x1D403DFADBC2DE3C(*iParam7, 0))
			{
				iVar1 = unk_0x3187EF5798B5D209(*iParam7, -1, 0);
				if (unk_0x724D816EA203A79E(iVar1))
				{
					unk_0xF845620A03C7425B(&iVar1);
				}
			}
			unk_0xCF6040807CC0E4A5(iParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (unk_0x724D816EA203A79E((*iParam5)[iVar2]) && !unk_0x1D403DFADBC2DE3C((*iParam5)[iVar2], 0))
		{
			unk_0xA4E856A8CD53B8DF((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (unk_0x724D816EA203A79E(*iParam8))
	{
		unk_0xCF6040807CC0E4A5(iParam8);
	}
	if (unk_0x724D816EA203A79E(*iParam9))
	{
		if (!func_310(*iParam9) && unk_0x724D816EA203A79E(unk_0x3187EF5798B5D209(*iParam9, -1, 0)))
		{
			iVar3 = unk_0x3187EF5798B5D209(*iParam9, -1, 0);
			unk_0xF845620A03C7425B(&iVar3);
		}
		unk_0xCF6040807CC0E4A5(iParam9);
	}
	if (!unk_0x1D403DFADBC2DE3C(*iParam4, 0))
	{
		unk_0x02537C8C1BEEB477(iParam4);
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0x5AA1A8C2DAD4FF6F(unk_0xBC25C936A095B5BA(), 1);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iVar0, 1) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			if (unk_0x724D816EA203A79E(*iParam6) && iVar0 == *iParam6)
			{
				unk_0xE5CDD8C2A7508295(*iParam6);
				func_270(*iParam6, func_309(iParam20), func_308(iParam20), 24, 0);
				unk_0x3A8D19D7D434A741(iVar0, 0f, 0f, 0f);
				unk_0x641B19E156645A92(iVar0, func_309(iParam20), 1, 0, 0, 1);
				unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
				unk_0x019CE76D5286C95C(iVar0, func_308(iParam20));
			}
			else
			{
				if (!unk_0x5CAE759AE8219D20(iVar0))
				{
					unk_0x77815D3407C6700D(iVar0, true, 0);
				}
				unk_0xCF6040807CC0E4A5(&iVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > -1)
	{
		unk_0x2A6C7715B55EA005(*iParam11);
		unk_0x2A6C7715B55EA005(*iParam12);
		*iParam16 = -1;
	}
	if (unk_0x2DA8CA50A72528FB(iParam13))
	{
		unk_0x07B8ECB35A4ED3AC(&iParam13);
	}
	if (unk_0x2DA8CA50A72528FB(iParam14))
	{
		unk_0x07B8ECB35A4ED3AC(&iParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (unk_0x724D816EA203A79E((*iParam10)[iVar4]) && !unk_0x1D403DFADBC2DE3C((*iParam10)[iVar4], 0))
		{
			unk_0xB34BE463F164799F((*iParam10)[iVar4], 1f);
			unk_0xB71D41C0310C93DE((*iParam10)[iVar4], 0, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_269(iParam2);
	*iParam3 = 0;
	func_268();
	func_267();
	unk_0x7A41D32A383895D8(800);
}

void func_267()//Position - 0x17139
{
	Global_634D = 1;
}

void func_268()//Position - 0x17145
{
	int iVar0;
	
	Local_98.f_42 = -1;
	Local_98.f_43 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_98.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_5 = 0;
		Local_98.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_98.f_5 = 0;
	Local_98.f_5.f_1 = -1f;
	Local_98.f_5.f_2 = 0;
	Local_98 = 0;
	Local_98.f_1 = 0;
}

void func_269(int iParam0)//Position - 0x171B5
{
	iParam0->f_25B = 0;
}

void func_270(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x171C3
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
		func_307(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_302(iParam0, &Var0);
		if (func_301(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_294(iParam3, &Var0, vParam1, fParam2, func_300(iParam0));
		func_271(iParam3, iParam0, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)//Position - 0x172EC
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_291(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_499();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_290(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_272(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_272(int iParam0, int iParam1)//Position - 0x17409
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_273(iParam0))
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
	func_302(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_273(int iParam0)//Position - 0x1760B
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_288(iParam0, 0, 0)) || func_288(iParam0, 1, 0)) || func_288(iParam0, 2, 0)) || func_300(iParam0) != 145) || func_287(iParam0)) || func_286(iParam0)) || func_285(iParam0)) || func_284(iParam0)) || !func_274(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_286(iParam0))
		{
		}
		if (func_286(iParam0))
		{
		}
		if (func_288(iParam0, 0, 0))
		{
		}
		if (func_288(iParam0, 1, 0))
		{
		}
		if (func_288(iParam0, 2, 0))
		{
		}
		if (func_300(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_274(int iParam0)//Position - 0x176E8
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_275(iParam0, 0))
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

int func_275(int iParam0, bool bParam1)//Position - 0x17899
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
		if (!func_283())
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
		if ((((!func_282() && !func_281()) && !func_280()) && !func_279()) && !func_283())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_280())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_278(iParam0))
		{
			return 0;
		}
	}
	if (!func_276(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0)//Position - 0x17A27
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_277())
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

int func_277()//Position - 0x17AF3
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_278(int iParam0)//Position - 0x17B0A
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

int func_279()//Position - 0x195B3
{
	return 0;
}

int func_280()//Position - 0x195BC
{
	return 1;
}

int func_281()//Position - 0x195C5
{
	return 1;
}

int func_282()//Position - 0x195CE
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_283()//Position - 0x195E7
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

int func_284(int iParam0)//Position - 0x196A2
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_275(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0)//Position - 0x196E8
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

int func_286(int iParam0)//Position - 0x19723
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

int func_287(int iParam0)//Position - 0x1979F
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

int func_288(int iParam0, int iParam1, bool bParam2)//Position - 0x19887
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_289(iParam1, iVar0, &sVar1, &iVar2))
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

int func_289(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x198F8
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

int func_290(int iParam0)//Position - 0x199D0
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

int func_291(var uParam0, int iParam1)//Position - 0x199EC
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
			uParam0->f_4 = func_292(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_292(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_292(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_292(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_292(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_292(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_292(2, 1);
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
			if (func_283())
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
			if (func_283())
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
		if (!func_301(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_301(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_301(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_292(int iParam0, int iParam1)//Position - 0x1B0E3
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_293(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_293(int iParam0, var uParam1, int iParam2)//Position - 0x1B125
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

void func_294(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x1B381
{
	if (func_291(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_299(iParam0);
			func_298(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_295(iParam0, 1);
		}
	}
}

void func_295(int iParam0, bool bParam1)//Position - 0x1B480
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_297(iParam0, 0))
		{
			func_296(iParam0, 1, 0);
			func_296(iParam0, 2, 0);
			func_296(iParam0, 3, 0);
			func_296(iParam0, 4, 0);
			func_296(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_296(iParam0, 0, 0);
	}
}

void func_296(int iParam0, int iParam1, bool bParam2)//Position - 0x1B4DD
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

bool func_297(int iParam0, int iParam1)//Position - 0x1B518
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_298(var uParam0, var uParam1)//Position - 0x1B53B
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

void func_299(int iParam0)//Position - 0x1B607
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_291(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_295(iParam0, 0);
		}
	}
}

int func_300(int iParam0)//Position - 0x1B681
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

bool func_301(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1B6E4
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_302(int iParam0, var uParam1)//Position - 0x1B72B
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_306(uParam1);
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
		if (uParam1->f_41 == -1 && !func_305(uParam1->f_42))
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
		func_304(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_303(iVar0 + 1));
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

int func_303(int iParam0)//Position - 0x1B9D6
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

int func_304(int iParam0, var uParam1, var uParam2)//Position - 0x1BA86
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

int func_305(int iParam0)//Position - 0x1BB60
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

void func_306(var uParam0)//Position - 0x1BB80
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

void func_307(int iParam0)//Position - 0x1BC30
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_299(iParam0);
	func_295(iParam0, 0);
}

float func_308(int iParam0)//Position - 0x1BC57
{
	switch (iParam0)
	{
		case 0:
			return 192.1528f;
		
		case 1:
			return 144.2205f;
		
		case 2:
			return 82.0341f;
		
		case 3:
			return 134.9389f;
		
		case 4:
			return 241.8704f;
		
		case 5:
			return 342.318f;
		
		case 6:
			return 174.9318f;
		
		case 7:
			return 186.4915f;
		
		case 8:
			return 93.0806f;
		
		case 9:
			return 213.7284f;
		
		case 10:
			return 55.5964f;
		
		case 11:
			return 61.2421f;
		
		case 12:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_309(int iParam0)//Position - 0x1BD21
{
	switch (iParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_310(int iParam0)//Position - 0x1BE71
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
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

void func_311(int iParam0)//Position - 0x1BEB4
{
	if (*iParam0 != 0)
	{
		unk_0xB0B0FE33F4F22679(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_C[0] = 0;
	iParam0->f_C[1] = 0;
	iParam0->f_C[2] = 0;
	iParam0->f_C[3] = 0;
	iParam0->f_C[4] = 0;
	iParam0->f_C[5] = 0;
	iParam0->f_C[6] = 0;
	iParam0->f_C[7] = 0;
	iParam0->f_3[0] = 358;
	iParam0->f_3[1] = 358;
	iParam0->f_3[2] = 358;
	iParam0->f_3[3] = 358;
	iParam0->f_3[4] = 358;
	iParam0->f_3[5] = 358;
	iParam0->f_3[6] = 358;
	iParam0->f_3[7] = 358;
	iParam0->f_15[0] = 0;
	iParam0->f_15[1] = 0;
	iParam0->f_15[2] = 0;
	iParam0->f_15[3] = 0;
}

int func_312(var uParam0, int iParam1, int iParam2)//Position - 0x1BF87
{
	if ((unk_0x105601648511CC64() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = unk_0x105601648511CC64();
	}
	uParam0->f_5 = unk_0x105601648511CC64();
	if ((unk_0x105601648511CC64() - uParam0->f_4) > iParam2)
	{
		if (unk_0xFA30DFD0084E92FE(uParam0->f_2, iParam1) && !unk_0xFA30DFD0084E92FE(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = unk_0x105601648511CC64();
			return 1;
		}
	}
	return 0;
}

int func_313(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, var uParam5, var uParam6)//Position - 0x1BFE5
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0:
			if (func_440(iParam1) >= 0f)
			{
				vParam4.z = func_46(vParam4.z, -8.909f, 8.909f);
				uParam5->f_2 = (uParam5->f_2 + vParam4.z);
				vVar0 = { func_442(vParam3, vParam4.z) };
				unk_0x9961B404F89D0597(func_412(uParam0, 0), vParam2 + vVar0, *uParam5, *uParam6, 300, 1, 1, 2);
				unk_0xAE099C1ADC89C331(func_412(uParam0, 1), func_412(uParam0, 0), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_440(iParam1) >= 0f)
			{
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0x062C9995BFD27B2A(false, 1, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_440(iParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_314(int iParam0, var uParam1, int iParam2)//Position - 0x1C10B
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = func_412(uParam1, 0);
	iVar2 = func_412(uParam1, 1);
	unk_0x97AD4F1D22AEA4FC(iVar2, func_315());
	vVar3 = { unk_0xA4455714F3DCE207(iParam0, 2f, -0.3f, -7.7824f) };
	unk_0x6125108F6208C1F6(iVar2, vVar3);
	vVar0 = { unk_0x0311C47C0F630BCF(iVar1, 2) };
	vVar0.x = 0f;
	unk_0x3553F2A72957724E(iVar2, vVar0, 2);
	unk_0x9DF315A9EFFF87AC(iVar2, unk_0x3C44FF85A9132C9F(iVar1));
	unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_355(iParam2);
}

float func_315()//Position - 0x1C18A
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_316(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam7)//Position - 0x1C1A6
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = func_412(uParam1, 0);
	vVar1 = { func_319(uParam2) };
	if (unk_0xF31C9BB6C94E205D())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!unk_0x50465D2C022B9E04(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * unk_0x11F9F9006143871A()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * unk_0x11F9F9006143871A()) * 100f));
		if (unk_0x357058E632979E65(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * unk_0x11F9F9006143871A()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (unk_0x357058E632979E65(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * unk_0x11F9F9006143871A()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * unk_0x11F9F9006143871A()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * unk_0x11F9F9006143871A()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar2 = { func_442(vParam7, uParam4->f_2) };
	unk_0x6125108F6208C1F6(iVar0, vParam6 + vVar2);
	unk_0x3553F2A72957724E(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_443(uParam0)) + uParam4->f_2), 2);
	unk_0x97AD4F1D22AEA4FC(iVar0, func_315());
	if (!unk_0x726D9204B160D23E() || !func_441(iParam3))
	{
		func_355(iParam3);
	}
	else
	{
		if (!unk_0xF16DAFF595E80F7C())
		{
			func_318("BJ_VLOOKHLP");
		}
		if (func_441(iParam3) && func_440(iParam3) > 0.5f)
		{
			if (func_317(uParam2, 1))
			{
				func_437(iParam3);
				unk_0xE18BA5068CB37212(iVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_317(var uParam0, int iParam1)//Position - 0x1C3E4
{
	return (unk_0xFA30DFD0084E92FE(uParam0->f_2, iParam1) && !unk_0xFA30DFD0084E92FE(uParam0->f_3, iParam1));
}

void func_318(char* sParam0)//Position - 0x1C406
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

Vector3 func_319(var uParam0)//Position - 0x1C41C
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_320(int iParam0, vector3 vParam1)//Position - 0x1C42C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(unk_0x105601648511CC64())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(unk_0x105601648511CC64())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(unk_0x105601648511CC64()))));
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		unk_0x641B19E156645A92(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, 0, 0, 1);
	}
}

int func_321(char* sParam0)//Position - 0x1C4B8
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_322(char* sParam0, int iParam1)//Position - 0x1C4CB
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_323(var uParam0, bool bParam1)//Position - 0x1C4E2
{
	if (bParam1)
	{
		if (unk_0x144E80F5C46A6B75("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			unk_0xC1300D0F3A74E20B("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_207(uParam0, 20, 0);
		}
	}
	else if (unk_0x144E80F5C46A6B75("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		unk_0xC1300D0F3A74E20B("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_207(uParam0, 20, 0);
	}
}

void func_324(char* sParam0, int iParam1, int iParam2)//Position - 0x1C52A
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

struct<4> func_325(int iParam0)//Position - 0x1C543
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_326(int iParam0, float fParam1)//Position - 0x1C5A9
{
	if (!func_441(iParam0))
	{
		func_39(iParam0, fParam1);
	}
}

void func_327(int iParam0, int iParam1)//Position - 0x1C5C3
{
	if (func_441(iParam0))
	{
		if (func_329(iParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_203(unk_0xBC25C936A095B5BA(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_328())
	{
		func_326(iParam0, 0f);
	}
}

int func_328()//Position - 0x1C60F
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, float fParam1)//Position - 0x1C631
{
	if (func_330(iParam0, fParam1))
	{
		func_437(iParam0);
		return 1;
	}
	return 0;
}

int func_330(int iParam0, float fParam1)//Position - 0x1C64F
{
	if (func_441(iParam0))
	{
		if (func_440(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_331(var uParam0)//Position - 0x1C671
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), -1, false, true);
		}
		unk_0xBBC4195AD74D153D(0, 37, 1);
		unk_0xBBC4195AD74D153D(0, 66, 1);
		unk_0xBBC4195AD74D153D(0, 67, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
		unk_0xBBC4195AD74D153D(0, 99, 1);
		unk_0xBBC4195AD74D153D(0, 100, 1);
		unk_0x4E0EC60D119222B1(19);
	}
}

int func_332(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)//Position - 0x1C717
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	vVar4 = { func_353(uParam0, *iParam6) };
	bVar15 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x14C662D0A4B959CE(unk_0xBC25C936A095B5BA(), &vVar0, &uVar1, &uVar2, &vVar3);
	}
	if (bVar15)
	{
		if (unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			vVar9 = { unk_0xA4455714F3DCE207(iParam1, func_354(uParam0)) };
			fVar14 = (vVar9.z - vVar4.z);
			if (bParam20)
			{
				if (unk_0x2DA8CA50A72528FB(*iParam11))
				{
					unk_0x1423825E528B4DE1(*iParam11, vVar9);
				}
				else
				{
					*iParam11 = unk_0x390CF6C8AD6903B7(vVar9);
					unk_0x0D5352939CC40C16(*iParam11, 5);
					unk_0x3F5F1772D71D5EC4(*iParam11, 1.2f);
					unk_0x436D0272182E484D(*iParam11, "BJ_BLIP_TGT");
				}
			}
			vVar10 = { func_353(uParam0, 0) };
			vVar9.z = (vVar10.z + fVar14);
			vVar4 = { vVar9 };
		}
		else if (func_352(uParam0) != 0)
		{
			vVar9 = { func_353(uParam0, 0) };
			vVar4 = { vVar9 };
		}
		else
		{
			vVar9 = { vVar4 };
		}
		vVar6 = { vVar3 - vVar4 };
		if (func_352(uParam0) == 0)
		{
			unk_0xC6EA3A47240425C4(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_341(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC6EA3A47240425C4(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_341(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC6EA3A47240425C4(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_341(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*iParam7 != -1)
		{
			unk_0x2A6C7715B55EA005(*iParam4);
			*iParam7 = -1;
		}
	}
	else
	{
		unk_0xE45648BDBF3441F5(134, &iVar17, &iVar18, &iVar19, &uVar20);
		vVar6 = { vVar3 - vVar4 };
		vVar5 = { func_353(uParam0, *iParam6 + 1) };
		unk_0xC6EA3A47240425C4(6, vVar4, func_454(vVar6), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_341(vVar4, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				unk_0x2A6C7715B55EA005(*iParam4);
				*iParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					unk_0x2A6C7715B55EA005(*iParam5);
					*iParam4 = 0;
				}
			}
			*iParam4 = unk_0x36B796513B03DD2D(15, vVar4, vVar5, 9f, iVar17, iVar18, iVar19, func_341(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*iParam5 = unk_0x36B796513B03DD2D(15, vVar5, func_353(uParam0, *iParam6 + 2), (9f * 0.5f), iVar17, iVar18, iVar19, func_341(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			unk_0xC6EA3A47240425C4(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_341(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC6EA3A47240425C4(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_341(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC6EA3A47240425C4(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_341(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		else
		{
			unk_0xC6EA3A47240425C4(6, vVar5, func_454(vVar3 - vVar5), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_341(vVar5, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*iParam4 != 0)
		{
			unk_0xCB8C65281BC495B3(*iParam4, iVar17, iVar18, iVar19, func_341(vVar4, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
		if (*iParam5 != 0)
		{
			unk_0xCB8C65281BC495B3(*iParam5, iVar17, iVar18, iVar19, func_341(vVar5, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 0 || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 1) || (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2 && !unk_0x8FCEEB789599BD9B(0, 80)))
	{
		if (!unk_0x87674A8F8F375647(vVar4, &uVar21, &uVar22))
		{
			if (iLocal_543)
			{
				func_339(vVar4, uParam15, uParam16, uParam17);
				if (func_441(&iLocal_545))
				{
					func_437(&iLocal_545);
				}
			}
			else if (func_441(&iLocal_545))
			{
				if (func_337(&iLocal_545) > 0.5f)
				{
					func_437(&iLocal_545);
					iLocal_543 = 1;
				}
			}
			else
			{
				func_465(&iLocal_545);
			}
		}
		else if (iLocal_543)
		{
			func_339(vVar4, uParam15, uParam16, uParam17);
			if (func_441(&iLocal_545))
			{
				if (func_337(&iLocal_545) > 0.5f)
				{
					func_437(&iLocal_545);
					iLocal_543 = 0;
				}
			}
			else
			{
				func_465(&iLocal_545);
			}
		}
		else if (func_441(&iLocal_545))
		{
			func_437(&iLocal_545);
		}
	}
	else
	{
		iLocal_543 = 0;
	}
	if (func_336(iParam14, uParam18, &iParam1))
	{
		if (unk_0x2DA8CA50A72528FB(*iParam11))
		{
			unk_0x07B8ECB35A4ED3AC(iParam11);
		}
		if (unk_0x2DA8CA50A72528FB(*iParam12))
		{
			unk_0x07B8ECB35A4ED3AC(iParam12);
		}
		if (!bVar15)
		{
			return 2;
		}
		fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
		if (((vVar6.z < 5f && vVar6.z > -2f) && fVar12 < 15f) || func_250(iParam1, iParam2))
		{
			*uParam10 = func_252(SYSTEM::CEIL(((100f * (15f - fVar12)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_335())
	{
		if (unk_0x1DA5E55FB57B6776(unk_0xB5CEFD608600A09F()))
		{
			unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 0);
		}
	}
	else if (!bVar15)
	{
		fVar11 = SYSTEM::VMAG2(vVar6);
		if (fVar11 < (22f * 22f))
		{
			if (fVar11 < (10f * 10f))
			{
				bVar16 = true;
			}
			else if (func_259(vVar0, -vVar6 / FtoV(SYSTEM::SQRT(fVar11))) < 0.08f)
			{
				bVar16 = true;
			}
			if (bVar16)
			{
				*uParam8++;
				func_334(iParam13, 1);
				func_209(func_407(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				iLocal_544 = 0;
			}
			if (!bVar16 && !iLocal_544)
			{
				iLocal_544 = 1;
			}
		}
		else if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 0 || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == -1)
		{
			if (vVar6.z < -22f)
			{
				func_334(iParam13, 0);
				bVar16 = true;
			}
		}
		else
		{
			vVar8 = { unk_0xF90427F311003E57(unk_0xBC25C936A095B5BA()) };
			vVar8.z = 0f;
			vVar8 = { func_454(vVar8) };
			vVar7 = { -vVar6.x, -vVar6.y, 0f };
			vVar7 = { func_454(vVar7) };
			fVar13 = ((vVar3.z - 32f) + (32f * func_333(vVar8, vVar7)));
			fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
			if ((vVar3.z - fVar13) < fVar12)
			{
				fVar13 = (fVar13 - (0.05f * ((fVar13 - vVar3.z) + fVar12)));
				if (fVar13 < (vVar4.z - 22f))
				{
					func_334(iParam13, 0);
					bVar16 = true;
				}
			}
		}
		if (iLocal_544)
		{
			if (SYSTEM::VMAG2(vVar6) >= (22f * 22f))
			{
				*uParam8++;
				func_334(iParam13, 1);
				func_209(func_407(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bVar16 = true;
				iLocal_544 = 0;
			}
		}
		if (bVar16)
		{
			*iParam6++;
			if (unk_0x2DA8CA50A72528FB(*iParam11))
			{
				unk_0x07B8ECB35A4ED3AC(iParam11);
			}
			if (unk_0x2DA8CA50A72528FB(*iParam12))
			{
				*iParam11 = *iParam12;
				*iParam12 = 0;
				unk_0x3F5F1772D71D5EC4(*iParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					unk_0x436D0272182E484D(*iParam11, "BJ_BLIP_TGT");
				}
				else
				{
					unk_0x436D0272182E484D(*iParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!unk_0x2DA8CA50A72528FB(*iParam12))
				{
					*iParam12 = unk_0x390CF6C8AD6903B7(func_353(uParam0, *iParam6 + 1));
					unk_0x0D5352939CC40C16(*iParam12, 5);
					unk_0x3F5F1772D71D5EC4(*iParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						unk_0x436D0272182E484D(*iParam12, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0x436D0272182E484D(*iParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*iParam12 = 0;
			}
			unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), func_353(uParam0, *iParam6), -1, 0, 2);
		}
	}
	return 0;
}

float func_333(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x1D013
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

void func_334(var uParam0, bool bParam1)//Position - 0x1D02A
{
	*uParam0 = unk_0x2F079D1FC5F6CB99();
	if (bParam1)
	{
		unk_0xC4BA30B532FE260F(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else
	{
		func_324("BJ_MISSED", 7500, 1);
		unk_0xC4BA30B532FE260F(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 1);
	}
}

int func_335()//Position - 0x1D06D
{
	if (((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) && (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 3 || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == -1)) && unk_0xDB5C848CD9F1133E(unk_0xBC25C936A095B5BA()) > 50f) && !unk_0x767EF32F6CCA0D55(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

bool func_336(var uParam0, var uParam1, int iParam2)//Position - 0x1D0C5
{
	int iVar0;
	int iVar1;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 1;
	}
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!*uParam1)
	{
		iVar1 = unk_0xD4931190C66F57A3(iVar0);
		if (iVar1 != -1 && !unk_0x2A348A3A98B80B13(iVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()) || (unk_0xADC5538B9DCA2177(iVar0) == 3 && !unk_0x2A348A3A98B80B13(iVar0))) || (unk_0xADC5538B9DCA2177(iVar0) == -1 && !unk_0x2A348A3A98B80B13(iVar0))) || (((unk_0x724D816EA203A79E(*iParam2) && !unk_0x36CEFBE9B745A58D(iVar0)) && !unk_0x1D403DFADBC2DE3C(*iParam2, 0)) && unk_0x702B2D223F333084(iVar0, *iParam2)));
}

float func_337(int iParam0)//Position - 0x1D17E
{
	if (func_441(iParam0))
	{
		if (func_338(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_40(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

bool func_338(int iParam0)//Position - 0x1D1BA
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

void func_339(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1D1CA
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x87674A8F8F375647(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_340(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		unk_0x7A569F3885B2E08A(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam3 || (*uParam1 == 0f && *uParam2 == 0f)) || (unk_0x357058E632979E65((fVar2 - *uParam1)) < 0.04f && unk_0x357058E632979E65((fVar3 - *uParam2)) < 0.04f))
		{
			unk_0x51DA985AC0B70E2E("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam3 = fVar4;
	}
	*uParam1 = fVar2;
	*uParam2 = fVar3;
}

void func_340(vector3 vParam0, var uParam1, var uParam2)//Position - 0x1D339
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_301(vParam0, 0f, 0f, 0f, 0))
	{
		unk_0x50D73D892CF6985F(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.y = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.y = (0.5f - fVar1);
	}
	vVar2.z = 0f;
	func_454(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.y = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*uParam1 = fVar0;
	*uParam2 = fVar1;
}

int func_341(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1D420
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		fVar2 = unk_0xF0F2FC9DE291567F(vParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), true);
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

void func_342(int iParam0)//Position - 0x1D48C
{
	if (func_441(iParam0) && func_440(iParam0) > 7.5f)
	{
		func_437(iParam0);
	}
}

int func_343(var uParam0, int iParam1, var uParam2)//Position - 0x1D4B4
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
	{
		*uParam2 = 1;
		return 1;
	}
	vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
		if (unk_0x2A348A3A98B80B13(iVar0))
		{
			return 0;
		}
		else if (!unk_0x2084D4C6C2DF616F(unk_0x541C2AEF053615BC(iVar0, 1), &fVar3, 0, 0))
		{
			return 0;
		}
		else if (vVar1.z >= (fVar3 + 1.5f))
		{
			return 0;
		}
	}
	if (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	else if (!unk_0x2084D4C6C2DF616F(vVar1, &fVar3, 0, 0))
	{
		return 0;
	}
	else if (vVar1.z >= (fVar3 + 1.5f))
	{
		return 0;
	}
	vVar2 = { func_353(uParam0, 0) };
	if (vVar1.z < (vVar2.z + 5f))
	{
		*uParam2 = 1;
		return 1;
	}
	if (iParam1 == 5)
	{
		if (vVar1.z < 288f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (vVar1.z < 305f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 8)
	{
		if (vVar1.z < 227f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 6 || iParam1 == 12)
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), func_452(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_344()//Position - 0x1D631
{
	if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_345(var uParam0)//Position - 0x1D64A
{
	return uParam0->f_54;
}

void func_346(int iParam0, bool bParam1)//Position - 0x1D656
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return;
	}
	vVar2 = { unk_0x541C2AEF053615BC(*iParam0, 1) };
	fVar4 = unk_0x2D175DF90F6F05C3(*iParam0);
	iVar1 = unk_0x3187EF5798B5D209(*iParam0, -1, 0);
	unk_0x346478B12F69D4E3(*iParam0, false);
	unk_0xC5A6DFE2B8987B17(&uVar0);
	if (!bParam1)
	{
		unk_0x827661D9AAD4A354(0, *iParam0, unk_0x541C2AEF053615BC(*iParam0, 1), 4, 0f, 786469, 2f, 0f, 1);
	}
	unk_0x827661D9AAD4A354(0, *iParam0, vVar2 + Vector(5f, 5f, 5f) * unk_0xF90427F311003E57(*iParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar4), 786469, 5f, 10f, 1);
	vVar3 = { Vector(1000f, 1000f, 1000f) * unk_0xF90427F311003E57(*iParam0) };
	vVar3.z = 200f;
	unk_0x827661D9AAD4A354(0, *iParam0, vVar2 + vVar3, 4, fVar4, 262144, 15f, 10f, 1);
	unk_0x535008C596714F9E(uVar0);
	unk_0xA4E856A8CD53B8DF(iVar1);
	unk_0xA8E6405305C0D7DF(iVar1, uVar0);
	unk_0x02DAF06EA4F08219(&uVar0);
}

void func_347(int iParam0, int iParam1)//Position - 0x1D745
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

void func_348(bool bParam0, bool bParam1, int iParam2)//Position - 0x1D7A2
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_397(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	func_537(23, 0);
}

int func_349(int iParam0)//Position - 0x1D7DE
{
	switch (iParam0)
	{
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("ruffian"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("cruiser"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("pcj"):
		case joaat("policeb"):
			return 1;
		
		default:
	}
	return 0;
}

int func_350(var uParam0)//Position - 0x1D85E
{
	return *uParam0;
}

int func_351(int iParam0)//Position - 0x1D869
{
	switch (iParam0)
	{
		case joaat("freight"):
		case 868868440:
			return 1;
		
		default:
	}
	return 0;
}

int func_352(var uParam0)//Position - 0x1D889
{
	return uParam0->f_1;
}

Vector3 func_353(var uParam0, int iParam1)//Position - 0x1D895
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_C[iParam1 /*3*/];
}

Vector3 func_354(var uParam0)//Position - 0x1D8BF
{
	return uParam0->f_6;
}

void func_355(int iParam0)//Position - 0x1D8CD
{
	func_39(iParam0, 0f);
}

int func_356(int iParam0)//Position - 0x1D8DC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_357(int iParam0)//Position - 0x1D8EF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_358(int iParam0)//Position - 0x1D902
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_359()//Position - 0x1D915
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

void func_360()//Position - 0x1D93E
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_361(&(Global_1C0005.f_49));
	func_361(&(Global_1C0005.f_8E));
	func_361(&(Global_1C0005.f_D3));
	func_361(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_127(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = -1;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_361(var uParam0)//Position - 0x1D9E0
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

bool func_362(var uParam0)//Position - 0x1DA1B
{
	return uParam0->f_53;
}

int func_363(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1DA27
{
	if (unk_0x16BE1286447174A9(func_412(uParam3, 1)))
	{
		func_355(iParam5);
	}
	if (!*uParam10)
	{
		if (func_441(iParam7) && func_440(iParam7) >= func_384(uParam0))
		{
			func_346(iParam2, 0);
			func_437(iParam7);
			*uParam10 = 1;
		}
	}
	else if (unk_0xE59B7F5A03335350(*iParam2, 0))
	{
		unk_0x7E482D75FA5D80A9(*iParam2, 0.7f);
	}
	if (func_441(iParam5) && func_440(iParam5) > 0.2f)
	{
		func_437(iParam5);
		func_437(iParam6);
		return 1;
	}
	if (!func_441(iParam6))
	{
		func_465(iParam6);
	}
	else if ((uParam12 && unk_0x726D9204B160D23E()) || (func_440(iParam6) > 0.5f && func_317(uParam4, 2)))
	{
		*uParam11 = 1;
		func_437(iParam5);
		func_437(iParam6);
		return 1;
	}
	unk_0x4E0EC60D119222B1(2);
	if (func_441(iParam8))
	{
		if (func_445(iParam1) != 0)
		{
			func_437(iParam8);
		}
		else if (func_440(iParam8) > func_405(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, -1, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, -1, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "playidles_cold", "blow_hands", 8f, -1.4f, -1, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_437(iParam8);
		}
	}
	if (unk_0x726D9204B160D23E())
	{
		func_364();
	}
	else
	{
		func_355(iParam6);
	}
	return 0;
}

void func_364()//Position - 0x1DBE8
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_19B04.f_49FA;
	func_365(Var0, 0, 0, 0, 0, iVar1);
}

void func_365(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1DC07
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
			if (func_379(1, Param0))
			{
				if (Global_11643 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_11642 = unk_0x105601648511CC64();
					vLocal_22 = { unk_0xF24CFCD50F696B24(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0x11F9F9006143871A());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_379(0, Param0))
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
				iVar11 = func_407();
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
				Var4 = { func_368(Global_11641, Global_11643, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0xF6A6FFB73848BF82(fVar5, fVar6, 0f, 0.01f);
				unk_0xB8F3C51875F7BEA3(0.67f, 0.67f);
				if (!unk_0x877E3741B282A35F() && !unk_0xC558637882D21203())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_367(&Var4) > fLocal_24)
					{
						if (unk_0xB6AACEDA0127F076(15))
						{
							unk_0x6DB77F071B43C870(15, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_11645 = 1;
						}
					}
				}
				unk_0x8B371195127AACF2(&Var4);
				unk_0x3A8B9C7B1C825123(fVar5, fVar6, 0);
				unk_0x2A025E7CEBB76D14();
				if (Global_11644 == 1)
				{
					func_366();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_366();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_366()//Position - 0x1DEEC
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

float func_367(char* sParam0)//Position - 0x1DF24
{
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

struct<2> func_368(int iParam0, int iParam1, int iParam2)//Position - 0x1DF37
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_378(iParam0) };
			break;
		
		case 7:
			Var0 = { func_376(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_375(iParam2) };
					break;
				
				case 8:
					Var0 = { func_374(iParam2) };
					break;
				
				case 7:
					Var0 = { func_373(iParam2) };
					break;
				
				case 10:
					Var0 = { func_372(iParam2) };
					break;
				
				case 5:
					Var0 = { func_371(iParam2) };
					break;
				
				case 4:
					Var0 = { func_370(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_369(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_369(int iParam0)//Position - 0x1E00D
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

struct<2> func_370(int iParam0)//Position - 0x1E160
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

struct<2> func_371(int iParam0)//Position - 0x1E193
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

struct<2> func_372(int iParam0)//Position - 0x1E1C6
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

struct<2> func_373(int iParam0)//Position - 0x1E1F9
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

struct<2> func_374(int iParam0)//Position - 0x1E22C
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

struct<2> func_375(int iParam0)//Position - 0x1E269
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

struct<2> func_376(int iParam0)//Position - 0x1E29C
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_377(iParam0) };
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

struct<2> func_377(int iParam0)//Position - 0x1E2D3
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

struct<2> func_378(int iParam0)//Position - 0x1E71F
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

int func_379(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1E788
{
	if (((!func_381(0) || Global_1164F) || Global_11644 == 1) || !unk_0x726D9204B160D23E())
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
			if ((unk_0x866EAD7E27D8D0F8() || func_30(0)) || func_380(1))
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

bool func_380(bool bParam0)//Position - 0x1E8A0
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_381(int iParam0)//Position - 0x1E8C9
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_382(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_382(int iParam0)//Position - 0x1E8EB
{
	return func_383(iParam0, Global_8C41);
}

int func_383(int iParam0, int iParam1)//Position - 0x1E8FC
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

float func_384(var uParam0)//Position - 0x1EADD
{
	return uParam0->f_50;
}

int func_385(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1EAE9
{
	func_394(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_386(sParam2, iParam3, 0);
}

int func_386(char* sParam0, int iParam1, bool bParam2)//Position - 0x1EB37
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
					func_393();
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
		if (func_392(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_391();
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
				func_390();
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
				if (func_389())
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
			if (func_28())
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
			func_388();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_387();
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
		func_393();
	}
	return 0;
}

void func_387()//Position - 0x1EE03
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

void func_388()//Position - 0x1EE34
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

int func_389()//Position - 0x1EEC9
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

void func_390()//Position - 0x1EF62
{
	if (func_237(14))
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
		Global_389D = func_407();
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

void func_391()//Position - 0x1F004
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

bool func_392(int iParam0, int iParam1)//Position - 0x1F05B
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

void func_393()//Position - 0x1F096
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

void func_394(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1F0ED
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

var func_395(var uParam0)//Position - 0x1F143
{
	return uParam0->f_4;
}

void func_396(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)//Position - 0x1F14F
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = func_412(uParam0, 0);
	if (unk_0x724D816EA203A79E(iParam5) && !unk_0x1D403DFADBC2DE3C(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_443(uParam1))), SYSTEM::SIN((-97.4239f + func_443(uParam1)))) };
		*uParam3 = { unk_0xA4455714F3DCE207(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_442(*uParam4, uParam2->f_2) };
		vVar3 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_443(uParam1)) };
		*uParam7 = 26f;
		vVar2 = { *uParam6 };
		vVar2.z = (vVar2.z + uParam2->f_2);
		unk_0x6125108F6208C1F6(iVar0, vVar3);
		unk_0x3553F2A72957724E(iVar0, vVar2, 2);
		unk_0x9DF315A9EFFF87AC(iVar0, *uParam7);
		unk_0x97AD4F1D22AEA4FC(iVar0, func_315());
	}
	unk_0x348665177DBFB93B(iVar0, true);
	unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
}

void func_397(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1F25A
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_404(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_28())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_403(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_404(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_403(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_401(unk_0xB5CEFD608600A09F())) && !func_399(unk_0xB5CEFD608600A09F(), 0)) && !func_398()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_401(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_398()//Position - 0x1F383
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_399(int iParam0, int iParam1)//Position - 0x1F3A0
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_400(-1, 0) == 8;
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

int func_400(int iParam0, bool bParam1)//Position - 0x1F3EB
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_217();
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

int func_401(int iParam0)//Position - 0x1F42C
{
	if (func_399(iParam0, 0))
	{
		return 1;
	}
	if (func_402())
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

bool func_402()//Position - 0x1F46E
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_403(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1F47F
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

void func_404(int iParam0)//Position - 0x1F4B2
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

float func_405(int iParam0, int iParam1)//Position - 0x1F4D5
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				
				case 1:
					return 7.3f;
				
				case 2:
					return 6.8f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				
				case 1:
					return 5.5f;
				
				case 2:
					return 5f;
				
				default:
			}
			break;
		
		case 5:
			return 0f;
		
		case 6:
			return 0f;
		
		case 12:
			return 0f;
	}
	return 0f;
}

int func_406(int iParam0)//Position - 0x1F56F
{
	switch (iParam0)
	{
		case 5:
			return 3000;
		
		case 6:
			return 1500;
		
		case 12:
			return 2000;
		
		default:
	}
	return 0;
}

int func_407()//Position - 0x1F5A3
{
	func_408();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_408()//Position - 0x1F5BC
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_35(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_34(unk_0xBC25C936A095B5BA());
			if (func_36(iVar0) && (!func_237(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_36(Global_19B04.f_932.f_21B.f_10CD))
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

float func_409(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x1F6B9
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_410(vector3 vParam0)//Position - 0x1F6D3
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_411(int iParam0)//Position - 0x1F6FD
{
	switch (iParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_412(var uParam0, int iParam1)//Position - 0x1F757
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_413(int iParam0, int iParam1, int iParam2)//Position - 0x1F76F
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_27(0);
	func_397(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	func_537(23, 1);
}

void func_414(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1F7C6
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return;
	}
	if (func_410(func_436(uParam0)))
	{
	}
	else
	{
		unk_0x379ACE23D404525C(func_436(uParam0), func_435(uParam0), false, 1);
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (!func_410(func_353(uParam0, iVar3)))
		{
			*uParam2 = iVar3 + 1;
		}
		else
		{
			iVar3 = 999999;
		}
		iVar3++;
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
	unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), false);
	unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 1, false, false);
	unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
	if (iParam13 == 4)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0xCF6040807CC0E4A5(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(iVar1, 1) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					unk_0x641B19E156645A92(iVar1, -89.794f, -742.6727f, 43.7472f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iVar1, -109.33f);
					unk_0x127F627F30266DD9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0xCF6040807CC0E4A5(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(iVar1, 1) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					unk_0x641B19E156645A92(iVar1, -215.2838f, 6543.57f, 10.0967f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iVar1, 145.5732f);
					unk_0x127F627F30266DD9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0xCF6040807CC0E4A5(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(iVar1, 1) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					unk_0x641B19E156645A92(iVar1, -118.1021f, -947.3954f, 27.3296f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iVar1, 341.9614f);
					unk_0x127F627F30266DD9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0xCF6040807CC0E4A5(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(iVar1, 1) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					unk_0x641B19E156645A92(iVar1, -1237.022f, 4559.404f, 185.9418f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iVar1, 172.2123f);
					unk_0x127F627F30266DD9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0xCF6040807CC0E4A5(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(iVar1, 1) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					unk_0x641B19E156645A92(iVar1, -1351.805f, 133.95f, 55.2558f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iVar1, 0.8373f);
					unk_0x127F627F30266DD9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0xCF6040807CC0E4A5(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x541C2AEF053615BC(iVar1, 1) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					unk_0x641B19E156645A92(iVar1, -765.8775f, 4294.807f, 145.6581f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(iVar1, 349.2306f);
					unk_0x127F627F30266DD9(iVar1, 1);
				}
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), false);
		unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 1, false, false);
	}
	iVar0 = func_445(iParam13);
	if (iVar0 != 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam3, 0) || unk_0x724D816EA203A79E(*iParam3))
		{
			unk_0x3F91283C7E2D2183(*iParam3);
			unk_0x641B19E156645A92(*iParam3, func_452(iParam13), 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(*iParam3, func_443(uParam0));
		}
		else
		{
			*iParam3 = unk_0x61C05BF08A1E0EFE(iVar0, func_452(iParam13), func_443(uParam0), 1, 1, 0);
		}
		if (func_444(iVar0))
		{
			if (!unk_0x724D816EA203A79E(*iParam8) || unk_0x1D403DFADBC2DE3C(*iParam8, 0))
			{
				*iParam8 = unk_0xFD8987C090669BD5(*iParam3, 26, iParam10, -1, 1, true);
				unk_0xC3D5C68D28907D90(*iParam8, 0);
				func_434(*iParam8, iParam13);
				unk_0x1E5C2A1EAB944289(*iParam8, true);
			}
			unk_0xB894B4FCE4CAF36E("SKY_DIVING_SHAKE", 0.15f);
			func_432(uParam1, *iParam8, func_433(iParam13));
			func_429(uParam1, unk_0xBC25C936A095B5BA(), func_431());
			unk_0x7E482D75FA5D80A9(*iParam3, 0.7f);
			unk_0x346478B12F69D4E3(*iParam3, true);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam3, 0))
				{
					unk_0x17175087F2DB6AC8(unk_0xBC25C936A095B5BA(), 1, 1);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), *iParam3, 2);
				}
				else if (func_428(unk_0xBC25C936A095B5BA(), *iParam3) == 1)
				{
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), *iParam3, 2);
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(*iParam3, 0))
			{
				*iParam14 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x510CBEAEC917268A(*iParam14, *iParam3, unk_0xB5B60A04E1654409(*iParam3, "Chassis"));
				unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				unk_0xC2BF3DE5E47F801D(*iParam14, true);
			}
			func_465(iParam12);
		}
		else if (func_349(iVar0))
		{
			func_429(uParam1, unk_0xBC25C936A095B5BA(), func_431());
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
			unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), *iParam3, -1);
			unk_0x92C13E9A4A1DA028(unk_0xBC25C936A095B5BA(), 0, 4096, -1);
			func_465(iParam12);
		}
	}
	else
	{
		func_429(uParam1, unk_0xBC25C936A095B5BA(), func_431());
		if (func_362(uParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x6C02DCF0A777D97F(unk_0xBC25C936A095B5BA())))
			{
				unk_0x5AA1A8C2DAD4FF6F(unk_0xBC25C936A095B5BA(), 1);
			}
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), func_452(iParam13), 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), func_443(uParam0));
			unk_0xDE2D2B13F24A979D(unk_0xBC25C936A095B5BA(), -1);
			if (unk_0x724D816EA203A79E(*iParam3))
			{
				iVar4 = -1;
				while (iVar4 <= (unk_0x524ABB0435146845(*iParam3) - 1))
				{
					if (!unk_0x1AAF0C23233C57AF(*iParam3, iVar4, 0))
					{
						iVar5 = unk_0x3187EF5798B5D209(*iParam3, iVar4, 0);
						unk_0xF845620A03C7425B(&iVar5);
					}
					iVar4++;
				}
				unk_0xCF6040807CC0E4A5(iParam3);
			}
		}
	}
	unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 1);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 36, true);
	if (func_510(uParam0) != 0)
	{
		func_424(uParam0, iParam5, iParam13);
	}
	if (func_423(uParam0) != 0)
	{
		func_420(uParam0, iParam7);
	}
	iVar0 = func_352(uParam0);
	if (func_351(iVar0))
	{
		unk_0x28F3C8C5AD5BD015();
		unk_0xED48729ADA05C6DE(0);
	}
	else if (iVar0 != 0)
	{
		unk_0x6C5F5B5F6894CCE3(func_353(uParam0, 0), 100f, 1, 0, 0, false);
		if (unk_0x724D816EA203A79E(*iParam4) && unk_0x1D403DFADBC2DE3C(*iParam4, 0))
		{
			unk_0xCF6040807CC0E4A5(iParam4);
		}
		if (!unk_0x724D816EA203A79E(*iParam4))
		{
			*iParam4 = unk_0x61C05BF08A1E0EFE(iVar0, func_353(uParam0, 0), func_419(uParam0), 1, 1, 0);
			if (func_418(func_352(uParam0)))
			{
				unk_0x6012A6A4F2950585(*iParam4, 11);
			}
			else if (func_417(func_352(uParam0)))
			{
				unk_0xE54F7105CEA81918(*iParam4, 1, true);
				unk_0x6012A6A4F2950585(*iParam4, 6);
				unk_0x93D3868AE0D83B7C(*iParam4, 2);
				unk_0x28E71F59848ACCFD(200f);
				unk_0xAF9FC4463EA3090B(*iParam4, 1000);
			}
			unk_0xB71D41C0310C93DE(*iParam4, 1, 1);
		}
		else if (!unk_0x1D403DFADBC2DE3C(*iParam4, 0))
		{
			unk_0x3F91283C7E2D2183(*iParam4);
			unk_0x641B19E156645A92(*iParam4, func_353(uParam0, 0), 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(*iParam4, func_419(uParam0));
		}
		if (func_418(func_352(uParam0)))
		{
			if (unk_0x724D816EA203A79E(*iParam6) && unk_0x1D403DFADBC2DE3C(*iParam6, 0))
			{
				unk_0xCF6040807CC0E4A5(iParam6);
			}
			if (!unk_0x724D816EA203A79E(*iParam6))
			{
				*iParam6 = unk_0x61C05BF08A1E0EFE(joaat("trflat"), unk_0xA4455714F3DCE207(*iParam4, 0f, -10f, 0f), func_419(uParam0), 1, 1, 0);
				unk_0xB71D41C0310C93DE(*iParam6, 1, 1);
				unk_0xAF9FC4463EA3090B(*iParam6, 2000);
			}
			else if (!unk_0x1D403DFADBC2DE3C(*iParam6, 0))
			{
				unk_0x3F91283C7E2D2183(*iParam6);
			}
			if (!unk_0x6E80E5225F67328D(*iParam4))
			{
				unk_0x0A0AE625CFB21683(*iParam4, *iParam6, 1065353216);
			}
		}
		if (unk_0x724D816EA203A79E(*iParam9) && unk_0x1D403DFADBC2DE3C(*iParam9, 0))
		{
			unk_0xF845620A03C7425B(iParam9);
		}
		if (!unk_0x724D816EA203A79E(*iParam9))
		{
			*iParam9 = unk_0xFD8987C090669BD5(*iParam4, 26, iParam11, -1, 1, true);
			unk_0x77815D3407C6700D(*iParam9, true, 0);
			unk_0x2E35C4FA5F0ED22F(*iParam9, 1);
			func_416(*iParam9, iParam13);
			if (iParam13 == 0)
			{
				func_415(uParam1, 2, *iParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			unk_0x65E471E4A2D56226(*iParam9, unk_0x0992793998FBCE2B(*iParam9), 0);
			unk_0xC70E4601A4F9E28B(*iParam9);
			unk_0xA4E856A8CD53B8DF(*iParam9);
			if (!unk_0x62F3A07C43FFB568(*iParam9, *iParam4, 0) || unk_0x3187EF5798B5D209(*iParam4, -1, 0) != *iParam9)
			{
				if (unk_0x5237AF95232D78C5(*iParam9, 1))
				{
					unk_0x5AA1A8C2DAD4FF6F(*iParam9, 1);
				}
				unk_0xBD53A029D0155A42(*iParam9, *iParam4, -1);
			}
		}
		unk_0xB71D41C0310C93DE(*iParam9, 1, 1);
	}
	if (func_407() == 0)
	{
		unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 9, 5, 0, 0);
	}
	else if (func_407() == 1)
	{
		unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 1, 0, 0);
	}
	else if (func_407() == 2)
	{
		unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 3, 0, 0);
	}
}

void func_415(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2027B
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

void func_416(int iParam0, int iParam1)//Position - 0x20316
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 2, 0);
			unk_0x770493971AED5C38(iParam0, 0);
			unk_0x70FF586D857F1A81(iParam0, 1, 1, 0, false);
			break;
		
		case 5:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 2, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 1, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 1, 1, 0);
			unk_0x770493971AED5C38(iParam0, 0);
			unk_0x770493971AED5C38(iParam0, 1);
			break;
		
		case 7:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 8, 0, 1, 0);
			unk_0x70FF586D857F1A81(iParam0, 0, 0, 2, false);
			break;
	}
}

int func_417(int iParam0)//Position - 0x203E5
{
	switch (iParam0)
	{
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("dinghy"):
		case joaat("jetmax"):
		case joaat("marquis"):
		case joaat("squalo"):
		case joaat("suntrap"):
		case joaat("tropic"):
		case joaat("predator"):
			return 1;
		
		default:
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x2042F
{
	switch (iParam0)
	{
		case joaat("hauler"):
		case joaat("biff"):
		case joaat("packer"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("phantom"):
		case joaat("pounder"):
			return 1;
		
		default:
	}
	return 0;
}

var func_419(var uParam0)//Position - 0x2046D
{
	return uParam0->f_4D;
}

void func_420(var uParam0, int iParam1)//Position - 0x20479
{
	if (!unk_0x724D816EA203A79E(*iParam1))
	{
		*iParam1 = unk_0x61C05BF08A1E0EFE(func_423(uParam0), func_422(uParam0), func_421(uParam0), 1, 1, 0);
	}
	else if (unk_0x1D403DFADBC2DE3C(*iParam1, 0))
	{
		unk_0xCF6040807CC0E4A5(iParam1);
		*iParam1 = unk_0x61C05BF08A1E0EFE(func_423(uParam0), func_422(uParam0), func_421(uParam0), 1, 1, 0);
	}
	else
	{
		unk_0x3F91283C7E2D2183(*iParam1);
	}
}

var func_421(var uParam0)//Position - 0x204E2
{
	return uParam0->f_4F;
}

Vector3 func_422(var uParam0)//Position - 0x204EE
{
	return uParam0->f_9;
}

int func_423(var uParam0)//Position - 0x204FC
{
	return uParam0->f_3;
}

void func_424(var uParam0, var uParam1, int iParam2)//Position - 0x20508
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x724D816EA203A79E(*uParam1))
	{
		if (!func_310(*uParam1) && unk_0x724D816EA203A79E(unk_0x3187EF5798B5D209(*uParam1, -1, 0)))
		{
			iVar1 = unk_0x3187EF5798B5D209(*uParam1, -1, 0);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_427(iParam2);
	if (iVar0 != 0)
	{
		if (!unk_0x724D816EA203A79E(iVar2))
		{
			iVar2 = unk_0x61C05BF08A1E0EFE(func_510(uParam0), func_426(uParam0), func_425(uParam0), 1, 1, 0);
		}
		else
		{
			unk_0x641B19E156645A92(iVar2, func_426(uParam0), 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(iVar2, func_425(uParam0));
		}
		unk_0x346478B12F69D4E3(iVar2, true);
		if (!unk_0x724D816EA203A79E(iVar1))
		{
			iVar1 = unk_0xFD8987C090669BD5(iVar2, 26, iVar0, -1, 1, true);
		}
		unk_0xC3D5C68D28907D90(iVar1, 0);
		func_434(iVar1, iParam2);
	}
	else
	{
		if (!unk_0x724D816EA203A79E(iVar2))
		{
			iVar2 = unk_0x61C05BF08A1E0EFE(func_510(uParam0), func_426(uParam0), func_425(uParam0), 1, 1, 0);
		}
		else
		{
			unk_0x641B19E156645A92(iVar2, func_426(uParam0), 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(iVar2, func_425(uParam0));
		}
		unk_0x346478B12F69D4E3(iVar2, true);
		if (!unk_0x724D816EA203A79E(iVar1))
		{
			iVar1 = unk_0xFD8987C090669BD5(iVar2, 26, joaat("s_m_y_pilot_01"), -1, 1, true);
		}
		unk_0xC3D5C68D28907D90(iVar1, 0);
		unk_0x70FF586D857F1A81(iVar1, 0, 2, 0, false);
		unk_0x70FF586D857F1A81(iVar1, 1, 0, 0, false);
	}
	unk_0x2D655AA68FA1736B(iVar2, true, 1, 0);
	unk_0x7E482D75FA5D80A9(iVar2, 0.7f);
	unk_0xA4E856A8CD53B8DF(iVar1);
	unk_0xDE2D2B13F24A979D(iVar1, -1);
	*uParam1 = iVar2;
}

var func_425(var uParam0)//Position - 0x20673
{
	return uParam0->f_4E;
}

Vector3 func_426(var uParam0)//Position - 0x2067F
{
	return uParam0->f_46;
}

int func_427(int iParam0)//Position - 0x2068D
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

int func_428(int iParam0, int iParam1)//Position - 0x2070D
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

void func_429(var uParam0, int iParam1, char* sParam2)//Position - 0x2077F
{
	int iVar0;
	
	iVar0 = func_430();
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		func_415(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_415(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_430()//Position - 0x207B5
{
	if (func_407() == 1)
	{
		return 2;
	}
	if (func_407() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_431()//Position - 0x207DC
{
	int iVar0;
	
	iVar0 = func_34(unk_0xBC25C936A095B5BA());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		
		case 2:
			return "TREVOR";
		
		case 1:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_432(var uParam0, int iParam1, char* sParam2)//Position - 0x2081F
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		func_415(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_415(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_433(int iParam0)//Position - 0x20852
{
	return "EXT1HELIPILOT";
}

void func_434(int iParam0, int iParam1)//Position - 0x2085E
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 8, 1, 0, 0);
			unk_0x70FF586D857F1A81(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 2, 2, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 2, 0);
			unk_0x70FF586D857F1A81(iParam0, 0, 1, 2, false);
			unk_0x70FF586D857F1A81(iParam0, 1, 1, 0, false);
			break;
	}
}

Vector3 func_435(var uParam0)//Position - 0x20905
{
	return uParam0->f_43;
}

Vector3 func_436(var uParam0)//Position - 0x20913
{
	return uParam0->f_40;
}

void func_437(int iParam0)//Position - 0x20921
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_438(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x20937
{
	char cVar0[64];
	
	if (!func_444(func_445(iParam3)))
	{
		unk_0x30FE708AC8604C55(func_452(iParam3));
	}
	if (func_441(iParam1))
	{
		if (func_440(iParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_326(iParam1, 0f);
	}
	if (unk_0x17FAADF9916EF741())
	{
		if (!unk_0xF220370B0C08EC20())
		{
			return 0;
		}
	}
	if (func_444(func_445(iParam3)))
	{
		if (!unk_0xF9E082857622D91E("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_405(iParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!unk_0xF9E082857622D91E(&cVar0))
		{
			return 0;
		}
	}
	if (func_439(uParam0))
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam2))
		{
			if (unk_0xFA9040D29FE330BD(2))
			{
				if (unk_0x499783D01578C2D2("basejumping"))
				{
					if (((unk_0xF9E082857622D91E("oddjobs@basejump@") && unk_0xF9E082857622D91E("skydive@freefall")) && unk_0xF9E082857622D91E("skydive@parachute@chute")) && unk_0xF9E082857622D91E("skydive@parachute@"))
					{
						if (unk_0x77D9A006A4527F4C(0))
						{
							if (!bParam5 || unk_0x17FAADF9916EF741())
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

int func_439(var uParam0)//Position - 0x20A6E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xD6513D668481290A((*uParam0)[iVar0]))
			{
				if (!unk_0xD6513D668481290A((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

float func_440(int iParam0)//Position - 0x20AB5
{
	if (func_441(iParam0))
	{
		if (func_338(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_40(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_441(int iParam0)//Position - 0x20AF4
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

Vector3 func_442(vector3 vParam0, float fParam1)//Position - 0x20B04
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

float func_443(var uParam0)//Position - 0x20B48
{
	return uParam0->f_4C;
}

int func_444(int iParam0)//Position - 0x20B54
{
	switch (iParam0)
	{
		case joaat("annihilator"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("skylift"):
			return 1;
		
		default:
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x20B9E
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

void func_446(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x20BF4
{
	int iVar0;
	int iVar1;
	
	func_26(1);
	unk_0x6C23D8FD3FB29BAA(0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x4A506C72BFC368E4(unk_0xBC25C936A095B5BA(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			unk_0x1DAA351326EA3537(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			func_451(1, 1);
			break;
		
		case 9:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x6C5F5B5F6894CCE3(func_452(iParam1), 5000f, 1, 0, 0, false);
	}
	unk_0x900CF084251DED26("BJUMP", 2);
	iVar0 = func_445(iParam1);
	if (iVar0 != 0)
	{
		if (func_444(iVar0))
		{
			unk_0x522053D86D6E1C7A("veh@helicopter@rps@base");
			*uParam3 = func_427(iParam1);
			func_449(uParam2, *uParam3);
		}
		func_449(uParam2, iVar0);
	}
	if (func_510(uParam0) != 0)
	{
		func_449(uParam2, func_510(uParam0));
		if (func_427(iParam1) != 0)
		{
			func_449(uParam2, func_427(iParam1));
		}
		else
		{
			func_449(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_352(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_448(iParam1);
		func_449(uParam2, *uParam4);
		func_449(uParam2, iVar1);
		func_449(uParam2, joaat("trflat"));
	}
	if (func_351(iVar1))
	{
		func_449(uParam2, joaat("freight"));
		func_449(uParam2, joaat("freightcar"));
		func_449(uParam2, joaat("freightgrain"));
		func_449(uParam2, joaat("freightcont1"));
		func_449(uParam2, joaat("freightcont2"));
		func_449(uParam2, joaat("tankercar"));
		func_449(uParam2, 868868440);
	}
	if (func_423(uParam0) != 0)
	{
		func_449(uParam2, func_423(uParam0));
	}
	*uParam5 = func_159();
	func_447(uParam2);
	unk_0x522053D86D6E1C7A("oddjobs@basejump@");
	unk_0x522053D86D6E1C7A("skydive@freefall");
	unk_0x522053D86D6E1C7A("skydive@parachute@chute");
	unk_0x522053D86D6E1C7A("skydive@parachute@");
	unk_0x8AA3F48A15444B98("basejumping", false);
	if (func_405(iParam1, 0) > 0f)
	{
		*uParam6 = unk_0x491B2241281A03B7(0, 2);
		switch (*uParam6)
		{
			case 0:
				unk_0x522053D86D6E1C7A("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_445(iParam1) == 0)
	{
		unk_0x30FE708AC8604C55(func_452(iParam1));
	}
}

void func_447(var uParam0)//Position - 0x20E8F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xF243B7A14FCFD0F4((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_448(int iParam0)//Position - 0x20EBF
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_m_y_beach_01");
		
		case 5:
			return joaat("s_m_m_trucker_01");
		
		case 7:
			return joaat("a_m_y_beach_01");
		
		default:
	}
	return 0;
}

int func_449(var uParam0, int iParam1)//Position - 0x20EF9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_450(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_450(var uParam0)//Position - 0x20F56
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

void func_451(int iParam0, int iParam1)//Position - 0x20F82
{
	unk_0xF0059F27F7BB6680(&Global_635B, iParam0);
	StringCopy(&(Global_635C[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_6393[iParam0] = iParam1;
}

Vector3 func_452(int iParam0)//Position - 0x20FA9
{
	switch (iParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 1:
			return 885.114f, -437.352f, 529.867f;
		
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 5:
			return -117.6998f, -975.571f, 295f;
		
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_453(int iParam0)//Position - 0x210F3
{
	if (unk_0x17FAADF9916EF741())
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), func_452(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), func_452(iParam0), 0, 0, 0, 1);
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), func_452(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_454(vector3 vParam0)//Position - 0x21163
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

Vector3 func_455(int iParam0)//Position - 0x211A2
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_456(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x212CC
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar0 = { func_464(uParam1) };
	vVar1 = { func_463(uParam1) };
	fVar2 = func_462(uParam1);
	if (!unk_0xEF0E25DA0CB6E8FF(func_412(uParam0, 0)))
	{
		func_461(uParam0, 0, unk_0x585DE1CBEEB2D27D(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		unk_0x6125108F6208C1F6(func_412(uParam0, 0), vVar0);
		unk_0x3553F2A72957724E(func_412(uParam0, 0), vVar1, 2);
	}
	unk_0x9DF315A9EFFF87AC(func_412(uParam0, 0), fVar2);
	unk_0x348665177DBFB93B(func_412(uParam0, 0), true);
	if (bParam3)
	{
		vVar3 = { vVar0 };
		vVar3.z = (vVar3.z + 8f);
		unk_0x9961B404F89D0597(func_412(uParam0, 0), vVar3, vVar1, fVar2, func_460(iParam2), 1, 1, 2);
	}
	vVar0 = { func_459(uParam1) };
	vVar1 = { func_458(uParam1) };
	fVar2 = func_457(uParam1);
	if (!unk_0xEF0E25DA0CB6E8FF(func_412(uParam0, 1)))
	{
		func_461(uParam0, 1, unk_0x585DE1CBEEB2D27D(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		unk_0x6125108F6208C1F6(func_412(uParam0, 1), vVar0);
		unk_0x3553F2A72957724E(func_412(uParam0, 1), vVar1, 2);
	}
	unk_0x9DF315A9EFFF87AC(func_412(uParam0, 1), fVar2);
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0xAE099C1ADC89C331(func_412(uParam0, 1), func_412(uParam0, 0), func_460(iParam2), 1, 1);
	}
	unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
	unk_0xB894B4FCE4CAF36E("HAND_SHAKE", 0.2f);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
}

float func_457(var uParam0)//Position - 0x21452
{
	return uParam0->f_52;
}

Vector3 func_458(var uParam0)//Position - 0x2145E
{
	return uParam0->f_3A;
}

Vector3 func_459(var uParam0)//Position - 0x2146C
{
	return uParam0->f_37;
}

int func_460(int iParam0)//Position - 0x2147A
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
			break;
	}
	return 10000;
}

void func_461(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x214A7
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !unk_0xEF0E25DA0CB6E8FF(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

var func_462(var uParam0)//Position - 0x214D4
{
	return uParam0->f_51;
}

Vector3 func_463(var uParam0)//Position - 0x214E0
{
	return uParam0->f_34;
}

Vector3 func_464(var uParam0)//Position - 0x214EE
{
	return uParam0->f_31;
}

void func_465(int iParam0)//Position - 0x214FC
{
	if (!func_441(iParam0))
	{
		func_355(iParam0);
	}
}

void func_466(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x21514
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_291(&(Global_110A8.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(vParam0, Global_110A8.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_467(iVar0);
			}
		}
		iVar0++;
	}
}

void func_467(int iParam0)//Position - 0x21564
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_291(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_297(iParam0, 0)) && Global_11435.f_42 == 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] != 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] > 3) && (!func_468(0, Global_110A8.f_22B[0 /*21*/].f_C) || !func_468(1, Global_110A8.f_22B[0 /*21*/].f_C)))
			{
				func_298(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), &Global_11435);
				Global_11483 = Global_19B04.f_7F22.f_15D7;
			}
			func_295(iParam0, 0);
		}
	}
}

int func_468(int iParam0, int iParam1)//Position - 0x216D6
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
	if (iParam0 < 0 || iParam0 >= func_469(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_275(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_469(var uParam0)//Position - 0x21748
{
	return *uParam0;
}

void func_470(char* sParam0, int iParam1)//Position - 0x21753
{
	int iVar0;
	int iVar1;
	
	if (Global_195B4 && iParam1)
	{
		if (func_321(sParam0) && !unk_0x5ECDC4E2F3BFF708())
		{
			unk_0x7456702622C62EA0(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, &(Global_19B04.f_4F9D[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_19B04.f_4F9D.f_91 - 2))
			{
				func_473(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_472((Global_19B04.f_4F9D.f_91 - 1));
			Global_19B04.f_4F9D.f_91 = (Global_19B04.f_4F9D.f_91 - 1);
			func_471();
			return;
		}
		iVar0++;
	}
}

void func_471()//Position - 0x21800
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

void func_472(int iParam0)//Position - 0x21920
{
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/].f_4), "", 16);
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = -1;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = 0;
}

void func_473(int iParam0, int iParam1)//Position - 0x219BA
{
	Global_19B04.f_4F9D[iParam0 /*16*/] = { Global_19B04.f_4F9D[iParam1 /*16*/] };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_4 = { Global_19B04.f_4F9D[iParam1 /*16*/].f_4 };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = Global_19B04.f_4F9D[iParam1 /*16*/].f_8;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = Global_19B04.f_4F9D[iParam1 /*16*/].f_A;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = Global_19B04.f_4F9D[iParam1 /*16*/].f_9;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = Global_19B04.f_4F9D[iParam1 /*16*/].f_B;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = Global_19B04.f_4F9D[iParam1 /*16*/].f_C;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = Global_19B04.f_4F9D[iParam1 /*16*/].f_D;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = Global_19B04.f_4F9D[iParam1 /*16*/].f_E;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = Global_19B04.f_4F9D[iParam1 /*16*/].f_F;
}

void func_474(bool bParam0)//Position - 0x21ACA
{
	if (bParam0)
	{
		unk_0xC63520BF0B3FB162(0);
		unk_0x720260ACC9BD334E(1);
		unk_0x4101DC5C065D2EB5(0);
		func_17(1);
		Global_15926 = 1;
	}
	else
	{
		unk_0xC63520BF0B3FB162(1);
		unk_0x720260ACC9BD334E(0);
		unk_0x4101DC5C065D2EB5(1);
		func_17(0);
		Global_15926 = 0;
	}
}

void func_475()//Position - 0x21B0C
{
	func_476(&uLocal_105);
}

void func_476(var uParam0)//Position - 0x21B1A
{
	if (uParam0->f_4 != 0)
	{
		func_141(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_480(uParam0);
		func_479(uParam0);
		func_115(&Global_1C1269);
	}
	if (Global_1C017E.f_A94 != 0 || Global_1C017E.f_C70)
	{
		func_477();
	}
	if (unk_0x144E80F5C46A6B75("LEADERBOARD_SCENE"))
	{
		unk_0xC1300D0F3A74E20B("LEADERBOARD_SCENE");
	}
	if (unk_0x57D316754A262B34())
	{
		func_87(&(Global_1C171A.f_31));
	}
	Global_267214.f_F71 = 0;
}

void func_477()//Position - 0x21BBB
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
	func_478(&(Global_1C017E.f_ADC));
	func_87(&(Global_1C017E.f_B07));
	Global_1C017E.f_B09 = -1;
	Global_1C017E.f_B0A = 0;
	func_87(&(Global_1C017E.f_B0B));
	Global_1C017E.f_B0D = 0;
	func_87(&(Global_1C017E.f_B0E));
	Global_1C017E.f_B10 = 0;
	Global_1C017E.f_ADC.f_1C = 0;
	Global_1C017E.f_ADC.f_1B = 0;
	Global_1C017E.f_C70 = 0;
}

void func_478(var uParam0)//Position - 0x21D26
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

void func_479(var uParam0)//Position - 0x21D7C
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = -1;
	uParam0->f_F6.f_2 = 0;
	func_87(&(uParam0->f_F6.f_3));
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

void func_480(var uParam0)//Position - 0x21E04
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

void func_481()//Position - 0x21ECE
{
	Global_4336.f_5 = 1;
}

void func_482(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x21EDC
{
	int iVar0;
	
	if (iParam1 < 11)
	{
		if (!func_247(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (unk_0x726D9204B160D23E() || unk_0x26641E1BFD792DBC()))
			{
				if (func_484(func_485(iParam2, 19), "", &(uParam0->f_25B), 19))
				{
				}
			}
		}
		if (!func_247(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_484(func_485(iParam2, 20), func_485(iParam2, 19), &(uParam0->f_25B), 20))
				{
				}
			}
		}
		else if (!func_247(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_484(func_485(iParam2, 21), func_485(iParam2, 20), &(uParam0->f_25B), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_484(func_485(iParam2, 21), func_485(iParam2, 20), &(uParam0->f_25B), 21))
				{
				}
			}
		}
		else if (!func_247(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_484(func_485(iParam2, 22), func_485(iParam2, 21), &(uParam0->f_25B), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_247(uParam0, 23))
		{
			func_483(func_485(iParam2, 22), &(uParam0->f_25B), 23);
		}
		else if (!func_247(uParam0, 23) && !unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x3CBEE6F229B647B3();
		}
	}
}

void func_483(char* sParam0, int iParam1, int iParam2)//Position - 0x2205A
{
	if (!unk_0xFA30DFD0084E92FE(*iParam1, iParam2))
	{
		unk_0xC1300D0F3A74E20B(sParam0);
		unk_0xF0059F27F7BB6680(iParam1, iParam2);
	}
}

int func_484(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x2207D
{
	if (!unk_0xF1734B55490E9045(sParam1))
	{
		if (unk_0x144E80F5C46A6B75(sParam1))
		{
			unk_0xC1300D0F3A74E20B(sParam1);
		}
	}
	if (!unk_0xFA30DFD0084E92FE(*iParam2, iParam3))
	{
		if (unk_0xD6423910AAD8A379(sParam0))
		{
			unk_0xF0059F27F7BB6680(iParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_485(int iParam0, int iParam1)//Position - 0x220CE
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_444(func_445(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && func_349(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 21:
			return "BASEJUMPS_SKYDIVE";
		
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_486(var uParam0, int iParam1)//Position - 0x2215E
{
	if (iParam1 < 11)
	{
		if (!func_247(uParam0, 15))
		{
			if (iParam1 >= 4 && (unk_0x726D9204B160D23E() || unk_0x26641E1BFD792DBC()))
			{
				if (func_488(func_489(11), &(uParam0->f_25B), 11))
				{
					func_487(func_489(15), &(uParam0->f_25B), 15);
				}
			}
		}
		else if (!func_247(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_488(func_489(12), &(uParam0->f_25B), 12))
				{
					func_487(func_489(16), &(uParam0->f_25B), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_488(func_489(12), &(uParam0->f_25B), 12))
				{
					func_487(func_489(16), &(uParam0->f_25B), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_247(uParam0, 17))
		{
			if (func_488(func_489(13), &(uParam0->f_25B), 13))
			{
				func_487(func_489(17), &(uParam0->f_25B), 17);
			}
		}
	}
}

int func_487(char* sParam0, int iParam1, int iParam2)//Position - 0x22264
{
	if (!unk_0xFA30DFD0084E92FE(*iParam1, iParam2))
	{
		if (unk_0x6FED2D1AA2EBF334(sParam0))
		{
			if (unk_0x3857DADBD6EC8A54(sParam0))
			{
				unk_0xF0059F27F7BB6680(iParam1, iParam2);
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

int func_488(char* sParam0, int iParam1, int iParam2)//Position - 0x222A5
{
	if (!unk_0xFA30DFD0084E92FE(*iParam1, iParam2))
	{
		if (unk_0x6FED2D1AA2EBF334(sParam0))
		{
			unk_0xF0059F27F7BB6680(iParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_489(int iParam0)//Position - 0x222D7
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		
		case 17:
		case 13:
			return "OJBJ_LANDED";
		
		case 18:
		case 14:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_490(var uParam0)//Position - 0x22335
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	unk_0x9601F9343A2063DE(0);
	unk_0x9601F9343A2063DE(2);
	func_497(&uVar1, &uVar2, &iVar3, &iVar4, unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()), unk_0x50465D2C022B9E04(2));
	Var0 = (SYSTEM::TO_FLOAT(iVar3) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar4) / -128f);
	func_494(uParam0, Var0, Var0.f_1);
	func_493(uParam0);
	if (unk_0x8FCEEB789599BD9B(2, 224))
	{
		func_492(uParam0, 0, 1);
	}
	if (unk_0x8FCEEB789599BD9B(0, 22) || unk_0xD3C4A010282C31F2(0, 22))
	{
		func_492(uParam0, 1, 1);
	}
	if (func_491())
	{
		func_492(uParam0, 2, 1);
	}
	if (unk_0xD3C4A010282C31F2(2, 22))
	{
		func_492(uParam0, 3, 1);
	}
	if (unk_0x8FCEEB789599BD9B(2, 216))
	{
		func_492(uParam0, 4, 1);
	}
	if (unk_0x8FCEEB789599BD9B(2, 215) || unk_0xD3C4A010282C31F2(2, 200))
	{
		func_492(uParam0, 5, 1);
	}
	if (unk_0x8FCEEB789599BD9B(2, 201))
	{
		func_492(uParam0, 6, 1);
	}
	if (unk_0x8FCEEB789599BD9B(2, 202))
	{
		func_492(uParam0, 7, 1);
	}
	if (unk_0x8FCEEB789599BD9B(2, 211))
	{
		func_492(uParam0, 8, 1);
	}
}

int func_491()//Position - 0x2244A
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

void func_492(var uParam0, int iParam1, bool bParam2)//Position - 0x2247C
{
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_2), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_2), iParam1);
	}
}

void func_493(var uParam0)//Position - 0x224A0
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_494(var uParam0, var uParam1, var uParam2)//Position - 0x224B5
{
	func_496(uParam0, uParam1);
	func_495(uParam0, uParam2);
}

void func_495(var uParam0, var uParam1)//Position - 0x224CD
{
	uParam0->f_1 = uParam1;
}

void func_496(var uParam0, var uParam1)//Position - 0x224DB
{
	*uParam0 = uParam1;
}

void func_497(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x224E8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = unk_0x5F9521C8EE73F79F(0, 218);
			fVar1 = unk_0x5F9521C8EE73F79F(0, 219);
			fVar2 = unk_0x5F9521C8EE73F79F(0, 220);
			fVar3 = unk_0x5F9521C8EE73F79F(0, 221);
		}
		else
		{
			fVar0 = unk_0xBCEB785249D7E5BE(0, 218);
			fVar1 = unk_0xBCEB785249D7E5BE(0, 219);
			fVar2 = unk_0xBCEB785249D7E5BE(0, 220);
			fVar3 = unk_0xBCEB785249D7E5BE(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = unk_0x4C25B6CE9D0B3C92(0, 218);
		fVar1 = unk_0x4C25B6CE9D0B3C92(0, 219);
		fVar2 = unk_0x4C25B6CE9D0B3C92(0, 220);
		fVar3 = unk_0x4C25B6CE9D0B3C92(0, 221);
	}
	else
	{
		fVar0 = unk_0xE56557A1B607909F(0, 218);
		fVar1 = unk_0xE56557A1B607909F(0, 219);
		fVar2 = unk_0xE56557A1B607909F(0, 220);
		fVar3 = unk_0xE56557A1B607909F(0, 221);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_498()//Position - 0x225D5
{
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 85, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 12, 1);
	unk_0xBBC4195AD74D153D(0, 13, 1);
	unk_0xBBC4195AD74D153D(0, 14, 1);
	unk_0xBBC4195AD74D153D(0, 15, 1);
	unk_0xBBC4195AD74D153D(0, 16, 1);
	unk_0xBBC4195AD74D153D(0, 17, 1);
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0xBBC4195AD74D153D(0, 24, 1);
	unk_0xBBC4195AD74D153D(0, 50, 1);
	unk_0xBBC4195AD74D153D(0, 53, 1);
	unk_0xBBC4195AD74D153D(0, 54, 1);
	unk_0x4E0EC60D119222B1(19);
	unk_0x4E0EC60D119222B1(2);
	unk_0x4E0EC60D119222B1(14);
	unk_0x4E0EC60D119222B1(16);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
}

var func_499()//Position - 0x22682
{
	var uVar0;
	
	func_509(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_508(&uVar0, unk_0x7E09057438B9D216());
	func_507(&uVar0, unk_0x6E06C0DB9B43570D());
	func_502(&uVar0, unk_0xBE14F159908E4EE5());
	func_501(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_500(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_500(var uParam0, int iParam1)//Position - 0x226C8
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

void func_501(var uParam0, int iParam1)//Position - 0x2274E
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_502(var uParam0, int iParam1)//Position - 0x22781
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_506(*uParam0);
	iVar1 = func_504(*uParam0);
	if (iParam1 < 1 || iParam1 > func_503(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_503(int iParam0, int iParam1)//Position - 0x227D2
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

var func_504(int iParam0)//Position - 0x22874
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_505(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_505(bool bParam0, int iParam1, int iParam2)//Position - 0x22899
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_506(var uParam0)//Position - 0x228B0
{
	return uParam0 & 15;
}

void func_507(var uParam0, int iParam1)//Position - 0x228BD
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_508(var uParam0, int iParam1)//Position - 0x228F7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_509(var uParam0, int iParam1)//Position - 0x22932
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_510(var uParam0)//Position - 0x2296E
{
	return uParam0->f_2;
}

void func_511(var uParam0, int iParam1)//Position - 0x2297A
{
	int iVar0;
	
	iVar0 = func_34(unk_0xBC25C936A095B5BA());
	switch (iParam1)
	{
		case 0:
			func_536(uParam0, 125);
			func_535(uParam0, joaat("squalo"));
			func_534(uParam0, 41.0737f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_525(uParam0, 317.8872f);
			func_524(uParam0, 0f, -2f, 0f);
			func_523(uParam0, "BJ_01P");
			func_521(uParam0, func_522(0));
			func_520(uParam0, func_455(0));
			func_519(uParam0, 53.4142f);
			func_518(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_517(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_516(uParam0, 39.6124f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_536(uParam0, 126);
			func_535(uParam0, 0);
			func_534(uParam0, 10.5f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_526(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_526(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_526(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_02P");
			func_521(uParam0, func_522(1));
			func_520(uParam0, func_455(1));
			func_519(uParam0, 52.5984f);
			func_518(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_517(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_516(uParam0, 41.3305f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_536(uParam0, 127);
			func_535(uParam0, 0);
			func_534(uParam0, 289.2623f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_526(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_526(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_526(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_526(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_03P");
			func_521(uParam0, func_522(2));
			func_520(uParam0, func_455(2));
			func_519(uParam0, 31.9702f);
			func_518(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_517(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_516(uParam0, 50.8804f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_536(uParam0, 128);
			func_535(uParam0, 0);
			func_534(uParam0, 60.1427f);
			func_533(uParam0, joaat("frogger"));
			func_532(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_531(uParam0, 119.8889f);
			func_530(uParam0, 5f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_526(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_526(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_526(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_526(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_04F");
			}
			else
			{
				func_523(uParam0, "BJ_04T");
			}
			func_521(uParam0, func_522(3));
			func_520(uParam0, func_455(3));
			func_519(uParam0, 44.3626f);
			func_518(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_517(uParam0, -5.0705f, 0f, 20.8267f);
			func_516(uParam0, 43.8549f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_536(uParam0, 129);
			func_535(uParam0, 0);
			func_534(uParam0, 1.8891f);
			func_533(uParam0, joaat("skylift"));
			func_532(uParam0, -75.3f, -823.9f, 329.2f);
			func_531(uParam0, 150f);
			func_530(uParam0, 4f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_05F");
			}
			else
			{
				func_523(uParam0, "BJ_05T");
			}
			func_521(uParam0, func_522(4));
			func_520(uParam0, func_455(4));
			func_519(uParam0, 26.7726f);
			func_518(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_517(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_516(uParam0, 30.0131f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_536(uParam0, 130);
			func_535(uParam0, joaat("hauler"));
			func_534(uParam0, 358.9586f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_525(uParam0, -18.6f);
			func_524(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_06F");
			}
			else
			{
				func_523(uParam0, "BJ_06T");
			}
			func_521(uParam0, func_522(5));
			func_520(uParam0, func_455(5));
			func_519(uParam0, 55.7667f);
			func_518(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_517(uParam0, -7.6574f, 0f, 0.8528f);
			func_516(uParam0, 60f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_536(uParam0, 131);
			func_535(uParam0, 0);
			func_534(uParam0, 164.6178f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("blazer"));
			func_528(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_527(uParam0, 87.84f);
			func_526(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_526(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_526(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_07F");
			}
			else
			{
				func_523(uParam0, "BJ_07T");
			}
			func_521(uParam0, func_522(6));
			func_520(uParam0, func_455(6));
			func_519(uParam0, 47.1789f);
			func_518(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_517(uParam0, -13.6409f, 0f, 172.0553f);
			func_516(uParam0, 47.1789f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_536(uParam0, 132);
			func_535(uParam0, joaat("freight"));
			func_534(uParam0, 112.6f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_525(uParam0, 10.8894f);
			func_524(uParam0, 0f, -20f, 4f);
			func_523(uParam0, "BJ_08P");
			func_521(uParam0, func_522(7));
			func_520(uParam0, func_455(7));
			func_519(uParam0, 24.3623f);
			func_518(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_517(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_516(uParam0, 37.0424f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_536(uParam0, 133);
			func_535(uParam0, 0);
			func_534(uParam0, 104.207f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_09F");
			}
			else
			{
				func_523(uParam0, "BJ_09T");
			}
			func_521(uParam0, func_522(8));
			func_520(uParam0, func_455(8));
			func_519(uParam0, 50f);
			func_518(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_517(uParam0, -19.7458f, 0f, 116.6405f);
			func_516(uParam0, 55.2882f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_536(uParam0, 134);
			func_535(uParam0, 0);
			func_534(uParam0, 329.4791f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("blazer"));
			func_528(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_527(uParam0, -89.36f);
			func_526(uParam0, 0, -1200f, 3616f, 964f);
			func_526(uParam0, 1, -1240f, 3307f, 854f);
			func_526(uParam0, 2, -1552f, 3456f, 655f);
			func_526(uParam0, 3, -1616f, 3808f, 505f);
			func_526(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_526(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_526(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_526(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_10P");
			func_521(uParam0, func_522(9));
			func_520(uParam0, func_455(9));
			func_519(uParam0, 31.7648f);
			func_518(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_517(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_516(uParam0, 39.6786f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_536(uParam0, 135);
			func_535(uParam0, 0);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f);
			func_526(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_526(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_526(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_526(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_526(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_526(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_526(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_526(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_526(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_526(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_11P");
			func_521(uParam0, func_522(10));
			func_520(uParam0, func_455(10));
			func_519(uParam0, 27.2187f);
			func_518(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_517(uParam0, -54.7868f, 0f, -90.128f);
			func_516(uParam0, 35.5634f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_536(uParam0, 136);
			func_535(uParam0, 0);
			func_534(uParam0, 24.92f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("sanchez"));
			func_528(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_527(uParam0, 130.39f);
			func_526(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_526(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_526(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_526(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_526(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_526(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_526(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_526(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_526(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_526(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_526(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			func_523(uParam0, "BJ_12P");
			func_521(uParam0, func_522(11));
			func_520(uParam0, func_455(11));
			func_519(uParam0, 18.9374f);
			func_518(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_517(uParam0, -54.5827f, 0f, -2.0463f);
			func_516(uParam0, 56.4495f);
			func_515(uParam0, 0);
			func_514(uParam0, 0);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_536(uParam0, 137);
			func_535(uParam0, 0);
			func_534(uParam0, 359.2885f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0f);
			func_529(uParam0, joaat("sanchez"));
			func_528(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_527(uParam0, 104.35f);
			func_526(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_526(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_525(uParam0, 0f);
			func_524(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_523(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_523(uParam0, "BJ_13F");
			}
			else
			{
				func_523(uParam0, "BJ_13T");
			}
			func_521(uParam0, func_522(12));
			func_520(uParam0, func_455(12));
			func_519(uParam0, 48.3921f);
			func_518(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_517(uParam0, -18.0357f, 0f, 6.0212f);
			func_516(uParam0, 48.3921f);
			func_515(uParam0, 0);
			func_514(uParam0, 1);
			func_513(uParam0, 0f, 0f, 0f);
			func_512(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_512(var uParam0, vector3 vParam1)//Position - 0x23B54
{
	uParam0->f_43 = { vParam1 };
}

void func_513(var uParam0, vector3 vParam1)//Position - 0x23B66
{
	uParam0->f_40 = { vParam1 };
}

void func_514(var uParam0, int iParam1)//Position - 0x23B78
{
	uParam0->f_54 = iParam1;
}

void func_515(var uParam0, int iParam1)//Position - 0x23B86
{
	uParam0->f_53 = iParam1;
}

void func_516(var uParam0, float fParam1)//Position - 0x23B94
{
	uParam0->f_52 = fParam1;
}

void func_517(var uParam0, vector3 vParam1)//Position - 0x23BA2
{
	uParam0->f_3A = { vParam1 };
}

void func_518(var uParam0, vector3 vParam1)//Position - 0x23BB4
{
	uParam0->f_37 = { vParam1 };
}

void func_519(var uParam0, float fParam1)//Position - 0x23BC6
{
	uParam0->f_51 = fParam1;
}

void func_520(var uParam0, vector3 vParam1)//Position - 0x23BD4
{
	uParam0->f_34 = { vParam1 };
}

void func_521(var uParam0, vector3 vParam1)//Position - 0x23BE6
{
	uParam0->f_31 = { vParam1 };
}

Vector3 func_522(int iParam0)//Position - 0x23BF8
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_523(var uParam0, char* sParam1)//Position - 0x23D42
{
	uParam0->f_4 = sParam1;
}

void func_524(var uParam0, vector3 vParam1)//Position - 0x23D50
{
	uParam0->f_6 = { vParam1 };
}

void func_525(var uParam0, float fParam1)//Position - 0x23D62
{
	uParam0->f_4D = fParam1;
}

void func_526(var uParam0, int iParam1, vector3 vParam2)//Position - 0x23D70
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_C[iParam1 /*3*/] = { vParam2 };
}

void func_527(var uParam0, float fParam1)//Position - 0x23D9B
{
	uParam0->f_4F = fParam1;
}

void func_528(var uParam0, vector3 vParam1)//Position - 0x23DA9
{
	uParam0->f_9 = { vParam1 };
}

void func_529(var uParam0, int iParam1)//Position - 0x23DBB
{
	uParam0->f_3 = iParam1;
}

void func_530(var uParam0, float fParam1)//Position - 0x23DC9
{
	uParam0->f_50 = fParam1;
}

void func_531(var uParam0, float fParam1)//Position - 0x23DD7
{
	uParam0->f_4E = fParam1;
}

void func_532(var uParam0, vector3 vParam1)//Position - 0x23DE5
{
	uParam0->f_46 = { vParam1 };
}

void func_533(var uParam0, int iParam1)//Position - 0x23DF7
{
	uParam0->f_2 = iParam1;
}

void func_534(var uParam0, float fParam1)//Position - 0x23E05
{
	uParam0->f_4C = fParam1;
}

void func_535(var uParam0, int iParam1)//Position - 0x23E13
{
	uParam0->f_1 = iParam1;
}

void func_536(var uParam0, int iParam1)//Position - 0x23E21
{
	*uParam0 = iParam1;
}

void func_537(int iParam0, bool bParam1)//Position - 0x23E2E
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

void func_538(int iParam0)//Position - 0x23E50
{
	func_366();
	Global_11641 = iParam0;
	Global_11640 = 0;
	Global_11643 = 3;
}

void func_539(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)//Position - 0x23E6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_360();
	func_359();
	func_475();
	func_545(uParam1);
	func_537(23, 0);
	func_544(*uParam1);
	unk_0x1428FF0F1ECE8FA7(*uParam16);
	unk_0x748798F6C2AB96B7("OJBJ_START");
	unk_0x748798F6C2AB96B7("OJBJ_JUMPED");
	unk_0x748798F6C2AB96B7("OJBJ_LANDED");
	unk_0x3857DADBD6EC8A54("OJBJ_STOP");
	unk_0xC1300D0F3A74E20B("BASEJUMPS_OPEN_PARACHUTE");
	unk_0xC1300D0F3A74E20B("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	unk_0xC1300D0F3A74E20B("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	unk_0xC1300D0F3A74E20B("BASEJUMPS_SKYDIVE");
	unk_0xC1300D0F3A74E20B("BASEJUMPS_OPEN_PARACHUTE");
	unk_0x3CBEE6F229B647B3();
	uParam11 = uParam11;
	Global_15925 = 0;
	Global_15926 = 0;
	Global_15927 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	unk_0x4101DC5C065D2EB5(1);
	unk_0x720260ACC9BD334E(0);
	unk_0xE44AD04338101C64(0);
	while (unk_0x422F9EDE839E6ABB())
	{
		SYSTEM::WAIT(0);
	}
	if (unk_0x6CACA595557C5755())
	{
		unk_0x01EB6657F2BCE9D3(1);
	}
	if (unk_0x2DA8CA50A72528FB(iParam13))
	{
		unk_0x07B8ECB35A4ED3AC(&iParam13);
	}
	if (unk_0x2DA8CA50A72528FB(iParam14))
	{
		unk_0x07B8ECB35A4ED3AC(&iParam14);
	}
	func_366();
	func_26(0);
	unk_0x4C99B7E39FB088F0(unk_0xB5CEFD608600A09F(), false);
	func_543(1, 1);
	if (func_410(func_436(uParam0)))
	{
	}
	else
	{
		unk_0xF437E11BAB5814AF();
	}
	unk_0xB830DBD32591E1BC();
	func_541(uParam7);
	func_267();
	unk_0xCF9877018AE2E3BB(0f, 0, 21);
	unk_0xDF089F4E40A431F9(0);
	func_206(0, 0);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (iParam15 == 5)
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 146, false);
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, 0);
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 36, false);
		unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 0);
		unk_0x8A8475988CA32D80(unk_0xBC25C936A095B5BA(), 0);
		if (!bParam17)
		{
			unk_0x133D1B11D62F99C0(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"));
		}
		unk_0x4A506C72BFC368E4(unk_0xBC25C936A095B5BA(), 1f);
		unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (unk_0x724D816EA203A79E((*uParam10)[iVar1]) && !unk_0x1D403DFADBC2DE3C((*uParam10)[iVar1], 0))
		{
			unk_0xA4E856A8CD53B8DF((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((unk_0x724D816EA203A79E(*iParam6) && *iParam6 != unk_0x3E12B546F3F2597A()) && !unk_0x1D403DFADBC2DE3C(*iParam6, 0))
	{
		unk_0xE5CDD8C2A7508295(*iParam6);
		func_270(*iParam6, func_309(iParam15), func_308(iParam15), 24, 0);
	}
	if (!unk_0x36CEFBE9B745A58D(*iParam8))
	{
		if (!unk_0xD1DC4B08247A4317(*iParam8))
		{
			unk_0xF845620A03C7425B(iParam8);
		}
		else
		{
			unk_0x02537C8C1BEEB477(iParam8);
		}
	}
	if (!unk_0x36CEFBE9B745A58D(*uParam9))
	{
		unk_0xA4E856A8CD53B8DF(*uParam9);
		unk_0x2E35C4FA5F0ED22F(*uParam9, 1);
	}
	if (unk_0x724D816EA203A79E(*iParam2))
	{
		if (func_444(func_445(iParam15)))
		{
			if ((!unk_0x1D403DFADBC2DE3C(*iParam2, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam2, 0))
			{
				unk_0x5AA1A8C2DAD4FF6F(unk_0xBC25C936A095B5BA(), 1);
			}
			if (!unk_0xD1DC4B08247A4317(*iParam2))
			{
				unk_0xCF6040807CC0E4A5(iParam2);
			}
			else
			{
				unk_0x1E7A09C1710FB071(iParam2);
			}
		}
		else
		{
			unk_0x1E7A09C1710FB071(iParam2);
		}
	}
	if (unk_0x724D816EA203A79E(*uParam3))
	{
		if (func_351(func_352(uParam0)))
		{
			unk_0x9836D9AF1ECBDFC0(uParam3, 0);
			unk_0xED48729ADA05C6DE(1);
		}
	}
	if (unk_0x724D816EA203A79E(*iParam4) && !unk_0x1D403DFADBC2DE3C(*iParam4, 0))
	{
		iVar0 = unk_0x3187EF5798B5D209(*iParam4, -1, 0);
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0xF845620A03C7425B(&iVar0);
		}
		unk_0xCF6040807CC0E4A5(iParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (unk_0x724D816EA203A79E((*uParam5)[iVar2]) && !unk_0x1D403DFADBC2DE3C((*uParam5)[iVar2], 0))
		{
			unk_0xB34BE463F164799F((*uParam5)[iVar2], 1f);
			unk_0xB71D41C0310C93DE((*uParam5)[iVar2], 0, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	unk_0x7456702622C62EA0(1);
	unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	unk_0x6C23D8FD3FB29BAA(1);
	func_540();
	unk_0xC4248B71D9B26306(false);
	Global_19B04.f_49FA = -1;
	unk_0x95E4B6F3ED223F5A();
}

void func_540()//Position - 0x24235
{
	Global_4336.f_5 = 0;
}

void func_541(var uParam0)//Position - 0x24243
{
	func_542(uParam0, 0);
	func_542(uParam0, 1);
	func_542(uParam0, 2);
}

void func_542(var uParam0, int iParam1)//Position - 0x24260
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_543(int iParam0, bool bParam1)//Position - 0x2427D
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

void func_544(var uParam0)//Position - 0x242B4
{
	unk_0xB0B0FE33F4F22679(&uParam0);
}

void func_545(var uParam0)//Position - 0x242C2
{
	func_544(*uParam0);
}

