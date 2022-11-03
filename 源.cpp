#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,c;
	int i;
	scanf("%d %d %d", &a, &b,&c);
	if (a > b && a > c)
	{
		i = 1;
	}	
	if (c > b && c > a)
	{
		i = 2;
	}	
	if (b > a && b > c)
	{
		i = 3;
	}

	switch (i)
	{
	case 1:
		if (b > c)
			printf("%d %d %d\n", c, b, a);
		else
			printf("%d %d %d\n", b, c, a);
			break;
	case 2:
		if (b > a)
			printf("%d %d %d\n", a, b, c);
		else
			printf("%d %d %d\n", b, a, c);
			break;
	case 3:
		if (a > c)
			printf("%d %d %d\n", c, a ,b);
		else
			printf("%d %d %d\n", a, c, b);
		break;

	}

}