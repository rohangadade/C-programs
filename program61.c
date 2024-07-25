//program to find digits which greter than5 in a number
#include<stdio.h>
int Count(int iNo)
{
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    int iCount = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 5)
        {
             iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount++;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("no of digits gretor than five is :%d",iRet);
}