#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int minMike = INT_MAX;
        int minJoe = INT_MAX;
        int mike = 0, joe = 0;

        vector<long long>v;

        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }

        if(n%2!=0){
            cout<<"Mike"<<endl;
            continue;
        }
        else{
            for(int i=0; i<v.size()-1; i+=2){
                if(minMike > v[i]){
                minMike = v[i];
                mike = i;
                }

                if(minJoe > v[i+1]){
                minJoe = v[i+1];
                joe = i+1;
                }
            }

            if(minMike==minJoe){
                if(mike < joe){
                    cout<<"Joe"<<endl;
                }
                else{
                    cout<<"Mike"<<endl;
                }
            }
            else{
                if(minMike < minJoe){
                    cout<<"Joe"<<endl;
                }
                else{
                    cout<<"Mike"<<endl;
                }
            }
        }
    }

    return 0;
}
