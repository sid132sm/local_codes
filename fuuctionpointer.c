#include<stdio.h>
  int add(int a, int b);
  int main()
{
    int (*fp)(int,int)=add;
    
    printf("sum is %d\n",(*fp)(6,7));


  return 0;
}
int add(int a,int b)
{
    return a+b;
}