#include<stdio.h>
int main() {
 int n= 1565, rem , sum =0;
 rem=n%10;
  while(n>0){
   
   n/=10;
  
  }
  sum += rem;
printf("sum of all digit is %d",sum);
return 0;
}
