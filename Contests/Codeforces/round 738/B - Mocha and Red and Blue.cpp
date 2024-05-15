#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v(n);
    map<int, pair<int, int> > m;
    int a = 1, start = -1, end = -1;
    for(int i=0; i<n; i++){
    	v[i] = s[i];
    	if(v[i] == '?'){
    		if(start == -1){
    			start = i;
    			end = i;
    		} else{
    			end = i;
    		}
    	} else{
    		if(end != -1){
    			m[a] = make_pair(start, end);
    			a++;
    			start = -1;
    			end = -1;
    		}
    	}
    }
    if(end != -1){
    	m[a] = make_pair(start, end);
    	start = -1;
    	end = -1;
    }

    // for(auto i: m){
    // 	cout<<i.first<<" : "<<i.second.first<<"-"<<i.second.second<<endl;
    // }
    for(auto i : m){
    	bool B = true;
    	start = i.second.first;
    	end = i.second.second;
    	if(start == 0){
    		if(end != n-1){
    			if(v[end+1] == 'B'){
    				B = false;
    			}
    			for(int i = end; i>=0; i--){
    				if(B){
    					v[i] = 'B';
    					B = false;
    				} else{
    					v[i] = 'R';
    					B = true;
    				}
    			}
    		} else{
    			for(int i = end; i>=0; i--){
    				if(B){
    					v[i] = 'B';
    					B = false;
    				} else{
    					v[i] = 'R';
    					B = true;
    				}
    			}
    		}
    	} else{
    		if(v[start-1] == 'B'){
    			B = false;
    		}
    		for(int i=start; i<=end; i++){
    			if(B){
    				v[i] = 'B';
    				B = false;
    			} else{
    				v[i] = 'R';
    				B = true;
    			}
    		}
    	}
    }
    for(int i=0; i<n; i++){
    	cout<<v[i];
    }
    cout<<endl;

}

signed main()
{
    FoxSinOfGreedio();
    int T = 1;
    cin>>T;
    while(T--)
    {
        solve();
    }
}

void FoxSinOfGreedio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}