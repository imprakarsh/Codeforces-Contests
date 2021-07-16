    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n, m; cin >> n >> m; 
		string ans; 
		//~ cout << n << " " << m << endl; 
		vector<string> v(2*n - 1); 
		for (int i = 0; i < 2*n - 1; i++) {
			string s; cin>> s; 
			//~ cout << s << endl; 
			v[i] = s; 
		}
		//~ cout << "hello\n"; 
		for (int j = 0; j < m; j++) { 
			map<char, int> mp; 
			for (int i = 0; i < 2 * n - 1; i++) { 
				  mp[v[i][j]]++; 
			  }
			  for (auto i : mp) {
				  if (i.second % 2 == 1) {
					  ans += i.first; 
				  }
			  }
		  }		  cout << ans << '\n'; 
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
