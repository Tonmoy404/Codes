#include <stdio.h>
int main(){
    int mini = 10000;

    int arr[5];
    puts("Enter Array elements:\n");

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++){
        if(arr[i]<mini){
            mini = arr[i];
//            printf("%d\n", mini);
        }
    }

    int cnt=0;

    for(int i=0; i<5; i++){
        if(arr[i]!=mini) {
            if(arr[i]%mini==0)cnt++;
        }
    }

    if(cnt==4){
        printf("%d, Strong Divisor\n", mini);
    }
    else{
        printf("%d, Weak Divisor\n", mini);
    }

}
