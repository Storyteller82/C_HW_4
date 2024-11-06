#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a; 
		
	scanf ("%d", &a);
	
	if (a >= 3 && a <=5)
		{
			printf ("spring\n");
		}
	else if (a >=6 && a <= 8)
				{
					printf ("summer\n");
				}
		 else if (a >= 9 && a <=11)
					{
						printf ("autumn\n");
					}
			  else if (a == 12 || a <=2)
						{
							printf ("winter\n");
						}
			
	return 0;
}

