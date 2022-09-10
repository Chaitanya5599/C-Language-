#include<stdio.h>

int main()
{
    int n,rev = 0;
    printf("enter a number :");
    scanf("%d",&n);
    while (n != 0)
    {
        rev *= 10;
        rev = rev + n % 10;
        n = n / 10;
    }
    printf("reverse of number is = %d\n",rev);
    
    return 0;
}