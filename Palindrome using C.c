#include<stdio.h>
#include<string.h>

int call(char arr[]){
    int i, len, temp=0;
    int flag = 0;
    len = strlen(arr);
    for(i=0;i < len ;i++){
        if(arr[i] != arr[len-i-1]){
            temp = 1;
        break;
        }
    }

    if (temp==0) {
       return 1;
    }
    else {
        return 0;
    }
}

int main(){

    char arr[20];

    printf("Enter a string:");
    scanf("%s", arr);

    int ans = call(arr);

    if(ans==1) printf("Palindrome\n");
    else  printf("Not Palindrome\n");

    return 0;
}
