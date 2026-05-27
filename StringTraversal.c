#include<stdio.h>

int main()
{
    char Str[] = "Ganesh";
    char *ptr = NULL;

    ptr = Str;

    while(*ptr != '\0')
    {
        printf("%s\n",ptr);
        ptr++;
    }

    return 0;
}