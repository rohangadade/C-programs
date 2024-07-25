#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo)
{
    if(iNo % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    
    if(bRet == true)
    {
        printf("%d is Divisible by 4",iValue);
    }
    else
    {
        printf("%d is not divisible by 4",iValue);
    }
    
}