#include <stdio.h>

int isPrime(int x);
int sumOfDigits(int a);
// https://github.com/sefasarac
int main()
{
	int x, counter = 0;
	while (scanf("%d", &x) != EOF)
	{
		counter++;

		if (isPrime(x) == 1)
		{
			printf("%d ", sumOfDigits(x));
		}
	}
	printf("%d", counter);
	/*int a=9/10;
	printf("%d",a);*/
}

int isPrime(int x)
{
	int i, flag = 0;
	if (x < 1)
	{
		return 0;
	}
	if (x == 1)
	{
		return 0;
	}
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int sumOfDigits(int a)
{
	if (a >= 0 && a < 10)
	{
		return a;
	}
	int sum = 0;
	while (a != 0)
	{
		sum += a % 10;
		// 115/10 =11 11/10 1/10 0
		a = a / 10;
	}
	return sum;
}
