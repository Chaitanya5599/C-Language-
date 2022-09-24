#include<stdio.h>
#include<string.h>

struct Emp{
    int no;
    char name[20];
    char add[100];
    int age;
};

int main()
{
    struct Emp e1 = {101,"Rutvik","  Mumbai ", 20};
    printf("%d %s %s %d\n",e1.no,e1.name,e1.add,e1.age);
    struct Emp e2 = {102,"vivek","  Gandhinagar ", 20};
    printf("%d %s %s %d\n",e2.no,e2.name,e2.add,e2.age);
    struct Emp e3 = {103,"chaitanya","  Surat ", 17};
    printf("%d %s %s %d\n",e3.no,e3.name,e3.add,e3.age);
    struct Emp e4 = {104,"jaydeep","  Pune ", 20};
    printf("%d %s %s %d\n",e4.no,e4.name,e4.add,e4.age);
    struct Emp e5 = {105,"Kaushal","  Vapi ", 25};
    printf("%d %s %s %d\n",e5.no,e5.name,e5.add,e5.age);
    
    return 0;
}