#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans = 0;
    while(n--){
        double x, y, avg=0;
        cin>>x>>y;
        avg = x/y;
        double avg2 = y/x;
        if(x>y){
            if(avg>=1.6 && avg<=1.7){
                ans++;
                continue;
            }
        }
        else{
            if(avg2>=1.6 && avg2<=1.7){
            ans++;
            }
        }


    }
    cout<<ans<<endl;

    return 0;
}
