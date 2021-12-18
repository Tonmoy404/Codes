#include <stdio.h>
#include <math.h>

int call(int n)
{
    if(n == 1)
      return 1;

    int result = 0;


    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (i == (n / i))
                result += i;
            else
                result += (i + n/i);
        }
    }


    return (result + n + 1);
}


int main()
{
    int ans = 0;
    while(1){
        int n;
        scanf("%d", &n);
        if(n<0) break;

        ans+=call(n);


    }

    printf("The sum of factors sum is %d\n", ans);

    return 0;
}
