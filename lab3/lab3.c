#include <stdio.h>
// https://github.com/sefasarac
int main()
{
	int counter = 0;
	int dizimiz[100];
	while (scanf("%d", &dizimiz[counter]) != EOF)
	{
		counter++;
	}
	int i = 0;
	int bolen = counter;
	printf("%d ", counter);
	float sum, avarage;
	for (i = 0; i <= counter; i++)
	{
		if (dizimiz[i] % 5 == 0 || dizimiz[i] % 3 == 0)
		{
			bolen--;
			continue;
		}
		else
		{
			sum += dizimiz[i] * dizimiz[i];
		}
	}
	bolen++;
	avarage = sum / bolen;
	printf("%.2f", avarage);

	return 0;
}