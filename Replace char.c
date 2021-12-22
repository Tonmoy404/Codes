#include <stdio.h>

void replace(char str[], char c){
    char hi[26]={'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int cnt=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==c){
            cnt++;
            str[i]=hi[cnt-1];
        }
    }

    for(int i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }

}


int main(){

    char arr[27];

    printf("Enter a string: ");
    gets(arr);


    printf("Enter a character to be replaced: ");
    char x;
    scanf("%c", &x);

    replace(arr, x);



    return 0;
}
