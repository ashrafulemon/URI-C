#include <stdio.h>
#include <string.h>

#define XY 101

int bb[XY][XY];
int ee[XY][XY];

int aaaaa(int c, int d);
int bbbbb(int a, int b);

int main ()
{
	unsigned short i, j;
	unsigned short n;
	scanf("%hu", &n);
	for (i = 1; i <= n; ++i)
		for (j = 1; j <= n; ++j)
			scanf("%d", &bb[i][j]);

	memset(ee, -1, sizeof(ee));
	printf("%d\n", aaaaa(n, 1));

	return 0;
}

int aaaaa(int c, int d)
{

	int ff = 0;
	unsigned short i;


	if (ee[c][d] != -1)
		return ee[c][d];

	if (c == 1)
		return ee[c][d] = bb[c][d];


	for (i = 0; i < c; ++i)
		ff += bb[c][d + i];

	return ee[c][d] = ff + bbbbb(aaaaa(c - 1, d), aaaaa(c - 1, d + 1));

}

int bbbbb(int a, int b)
{

	if (a < b)
		return a;
	else
		return b;

}
