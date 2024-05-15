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
    map<char, int> m;
    for(int i=0; i<n; i++){
    	m[s[i]]++;
    	if(s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9'){
    		cout<<1<<endl;
    		cout<<s[i]<<endl;
    		return;
    	}
    }
    for(auto i : m){
    	if(i.second > 1 and i.first != '1'){
    		cout<<2<<endl;
    		cout<<i.first<<i.first<<endl;
    	}
    }
    // if the code hasn't returned an answer by now, this means 
    // that the number has unique digits which aren't 4 or 6 or 8 or 9 (or it has a bunch of 1s)
    // therefore, the number is made up of a subset of  1, 2, 3, 5, 7
    // which can be made into the answer. Therefore, the number has a maximum of 5 digits (or more
    // considering the 1s) and hence can be brute-forced :)
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