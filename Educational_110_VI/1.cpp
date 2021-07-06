    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
     
    	vector<int> v(4); 
    	for (auto &i : v) cin >> i; 
    	if (v[1] > v[0]) swap(v[1], v[0]); 
    	if (v[3] > v[2]) swap(v[2], v[3]); 
    	int mx = 0, smx = 0; 
    	for (int i = 0; i < 4; i++) { 
    		if (v[i] >= mx) smx = mx, mx = v[i];
    		else if (v[i] > smx) smx = v[i];  
    	}
    	if (v[0] != mx && v[0] != smx) { 
    		cout << "No\n"; 
    		return; 
    	} 
    	if (v[2] != mx && v[2] != smx) { 
    		cout << "No\n"; 
    		return; 
    	} 
    	cout << "YES\n"; 
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
