#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();
class Node{
	public:
	int data;
	Node* next;

	Node(int d){
        data = d;
        next = NULL; 
    }
};
void solve()
{
    int n = 10;
    Node* head = NULL;
    head = new Node(1);
    Node* itr = head;
    for(int i=1; i<n; i++){
        Node N = new Node(i+1);
        itr->next = N;
        itr = itr->next;
    }
    for(int i=0;i<10;i++){
    	cout<<head->data<<endl;
    	head = head-> next;
    }
    int a = 3, b = 7;
    int count = 1;
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