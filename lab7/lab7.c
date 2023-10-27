#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// https://github.com/sefasarac
int main()
{

	char dictionary[20][20][20];

	char word[20];
	int j = 1;
	while (scanf("%s", word) != EOF)
	{
		if (word != "END" && j == 1)
		{
			strcpy(dictionary[0][0], word);
			scanf("%s", dictionary[0][1]);
		}
		if (j == 1)
		{
			for (j = 1; j < 20; j++)
			{
				scanf("%s", dictionary[j][0]);

				if (dictionary[j][0][0] == 'E' && dictionary[j][0][1] == 'N' && dictionary[j][0][2] == 'D')
				{
					break;
				}
				scanf("%s", dictionary[j][1]);
			}
			continue;
		}
		for (int l = 0; l < 20; l++)
		{
			if (strcmp(dictionary[l][0], word) == 0)
			{
				printf("%s %s\n", dictionary[l][0], dictionary[l][1]);
			}
		}
	}

	return 0;
}