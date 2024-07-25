// program to check how many digits in number

#include<stdio.h>
int CountEvenDigit(int iNo)
{
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    int iCount = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10 ; 
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount++;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet= CountEvenDigit(iValue);
    printf("Digits are: %d",iRet);
    return 0;
}