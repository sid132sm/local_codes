#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void display(void(*fp)(int,int));
int main()
{
    display(add);
    display(sub);
  return 0;
}
void add(int a,int b)
{
    printf("sum is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("sub is %d",a-b);
}
void display(void(*fp)(int,int))
{
    int a,b;
    printf("enter 2 num\n");
    scanf("%d%d",&a,&b);
    (*fp)(a,b);

}

