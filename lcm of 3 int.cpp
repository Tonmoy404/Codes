#include <bits/stdc++.h>
#define max3(a,b,c) max(a, max(b,c))
using namespace std;
int main(){
    cout<<"Enter 3 integers: ";
    int x, y, z;
    cin>>x>>y>>z;

    int product = x*y*z;
    int greatest = max3(x,y,z);

    for(int i=greatest; i<=product; i+=greatest){
        if(i%x==0 && i%y==0 && i%z==0){
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}
