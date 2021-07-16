    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		string s; cin >> s; 
		int l = -1, r; 
		for (int i = 0; i < (int)s.size(); i++) if (s[i] == 'a') {
			l = i; 
			break; 
		}
		if (l == -1) { 
			cout << "NO\n"; 
			return ; 
		}
		r = l; 
		
		int n = s.size(); 
		for (int i = 1; i < n; i++) { 
			char c = 'a' + i; 
			 if (l > 0 && s[l-1] == c) { 
				 l = l - 1; 
			 }
			 else if (r < n - 1 && s[r + 1] == c) { 
				 r++; 
			 }
			 else {
				 cout << "NO\n"; 
				 return; 
			 }
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
