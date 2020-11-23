#include <bits/stdc++.h>
#define int			 long long
#define pb 			push_back
#define ppb 			pop_back
#define all(x)			(x).begin(),(x).end()
#define w(x) 		int x; cin>>x; while(x--) 
#define fr 			first 
#define sc			second
#define sz(x)		 	(int) ( (x).size() )
#define rep(i,a,b) 		for ( int i = a; i< b ;i++) 
#define pii			pair<int,int>
using namespace std;
int INF = 1e18+1 ;
const int64_t M= 1e18 ;
const int N= 2e5+19;
void cpc(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(NULL);
}


void solve() {
	int n; cin >> n;
	if ( n==1 ) cout << "0" << endl;
	else if ( n==2 ) cout << "1" << endl;
	else if ( n==3 ) cout << "2" << endl;
	else if ( n % 2 ==0 ) cout << "2 "<< endl;
	else cout << "3" << endl; 
}
	


int32_t main(){

	cpc();
	w(t)
	solve();
	return 0;
	 
}
/* 
	* int overflow, array bounds ( check inside fns, maybe accumulate ) 
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
 
