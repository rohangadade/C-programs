#include<stdio.h>

int main()
{
    unsigned int iNo1 = 0 , iNo2 ;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%u",&iNo1);

    printf("Enter second number :\n");
    scanf("%u",&iNo2);

    iRet = iNo1 & iNo2;

    printf("Result of Bitwise & is :%u",iRet);

    return 0;
}


/*

*/