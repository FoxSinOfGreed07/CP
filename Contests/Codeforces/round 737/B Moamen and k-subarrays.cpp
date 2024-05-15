#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n, k;
    cin>>n>>k;
    int sortedPartitions = 1, temp;
    vector<pair<int, int> > v(n);
    for(int i=0;i<n;i++){
    	cin>>temp;
    	v[i] = (make_pair(temp, i));
    }
    if(n==k){
    	cout<<"Yes"<<endl;
    	return;
    }if(n==k){
    	cout<<"Yes"<<endl;
    	return;
    }

	sort(v.begin(), v.end());

	for(int i=1;i<n;i++){
		if(v[i].second - 1 != v[i-1].second){
			sortedPartitions++;
		}
	}

    if(sortedPartitions > k){
    	cout<<"No"<<endl;
    	return;
    }
    cout<<"Yes"<<endl;
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
