#include<stdio.h>

int Addition(int ptr[] ,int iSize)
{
    int i = 0;
    int iSum = 0;
    for(i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}
int main()
{
    int iRet = 0 , i = 0;
    int Arr[5];
    printf("Enter elements:");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    iRet = Addition(Arr,5);

    printf("%d",iRet);

    return 0;
}