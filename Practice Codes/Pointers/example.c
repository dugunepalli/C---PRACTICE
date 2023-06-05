#include<stdio.h>
int main()
{
    //Variable 
    int n=5;
    printf("Value of n is : %d\n", n);
    printf("Address of n is: %p", &n);  //Adress Operayor
    
    //Pointer
    int *p=&n;
    printf("\nAfter Pointer\n");
    printf("Adress of n by p is: %p\n", &p);
    printf("Adress of p is: %p\n", p);
    printf("Value of n with Pointer p: %d", *p);    //de-Reference
    
    
    //Double Pointer or Pointer to Pointer
    int **dp;
    dp=&p;
    printf("\nAfter Double Pointer\n");
    printf("Address of Double Pointer: %p\n", dp);
    printf("VAlue of n by DP is: %d\n", **dp);
    printf("Address of p by dp is: %p", &dp);
    return 0;
}
