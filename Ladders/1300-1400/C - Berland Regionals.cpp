#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n, univ;
    cin>>n;
    map<int, multiset<int, greater<int> > > uni;
    vector<int> stu(n);
    vector<int> str(n);
    vector< vector<int> > preSum;
    vector<int> temp;
    int currSum = 0;
    // taking inputs
    for(int i=0; i<n; i++){
    	cin>>stu[i];
    }
    for(int i=0; i<n; i++){
    	cin>>str[i];
    }
    //populating map
    for(int i = 0; i<stu.size(); i++){
    	uni[stu[i]].insert(str[i]);
    }
    int mapSize = uni.size(), s = 0;
    // Populating Presum 2D vector from the map
    for(auto q : uni){
    	currSum = 0;
    	for(auto w : q.second){
    		currSum += w;
    		temp.push_back(currSum);
    	}
    	preSum.push_back(temp);
    	temp.clear();
    }
    // calculating total power for team sizes
    for(int i=1; i<=n; i++){
    	int power = 0;
    	for(auto a : uni){
       		int size = a.second.size();
    		size = (size/i)*i;
    		if(size == 0){
    			s++;
    			continue;
    		}
    		power += preSum[s++][size-1];
    	}
    	s = 0;
    	cout<<power<<" ";
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
