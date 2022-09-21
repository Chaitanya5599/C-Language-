#include<stdio.h>
 int rev;
int reverse(int n){
   
    while (n> 0)
    {
        rev *= 10;
        rev = rev + n % 10;
        n = n / 10;
    }
    printf("%d",rev);
    
}

int main() {

 reverse(289);

return 0;
}
