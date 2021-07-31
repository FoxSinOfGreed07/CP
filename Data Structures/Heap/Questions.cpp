#include<bits/stdc++.h>
using namespace std;

//                                             Joining N Ropes

// int main(){
//     int n;
//     cin>>n;
//     int a[n], totalCost = 0, currentRope;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     priority_queue<int, vector<int>, greater<int> > pq(a, a+n);
//     int r1, r2;
//     while(pq.size()>1){
//         r1 = pq.top();
//         pq.pop();
//         r2 = pq.top();
//         pq.pop();
//         currentRope = r1 + r2;
//         totalCost += currentRope;
//         pq.push(currentRope);
//     }
//     cout<<totalCost<<endl;
// }

//                              Median Of Running Stream Of Integers

// int main(){
//     float median; 

    // priority_queue<int> leftHeap; // max Heap
    // priority_queue<int, vector<int>, greater<int> > rightHeap; // min Heap

    // int d;
    // cin>>d;
    // leftHeap.push(d);
    // median = d;
    // cout<<"median: "<<median<<endl;

    // cin>>d;
    // while(d!=-1){
    //     if(leftHeap.size() > rightHeap.size()){
    //         if(d > median){
    //             rightHeap.push(d);
    //         } else{
    //             rightHeap.push(leftHeap.top());
    //             leftHeap.pop();
    //             leftHeap.push(d);
    //         }
    //         median = (float)(leftHeap.top() + rightHeap.top()) / 2;
    //     } else if(leftHeap.size() == rightHeap.size()){
    //         if(d > median){
    //             rightHeap.push(d);
    //             median = rightHeap.top();
    //         } else{
    //             leftHeap.push(d);
    //             median = leftHeap.top();
    //         }
    //     } else{
    //         if(d > median){
    //             leftHeap.push(rightHeap.top());
    //             rightHeap.pop();
    //             rightHeap.push(d);
    //         } else{
    //             leftHeap.push(d);
    //         }
    //         median = (float)(leftHeap.top() + rightHeap.top()) / 2;
    //     }
    //      cout<<"median: "<<median<<endl;
    //      cin>>d;
    // }

//     return(0);
// }

//                       Merge k sorted arrays, each of size n { O[n*k] }

typedef pair< int, pair< int, int> > node;
vector<int> mergeKSortedArrays(vector< vector<int> > &v){
    int k = v.size();
    int n = v[0].size();
    vector<int> finalVector;    
    priority_queue< node, vector<node>, greater<node> > minHeap;
    for(int i=0; i<k; i++){
        minHeap.push({v[i][0], {i, 0}});
    }
    node minNode;
    int idx;
    int currentVector, currentIndex;
    while(!minHeap.empty()){
        minNode = minHeap.top();
        finalVector.push_back(minNode.first);
        minHeap.pop();
        currentVector = minNode.second.first;
        currentIndex = minNode.second.second;
        
        if(currentIndex < n-1){
            minHeap.push( { v[currentVector][currentIndex+1], { currentVector, currentIndex + 1 } } );
        }
    }
    return(finalVector);
}

int main(){
    vector< vector<int> > v = { {1, 2, 3}, {2, 5, 8}, {3, 8, 10}, {6, 9, 11} };
    vector<int> sortedVector = mergeKSortedArrays(v);
    for(int i=0;i<sortedVector.size();i++){
        cout<<sortedVector[i]<<" ";
    }
}