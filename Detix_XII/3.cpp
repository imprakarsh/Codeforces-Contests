    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
  void solve() { 
     int n; cin >> n; 
     vector<int> v;  
     for (int i = 0; i < n; i++) {
		 int a; cin >> a; 
		 if (v.empty() || a == 1) v.push_back(a);
		 else {
			 while (v.back() + 1 != a) v.pop_back();
			 v[(int)v.size() -1] = a; 
		 }
		 for (int i = 0; i < (int)v.size() - 1; i++) cout << v[i] << "."; 
		 cout << v.back() << '\n'; 
	 }
	 
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
