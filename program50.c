#include<stdio.h>
int main()
{
    int iNo = 438;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit); //8  //division karun aleli Baki

    iNo = iNo / 10  ;       //43  //division karun alela ans
    iDigit = iNo % 10;      //3
    printf("%d\n",iDigit); //3

    iNo = iNo / 10;       //4
    iDigit = iNo % 10;    //4
    printf("%d\n",iDigit); //4

    iNo = iNo / 10;         //0


    return 0;
}

/*
        Actual iNo = 674598

        iNo         iDigit = iNo %10        iNo = iNo / 10

        674598      8                       67459

        67459       9                       6745
*/