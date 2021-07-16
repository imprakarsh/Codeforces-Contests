#include <bits/stdc++.h>
#define int long long 
using namespace std;

void solve() { 
	int n; cin >> n; 
	int sm = 0; 
	for (int i = 0; i < n; i++) { 
		int a; cin >> a; 
		sm += a; 
	}
	cout << (sm % n) * ( n - (sm % n)) << '\n';  
	
}
int32_t main(){
	iostream::sync_with_stdio(false); 
	cin.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int tc = 1; 
    cin >> tc; 
	while (tc--) 
	solve(); 			
	return 0; 
	
}
