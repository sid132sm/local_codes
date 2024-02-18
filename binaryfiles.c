#include<stdio.h>
#include<stdlib.h>
  int main()
{
    FILE *fp=fopen("binary1.bin","wb");
    if (fp==NULL)
    {
        /* code */printf("error\n");
    exit (1);
    }
    int a=5;
    fwrite(&a,4,1,fp);
    int arr[4]={1,2,3,4};
    fwrite(arr,4,4,fp);
    fclose(fp);
    
  return 0;
}