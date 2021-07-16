    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n; cin >> n; 
		vector<int> v; 
		for (int i = 1; i <= n / 2; i++) v.push_back(2*i), v.push_back(2*i - 1);
		if (n % 2 == 1) { 
			v.push_back(n); 
			swap(v[n-1], v[n-2]); 
		}
		for (auto i : v) cout << i << " "; 
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
