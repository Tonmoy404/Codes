#include <stdio.h>
int main(){
//    int marks;
//    scanf("%d", &marks);

//    for(Initialization; Condition; Increament/Decreament)

    for(int i=100; i>=1; i--){
        if(i%2!=0) printf("%d is Odd\n", i);
        else printf("%d is Even\n", i);
    }
    return 0;
}

