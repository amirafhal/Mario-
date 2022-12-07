#include<stdio.h>
#include<cs50.h>
int main()
{
    int Height, i, j, o;
    do
    {
        printf("Height :");
        scanf("%d", &Height);
    }
    while (Height < 1 || Height > 8);
    for (i = 0; i < Height; i++)
    {
        for (o = Height - i; o > 1; o--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (j = 0; j<= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
