#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// https://github.com/sefasarac

void makeSmall(char *name)
{
	for (int i = 0; i < 30; i++)
	{
		if (name[i] >= 65 && name[i] <= 90)
		{
			name[i] += 32;
		}
	}
}

int main()
{
	int N = 0;
	scanf("%d", &N);
	int i, j;
	/*char **orderedIds;

orderedIds = malloc(variableNumberOfElements * sizeof(char*));*/
	char **names = malloc(sizeof(char *) * N);
	int counter = 0;

	while (counter < N)
	{ // 0<2 1<2 2!?2
		scanf("%s", &names[counter]);
		makeSmall(&names[counter]);
		counter++;
	}

	// sirala
	for (int k = 0; k < N; k++)
	{
		for (int m = k + 1; m < N; m++)
		{
			if (strcmp(&names[k], &names[m]) < 0)
			{
				char temp[30] = "";
				strcpy(temp, &names[k]);
				strcpy(&names[k], &names[m]);
				strcpy(&names[m], temp);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%s\n", &names[i]);
	}
	return 0;
}