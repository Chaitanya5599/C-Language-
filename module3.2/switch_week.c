#include<stdio.h>
    int main()
    {
        int day;
        char result;
        printf("Enter a number:");
        scanf("%d",&day);
        switch(day)
        {
            case 1:
                result= printf("Monday");
                break;
            case 2:
               result= printf("Tuesday");
                break;
            case 3:
               result= printf("Wednesday");
                break;
            case 4:
              result=  printf("Thursday");
                break;
            case 5:
               result= printf("Friday");
                break;
            case 6:
               result= printf("Saturday");
                break;
            case 7:
                result= printf("Sunday");
                break;
            default :
               result= printf("Invalid Input");
                break;
        }
    
        return 0;
    }