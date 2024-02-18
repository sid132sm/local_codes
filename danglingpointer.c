#include<stdio.h>
int *fun();
  int main()
{
    int *ptr=fun();
    printf("%u\n",ptr);
    printf("%d",*ptr);
  return 0;
}
int *fun()
{
    int a=45;
    int *p=&a;
    return p;
}