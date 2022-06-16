#include <bits/stdc++.h>
using namespace std;

int palin(int n, int m){

    if(n==0){
        return m;
    }

    m = (m*10) + (n%10);
    return palin(n/10, m);


}

int main(){
    int num1;
    cin>>num1;

    int num2 = palin(num1, 0);

    if(num1==num2) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
