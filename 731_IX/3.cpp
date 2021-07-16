    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int cnt, na, nb; 
		cin >> cnt >> na >> nb; 
		vector<int> a(na), b(nb), ans; 
		for (auto &i : a) cin >> i; 
		for (auto &i : b) cin >> i; 
		int j = 0; 
		for (int i = 0; i < nb; i++) { 
			while (j < na && cnt < b[i]) {
				if (a[j] == 0) cnt++; 
				if (a[j] > cnt) { 
					cout << "-1\n"; 
					return; 
				}
				ans.push_back(a[j]); 
				j++; 
			}
			
			if (cnt < b[i]) { 
				cout << "-1\n"; 
				return; 
			}
			if (b[i] == 0) cnt++; 
			ans.push_back(b[i]); 
		}
		for (int k = j; k < na; k++) {
			if (cnt < a[k]) { 
				cout << "-1\n"; 
				return; 
			}
			if (a[k] == 0) cnt++; 
			ans.push_back(a[k]); 
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
