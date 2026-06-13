#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("%d\n", (int)ch); // char to ASCII

    int num = 97;

    printf("%c\n", (char)num-32); // ASCII to char

    return 0;
}