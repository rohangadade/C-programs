//Find Given number is Perfect number or not..
//Perfect no = Addition of factors is equal to the given number

/*
    Accept number as No
    Search all its factors
    Perform addition of all factors
    If addition is same as No
    then Display No is Perfect number
    Otherwise display No is not perfect number
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     //filter
    {
        printf("Please enter positive number only..\n");
        return false;
    }
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
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

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number",iValue);
    }
    else
    {
        printf("%d is not perfect number",iValue);
    }
}