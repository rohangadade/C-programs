#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)  //<=5 and < 6 are same
    {
        printf("Jay Hanuman...\n");     //body of loop
    }    
}

int main()
{
   Display();

   return 0;
}