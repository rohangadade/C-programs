#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    printf("Factors  of %d are :\n",iNo);

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
           iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);
    printf("No of factors is : %d",iRet);
    return 0;
}