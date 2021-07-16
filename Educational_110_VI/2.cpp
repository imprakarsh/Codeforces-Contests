
    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int n; cin >> n; 
		deque<int> v; 
		for (int i = 0; i < n; i++) { 
			int a; cin >> a; 
			if (a % 2 == 0) { 
				v.push_front(a); 
			}
			else v.push_back(a); 
		}
		int cnt = 0; 
		for (int i = 0; i < n; i++) { 
			for (int j = i + 1; j < n; j++) { 
				if (__gcd(v[i], 2*v[j]) > 1) cnt++; 
			}
		}
		cout << cnt << '\n'; 
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
