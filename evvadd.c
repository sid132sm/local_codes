#include<stdio.h>
  int main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if((number & 1)==0)
    printf("%d is even\n");
    else
    printf("%d is odd\n");
  return 0;
}