#include<stdio.h>
union demo
{
    int a;
    float b;
    double c;
};
int main()
{
    printf("%lu\n",sizeof(union demo));
    union demo u;
    u.a=10;
    printf("%d\n",u.a);
    u.b=10.9;
    printf("%f\n",u.b);
    u.c=78.10;
    printf("%lf",u.c);
}
