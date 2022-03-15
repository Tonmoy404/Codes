#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    cin>>a>>b;

    if(a>b){
        swap(a,b);
    }

    for(int i=a+1; i<b; i++){
        if(i%5==3 || i%5==2){
            cout<<i<<endl;
        }
    }

//    int a,b,i,temp;
//    scanf("%d%d",&a,&b);
//    if(a>b){temp=a;a=b;b=temp;}
//    a++;
//    for(i=a; i<b; i++){
//       if (i%5==2||i%5==3){
//        printf("%d\n",i);
//       }
//    }

    return 0;
}
