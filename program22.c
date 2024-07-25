#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)  //<=5 and < 6 are same
    {
        printf("Jay Hanuman...\n");     //body of loop
    }    
}

int main()
{
    int iValue = 0;
    printf("How many times you wnat to show Jay hanuman :");
    scanf("%d",&iValue);

   Display(iValue);

   return 0;
}