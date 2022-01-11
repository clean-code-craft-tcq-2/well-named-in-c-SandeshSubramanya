#include <stdio.h>
#include <assert.h>
#include "numberToPair.h"
#include "pairToNumber.h"
#include "referenceManual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

	// display reference manual
	vDisplayColorCodingMapping();
	
    return 0;
}
