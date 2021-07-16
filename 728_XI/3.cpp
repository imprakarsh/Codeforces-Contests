    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n; cin >> n; 
		int sm = 0;  
		vector<int> v(n); 
		for (int &i : v) cin >> i; 
		sort(v.begin(), v.end());
		
		int old = 0, ne = 0; 
		for (int i = 1; i < n; i++) { 
			 ne = i * (v[i] - v[i-1]) + old; 
			 old = ne; 
			 sm += ne; 
		}
		
		cout << -1 * sm + v[n-1]<< '\n'; 
		
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
