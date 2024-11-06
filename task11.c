#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, c; 
		
	scanf ("%d%d%d", &a, &b, &c);
	
	if ((a + b) > c && (b + c) > a && (a + c) > b)
		{
			printf ("YES\n");
		}
	else 
		{
			printf ("NO\n");
		}
			
	return 0;
}

