#include <stdio.h>

void updateArray(int *ptr, int x)
{
    for(int i=0;i<x;i++)
        ptr[i]=ptr[i]*ptr[i];
}

int main()
{
    int num[7];
    printf("Enter seven numbers: ");
    for(int i=0;i<7;i++)
        scanf("%d", &num[i]);

    updateArray(num,7);

    printf("Updated array:\n");
     for(int i=0;i<7;i++)
        printf("%d\n", num[i]);

    return 0;
}
