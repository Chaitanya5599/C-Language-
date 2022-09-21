#include<stdio.h>
int main() {
       int max,i;
       int a[7]={54,34,46,67,79,36,99};
       max=a[0];
    for(i=0;i<7;i++){
        if(a[i]>max){
            max = a[i];
        }
     }
printf("maximum value of array is %d\n",max);
return 0;
}
