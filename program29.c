#include<stdio.h>
#include<stdbool.h>

bool checkRange(
                int iValue)
{
    if((iValue >= 10) && (iValue <= 20))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    int bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iNo);

    bRet = checkRange(iNo);

    if(bRet == true)
    {
        printf("%d is in the range 10 to 20 \n",iNo);
    }
    else
    {
        printf("%d is not in the range 10 to 20 \n",iNo);
    }
    return 0;
}