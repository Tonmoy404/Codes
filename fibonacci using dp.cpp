#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    else if(arr[n]==-1){
        arr[n] = fib(n-1) + fib(n-2);
    }

    return arr[n];

}


int main(){

    cout<<"Enter number: ";
    int n;
    cin>>n;

    memset(arr, -1, sizeof(arr));

    int ans = fib(n);

    cout<<"Fibonacci of "<<n<<" -> "<<ans<<endl;

    return 0;
}
