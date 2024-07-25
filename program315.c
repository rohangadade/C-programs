#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 8;
    unsigned int iResult = 0;
    
    iResult = iNo & iMask;

    if(iResult == iMask)
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
    unsigned int ivalue = 0;
    bool bRet = false;

    printf("Enter  number :\n");
    scanf("%u",&ivalue);

    if(bRet == true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}
