#include <bits/stdc++.h>
using namespace std;
int value[1000];
int weight[1000];
int n;

int call(int i, int w){
    if(i>=n) return 0;

    int ans1, ans2;

    if(weight[i]<=w) ans1 = value[i]+call(i+1, w-weight[i]);
    else ans2 = call(i+1, w);

    ans2 = call(i+1, w);

    int ans = max(ans1, ans2);

    return ans;

}

int main(){
    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter capacity: ";
    int w; cin>>w;

    for(int i=0; i<n; i++){
        cin>>value[i]>>weight[i];
    }

    int ans = call(0, w);
    cout<<ans<<endl;

    return 0;
}
