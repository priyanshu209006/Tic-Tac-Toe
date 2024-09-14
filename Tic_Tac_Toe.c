#include <stdio.h>
#include <windows.h>
int main()
{
    int i, j, r1, c1, r2, c2, x = 0, c = 0;
    char a[3][3], p1[20], p2[20];
    // initialising array = ' '
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = ' ';
        }
    }
    for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf(" %c ", a[i][j]);
                if (j < 2)
                    printf("|");
            }
            if (i < 2)
                printf("\n-----------\n");
                else 
                printf("\n");
        }
   
    printf("Welcome to Tic Tac Toe game\n");
    printf("Enter player 1 name : ");
    scanf("%s", p1);
    printf("Enter player 2 name : ");
    scanf("%s", p2);
    printf("Let's start Playing\n");
    for (i = 3; i >= 1; i--)
    {
        sleep(1);
        printf("Starting in %ds\n", i);
    }
    while (1)
    {

        printf("Enter Row and column %s = ", p1);
        scanf("%d", &r1);
        scanf("%d", &c1);
        c++;
        a[r1][c1] = 'X';

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf(" %c ", a[i][j]);
                if (j < 2)
                    printf("|");
            }
            if (i < 2)
                printf("\n-----------\n");
                else 
                printf("\n");
        }

        if ((a[0][0] == 'X') && (a[1][1] == 'X') && (a[2][2] == 'X'))
            x = 1;
        if ((a[0][2] == 'X') && (a[1][1] == 'X') && (a[2][0] == 'X'))
            x = 1;
        if ((a[0][0] == 'X') && (a[0][1] == 'X') && (a[0][2] == 'X'))
            x = 1;
        if ((a[1][0] == 'X') && (a[1][1] == 'X') && (a[1][2] == 'X'))
            x = 1;
        if ((a[2][0] == 'X') && (a[2][1] == 'X') && (a[2][2] == 'X'))
            x = 1;
        if ((a[0][0] == 'X') && (a[1][0] == 'X') && (a[2][0] == 'X'))
            x = 1;
        if ((a[0][1] == 'X') && (a[1][1] == 'X') && (a[2][1] == 'X'))
            x = 1;
        if ((a[0][2] == 'X') && (a[1][2] == 'X') && (a[2][2] == 'X'))
            x = 1;
        if (x == 1)
            break;
        printf("Enter Row and column %s = ", p2);
        scanf("%d", &r2);
        scanf("%d", &c2);
        c++;
        a[r2][c2] = 'O';
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf(" %c ", a[i][j]);
                if (j < 2)
                    printf("|");
            }
            if (i < 2)
                printf("\n-----------\n");
                else 
                printf("\n");
        }
        if ((a[0][0] == 'O') && (a[1][1] == 'O') && (a[2][2] == 'O'))
            x = 2;
        if ((a[0][2] == 'O') && (a[1][1] == 'O') && (a[2][0] == 'O'))
            x = 2;
        if ((a[0][0] == 'O') && (a[0][1] == 'O') && (a[0][2] == 'O'))
            x = 2;
        if ((a[1][0] == 'O') && (a[1][1] == 'O') && (a[1][2] == 'O'))
            x = 2;
        if ((a[2][0] == 'O') && (a[2][1] == 'O') && (a[2][2] == 'O'))
            x = 2;
        if ((a[0][0] == 'O') && (a[1][0] == 'O') && (a[2][0] == 'O'))
            x = 2;
        if ((a[0][1] == 'O') && (a[1][1] == 'O') && (a[2][1] == 'O'))
            x = 2;
        if ((a[0][2] == 'O') && (a[1][2] == 'O') && (a[2][2] == 'O'))
            x = 2;

        if ((x == 2))
            break;
        if (c == 8)
        {
            printf("Tie");
            break;
        }
    }
    if (x == 1)
        printf("%s won the game", p1);
    if (x == 2)
        printf("%s won the game", p2);
}
