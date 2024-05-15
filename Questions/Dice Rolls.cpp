#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

int[] solve()
{
    int n, F, total = 0;
    double M;
    cin>>n>>F>>M;
    int Asize = n-F;
    vector<int> A(n);
    int result[F] = {0}, emptyRes[1] = {0}; 
    for(int i=0; i<Asize; i++){
    	cin>>A[i];
    	total += A[i];
    }
    int lesserAvg = total/Asize;
    int requiredSum = M*n - total;
    double rollAvg = 0;
    if(requiredSum > F*6 or requiredSum < F){
    	return(emptyRes);
    } else{
    	for(int i=0; i<F; i++){
    		rollAvg = ceil((double)requiredSum/(double)(F - i));
    		result[i] = rollAvg;
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