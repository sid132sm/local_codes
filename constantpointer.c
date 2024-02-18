#include<stdio.h>
  int main()
{
    int a=4,b=5;
    int *const ptr=&a;
    printf("%d\n",*ptr);
    printf("%u\n",ptr);
    *ptr=8;
    printf("%d\n",*ptr);//we cannot change the address of ptr
  return 0;
}/*
#include<stdio.h>
  int main()
{
    int a=4,b=5;
    const int *const ptr=&a;
    printf("%d\n",*ptr);
    printf("%u\n",ptr);
    //ptr=8; // we cannot change the *ptr so it is constant
    printf("%d\n",*ptr);//we cannot change the address of ptr
  return 0;
} */