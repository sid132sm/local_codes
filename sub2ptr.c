// #include<stdio.h>
//   int main()
// {
//     int a=5,b=2;
//     int *ptr1=&a;
//     int *ptr2=&b;
//     printf("%d\n%d",ptr1-ptr2,ptr2-ptr1);

//   return 0;
// }
#include<stdio.h>
  int main()
{
    float a=11.7,b=2.5;
    float *ptr1=&a,*ptr2=&b;
    printf("%d\n%d",ptr1-ptr2,ptr2-ptr1);
  return 0;
}