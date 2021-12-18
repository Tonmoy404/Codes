#include <stdio.h>

int main(){
    int n, sum=0;
        char num[5][100]={"Twenty", "Thirty", "Fourty", "Fifty", "Sixty"};

        char num2[9][100]={"one", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter an integer number between 21 to 61:");
    scanf("%d", &n);

    while(n!=0){
        sum = (sum * 10) + (n % 10);
        n /= 10;
    }


    if(n!=0){
        int x = 5-1;
        int y = 9-1;
        printf("%s-%s", x, y);
    }



return 0;
}
