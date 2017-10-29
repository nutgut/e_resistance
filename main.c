#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "e_resistance.h"

void main ()
{
	float result[3];
	float orig=1398;
	int r=e_resistance(orig, result);
	
	for (int i=0; i<3;i++)
	{
		printf("%.0f\n", result[i]);
	}
	printf("%d", r);
}
