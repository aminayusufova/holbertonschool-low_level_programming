#include <stdio.h>

/**
  * main - prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n, i, k, j;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (n + i) &&  k >= n) || n < k)
					{
						putchar(n);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (n + i + k + j == 227 && n == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

