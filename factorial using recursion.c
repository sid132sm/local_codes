#include<stdio.h>
int fact(int n);
int main()
{
   int n;
   printf("enter n value\n");
   scanf("%d",&n);
   int f=fact(n);
   printf("fact of %d is %d\n",n,f);
   return 0;
}

int fact(int n)
{
   if(n==1)
   {
      return 1;
   }
   else
   {
    int f=n*fact(n-1);
      return f;
   }
}