#include<stdio.h>
///////////////////////////////////////////////////////
//
//Function name :  Addition
//Description:     It is used to perform addition of two floats
//Input:           Float,Float
//Output:          Float
//Author:          Rohan Ashok Gadade
//Date:            15/04/2024
//
//////////////////////////////////////////////////////
float Addition(float fNo1 , float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}
//////////////////////////////////////////////////////
//Function name :       Main
//Description :         It is entry point function
//////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0;
    float fResult = 0.0;
   
    printf("Enter first number :");
    scanf("%f",&fValue1);

    printf("Enter second number :");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1,fValue2);

    printf("Addition is :%f",fResult);
    
    return 0;
}