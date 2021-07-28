#include <bits/stdc++.h>
using namespace std;
int const mx = 101;
int arr[mx];
int top = -1;

void push(int data){
    if(top==mx-1){
        cout<<"OverFlow"<<endl;
        return;
    }
    arr[++top] = data;
}

int pop(){
    if(top==-1){
        cout<<"UnderFlow"<<endl;
        return 0;
    }
    int temp = arr[top];
    --top;
    return temp;
}

void print(){
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        push(x);
    }
    print();
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    return 0;
}
