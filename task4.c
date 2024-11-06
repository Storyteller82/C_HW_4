#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, c, d, e, min;
	
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	min = a < b ? a : b;
	min = min < c ? min : c;
	min = min < d ? min : d;
	min = min < e ? min : e;
	
	printf ("%d\n", min);
	
	return 0;
}

