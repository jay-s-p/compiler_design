#include <stdio.h>

void main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);
    // if((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z') || str[0]=='_')
    if ((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122) || str[0] == 95)
        printf("Valid identifier\n");
    else
        printf("Invalid identifier\n");
}