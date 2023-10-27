#include <stdio.h>
int main()
{

	float g = 10.0;
	float velocity;

	scanf("%f", &velocity);
	float t = (velocity) / g;
	float height = (g * t * t) / 2;

	printf("%.2f m", height);
	return 0;
} // https://github.com/sefasarac