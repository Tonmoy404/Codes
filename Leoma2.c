#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[30];
    int i;
    printf("Enter String : ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if( (i % 2) != 0)
            str[i] = tolower(str[i]);
        else
            str[i] = toupper(str[i]);
    }
    printf("\n%s", str);
    return 0;
}
