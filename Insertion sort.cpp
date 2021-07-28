#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i=1; i<5; i++){
        int x = arr[i];
        int  j = i-1;
        while(j>=0 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
