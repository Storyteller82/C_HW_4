#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, c, d, max;
	
	scanf ("%d", &a);
	
	b = a%10;
	c = (a/10)%10;
	d = (a/100)%10;
	
	max = b > c ? b : c;
	max = max > d ? max : d;
		
	printf ("%d\n", max);
	
	return 0;
}

