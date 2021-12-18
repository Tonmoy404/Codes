#include<stdio.h>
int main()
{
    int n,s=0,p=1,d;
    printf("Enter any number : ");
    scanf("%d",n);
    for(;n>0;)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    printf("Sum of digits = %d product of digits =%d\n",s,p);
    if(s==p)
        printf("This number is a spy number");
    else
        printf("This number is not a spy number");

    return 0;
}
