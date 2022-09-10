#include <stdio.h>
int main()
{
int a, i,ap;
printf("enter an alphabet in capital letter:  ");
scanf("%c",&ap);

for(a = 'A' ;a <= ap ;a++)
{
for(i = 'A' ;i <= a;i++)
{
printf("%c ", i);
}
printf("\n");
}
return 0;
}