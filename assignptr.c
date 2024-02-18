#include<stdio.h>
  int main()
{
    int a=10;
    int *ptr=&a,*ptr1;
    ptr1=ptr;
    printf("%d %d\n",*ptr,*ptr1);

  return 0;
}