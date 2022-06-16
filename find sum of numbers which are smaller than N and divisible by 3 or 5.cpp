/***

    time complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ans1 = n/3;
    int ans2 = n/5;

    ans1 = (ans1*(ans1+1))/2;
    ans2 = (ans2*(ans2+1))/2;

    ans1*=3;
    ans2*=5;

    cout<<ans1 + ans2<<endl;

    return 0;
}
