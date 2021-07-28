#include <bits/stdc++.h>
#define     ll              long long
#define     ull             unsigned long long
#define     db              double
#define     ull             unsigned long long
#define     MIN             INT_MIN
#define     MAX             INT_MAX
#define     all(x)          (x).begin(), (x).end()
#define     ii              pair <int,int>
#define     iii             pair <int,ii>
#define     pll             pair <ll,ll>
#define     plll            pair <ll,pll>
#define     ff              first
#define     ss              second
#define     minQueue        priority_queue <int,vector<int>,greater<int> >
#define     maxQueue        priority_queue<int,vector<int>,less<int> >
#define     pb              push_back
#define     max3(a,b,c)     max(a, max(b,c))
#define     min3(a,b,c)     min(a, min(b,c))
#define     GCD(x,y)        __gcd((x), (y))
#define     LCM(x,y)        ((x / GCD((x), (y))) * y)
#define     mem(x,y)        memset((x), (y), sizeof (x));
#define     Case            int T; scanf("%d", &T); for(int cas = 1; cas <= T; ++cas)
#define     pf              printf
#define     sf              scanf
#define     Accepted        0
#define     log(x)          cout<<x<<endl
#define     logg(x,y)       cout<<x<<" "<<y<<endl
#define     powerOfTwo(x)   (x && !(x & (x - 1)))
#define     Iterator(type)  type <int> :: iterator
#define     mapIterator     map <int,int> :: iterator //it->ff it->ss
using namespace std;

/*----------------------Graph Moves----------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1}; int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
/*------------------------------------------------*/


/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

const int MAXN =1.5e7 + 10; // MAXN=1.5 * 10^7 +10
const double eps = (double)1e-8; // eps = 10^-8
const double PI = acos(-1.0);
inline bool eq(double a,double b){ return abs(b - a) < eps; }

inline double getdouble(){
    double x;
    scanf("%lf",&x);
    return x;
}
#define DB getdouble()

inline int getint(){
    int x;
    scanf("%d", &x);
    return x;
}
#define II getint()

inline long long getlonglong(){
    long long x;
    scanf("%lld", &x);
    return x;
}
#define LL getlonglong()

inline unsigned long long getunsignedlonglong(){
    unsigned long long x;
    scanf("%llu", &x);
    return x;
}
#define ULL getunsignedlonglong()

//*-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-*  *-* *-*  *-*  *-*  *-*  *-* *-*  *-*  *-*  *-*  *-*

struct node{
    int val;
    node *left, *right;
};

node *root = NULL;

void Insert(int data){
    if(root==NULL){
        root = new node();
        root->val = data;
        root->left = NULL;
        root->right = NULL;
        return;
    }

    ;
    node *current = root, *parent;

    while(current!=NULL){
        if(data < current->val){
            parent = current;
            current = current->left;
        }
        else{
            parent = current;
            current = current->right;
        }
    }

    if(data < parent->val){
        node *newNode = new node();
        newNode->val = data;
        newNode->left = NULL;
        newNode->right = NULL;
        parent->left = newNode;
    }
    else{
        node *newNode = new node();
        newNode->val = data;
        newNode->left = NULL;
        newNode->right = NULL;
        parent->right = newNode;
    }
}

void print(node *current){
    if(current==NULL){
        return;
    }

    cout<<current->val<<" ";
    print(current->left);
    print(current->right);

}

void delete_node(int data){
    node *current = root, *parent;
    while(current->val != data){
        if(data < current->val){
            parent = current;
            current = current->left;
        }
        else{
            parent = current;
            current = current->right;
        }
    }

    if(current->left ==NULL && current->right==NULL){
        if(data < parent->val){
            parent->left = NULL;
        }
        else parent->right = NULL;
    }

    else if(current->left != NULL && current->right !=NULL){
        node *temp_parent = current;
        node *temp = current->right;
        while(temp->left != NULL){
            temp_parent = temp;
            temp = temp->left;
        }
        current->val = temp->val;
        if(temp_parent==current) temp_parent->right = NULL;
        else temp_parent->left = NULL;
    }

    else{
        if(current->left == NULL) current = current->right;
        else if(current->right==NULL) current = current->left;

        if(parent->val > current->val) parent->left = current;
        else parent->right = current;
    }

}

int main(){
    cout<<"Enter number of elements: ";
    int n; cin>>n;
    cout<<"Enter values: ";
    while(n--){
        int x; cin>>x;
        Insert(x);
    }
    print(root);

    cout<<"Enter a value to be deleted: ";
    int q; cin>>q;
    delete_node(q);

    print(root);
    return Accepted;
}
