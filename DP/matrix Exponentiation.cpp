#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

    //Matrix Exponentiation
    #define N 101
    int ar[N][N], I[N][N];

    void mul(int A[][N], int B[][N], int dim){
        int res[dim+1][dim+1];
        for(int i=1; i<=dim; i++){
            for(int j=1; j<=dim; j++){
                res[i][j] = 0;
                for(int k =1; k<=dim; k++){
                    res[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        for(int i=1; i<=dim; i++){
            for(int j=1; j<=dim; j++){
                A[i][j] = res[i][j];
            }
        }
    }

    void printMat(int A[][N], int dim){
        for(int i=1; i<=dim; i++){
            for(int j=1; j<=dim; j++){
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void power(int A[][101], int dim, int n){
	    for(int i=1; i<=dim; i++){
	        for(int j=1; j<=dim; j++){
	            if(i==j){
	                I[i][j] = 1;
	            } else{
	                I[i][j] = 0;
	            }
	        }
	    }
	    for(int i=1; i<=n; i++){
	        mul(I, A, dim);
	    }
	    for(int i=1; i<dim; i++){
	        for(int j=1; j<dim; j++){
	            A[i][j] = I[i][j];
	        }
	    }
    }

void FoxSinOfGreedio();

void solve()
{
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin>>ar[i][j];
		}
	}int m1[3][3] = {{1,2,3}, {2,3,4}, {3,4,5}};
	mul(ar, ar, 3);
	printMat(ar, 3);
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