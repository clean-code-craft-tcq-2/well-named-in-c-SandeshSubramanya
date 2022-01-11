#ifndef REFERENCEMANUAL_H
#define REFERENCEMANUAL_H

#include <stdio.h>
#include <assert.h>
#include "declarations.h"

void vDisplayColorCodingMapping()
{
	printf("**********Reference Manual**********");
	printf("MajorColor,MinorColor :: MajorColorCode, MinorColorCode\n");
	for (int indexMajorColor = 0; indexMajorColor < numberOfMajorColors; ++indexMajorColor)
	{
		for (int indexMinorColor = 0; indexMinorColor < numberOfMinorColors; ++indexMinorColor)
		{
			printf("%s,%s :: %d,%d \n", MajorColorNames[indexMajorColor],MinorColorNames[indexMinorColor],indexMajorColor + 1, indexMinorColor + 1);
		}
		
		printf("\n\n");
	}
}

#endif	//REFERENCEMANUAL_H