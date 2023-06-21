#include "main.h"

void positive_or_negative(int n)
{
	if (n > 0)
    {
	    printf("%d is %s\n", n, "positive");
    }
	else if (n < 0)
    {
	    printf("%d is %s\n", n, "negative");
    }
	else
    {
	    printf("%d is %s\n", n, "zero");
    }

}
