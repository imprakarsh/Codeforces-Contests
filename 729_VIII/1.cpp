#include <bits/stdc++.h>
#define int long long 
using namespace std;

void solve() { 
	int n; cin >> n; 
	int co = 0, ce = 0; 
	for (int i = 0; i < 2 * n; i++) { 
		int a; cin >> a; 
		if (a % 2 == 0) ce++; 
		else co++; 
	}
	if (co == ce) cout << "Yes\n" ; 
	else cout << "No\n"; 
	
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
