#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d", &n);
    x:
    if(i%2==0){
        printf("%d\n", i);
    }
    i++;
    if(i<n)
    {
        goto x;
    }
}
