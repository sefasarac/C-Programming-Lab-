#include <stdio.h>
#include <string.h>
// https://github.com/sefasarac
int main()
{

	char name[100];
	scanf("%s", &name);

	int i, c = 0;
	scanf("%d", &i);
	while (i != -1)
	{
		int z = 0;
		for (z = i; z < strlen(name); z++)
		{
			name[z] = name[z + 1];
		}
		scanf("%d", &i);
	}
	int x = 0;
	for (x = 0; x < strlen(name); x++)
	{
		if (name[x] != '0' && name[x] != '\0')
		{
			printf("%c", name[x]);
		}
	}
	return 0;
}
