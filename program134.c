
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] ,int iSize , int iNo)
{
    int i = 0 ;
    bool bFlag = false;
    for(i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iCount = 0 , i = 0 , iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter number of elements that you want :");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("Enter element you want to search :\n");
    scanf("%d",&iValue);

   bRet = Search(Brr , iCount,iValue);
   if(bRet == true)
   {
    printf(" element is present in Array...\n");
   }
   else
   {
    printf("element is not present in Array...\n");
   }
   
    free(Brr);

    return 0;
}