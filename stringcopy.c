#include<stdio.h>
int string_copy(char *str);
  int main()
{
    char str[100];
    printf("enter the string\n");
    scanf("%[^\n]s",&str);
    int copy=string_copy(str);
    printf("the copied string is %d\n",copy);
    return 0;
}
int string_copy(char *str)
{
    char str2[100];
    char i;
    for ( i = 0; i <str; i++)
    {
       str2[i]==str[i];
    }
    return i;
}