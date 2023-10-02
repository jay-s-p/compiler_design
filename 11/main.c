#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char grammar[20][20], c;
    int i, n, j = 2, flag = 0;

    printf("Enter the no of productions: ");
    scanf("%d", &n);

    printf("Enter the productions: \n");
    for (i = 0; i < n; i++)
        scanf("%s", grammar[i]);

    for (i = 0; i < n; i++)
    {
        c = grammar[i][2];

        while (c != '\0')
        {
            if (grammar[i][3] == '+' || grammar[i][3] == '-' || grammar[i][3] == '*' || grammar[i][3] == '/')
                flag = 1;
            else
                flag = 0;

            if (c == '$')
                flag = 0;

            c = grammar[i][++j];
        }
    }

    if (flag == 1)
        printf("Operator grammar\n");
    else
        printf("Not operator grammar\n");
}