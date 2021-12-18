#include <bits/stdc++.h>
#define ii pair <int,int>
using namespace std;


int main() {
    int n;
    cin>>n;

    ii numbers[n+7];
    int mx = 0;

    for(int i=0; i<n; i++) {
        int number;
        cin>>number;
        numbers[i] = ii(0, number);
        mx = max(mx, number);
    }

    for(int i=0; i<n; i++) {
        numbers[i].first = __gcd(mx, numbers[i].second);
    }

    sort(numbers, numbers+n);

    int gcd = mx, ans = mx;

    for(int i=n-2; i>=0; i--) {
        cout<<numbers[i].first<<" "<<numbers[i].second<<endl;
        gcd = __gcd(gcd, numbers[i].second);
        ans+=gcd;
    }

    cout<<ans<<endl;
}
