#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x, cnt=0; cin>>x;
    while(x/2 != 0){
        if(x%2!=0){
            cnt++;
        }

        x/=2;
    }
    cout<<cnt+1<<endl;
}
