#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 3, b = 4;
    int *ptr = malloc((a * b) * sizeof(int));

    for (int i = 0; i < a * b; i++)
    {
        ptr[i] = i + 1;
        for (int i = 0; i < a; i++)
        {

            for (int j = 0; j < b; j++)
            {
                printf("%d", ptr[i * b + j]);
                printf("\n");
            }
            
        }
        
    }
    free(ptr);
    return 0;
}