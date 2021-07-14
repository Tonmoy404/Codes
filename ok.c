#include <stdio.h>
int  main(){
    char arr[5];
    for(int i=0; i<5; i++){
        scanf("%c", &arr[i]);
    }

    for(int i=0; i<5; i++){
        printf("%c", arr[i]);
    }
    return 0;
}
