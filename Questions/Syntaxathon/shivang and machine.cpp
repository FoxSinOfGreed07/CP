#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

void solve()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int a, Min;
    int t1 = 0, t2 = 0, t3 = 0, top1 = 0, top2 = 0, top3 = 0;
    vector<int> s1, s2, s3, m;

    for(int i=0;i<n1;i++){
    	cin>>a;
    	s1.push_back(a);
    	t1 += a;
    }
    for(int i=0;i<n2;i++){
    	cin>>a;
    	s2.push_back(a);
    	t2 += a;
    }
    for(int i=0;i<n3;i++){
    	cin>>a;
    	s3.push_back(a);
    	t3 += a;
    }
    while(!( t1 == t2 and t2 == t3 )){
    	m.push_back(t1);
    	m.push_back(t2);
    	m.push_back(t3);
    	sort(m.begin(), m.end());
    	if(m[0] == m[1] ){
    		if(m[2] == t1){
    			t1 -= s1[top1];
	    		top1++;	
    		} else if(m[2] == t2){
    			t2 -= s2[top2];
	    		top2++;
    		} else{
    			t3 -= s3[top3];
	    		top3++;
    		}
    	} else{
    		if(m[0] == t1){
    			t2 -= s2[top2];
	    		top2++;
	    		t3 -= s3[top3];
	    		top3++;
    		} else if(m[0] == t2){
    			t1 -= s1[top1];
	    		top1++;	
    			t3 -= s3[top3];
	    		top3++;
    		} else{
    			t1 -= s1[top1];
	    		top1++;	
	    		t2 -= s2[top2];
	    		top2++;
    		}
    	}
    }
    cout<<t1;
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
}