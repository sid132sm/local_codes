#include<stdio.h>
  int fact(int n);
  int main()
{
    int (*fp)(int)=fact;
    int factorial=(*fp)(5);
    printf("fact of the integer is %d\n",factorial);
  return 0;
}
int fact(int n)
{
    int fact=1,i;
    for ( i = 1; i <= n; ++i)
    {
        fact=fact*i;
    }
    return fact;
    


}