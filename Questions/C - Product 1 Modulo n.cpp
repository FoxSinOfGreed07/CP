#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

int modProd(int n, int k, int m){
	return( ((n % m) * (k % m)) % m);
}

int gcd(int a, int b){
	if(a==0){
    		return(b);
    	}
	return(gcd(b % a, a ));
}

void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(1);
    int prod = 1;
    for(int i = 2; i < n; i++){
		if(gcd(i, n) == 1){
			v.push_back(i);
			prod = modProd(i, prod, n);
		}
    }
    if(prod % n == 1){
    	cout<<v.size()<<endl;
    	for(auto j:v){
    		cout<<j<<" ";
    	}
    } else{
    	cout<<v.size()-1<<endl;
    	for(auto j:v){
    		if(j != prod % n){
    			cout<<j<<" ";
    		}
    	}
    }
}

signed main()
{
    FoxSinOfGreedio();
    int T = 1;
    //cin>>T;
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