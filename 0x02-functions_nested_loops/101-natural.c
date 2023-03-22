#include <stdio.h>
/**
 *main - main function
 *
 *Return: always 0
 */
int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3) == 0 || (y % 5 == 0))
		{
		y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);

}
