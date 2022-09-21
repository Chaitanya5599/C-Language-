#include<stdio.h>

int main(){

    int a[5];
    int b[5];
    int i,j,temp,k,f,tepm;
    char sort;

     printf("Enter > for ascending or < for descending: ");
    scanf("%c",&sort);

    for(int i=0;i<5;i++){
        printf("Enter the value of array A %d index position element: ",i);
        scanf("%d",&a[i]);
       
    }
    
   
    for(int j=0;j<5;j++){
        printf("Enter the value of array B %d index position element: ",j);
        scanf("%d",&b[j]);
    }
        
    
   
    switch(sort)
    {
        case '>':
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        printf("%d \n",a[i]);
    }
    
    for(k=0;k<5;k++){
        for(f=k+1;f<5;f++){
            
            if(b[k] > b[f]){
                tepm = b[k];
                b[k] = b[f];
                b[f] = tepm;
            }
            
        }
        printf("---------array-2---------");
        printf(" %d \n",b[k]);
    }
    break;
    case '<':
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        printf("%d \n",a[i]);
    }
    
    for(k=0;k<5;k++){
        for(f=k+1;f<5;f++){
            
            if(b[k] < b[f]){
                tepm = b[k];
                b[k] = b[f];
                b[f] = tepm;
            }
            
        }
        printf("---------array---------- %d \n",b[k]);
    }
    break;
    default:
    printf("enter correct value");
        
    }

  
    return 0;
}
    


