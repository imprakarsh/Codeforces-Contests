
    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n; cin >> n; 
		vector<int> v(n), ans; 
		for (auto &i : v) cin >> i; 
		ans.push_back(0); 
		for (int i = 1; i < n ; i++) { 
			if ((v[i] & v[i - 1]) == v[i - 1]) ans.push_back(0);
			else {
				int x = 0; 
				for (int j = 0; j < 30; j++) { 
					if ( (v[i-1] & (1 << j)) && !(v[i] & (1 << j))) {
						x |= (1 << j); 
					}
				}
				ans.push_back(x); 
				v[i] |= x;
			}
		}
		for (auto i : ans) cout << i << " "; 
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
