#include<stdio.h>
void call(int arr1[], int n)
{
    if (n <= 1)
      return;
    int pre_elem = arr1[0];
    arr1[0] = arr1[0] * arr1[1];
    for (int i=1; i<n-1; i++)
    {
        int cur_elem = arr1[i];
        arr1[i] = pre_elem * arr1[i+1];
        pre_elem = cur_elem;
    }
    arr1[n-1] = pre_elem * arr1[n-1];
}
int main()
{
    printf("Enter array size: ");
    int size=0; scanf("%d", &size);
    int arr1[size];

    printf("Enter array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }

    int n = sizeof(arr1)/sizeof(arr1[0]);



	printf("\nupdated array is: ");
    call(arr1, n);
    for (int i=0; i<n; i++)
      printf("%d ", arr1[i]);
    return 0;
}



