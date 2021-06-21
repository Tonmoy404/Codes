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
#define mx 1000007
int tree[4*mx];
int arr[mx];


void init(int node, int b, int e){
    if(b==e){
        tree[node] = arr[b];
        return ;
    }

    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
}

int query(int node, int b, int e, int i, int j){
    if(i>e || j<b) return 0;
    if(b>=i && e<=j) return tree[node];

    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int q1 = query(left, b, mid, i, j);
    int q2 = query(right, mid+1, e, i, j);
    return q1 + q2;
}

void update(int node, int b, int e, int i, int val){
    if(i>e || b>i) return ;
    if(b==e){
        tree[node] = val;
        return ;
    }

    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left, b, mid, i, val);
    update(right, mid+1, e, i, val);
    tree[node] = tree[left] + tree[right];
}

int main()
{
    arr[0] = 0;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    init(1, 1, n);

    cout<<"Printing values: ";
    for(int i=1; i<=30; i++){
        cout<<tree[i]<<" ";
    }

    int q; cin>>q;
    while(q--){
        int type; cin>>type;
        if(type==1){
            int i, j; cin>>i>>j;
            cout<<query(1, 1, n, i, j)<<endl;


        }
        else{
            int idx, val;
            cin>>idx>>val;
            update(1, 1, n, idx, val);
            cout<<"Printing values: ";
            for(int i=1; i<=30; i++){
                cout<<tree[i]<<" ";
            }

        }
    }
    return Accepted;
}

