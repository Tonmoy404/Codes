#include <stdio.h>
int main(){
    char arr[18];

    for(int i=0; i<18; i++){
        scanf("%c", &arr[i]);
    }

    for(int i=0; i<18; i++){
        if(arr[i]=='/0') break;
        printf("%c", arr[i]);
    }


    return 0;
}
