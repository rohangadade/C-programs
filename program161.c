#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
}
int main()
{
    char Arr[50];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr); //Display(Add of Arr) 

    return 0;
}