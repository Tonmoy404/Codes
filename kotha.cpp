#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll tt ;
    cin >> tt ;
    while(tt--)
    {
        ll n, mx = INT_MAX ;
        cin >> n ;
        vector < ll > v;
        for(int i = 0; i < n; i++)
        {
            int x ;
            cin >> x ;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        for(int i = 1; i < n; i++)
        {
            mx = min(mx, abs(v[i] - v[i-1]));
        }
        cout << mx << endl;
    }
    return 0;

}

