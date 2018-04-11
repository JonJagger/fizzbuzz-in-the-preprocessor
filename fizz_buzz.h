#ifndef FIZZ_BUZZ_INCLUDED
#define FIZZ_BUZZ_INCLUDED

#include "pp_lib.h"
#include "cycle3.h"
#include "cycle5.h"

#define FIZZ_BUZZ(n) \
  FIZZ_BUZZ_ \
  ( \
    n, \
    NTH_ARG(n, EVAL(REPEAT(100,CYCLE3,0))), \
    NTH_ARG(n, EVAL(REPEAT(100,CYCLE5,0))) \
  )

#define FIZZ_BUZZ_(n,f,b)          FIZZ_BUZZ_PRIMITIVE(n,f,b)
#define FIZZ_BUZZ_PRIMITIVE(n,f,b) FIZZ_BUZZ_ ## f ## _ ## b (n)

#define FIZZ_BUZZ_1_1(n) n
#define FIZZ_BUZZ_1_2(n) n
#define FIZZ_BUZZ_1_3(n) n
#define FIZZ_BUZZ_1_4(n) n
#define FIZZ_BUZZ_1_5(_) Buzz

#define FIZZ_BUZZ_2_1(n) n
#define FIZZ_BUZZ_2_2(n) n
#define FIZZ_BUZZ_2_3(n) n
#define FIZZ_BUZZ_2_4(n) n
#define FIZZ_BUZZ_2_5(_) Buzz

#define FIZZ_BUZZ_3_1(_) Fizz
#define FIZZ_BUZZ_3_2(_) Fizz
#define FIZZ_BUZZ_3_3(_) Fizz
#define FIZZ_BUZZ_3_4(_) Fizz
#define FIZZ_BUZZ_3_5(_) FizzBuzz

#endif
