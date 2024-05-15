#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> tree;
    vector<pair<int, int>> visited(n+1);
    for(int i=0; i<n; i++){
        int l, r, d;
        cin>>l>>r>>d;
        vector<int> v{l, r, d};
        tree.push_back(v);
        visited[i+1] = make_pair(0,0);
    }

    vector<int> goldArray(n+1);
    stack<int> dfs;
    dfs.push(1);
    int currentNode = 1, left = -1, right = -1;
    goldArray[1] = tree[0][2];
    int goldLooted = tree[0][2];

    // for(auto i:tree){
    //     cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
    // }
    while(!dfs.empty()){
        if(visited[currentNode].first == 0){
            left = tree[currentNode-1][0];
            visited[currentNode].first = 1;
            if(left){
                currentNode = left;
                goldLooted += tree[currentNode-1][2];
                goldArray[currentNode] = goldLooted;
                dfs.push(currentNode);
                continue;
            }
        }
        if(visited[currentNode].second == 0){
            right = tree[currentNode-1][1];
            visited[currentNode].second = 1;
            if(right){
                currentNode = right;
                goldArray[currentNode] = goldLooted + tree[currentNode-1][2];
                goldLooted = goldArray[currentNode];
                dfs.push(currentNode);
                continue;
            }
        }
        dfs.pop();
        if(!dfs.empty()){
            currentNode = dfs.top();
        }
    }

    int q; cin>>q;
    int gold = 0;
    while(q--){
        int x,y;
        cin>>x>>y;
        gold = goldArray[y-1] - goldArray[x];
        cout<<gold<<endl;
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