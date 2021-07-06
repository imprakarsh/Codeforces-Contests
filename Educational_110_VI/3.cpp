#include <bits/stdc++.h>
#define int long long 
using namespace std;

void solve() { 
	int n; cin >> n; 
	string s; cin >> s; 
	map<pair<int, int>, int> mp; 
	int df = 0, kf = 0; 
	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == 'D') df++; 
		else kf++; 
		int GCD = __gcd(df, kf); 
		mp[{df/GCD, kf/GCD}]++; 
		cout <<  mp[{df/GCD, kf/GCD}] << " "; 
	} 
	cout << '\n'; 
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
