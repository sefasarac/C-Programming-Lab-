#include <stdio.h>
// x maximum , m minimum , s sum , a average (float %.2f)
// https://github.com/sefasarac
int main()
{
	int a, b, c;
	char ch;
	scanf("%d %d %d %c", &a, &b, &c, &ch);
	if (ch == 'x')
	{
		if (a > b && a > c)
		{
			printf("%d", a);
		}
		else if (b > c)
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}
	}
	if (ch == 'm')
	{
		if (a < b && a < c)
		{
			printf("%d", a);
		}
		else if (b < c)
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}
	}

	if (ch == 's')
	{
		printf("%d", a + b + c);
	}
	if (ch == 'a')
	{
		float bolme = (a + b + c) / 3.0;
		printf("%.2f", bolme);
	}
	return 0;
}
// https://github.com/sefasarac