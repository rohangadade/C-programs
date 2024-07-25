//Program for reducing time complexity
#include<stdio.h>

//Tme Complexity = O(N/2)

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors  of %d are :\n",iNo);

    for(iCnt = 1 ; iCnt < (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}