#include <stdio.h>
int main() {
    int i=1,n;
    printf("enter the number of table:   ");
    scanf("%d",&n);
     while(i<=10)
     {
           printf("%d * %d is %d\n",n,i,i*n);
         i++;        
     } 
   
    return 0;
}
