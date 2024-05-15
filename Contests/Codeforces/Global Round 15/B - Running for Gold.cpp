#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    vector<int> newData(5), supData(5);
    vector< vector<int> > data(n+1, vector<int> (5));
    int supA = 1, sup = 0;

    for(int i=0; i<5; i++){
    	cin>>supData[i];
    }
    data[1] = supData;
    for(int i=2; i<=n; i++){
    	sup = 0;
    	for(int j=0; j<5; j++){
    		cin>>newData[j];
    		if(newData[j] < supData[j]){
				sup++;
    		}
    	}
    	data[i] = newData;
    	if(sup > 2){
    		for(int j=0; j<5; j++){
	    		supData[j] = newData[j];
	    		supA = i;
    		}
    	}
    }
    sup = 0;
    for(int i=1; i<supA; i++){
    	sup = 0;
		for(int j=0; j<5; j++){
			if(data[i][j] < supData[j]){
				sup++;
			}
		}
		if(sup > 2){
			cout<<-1<<endl;
			return;
		}
    }
    cout<<supA<<endl;
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