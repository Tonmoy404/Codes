#include<stdio.h>
int main()
{
    int a[]= {7,21,-14};
    int i,j,size=3;

    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {

            if(a[j] > a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }

    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;

}
