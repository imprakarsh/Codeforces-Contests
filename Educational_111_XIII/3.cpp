    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
  bool check(vector<int> v) {
	int n = v.size(); 
	for(int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if ((v[j] >= v[i] && v[j] <= v[k]) || 
						(v[j]<= v[i] && v[k] <= v[j])) return true; 
			}
		}
	}
	return false; 
}
  void solve() { 
     int n; cin >> n; 
     vector<int> given(n); 
     for (auto &i : given) cin >> i; 
     int cnt = 0; 
     // going into subarrays
     for (int left = 0; left < n; left++) {
			vector<int> temp; 	
			temp.push_back(given[left]); 
		 for (int right = left + 1; right < n; right++) {
				temp.push_back(given[right]);
				if (check(temp)) break; 
				cnt++; 
			}	
		}
		cout << cnt + n<< '\n'; 
	 
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
