#include<stdio.h>
typedef struct demo
{
    int a;
    int b;

}sd;
int main()
{
    int a=10;
    sd d={1,2};
    printf("%d\n",a);
    printf("%d,%d",d.a,d.b);
}
