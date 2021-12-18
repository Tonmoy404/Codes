#include <stdio.h>

int main(){
    char arr[20];

    for(int i=0; i<10; i++){
        scanf("%c", &arr[i]);
    }

    for(int i=0; i<10; i++){
        printf("%c", arr[i]);
    }

}
