//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//
//    int t;
//    cin>>t;
//
//    while(t--){
//
//        string s, t;
//        cin>>s>>t;
//
//        bool flag = false;
//
//        int j = s.size() - 1;
//
//        for(int i= t.size()-1; i>=0; i--){
//            if(t[i] != s[j]){
//                cout<<"nao encaixa"<<endl;
//                flag = true;
//                break;
//            }
//            else{
//                j--;
//            }
//        }
//        if(flag == false){
//            cout<<"encaixa"<<endl;
//        }
//
//
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s, t;

    while(n--){
        cin>>s>>t;

        int j = s.size() - 1;
        for(int i=t.size() -1; i>=0; i--){
            if(t[i] != s[j]){
                cout<<"nao encaixa"<<endl;
                break;
            }
            else{
                j--;
            }
        }

        cout<<"encaixa"<<endl;
    }





    return 0;
}

