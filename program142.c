//program to update value of element gretor than 100 to 0
#include<stdio.h>
#include<stdlib.h>

int Updator(int Arr[] , int iSize)
{
    int i = 0 ;
    
    for( i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] >= 100)
        {
            Arr[i] = 0;
        }
    }
}
int main()
{
    int *Brr = NULL;
    int iCount = 0 , i = 0 ;

    printf("Enter number of elements that you want to enter :\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }
    Updator(Brr , iCount);

    printf("Data after updation is :\n");
    for(i = 0 ; i < iCount ; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}