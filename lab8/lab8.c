#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void low(char *myString)
{
	int x;
	for (x = 0; x < strlen(myString); x++)
	{
		myString[x] = tolower(myString[x]);
	}
}
// https://github.com/sefasarac
int main()
{

	char patientNames[MAX][15]; //[0][8] [1][4]
	char bcts[MAX][4];
	int i;
	for (i = 0; i < MAX; i++)
	{
		scanf("%s", patientNames[i]);
		low(patientNames[i]);
		if (patientNames[i][0] == 's' &&
			patientNames[i][1] == 't' &&
			patientNames[i][2] == 'a' &&
			patientNames[i][3] == 'r' &&
			patientNames[i][4] == 't')
		{
			break;
		}
		scanf("%s", bcts[i]);
	}
	int j = 0;
	char istenenKisi[15];
	char yazdirilacakKisi[MAX][15];
	char yazdirilacakKan[MAX][4];
	int varMi = 0;
	for (j = 0; j < MAX; j++)
	{
		scanf("%s", &istenenKisi);
		low(istenenKisi);
		strcpy(yazdirilacakKisi[j], istenenKisi);
		// yazdirilacakKisi[j]=istenenKisi;
		int a;
		for (a = 0; a < i; a++)
		{
			if (strcmp(istenenKisi, patientNames[a]) == 0)
			{
				strcpy(yazdirilacakKan[j], bcts[a]);
				varMi = 1;
			}
		}
		if (varMi == 0)
		{
			strcpy(yazdirilacakKan[j], "0+");
		}
		varMi = 0;
		if (strcmp(istenenKisi, "end") == 0)
		{
			break;
		}
	}
	int b;
	for (b = 0; b < j; b++)
	{
		printf("%s %s\n", yazdirilacakKisi[b], yazdirilacakKan[b]);
	}

	return 0;
}