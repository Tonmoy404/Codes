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
#define     cyes            cout<<"YES"<<endl;
#define     cno             cout<<"NO"<<endl;
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

vector<ii>graph[100000+7];
int dis[100000+7];

const int neg = INT_MIN;
int in[100000], out[100000];
int tme = 1;

void dfs(int node){
    if(in[node]==0){
        in[node] = tme;
        ++tme;
    }

    for(int i=0; i<graph[node].size(); i++){
        int u = graph[node][i].ff;
        int w = graph[node][i].ss;

        if(in[u]==0){
            dis[u] = w + dis[node];
            dfs(u);
        }
    }

    out[node] = tme;
    ++tme;
}


int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int node;
        cin>>node;

        for(int i=0; i<node-1; i++){
            int u, v, w;
            cin>>u>>v>>w;
            graph[u].pb(ii(v,w));
            graph[v].pb(ii(u,w));
        }

        memset(in, 0, sizeof(in));
        mem(dis, 0);
        dfs(0);
//
//        for(int i=0; i<node; i++){
//            cout<<"Intime of node "<<i<<" is "<<in[i]<<endl;
//            cout<<"Outtime of node "<<i<<" is "<<out[i]<<endl;
//        }

        int ans = INT_MIN, idx=0;
        for(int i=0; i<node; i++){
            if(ans<dis[i]){
                ans = dis[i];
                idx = i;
            }
        }

        memset(dis, 0, sizeof(dis));
        memset(in, 0, sizeof(in));
        memset(out, 0, sizeof(out));

        dfs(idx);

        int ans2= INT_MIN, idxx=0;
        for(int i=0; i<node; i++){
            if(ans2<dis[i]){
                ans2 = dis[i];
                idxx = i;
            }
        }

        cout<<"Case "<<i<<": "<<ans2<<endl;

        for(int i=0; i<100000; i++){
            graph[i].clear();
        }

    }


    return 0;
}


