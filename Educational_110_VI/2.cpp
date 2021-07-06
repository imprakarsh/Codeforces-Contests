#include <bits/stdc++.h>
#define int long long 
using namespace std;
vector<string> stda; 
bool compare(string a, string b) { 
	if (a.size() == b.size()) return a < b; 
	else return a.size() < b.size(); 
}
void solve() { 
	int n; 
	cin >> n; 
	string s; 
	cin >> s;
	vector<string> v;
	set<string> seta; 
	for (int i = 0; i < n; i++) {
		string k;  
		for (int j = 0; j < 3 && i + j < n; j++ ) {
				k.push_back(s[i+j]); 
				seta.insert(k);  
			}
	}
	v.assign(seta.begin(), seta.end()); 
	sort(v.begin(), v.end(), compare); 

	for (int i = 0; i < (int)stda.size(); i++) { 
		if (v[i] != stda[i]) { 
			cout << stda[i] << endl; 
			break; 
		}
	}
	 
}
int32_t main(){
	iostream::sync_with_stdio(false); 
	cin.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	vector<string> astr; 
	for (int i = 0; i < 26; i++){
		char a = 'a' + i; 
		astr[i].push_back(a); 
	} 
	for (auto i : astr) stda.push_back(i); 
	
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) { 
			string k; 
			k += astr[i]; 
			k += astr[j]; 
			stda.push_back(k); 
		}
	}
	for (int ka = 0; ka < 26; ka++) {
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					string k;  
					k += astr[ka]; 
					k += astr[i]; 
					k += astr[j]; 
					stda.push_back(k); 
				}
			}
	}
	sort(stda.begin(), stda.end(), compare); 
	//~ for (int i = 0; i < 50; i++) cout << stda[i] << endl; 

	int tc = 1; 
    cin >> tc; 
	while (tc--) 
	solve(); 			
	return 0; 
	
}
