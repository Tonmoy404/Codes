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
#define     ii_minQueue     priority_queue <ii,vector<ii>,greater<ii> >
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


ll inf = 100000000007;
vector <ii> graph[100000+7];
ll dis[100000+7];
int par[100000+7];
vector <int> v;

void call(ll u){
     dis[u] = 0;


     priority_queue <ii> q;
     q.push(ii(0, u));

     while(!q.empty()){
        int u = q.top().ss;
        q.pop();

        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i].ff;
            int w = graph[u][i].ss;

            if(dis[u]+w < dis[v]){
                dis[v] = dis[u] + w;
                par[v] = u;
                q.push(ii(-w, v));
            }
        }
     }
}

void path(ll x){
    ll u = par[x];
    v.pb(x);
    if(u==-1) return;
    path(u);
}

int main(){
    for(int i=0; i<100007; i++){
        dis[i] = inf;
        par[i] = -1;
    }

    int node, edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int u, v, w;
        cin>>u>>v>>w;
        graph[u].pb(ii(v,w));
        graph[v].pb(ii(u,w));
    }
//    par[1] = par[node] = -1;
    call(1);

    path(node);

    reverse(v.begin(), v.end());
    if(v.size()==1) cout<<"-1"<<endl;
    else{
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
    }
    return Accepted;
}
