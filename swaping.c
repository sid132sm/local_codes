// #include<stdio.h>
//   int main()
// {
//     int x,y;
//     printf("enter the value of x and y:");
//     scanf("%d%d",&x,&y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf(" after swapping:x=%d ,y=%d ",x,y);

//   return 0;
// }
#include<stdio.h>
  int main()
{
    int x,y;
    printf("x,y:");
    scanf("%d%d",&x,&y);
    x=x^y;
    y=y^x;
    x=x^y;
    printf("after %d %d",x,y);
  return 0;
}