#include <stdio.h>

void max(int *a[10],int *size){
    int max=0;

    max = *a[0];

    for(int i=0;i<*size;i++){
        if( *a[i] > max){
            max = *a[i];
        }
    }
    printf("The largest element in the given array is: %d",max);
}

int main(){
    int a[10],size;
    printf("Enter the total number of elements in the array:\n");
    scanf("%d",&size);

    printf("Enter the elements in the array one by one:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    max(&a,&size);
}

