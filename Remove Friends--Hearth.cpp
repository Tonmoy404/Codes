#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node *next;
};

node *root = NULL;

void push(int data){
    if(root==NULL){
        root = new node();
        root->val = data;
        root->next = NULL;
        return;
    }
    node *current = root;
    while(current->next != NULL){
        current = current->next;
    }

    node *newNode = new node();
    newNode->val = data;
    newNode->next = NULL;
    current->next = newNode;
}

void print()
{
    node *current = root;
    while(current->next != NULL){
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<current->val<<endl;

}
int main(){

    return 0;
}
