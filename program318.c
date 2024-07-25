#include<stdio.h>

int main()
{
    unsigned int iNo = 0 ;
    unsigned int iMask = 4096;
    unsigned int iResult = 0;

    printf("Enter  number :\n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
    }


    return 0;
}
