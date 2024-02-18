#include<stdio.h>
  int main()
{
    int a=1,b=3,c=5;
    int *ptr[3]={&a,&b,&c};
    printf("%lu\n",sizeof(ptr));
    printf("%u\n",ptr);
    printf("%u\n",*ptr);
    printf("%d\n",**ptr);
    printf("%u\n",(ptr+1));
    printf("%d",**(ptr+2));
     return 0;
}