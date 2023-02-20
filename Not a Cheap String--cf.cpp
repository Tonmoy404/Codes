#include <bits/stdc++.h>
#define     fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     ll              long long
#define     ull             unsigned long long
#define     db              double
#define     ull             unsigned long long
#define     MIN             INT_MIN
#define     MAX             INT_MAX
#define     all(x)          (x).begin(), (x).end()
#define     ii              pair <int,int>
#define     ic              pair <int,char>
#define     iii             pair <int,ii>
#define     pll             pair <ll,ll>
#define     plll            pair <ll,pll>
#define     ff              first
#define     ss              second
#define     cyes            cout<<"YES"<<endl;
#define     cno             cout<<"NO"<<endl;
#define     cone            cout<<"-1"<<endl
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


int main(){
    fast

    int t;
    cin>>t;

    while(t--){

        string s;
        int cost;
        cin>>s>>cost;

        vector<ic>v, vv;

        int total_cost = 0;

        for(int i=0; i<s.size(); i++){
            int ans = s[i]-96;
            v.pb(ic(ans, s[i]));
            vv.pb(ic(ans, s[i]));
            total_cost += ans;
        }

        int tc = total_cost;
//
////        v = vv;
//
//        for(auto x: vv){
//            cout<<x.ff<<" "<<x.ss<<endl;
//        }

        map<int, bool>mp1, mp2;

        sort(vv.begin(), vv.end());

//        if(vv[0].ff > cost){
//            cout<<" "<<endl;
//            continue;
//        }

        for(int i=0; i<vv.size(); i++){
            if(total_cost <= cost){
                break;
            }

            total_cost -= vv[i].ff;
            mp1[i] = 1;
        }

        sort(v.rbegin(), v.rend());

        for(int i=0; i<v.size(); i++){
            if(tc <= cost){
                break;
            }

            tc -= v[i].ff;
            mp2[i] = 1;
        }

        int first = cost - total_cost;
        int second = cost - tc;

        if(first < second){
            for(int i=0; i<vv.size(); i++){
                if(!mp1[i]){
                    cout<<vv[i].ss;
                }

            }
            cout<<endl;
        }
        else{
            for(int i=0; i<v.size(); i++){
                if(!mp2[i]){
                    cout<<v[i].ss;
                }
            }
            cout<<endl;
        }

    }

    return 0;
}
