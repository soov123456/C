#include <stdio.h>

int main(void)
{
	int ar[] = { 50, 64, 39, 66, 93, 79, 0, 100 };
	char br[10][8];
	int cr[] = { 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 };

	
	for (int i = 0; i < sizeof(cr) / sizeof(int); i++)
	{
		for (int j = 0; j < sizeof(ar) / sizeof(int); j++)
		{
			if (ar[j] >= cr[i])
				printf("0");
			else
				printf("*");
		}
		printf("\n");
	}

}