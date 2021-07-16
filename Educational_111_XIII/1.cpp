    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int sm; cin >> sm; 
		int cnt = 1, sum = 1; 
		int steps = 1; 
		while (sum < sm) {
			cnt += 2; 
			steps++; 
			sum += cnt; 
		}
		cout << steps << '\n'; 
	
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
