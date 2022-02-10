#include <stdio.h>

int arr[7];

void updateArray(){
    int *ptr = arr;
    for (int i = 0; i < 7; i++){
        arr[i] = (arr[i]) * (arr[i]);
        ptr++;
    }
}

int main()
{

    int * ptr = arr;

    printf("Enter Seven number: \n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &ptr[i]);

        ptr++;
    }

    updateArray();

    printf("Array elements: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }

    return 0;
}
