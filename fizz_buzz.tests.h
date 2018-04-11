#include "fizz_buzz.h"

#define ASSERT(e,a)   ASSERT_(e,a)
#define ASSERT_(e,a)  STR(ASSERT_ ## e ## _ ## a)

#include ASSERT(FIZZ_BUZZ_1_EQUALS, FIZZ_BUZZ(1))
#include ASSERT(FIZZ_BUZZ_3_EQUALS, FIZZ_BUZZ(3))
#include ASSERT(FIZZ_BUZZ_5_EQUALS, FIZZ_BUZZ(5))
#include ASSERT(FIZZ_BUZZ_15_EQUALS, FIZZ_BUZZ(15))
