#include<stdio.h>
#include<stdlib.h>
  int main(int argc,char *argv[])
{
    int i;
    for ( i = 0; i < argc; i++)
    {
        printf("%s ",argv[i]);
    }
    printf("%d",argc);
    printf("%d\n",atoi(argv[1]));
    
  return 0;
}