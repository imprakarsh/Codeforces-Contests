    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
    void solve() { 
		int xa, xb, ya, yb, za, zb; 
		cin >> xa >> xb >> ya >> yb >> za >> zb; 
		int sd = abs(xa - ya) + abs(xb - yb);  
		if (xa == ya && xa == za && zb >= min(xb, yb) && zb <= max(xb, yb)) cout << sd + 2 << '\n' ; 
		else if (xb == yb && xb == zb && za >= min(xa, ya) && za <= max(xa, ya)) cout << sd + 2 << '\n'; 
		else cout << sd << '\n'; 
		
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
