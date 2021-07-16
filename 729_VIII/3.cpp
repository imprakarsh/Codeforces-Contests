    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
    const int M = (int) 1e9 + 7; 
    void solve() { 
		int n; cin >> n; 
		int lc = 1; 
		int left = n/ lc; 
		int right; 
		int ans = 0; 
		for (int i = 2; i < 100; i++) { 
			right = n/ ((lc*i)/__gcd(lc, i)); 
			ans = (ans + i*(left - right)) % M; 
			left = right; 
			lc = ((lc*i)/__gcd(lc, i)); 
			if (left == 0) break; 
		}
		cout << ans << '\n'; 
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
