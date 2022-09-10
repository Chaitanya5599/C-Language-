#include<stdio.h>

int main()
{
    int n = 16345,rem,even=0,odd=0;

    while(n!=0){
        rem = n%10;  // digit separate
        if(rem%2==0){
            even = even+rem;
        }
        else{
            odd = odd+rem;
        }
        n/=10;   
    }
    printf("Sum of  even digits is %d\n",even);
    printf("Sum of odd  digits is %d",odd);
    return 0;
}