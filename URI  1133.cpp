#import "bits/stdc++.h"
using namespace std;

void print(int x, int y){
    if(x>y){
        for(int i=y+1; i<x; i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }
    else{
        for(int i=x+1; i<y; i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }

}

int main(){
    int x, y; cin>>x>>y;
    print(x, y);

}
