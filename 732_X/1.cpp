    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
			int n; cin >> n; 
			vector<int> va(n), vb(n), inc, dec; 
			int sma = 0, smb = 0; 
			for (auto &i : va) cin >> i, sma += i;  
			for (auto &i : vb) cin >> i, smb += i; 
				
			if (sma != smb) { 
				cout << "-1\n"; 
				return; 
			}
			
			for (int i = 0; i < n; i++) { 
				int k = va[i] - vb[i]; 
				if (k > 0) { 
					while (k--) { 
						dec.push_back(i+1); 
					 
					}
				}
				else if (k < 0){
					k = abs(k); 
					while (k--) { 
						inc.push_back(i+1); 
					}
				}
			}
			
		cout << inc.size() << '\n'; 
		for (int i = 0; i < (int)inc.size(); i++) {
			cout << dec[i] << " "<< inc[i] << '\n'; 
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
