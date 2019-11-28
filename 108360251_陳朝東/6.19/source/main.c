#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void number(int d);
void record(int po1, int po2);
int size[6][6] = { 0 };

int main(void)
{
	srand(time(0));
	number(36000);

	printf("\t%d\t%d\t%d\t%d\t%d\t%d\n", 1, 2, 3, 4, 5, 6);
	for (int j = 1; j <= 6; j++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", j, size[j - 1][0], size[j - 1][1], size[j - 1][2], size[j - 1][3], size[j - 1][4], size[j - 1][5]);
	}

	system("pause");
	return 0;
}

void number(int d)
{
	int x, y, i;
	for (i = 0; i < d; i++)
	{
		x = rand() % 6;
		y = rand() % 6;
		record(x, y);
	}
}
void record(int po1, int po2)
{
	size[po1][po2]++;
}