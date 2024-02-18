#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int *)calloc(4,8);
    if(ptr==NULL)
    {
        printf("error\n");
        exit(1);
    }
    int i;
    printf("Input elements:\n");
    for(i=0;i<4;i++)
    {
        scanf(" %d",ptr+i);
    }
    printf("Display\n");
    for(i=0;i<4;i++)
    {
        printf("Value : %d\n",*(ptr+i));
        printf("Memory: %d\n",ptr+i);
    }
    free(ptr);
    return 0;
}