set -e
# -E == preprocess only
# -P == dont show #line's
gcc -std=c99 -E -P fizz_buzz.tests.h

echo All tests passed