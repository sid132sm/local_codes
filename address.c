#include<stdio.h>
  int main()
{
    int a=10;
    printf("%d\n",a);
    printf("%u",&a);
    int *ptr=&a;
    printf("%u",ptr);
  return 0;
}