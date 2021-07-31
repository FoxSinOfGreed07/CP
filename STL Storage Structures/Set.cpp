#include<bits/stdc++.h>
using namespace std;

//   Of 2 types, Ordered and Unordered (set and unordered_set).
//   No duplicates are stored.
//   Uses BST/ Red-Black tree to store data (internal working).
//   Inserting and Deleting takes Log(n) time. 
//   Can't update, have to delete and insert.

int main(){
    int a[] = {4, 2, 1, 5, 3, 4, 2, 1};
    int n = sizeof(a)/sizeof(int);

    // insertion
    set<int> s1;
    unordered_set<int> s2;
    for(int i=0;i<n;i++){
        s1.insert(a[i]);
        s2.insert(a[i]);
    }

    //Iterating over the set

    // Can use 'auto it' instead of 'set<T>::iterator it'
    for(set<int>::iterator it = s1.begin(); it!= s1.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(unordered_set<int>::iterator it = s2.begin(); it!= s2.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // removing an element
    s1.erase(2);
    auto it = s1.find(4);
    s1.erase(it);
    for(auto it = s1.begin(); it!=s1.end(); it++){
        cout<<*(it)<<" ";
    }
}
