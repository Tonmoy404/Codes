#import "bits/stdc++.h"
using namespace std;

int Stack[100];
int total = 0;
int top = -1;

void push(int value){
    if(total>100){
        return;
    }
    Stack[total] = value;
    top = total;
    total++;
}

int pop(){
    if(top==-1){
        cout<<"R kisu nai re bhai/bon"<<endl;
        return 0;
    }
    int temp = Stack[top];
    top--;
    return temp;

}

void print(){
    for(int i=top; i>=0; i--){
        cout<<Stack[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        push(x);
    }
    print();
    cout<<pop()<<endl;
    print();

    return 0;
}
