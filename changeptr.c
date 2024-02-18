#include<stdio.h>
  int main()
{
    int a=5,b=6,c=8;
    int *ptr=&a;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    ptr=&b;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    ptr=&c;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    


  return 0;
}