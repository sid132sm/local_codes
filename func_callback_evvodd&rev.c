#include <stdio.h>
int evvodd(int a);
int reverse(int a);
int display(int (*fp)(int a));
int main()
{
  display(evvodd);
  display(reverse);

  return 0;
}
int evvodd(int a)
{
  
  if ((a & 1)==0)
  {
    printf("%d is even\n",a);
  }
  return a;
  
}
int reverse(int a)
{
  int rem,rev=0;
  while (a!=0)
  {
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
  }
  printf("reverse of a is %d\n",rev);
  return rev;
  
}
int display(int(*fp)(int a))
{
  int a;
  printf("enter the value of a\n");
  scanf("%d",&a);
  (*fp)(a);
  return a;
}