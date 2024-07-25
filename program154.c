#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))
    {
       printf("It is capital letter\n");
    }
    else 
    {
        printf("It is not capital letter\n");
    }
}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter one character :\n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);


    return 0;
}