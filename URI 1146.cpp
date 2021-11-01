#import "bits/stdc++.h"
using namespace std;

void tonmoy(){
    int x;
    while(scanf("%d", &x)){
        if(x==0) break;
        for(int i=1; i<x; i++){
            cout<<i<<" ";
        }

        cout<<x<<endl;
    }

}

int main(){
    tonmoy();

    return 0;
}
