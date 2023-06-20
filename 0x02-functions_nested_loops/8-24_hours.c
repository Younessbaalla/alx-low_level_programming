#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			printf("%02d:%02d\n", h, min);
		}
	}
}
