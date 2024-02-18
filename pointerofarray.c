// 
#include<stdio.h>
int main()
                {
                        int arr[][3]={10,20,30,40,50,60};
                        int (*ptr)[3]=arr;
                        printf("%u\n",ptr[0]);//100
                        printf("%u\n",ptr[0]+1);//104
                        printf("%u\n",*(*ptr+1));//112
                        printf("%d\n",ptr[0][5]);//10
                        printf("%u\n",*(ptr+1)+2);//120
                        printf("%d\n",*(*(ptr+1)+2));//60
                }