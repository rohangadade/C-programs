/*
    iNo     11      0   0   0   0   1   0   1   1
                    0   0   0   0   1   0   0   0
                    -------------------------------&
                    0   0   0   0   1   0   0   0

    iNo     20      0   0   0   1   0   1   0   0
                    0   0   0   1   0   1   0   0    
                    --------------------------------&
                    0   0   0   0   0   0   0   0                
*/
#include<stdio.h>

int main()
{
    unsigned int iNo = 0 ;
    unsigned int iMask = 8;
    unsigned int iResult = 0;

    printf("Enter  number :\n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("4 th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }


    return 0;
}
