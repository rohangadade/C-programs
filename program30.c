/*  0 to 4 = free
    4 to 10 = 900 rs
    10 to 50 = 2000 rs
    above 50 = 500rs
*/
////////////////////////////////////
//
//  Function Name : CalculateTicket
//  Description : Used to display ticket price based on Age
//  Input : Integer
//  output : Integer
//  Authod :Rohan Ashok Gadade
//  Date : 29/04/2024
//
////////////////////////////////////
#include<stdio.h>
int CalculateTicket(int iAge)
{
    if((iAge > 0)&&(iAge <= 4))
    {
        return 0;
    }
    else if((iAge > 4)&&(iAge <=10))
    {
        return 900;
    }
    else if((iAge > 10) && (iAge <= 50))
    {
        return 2000;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter your Age :");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = CalculateTicket(iValue);
    printf("Your ticket price is :%d",iRet);

    return 0;

}