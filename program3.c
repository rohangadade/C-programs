#include<stdio.h>

int main()
{
   // int i, j ,k;
   int iValue1 = 0 , iValue2 = 0;
   int iResult = 0;
   
    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter second number :");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition is :%d",iResult);
    
    return 0;
}