#include <stdio.h>
int main(){
    printf("Enter 3 integers: ");
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int product = x*y*z;
    int greatest = x>y&&x>z?x: y>z?y :z;

    for(int i=greatest; i<=product; i+=greatest){
        if(i%x==0 && i%y==0 && i%z==0){
            printf("LCM is: %d\n", i);
            return 0;
        }
    }
    return 0;
}
