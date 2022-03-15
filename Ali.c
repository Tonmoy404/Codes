#include <stdio.h>
 int main(){

     int x,y;
         scanf("%d %d", &x, &y);

         if(x==y){
            printf("0\n");
         }

         if(x>y){
             for(y+1; y < x; y = y+1){
                 if(y%5 == 2 || y%5 == 3){
                 printf("%d\n", y);
                 }
             }
         }

         else if(x<y){
             for(x+1; x < y; x = x+1){
                 if(x%5 == 2 || x%5 == 3){
                    printf("%d\n", x);
                 }
             }
         }

     return 0;
 }
