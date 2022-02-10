#include <stdio.h>

int main(){
    int a=5, b=6;
    int *p = &a;
    int *pt = &b;

    printf("%d %d", *p, *pt);

}


