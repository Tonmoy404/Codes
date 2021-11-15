#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        string s, t=""; cin>>s;
        t = s;
        sort(s.begin(), s.end());
        int idx = 0;
        bool flag = true;
        cout<<s[0]<<" ";
        for(int i=0; i<t.size(); i++){
            if(flag==true){
                if(s[0]==t[i]){
                    flag = false;
                    continue;
                }
            }

            cout<<t[i];
        }
        cout<<endl;

    }

    return 0;
}
