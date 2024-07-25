
#include<stdio.h>
#include<stdlib.h>

void Swap( int *p , int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int A = 0 , B = 0;

    printf("Enter first number :\n");
    scanf("%d",&A);
        
    printf("Enter first number :\n");
    scanf("%d",&A);

    Swap(&A , &B);  //call by address

    printf("Value of A after swapping is :%d\n",A);
    printf("Value of B after swapping is :%d\n",B);

    return 0;
}