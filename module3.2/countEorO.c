#include<stdio.h>
int main() {
  int odd,even,num,digit;
  
  printf("Count number of odd and even digits in a given integer number ");
  scanf("%d",&num);
  odd = 0;
  even =0; 
  while (num > 0) {
   digit = num % 10; 
   if (digit % 2 == 0)
     even++;
   else odd++;
   num /= 10;
 }
 printf("Odd digits : %d Even digits: %d\n", odd, even);
 return 0;
}