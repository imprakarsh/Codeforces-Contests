    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n, a, b; 
		cin >> n >> a >> b; 
		int st = 1; 
		if (b == 1) {
			cout << "Yes\n"; 
			return ; 
		}
		while (st <= n) { 
			if (st % b == n % b) { 
				cout << "Yes\n"; 
				return ; 
			}
			st = st * a; 
			if (a == 1) break; 
		}
		cout << "No\n";   
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
