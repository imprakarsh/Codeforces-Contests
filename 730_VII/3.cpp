#include <bits/stdc++.h>
#define int long long 
using namespace std;

void solve() { 
	string s; cin >> s; 
	int x[2] = {-1, -1}; 
	int ans = 0; 
	for (int i = 0; i < (int)s.size(); i++) { 
		int a = s[i] - '0'; 
		if (a == 0 || a == 1) { 
			x[(i%2)^a] = i; 
		}
		ans += i - min(x[0], x[1]); 
	 }
	 cout << ans << endl; 
	
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
