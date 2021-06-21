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

int main()
{

    return 0;
}
