#include<stdio.h>

int main()
{
float fValue1 = 0.0 , fValue2 = 0.0;
float fResult = 0.0;
   
    printf("Enter first number :");
    scanf("%f",&fValue1);

    printf("Enter second number :");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is :%f",fResult);
    
    return 0;
}