// program to check how many digits in number

#include<stdio.h>
int DisplayOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10 ; 
        iNo = iNo / 10;
        if(iDigit % 2 != 0)
        {
           printf("%d \n",iDigit);
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

     DisplayOdd(iValue);

    return 0;
}