    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
  void solve() { 
     int n; cin >> n; 
     vector<int> kt(n); 
     for (auto &i : kt) cin >> i; 
     vector<int> v = {1, 2, 1, 1, 2, 1}; 
     cout << n/2 * 6; 
     for (int i = 1; i <= n/2; i++) {
		 for (auto j : v) { 
			 cout << j << " " << 2 * i - 1 << " " << 2 * i << '\n'; 
		 }
	 }
	 
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
