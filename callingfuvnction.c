#include<stdio.h>
void add (int a,int b);
void sub (int a,int b);
void mul (int a, int b);
void div (int a, int b);
void rem (int a, int b);
  int main()
{
    int ch;
    printf("enter the choice :\n 1.add\n 2.sub\n 3.mul\n 4.div\n 5.rem\n");
    scanf("%d",ch);
    void (*fp[5]) (int,int)={add,sub,mul,div,rem};
    (*fp[ch]) (9,6);
  return 0;
}
void add(int a,int b)
{
    printf("addition is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("sub is %d\n",a-b);
}
void mul(int a,int b)
{
    printf("mul is %d\n",a*b);
}
void div(int a,int b)
{
    printf("div is %d\n",a/b);

}
void rem(int a,int b)
{
    printf("rem is %d",a%b);
}