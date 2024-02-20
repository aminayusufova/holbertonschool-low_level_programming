#include <stdio.h>

/**
  * main - prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n, i, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (n < i && i < k)
				{
					putchar(n);
					putchar(i);
					putchar(k);

					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
