
#include<stdio.h>
#include<stdlib.h>

____ _____(int Arr[] ,int iSize)
{
    //Logic
}

int main()
{
    int iCount = 0 , i = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter number of elements that you want :");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = _______(Brr , iCount);
    printf("Addition is :%d",iRet);
    free(Brr);

    return 0;
}