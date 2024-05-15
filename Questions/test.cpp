#include <bits/stdc++.h>
using namespace std;

#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void helper(vector<vector<ll int>> &dp, int arr[], int n, int sum){
    ll int mod = 10e9 + 7;
    // if(arr[n-1] > sum){
    //     dp[n][sum] = dp[n-1][sum];
    // } else{
    //     int ch1 = dp[n-1][sum];
    //     int ch2 = dp[n-1][sum-arr[n-1]];
    //     dp[n][sum] = ch1 + ch2;
    // }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(arr[n-1] > sum){
                dp[i][j] = dp[i-1][j] % mod;
            } else{
                int ch1 = dp[i-1][j] % mod;
                int ch2 = dp[i-1][j-arr[i-1]] % mod;
                dp[i][j] = (ch1 + ch2) % mod;
            }
        }
    }
}
    
void perfectSum(int arr[], int n, int sum){
    vector<vector<ll int>> dp(n+1);
    vector<ll int> temp(sum+1, 0);
    temp[0] = 1;
    for(int i=0; i<n+1; i++){
        dp.push_back(temp);
    }
    // for(auto i:dp){
    //     for(auto j:i){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }
    helper(dp, arr, n, sum);
    cout<<dp[n][sum]<<"\n";
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FoxSinOfGreed;
    int T = 1;
    //cin>>T;
    while(T--) {
        int n=6, sum = 10, arr[] = {2, 3, 5, 6, 8, 10};
        perfectSum(arr, n, sum);
    }
}