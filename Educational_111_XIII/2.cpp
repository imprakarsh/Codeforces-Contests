    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
  void solve() { 
    //~ int n, a, b; cin >> n >> a >> b; 
    //~ string s; cin >> s; 
    //~ if (b >= 0) {
		//~ cout << n * a + n * b << '\n'; 
		//~ return ; 
	//~ }
	//~ vector<int> v(2, 0); 
	//~ v[s[0] - '0']++; 
	//~ int m = unique(s.begin(), s.end()) - s.begin();

	//~ for (int i = 1; i < n; i++) {
		//~ if (s[i] != s[i-1]) v[s[i] - '0']++; 
	//~ }
	//~ cout << n * a + (min(v[0], v[1]) + 1) * b << '\n'; 
	string s; cin >> s; 
	cout << s << endl; 
	auto it = unique(s.begin(), s.end());
	s.resize(distance(s.begin(), it));  
	int d = it - s.begin(); 
	cout << d << endl; 
	cout << s << endl; 
	 
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
