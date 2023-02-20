#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    int ans = a, remain = 0;

    if(b>a){
        cout<<a<<endl;
    }
    else{
        while(a >= b){
            ans += a/b;
            remain = a%b;
            a/=b;
            a = a+remain;
        }

        cout<<ans<<endl;
    }
    return 0;
}
