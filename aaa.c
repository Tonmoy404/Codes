#include <stdio.h>

int max(int *p, int size) {

    int i;
    int mx = 0;

    for(i = 0; i < size; i++) {
        if(*(p+i) > mx) {
            mx = *(p+i);
        }
    }

    return mx;
}

int main() {
    int numbers[1000];
    int n, i;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_number = max(numbers, n);
    printf("%d\n", max_number);
}
