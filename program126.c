/*
    Accept N numbers from user and display Odd numbers
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[] ,int iSize)
{
    int i = 0;
    printf("Odd element are :\n");
    for(i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iCount = 0 , i = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want :");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }

    DisplayOdd(Brr , iCount);
   
    free(Brr);

    return 0;
}