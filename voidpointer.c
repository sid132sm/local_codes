#include<stdio.h>
  int main()
{
    int a=10;
    void *ptr=&a;
    printf("%u\n",ptr);
    printf("%d\n",*(int*)ptr);
    char ch='s';
    void *ptr1=&ch;
    printf("%u\n",ptr1);
    printf("%c\n",*(char*)ptr1);
    float f=3.4;
    void *ptr2=&f;
    printf("%u\n",ptr2);
    printf("%f",*(float*)ptr2);
  return 0;
}