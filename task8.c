#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, c; 
		
	scanf ("%d%d%d", &a, &b, &c);
	
	if (a < b)
		{
			if (b < c)
				{
					printf ("YES\n");
				}
			else
				{
					printf ("NO\n");
				}
		}
	else 
		{
			printf ("NO\n");
		}
		
	return 0;
}

