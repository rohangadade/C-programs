/*
    *    *   *   *
    *    *   *   *
    *    *   *   *
*/
#include<stdio.h>

void Display()
{
    int i = 0 , j = 0;

    for(i = 1 ; i <= 3 ; i++)       //rows
    {
        for(j = 1 ; j <= 4 ; j++)   //Columns
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{

    Display();

    return 0;
}