#include <stdio.h>

int main(){
    int i;
    if(printf("11")){
        i = 3;
    }
    else{
        i = 5;
        printf("%d", i);
    }

    printf("%d", i);



    return 0;
}
