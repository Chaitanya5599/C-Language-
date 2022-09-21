#include<stdio.h>
#include<string.h>
char s[100]=("cars"); 
int r; 
char reverse(){
    
   r = strrev(s);
 printf("your reversed string is: %s",r);


}

int main() {
    reverse();
 
return 0;
}
