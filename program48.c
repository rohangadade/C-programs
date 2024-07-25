//Find factorial of given number
#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned int iFact = 1; //mothe number run honyasathi
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        iFact = iFact* iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is :%lu",iRet);
    return 0;
}