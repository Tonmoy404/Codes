#include <stdio.h>
int main() {

    int n1=0,n2=1,number;
    printf("Enter the number of elements:");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);
    for(int i=2 ;i<number ;++i)   {
    int n3=n1+n2;
    printf(" %d",n3);
    n1=n2;
    n2=n3;
    }

    //eita koro *--* eita easy
  return 0;
}
