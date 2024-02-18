#include<stdio.h>
struct student
{
    int rn;
    char name[20];
    float marks;
}s1={1,"shaam",89.5};
struct student s2={2,"duu",77.90};
int main()
{
    struct student s3={2,"gagag",99.99};
    struct student s4;
    scanf("%d,%s,%f",&s4.rn,&s4.name,&s4.marks);
    printf("%d,%s,%f",s4.rn,s4.name,s4.marks);
    //printf("%d,%s,%f",s1.rn,s1.name,s1.marks);
    
    
}

