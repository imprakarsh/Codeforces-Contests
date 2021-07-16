    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
    const int mx = (int)(2e5 + 6);
    vector<int> freq(mx, -1);

    void solve() { 
		int n; cin >> n;
		for (int i = 0; i <= 2 * n; i++) { 
			freq[i] = -1; 
		}
		for (int i = 1; i <= n; i++) { 
			int a; cin >> a; 
			freq[a] = i; 
		}
		int cnt = 0; 
		for (int i = 1; i <= 2*n; i++) { 
			 for (int j = 1; j * j <= i; j++) { 
				 if ( i % j == 0) { 
					 if ( j != i/j && freq[j] > 0 && freq[i/j] > 0 && 
						 freq[j] + freq[i/j] == i) cnt++; 
				}
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
