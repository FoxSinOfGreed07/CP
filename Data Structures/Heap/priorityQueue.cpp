#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq_max; // using max heap
    priority_queue< int, vector<int>, greater<int> > pq_min; // using min heap

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        pq_max.push(data);
        pq_min.push(data);
    }

    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }
    cout<<endl;
    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }

}