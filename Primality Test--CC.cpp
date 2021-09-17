#include <bits/stdc++.h>
using namespace std;
//int main(){
//    int t; cin>>t;
//    while(t--){
//        int x, cnt=0; cin>>x;
//        for(int i=2; i<=sqrt(x); i++){
//            if(x%i==0) cnt++;
//        }
//        if(x==1) cout<<"no"<<endl;
//        else if(cnt>=1) cout<<"no"<<endl;
//        else cout<<"yes"<<endl;
//    }
//    return 0;
//}

vector<int>v;
bool mark[100000+7];

void Sieve(int x){
    mark[1] = true;
    for(int i=4; i<=x; i+=2){
        mark[i] = true;
    }

    for(int i=3; i<=sqrt(x); i+=2){
        if(mark[i]!=true){
            for(int j= i*i; j<=x; j+=i){
                mark[j] = true;
            }
        }
    }
    for(int i=1; i<=x; i++){
        if(mark[i]!=true){
            v.push_back(i);
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        Sieve(n);

        auto lb = lower_bound(v.begin(), v.end(), n);
        int idx = (lb-v.begin());
        if(v[idx]==n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

