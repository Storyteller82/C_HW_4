#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, c;
	
	scanf ("%d%d%d", &a, &b, &c);
	
	if (a > b) 
		{
			if (a > c)
				{
					printf ("%d\n", a);
				}
			else
				{
					printf ("%d\n", c);
				}
		}
	else
		{
			if (b > c)
				{
					printf ("%d\n", b);
				}
			else
				{
					printf ("%d\n", c);
				}
		}
				
	return 0;
}

