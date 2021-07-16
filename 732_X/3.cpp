    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n; cin >> n; 
		vector<int> giv(n), v(n); 
		for (auto &i : giv) cin >> i; 
		v = giv; 
		sort(v.begin(), v.end()); 
		map<int, pair<int, int>> mp; 
		map<int, pair<int, int>> diff;
		
		for (int i = 0; i < n; i++) { 
			if (i % 2 == 0) { 
				mp[v[i]].first ++; 
			}
			else mp[v[i]].second ++; 
		}
		
		for (int i = 0; i < n; i++) { 
			if (i % 2 == 0) { 
				diff[giv[i]].first++; 
			}
			else diff[giv[i]].second++; 
		}
		if (mp == diff) cout << "YES\n"; 
		else cout << "NO\n"; 
		 
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
