/*#include<stdio.h>
struct playerlist
{
    char name[20];
    int age;
    int runs;
}player3;
struct playerlist player3={"Rahul",29,5000};
int main()
{
    struct playerlist player1={"Kohli",34,12000};
    struct playerlist player2={"Rohit",35,8000};
    printf("%s,%d,%d",player1.name,player1.age,player1.runs); 
}*/
#include <stdio.h>
struct stu {
   char name[50];
   int age;
};
void display(struct stu s);
int main() {
   struct stu s1;
   printf("Enter name: ");
   scanf("%s", s1.name);
   printf("Enter age: ");
   scanf("%d", &s1.age);
   display(s1); 
   return 0;
}
void display(struct stu s) {
   printf("stu inform\n");
   printf("Name: %s\n", s.name);
   printf("Age: %d", s.age);
}
