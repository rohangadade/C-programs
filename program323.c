
#include<stdio.h>

int main()
{
    unsigned int iNo = 0 ;
    unsigned int iMask = 0x00000009;
    unsigned int iResult = 0;

    printf("Enter  number :\n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("9 th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }


    return 0;
}
