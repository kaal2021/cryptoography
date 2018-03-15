#include<stdio.h>

int main()
{
        int z,y;
        int dwiescie, sto, piecdziesiat, dwadziescia, dziesiec, piec, dwa, jeden, gr50, gr20, gr10, gr5, gr2, gr1;

        printf("Podaj liczbe zlotych:\n");
        scanf("%d", &z);
	printf("Podaj liczbe groszy:\n");
	scanf("%d", &y);
       while(z>=200)
	{
		dwiescie++;
		z = z - 200;
	}
	while(z>=100)
	{
		sto++;
		z = z - 100;
	}
	while(z>=50)
	{
		piecdziesiat++;
		z = z - 50;
	}
	while(z>=20)
	{
		dwadziescia++;
		z = z - 20;
	}
	while(z>=10)
	{
		dziesiec++;
		z = z - 10;
	}
	while(z>=5)
	{
		piec++;
		z = z - 5;
	}
	while(z>=2)
	{
		dwa++;
		z = z - 2;
	}
	while(z>=1)
	{
		jeden++;
		z = z - 1;
	}
	while(y>=50)
	{
		gr50++;
		y = y - 50;
	}

	while(y>=20)
	{
		gr20++;
		y = y - 20;
	}
	while(y>=10)
	{
		gr10++;
		y = y - 10;
	}
	while(y>=5)
	{
		gr5++;
		y = y - 5;
	}
	while(y>=2)
	{
		gr2++;
		y = y - 2;
	}
	while(y>=1)
	{
		gr1++;
		y = y - 1;
	}
printf(" \n banknoty:\n %i x 200 zl, \n %i x 100 zl, \n %i x 50 zl, \n %i x 20 zl, \n %i x 10 zl, \n %i x 5 zl, \n %i x 2 zl, \n %i x 1 zl", dwiescie, sto, piecdziesiat, dwadziescia, dziesiec, piec, dwa, jeden);
	return 0;
}










