#include <bits/stdc++.h>
#define     max3(a, b, c)    max(a,max(b,c))
using namespace std;

string s, t;
int arr[100][100];


int lcs(int i, int j){
    if(i==s.size() || j==t.size()){
        return 0;
    }

    if(arr[i][j] != -1){
        return arr[i][j];
    }

    int ans = 0;
    if(s[i]==t[j]){
        ans = 1 + lcs(i+1, j+1);
    }

    else{
        int val = lcs(i+1, j);
        int val2 = lcs(i, j+1);
        ans = max(val, val2);
    }

    arr[i][j] = ans;

    return arr[i][j];
}


int main(){

    cin>>s>>t;
    memset(arr, -1, sizeof(arr));

    int ans = lcs(0, 0);

    cout<<ans<<endl;

    return 0;
}
