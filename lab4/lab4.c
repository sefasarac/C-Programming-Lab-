#include <stdio.h>
// https://github.com/sefasarac
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        if ((int)c == 32)
        {
            continue;
        }
        else if ((int)c == 97 || (int)c == 101 || (int)c == 105 || (int)c == 111 || (int)c == 117)
        {
            c = c - 32;
        }
        else if (((int)c >= 66 && (int)c <= 68) || ((int)c >= 70 && (int)c <= 72) || ((int)c >= 74 && (int)c <= 78) || ((int)c >= 80 && (int)c <= 84) || ((int)c >= 86 && (int)c <= 90))
        {
            c = c + 32;
        }
        else if (((int)c >= 48 && (int)c <= 57))
        {
            continue;
        }

        printf("%c", c);
    }
    return 0;
}
