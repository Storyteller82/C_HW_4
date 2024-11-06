#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t x1, y1, x2, y2; 
	float k, b;
	
	scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
	
	k =  ((float)y2 - (float)y1) / ((float)x2 - (float)x1);
	b =  (float)y1 - (k * (float)x1);
	
	printf ("%.2f %.2f\n", k, b);
	
	return 0;
}

