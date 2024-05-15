#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
	string alphabet, word;
	cin>>alphabet>>word;
	int ans = 0;
	map<char, int> dict;
    for(int i=0; i<26; i++){
        dict[alphabet[i]] = i;
    }
    int prevPosition = dict[word[0]];
    for(int i=1; i<word.length(); i++){
    	ans += abs(dict[word[i]]-prevPosition);
    	prevPosition = dict[word[i]];
    }
    cout<<ans<<endl;
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