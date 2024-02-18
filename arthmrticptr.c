#include<stdio.h>
  int main()
{
    int a=5;
    int *ptr=&a;
    printf("%u\n",*ptr);
    printf("%u\n",ptr+1);
    printf("%u\n",ptr+2);

  return 0;
}