#include<stdio.h>

int main()
{
    unsigned int iNo = 0 ;
    unsigned int iMask = 0x00000c00;
    unsigned int iResult = 0;

    printf("Enter  number :\n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("11th and 12th bit is ON\n");
    }
    else
    {
        printf("11th and 12th bit is OFF\n");
    }


    return 0;
}
