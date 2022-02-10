#include <stdio.h>

int arr[30], n;

void call(int k){
    int idx = 0;

    for(int i=0; i<n; i++){
        if(i==k) idx = i;
    }

    int temp = *(arr+k);
    *(arr+k) = *(arr+k+1);
    *(arr+k+1) = temp;

}

int main(){
    printf("Enter number of input: ");
    scanf("%d", &n);

    printf("Enter Array Elements: \n");

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter a index to be swapped: ");
    int k;
    scanf("%d", &k);
    call(k);

    printf("Printing Array after swapping values: \n");
    for(int  i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
