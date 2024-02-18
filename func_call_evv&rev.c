#include <stdio.h>
void evvodd(int a);
void reverse(int a);
void display(void(*fp)(int));
int main()
{
  display(evvodd);
  display(reverse);

  return 0;
}
void evvodd(int a)
{
  
  if ((a & 1)==0)
  {
    printf("%d is even\n",a);
  }
  
  
}
void reverse(int a)
{
  int rem,rev=0;
  while (a!=0)
  {
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
  }
  printf("reverse of a is %d\n",rev);
  
}
void display(int(*fp)(int))
{
  int a;
  printf("enter the value of a\n");
  scanf("%d",&a);
  (*fp)(a);
}