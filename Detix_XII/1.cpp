    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n, m; cin >> n >> m; 
		string s; cin >> s; 

		string Old , New = s; 
		while (Old != New && m > 0) { 
			Old = New; 
			vector<int> v; 
			for (int i = 1; i < n - 1; i++) {
				if (s[i-1] != s[i+1]) v.push_back(i); 
			}
			if (n > 1 && s[0] != s[1]) v.push_back(0); 
			if (n > 1 && s[n-1] != s[n-2]) v.push_back(n-1); 
			for (auto i : v) s[i] = '1'; 
			New = s;
			m--;  
		}
		cout << New << '\n';   
		
		
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
