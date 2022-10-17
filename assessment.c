#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,flag,count=0;
    int  ch, vowels=0, consonants=0,space=0,digit=0;
    char s1[100] ,CH;
    char s2[100];
    printf("Main Menu\n");
    printf("   1.reverse a string\n");
    printf("   2.Concatenation\n");
    printf("   3.Palindrome \n");
    printf("   4. Copy a string\n");
    printf("   5.Length of the string\n");
    printf("   6.Frequency of character in s string\n");
    printf("   7.Find number of vowels and consonants\n");
    printf("   8.Find number of blank spaces and digits\n");
    printf("   9.exit\n");
    
    printf("enter the string:");
    gets(s1);
    printf("enter another string (enter space if your choice is not [ 2 ]):- ");
    gets(s2);
    printf("Enter any character whose frecuency you want [enter space if your choice is not { 6 }]: ");
    scanf("%c", &CH);
    printf("Enter your choice: ");
    scanf("%d", &ch);
    
   
    
switch(ch)
    {
    case 1:
    strrev(s1);
    break;
    
    case 2:
    strcat(s1,s2);
    puts(s1);
    break;

    case 3:
     l = strlen(s1);
    
    for(i=0;i < l ;i++){
        if(s1[i] != s1[l-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag==1) {
        printf("%s is not a palindrome", s1);
    }    
    else {
        printf("%s is a palindrome", s1);
    }

    case 4:
    strcpy (s2,s1);
    printf("Your string has been copied to another string (%s)",s2);

    case 5:
    l = strlen(s1);
    printf("The length of string is %d",l);

    
    case 6:
    
    for(i=0; s1[i]!='\0'; i++)
     {
     if(CH==s1[i])
             count++;
     }
     printf("%c occurs %d times in %s", CH, count, s1);
     
     
     case 7:
     for(i=0;s1[i];i++)  
    {
    	if((s1[i]>=65 && s1[i]<=90)|| (s1[i]>=97 && s1[i]<=122))
    	{
		
            if(s1[i]=='a'|| s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O' ||s1[i]=='U')
		      vowels++;
            else
             consonants++;
        }
 
 	}
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);


    case 8:
    for(i=0;s1[i];i++)  
    { if(s1[i] == ' '){
        space++;
    }
    if(s1[i] >= '0' && s1[i] <= '9'){
        digit++;
    }
    }

    printf("Digits:-   %d\n",digit);
    printf("Space:-    %d\n",space);
    	
    case 9:
    break;

    default:
     printf("enter correct value");
           break;

    } 
    return 0;
}
