#ifndef REFERENCEMANUAL_H
#define REFERENCEMANUAL_H

#include <stdio.h>
#include <assert.h>
#include "declarations.h"

void vDisplayColorCodingMapping()
{
	printf("\n\t\t**********Reference Manual**********\n");
	printf("\nMajorColor\tMinorColor \t:: \tMajorColorCode \tMinorColorCode\n");
	for (int indexMajorColor = 0; indexMajorColor < numberOfMajorColors; ++indexMajorColor)
	{
		for (int indexMinorColor = 0; indexMinorColor < numberOfMinorColors; ++indexMinorColor)
		{
			printf("%s \t\t%s \t\t:: \t%d \t%d \n", MajorColorNames[indexMajorColor],MinorColorNames[indexMinorColor],indexMajorColor + 1, indexMinorColor + 1);
		}
		
		printf("\n\n");
	}
}

#endif	//REFERENCEMANUAL_H
