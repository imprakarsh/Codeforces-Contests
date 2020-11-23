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
	int n, k; cin >> n >> k; 
	string s; cin >> s; 
	while(k--) {
		int a, b; cin >> a>> b; 
		a--,b--;
		int count = 1; 
		int i = a-1; 
		while ( i >=0 ) {
			if (s[i] == s[a] ) { count = 0; break; }
			i--;
		}
		int j = b+1; 
		while ( j<= n-1 ) {
			if ( s[j] == s[b] ) { count = 0; break; }
			j++;
		}
		if ( count ) cout << "NO" << endl; 
		else cout << "YES"<< endl;
	}
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
 
