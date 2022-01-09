#include <stdio.h>
#include <assert.h>
#include "declarations.h"
#include "test_NumberToPair.c"
#include "test_PairToNumber.c"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
