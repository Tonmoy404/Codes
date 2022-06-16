#include <stdio.h>
int main(){

    int arr[5];
    int ucl = 0;

    arr[ucl] = ucl++;

    printf("%d\n", ucl);

    printf("%d %d", arr[0], arr[1]);
    return 0;
}
