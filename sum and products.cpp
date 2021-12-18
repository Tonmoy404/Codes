#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int ok = t;
    int ans = 0;
    while(t--){

        int n = ok;
        int ab = n;
        int digit=0, sum=0, prod=1;

        while(n>0)
        {
            digit=n%10;
            sum+=digit;
            prod*=digit;
            n=n/10;
        }

        if(sum==prod) ans+=ab;
    }

    printf("%d\n", ans);

    return 0;
}

