//Find factorial of given number
#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        iFact = iFact* iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of %d is :%d",iValue , iRet);
    return 0;
}