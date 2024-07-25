// program to check how many digits in number

#include<stdio.h>
int CountkOdd(int iNo)
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
        if(iDigit %2 !=0)
        {
             iCount++;
        }
        iNo = iNo / 10;
    return iCount++;
}
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet= CountkOdd(iValue);
    printf("Odd Digits are: %d",iRet);

    return 0;
}