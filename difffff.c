#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
  int main()
{
    int (*fp[3])(int,int)={add,sub,mul};
    int i;
    printf("enter the choice \n0\n1\n2\n");
    scanf("%d",&i);
    int c=(*fp[i])(6,5);
    printf("result is %d",c);
  return 0;
}