#include<stdio.h>

int main()
{
    int n = 6564;

    while(n!=0){
        if(n%2==0){
          printf("the value is even");
        }
        else{
           printf("the value is odd");
        }
         break;
    }
 
    return 0;
}