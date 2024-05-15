// // https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

// class Solution{   
// public:
//     bool helper(int N, int arr[], int sum, vector<vector<int>> &dp){
//         if(dp[N][sum] != -1){
//             return(dp[N][sum]);
//         }
//         if(sum == 0){
//             dp[N][sum] = true;
//             return(true);
//         }
//         if(N==0){
//             dp[N][sum] = false;
//             return(false);
//         }
//         if(arr[N-1] > sum){
//             bool op1 = helper(N-1, arr, sum, dp);
//             dp[N][sum] = op1;
//             return(op1);
//         } else{
//             bool op2 = helper(N-1, arr, sum, dp);
//             bool op3 = helper(N-1, arr, sum - arr[N-1], dp);
//             dp[N][sum] = op2;
//             dp[N][sum - arr[N-1]] = op3;
//             return( op2 or op3 );
//         }
//     }
//     bool isSubsetSum(int N, int arr[], int sum){
//         vector< vector <int> > dp;
//         vector<int> temp;
//         for(int i=0; i<sum+1; i++){
//             temp.push_back(-1);
//         }
//         for(int i=0; i<N+1; i++){
//             dp.push_back(temp);
//         }
//         return(helper(N, arr, sum, dp));
//     }
// };

// // -----------------------------------------------------------

// // class Solution{   
// // public:
// //     bool helper(int N, int arr[], int sum, vector<vector<int>> &dp){
// //         if(dp[N][sum] != -1){
// //             return(dp[N][sum]);
// //         }
// //         if(sum == 0){
// //             dp[N][sum] = 1;
// //             return(true);
// //         }
// //         if(N == 0){
// //             dp[N][sum] = 0;
// //             return(false);
// //         }
// //         if(arr[N-1] > sum){
// //             bool opt = helper(N-1, arr, sum, dp);
// //             dp[N][sum] = opt;
// //             return opt;
// //         } else{
// //             bool opt1 = helper(N-1, arr, sum, dp);
// //             bool opt2 = helper(N-1, arr, sum - arr[N-1], dp);
// //             dp[N][sum] = opt1;
// //             dp[N][sum - arr[N-1]] = opt2;
// //             return(opt1 or opt2);
// //         }
// //     }
    
// //     bool isSubsetSum(int N, int arr[], int sum){
// //         vector<vector<int>> dp;
// //         vector<int> temp;
// //         for(int i=0; i<sum+1; i++){
// //             temp.push_back(-1);
// //         }
// //         for(int i=0; i<N+1; i++){
// //             dp.push_back(temp);
// //         }
// //         return(helper(N, arr, sum, dp));
// //     }
// // };
// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long int
// // #define endl "\n"

// // void FoxSinOfGreedio();

// // bool helper(int N, int arr[], int sum, vector<vector<int>> dp){
// //     if(dp[sum][N] != -1){
// //         return(dp[sum][N])
// //     }
// //     if(sum == 0){
// //         return(true);
// //     }
// //     if(N == 0){
// //         return(false);
// //     }
// //     if(arr[N-1] > sum){
// //         return(dp[sum][N-1] = helper(N-1, arr, sum, dp));
// //     } else{
// //         bool opt1 = helper(N-1, arr, sum, dp);
// //         bool opt2 = helper(N-1, arr, sum - arr[N-1], dp);
// //         dp[sum][N-1] = opt1;
// //         dp[sum - arr[N-1]][N-1] = opt2;
// //         return(opt1 || opt2);
// //     }
// // }

// // signed main()
// // {
// //     FoxSinOfGreedio();
// //     int T = 1;
// //     //cin>>T;
// //     int N = 6 ;
// //     int arr[] = {3, 24, 4, 12, 5, 2};
// //     int sum = 26;
// //     while(T--)
// //     {
// //         vector<vector<int>> dp;
// //         vector<int> temp(N, -1);
// //         for(int i=0; i<100001; i++){
// //             dp[i] = temp;
// //         }
// //         return(helper(N, arr, sum, dp));
// //     }
// // }

void FoxSinOfGreedio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}