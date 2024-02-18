#include<stdio.h>
#include<stdlib.h>
  int main()
{
    FILE *fp=fopen("binary1.bin","rb");
    if (fp==NULL)
    {
        /* code */printf("error\n");
    exit (1);
    }

    int arr[4];
    fread(&arr,4,4,fp);
    int i;
    for ( i = 0; i < 4; i++)
    {
      /* code */printf("%d\n",arr[i]);
    }
    fclose(fp);
    
  return 0;
}