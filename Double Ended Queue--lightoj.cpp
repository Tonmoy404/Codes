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


int main(){
    fast

    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        int n, k, in=0;
        cin>>n>>k;

        cout<<"Case "<<i<<":"<<endl;

//        stack<int>st1, st2;
        deque<int>dq;
        while(k--){
            string s;
            cin>>s;
//
//            if(s[2]!='p'){
//                cin>>x;
//            }
//
//            if(s[2]=='p' && in==0){
//                cout<<"The queue is empty"<<endl;
//                continue;
//            }
//            if(s[3]=='h' && in==n){
//                cout<<"The queue is full"<<endl;
//                continue;
//            }
//            else{
//                if(s[2]=='s' && s[4]=='L'){
//                    st1.push(x);
//                    cout<<"Pushed in left: "<<x<<endl;
//                    in++;
//                }
//                else if(s[2]=='s' && s[4]=='R'){
//                    st2.push(x);
//                    cout<<"Pushed in right: "<<x<<endl;
//                    ++in;
//                }
//                else if(s[2]=='p' && s[3]=='L'){
//                    cout<<"Popped from left: "<<st1.top()<<endl;
//                    st1.pop();
//                    in--;
//                }
//                else{
//                    cout<<"Popped from right: "<<st2.top()<<endl;
//                    st2.pop();
//                    in--;
//                }
//            }
//        }
            if((s=="pushLeft" || s=="pushRight") && dq.size()>=n){
                int x; cin>>x;
                cout<<"The queue is full"<<endl;
                continue;
            }
            else if((s=="popLeft" || s=="popRight") && dq.size()==0){
                cout<<"The queue is empty"<<endl;
                continue;
            }
            else if(s=="pushLeft"){
                int x; cin>>x;
                cout<<"Pushed in left: "<<x<<endl;
                dq.push_front(x);
            }
            else if(s=="pushRight"){
                int x; cin>>x;
                cout<<"Pushed in right: "<<x<<endl;
                dq.push_back(x);
            }
            else if(s=="popLeft"){
                int ans = dq.front();
                cout<<"Popped from left: "<<ans<<endl;
                dq.pop_front();
            }
            else if(s=="popRight"){
                int ans = dq.back();
                cout<<"Popped from right: "<<ans<<endl;
                dq.pop_back();
            }
        }
    }

    return 0;

}
