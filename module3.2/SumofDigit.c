#include<stdio.h>
int main() {
 int n= 15, rem , sum =0;

  while(n>0){
   rem =n%10;
   sum += rem;
   n/=10;

  }
printf("sum of all digit is %d",sum);
return 0;
}
