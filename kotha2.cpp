#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n, sum1=0, sum2=0, sum3=0; cin >> n;
	 int a[100] [100];

	 for(int i=0; i<n; i++){

	 	for(int j=0; j<3; j++){
	 		cin >> a[i][j];
		 }
		 sum1 += a[i][1];
		 sum2 += a[i][2];
		 sum3 += a[i][3];
	 }
	 if(sum1 == 0 && sum2 == 0 && sum3 == 0) cout << "YES" << endl;
	 else cout << "NO" << endl;



	return 0;
}
