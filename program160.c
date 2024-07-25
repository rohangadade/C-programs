#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name :\n");
    scanf("%[^'\n']s",Arr); //Regular expression

    printf("Hello :%s\n",Arr);

    return 0;
}