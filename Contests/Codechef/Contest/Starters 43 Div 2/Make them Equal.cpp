#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"
void binary(int a, vector<int> &v){
	int maxP = 1;
	while(maxP*2 <= a){
		maxP *= 2;
	}
	while(a > 0){
		if(maxP <= a){
			v.push_back(1);
			a = a - maxP;
			maxP /= 2;
		} else{
			v.push_back(0);
		}
	}
	while(maxP > 0){
		v.push_back(0);
		maxP /= 2;
	}
}
void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    if(a == b){
    	if(a >= c){
    		cout<<"YES"<<endl;
    		return;
    	} else{
    		cout<<"NO"<<endl;
    		return;
    	}
    } else if(a == c){
    	if(a >= b){
    		cout<<"YES"<<endl;
    		return;
    	} else{
    		cout<<"NO"<<endl;
    		return;
    	}
    } else if(b == c){
    	if(b >= a){
    		cout<<"YES"<<endl;
    		return;
    	} else{
    		cout<<"NO"<<endl;
    		return;
    	}
    }
    vector<int> v1, v2;
    int m = max(a, max(b,c));
    bool flag = true;
    if(m == a){
    	binary(b, v1);
    	binary(c, v2);
    	if(v1.size() < v2.size()){
    		int n = v2.size() - v1.size();
    		for(int i=v1.size()-1; i>=0; i--){
    			if(!v1[i] and !v2[i+n]){
    				flag = false;
    				break;
    			}
    		}
    		for(int i = 0; i<v2.size()-v1.size(); i++){
    			if(!v2[i]){
    				flag = false;
    				break;
    			}
    		}
    	} else{
    		int n = v1.size() - v2.size();
    		for(int i=v2.size()-1; i>=0; i--){
    			if(!v1[i+n] and !v2[i]){
    				flag = false;
    				break;
    			}
    		}
    		for(int i = 0; i<v1.size()-v2.size(); i++){
    			if(!v1[i]){
    				flag = false;
    				break;
    			}
    		}
    	}
    	if(flag){
    		cout<<"YES"<<endl;
    		return;
    	} else{
    		cout<<"NO"<<endl;
    		return;
    	}
    } else if(m == b){
    	binary(a, v1);
    	binary(c, v2);
    	if(v1.size() < v2.size()){
    		int n = v2.size() - v1.size();
    		for(int i=v1.size()-1; i>=0; i--){
    			if(!v1[i] and !v2[i+n]){
    				flag = false;
    				break;
    			}
    		}
    	} else{
    		int n = v1.size() - v2.size();
    		for(int i=v2.size()-1; i>=0; i--){
    			if(!v1[i+n] and !v2[i]){
    				flag = false;
    				break;
    			}
    		}
    	}
    	if(flag){
    		cout<<"YES"<<endl;
    		return;
    	} else{
    		cout<<"NO"<<endl;
    		return;
    	}
    } else{
    	binary(a, v1);
    	binary(b, v2);
    	if(v1.size() < v2.size()){
    		int n = v2.size() - v1.size();
    		for(int i=v1.size()-1; i>=0; i--){
    			if(!v1[i] and !v2[i+n]){
    				flag = false;
    				break;
    			}
    		}
    	} else{
    		int n = v1.size() - v2.size();
    		for(int i=v2.size()-1; i>=0; i--){
    			if(!v1[i+n] and !v2[i]){
    				flag = false;
    				break;
    			}
    		}
    	}
    	if(flag){
    		cout<<"YES"<<endl;
    		return;
    	} else{
    		cout<<"NO"<<endl;
    		return;
    	}
    }
    // vector<int> v;
    // binary(16, v);
    // for(int i=0; i<v.size(); i++){
    // 	cout<<v[i];
    // }
    // cout<<endl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FoxSinOfGreed;
    int T = 1;
    cin>>T;
    while(T--) {
        solve();
    }
}