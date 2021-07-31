#include<bits/stdc++.h>
using namespace std;

template<typename T>
int search(T arr[], int n, T key){
    for(int pos=0;pos<n;pos++){
        if(arr[pos]==key){
            return(pos);
        }
    }
    return(-1);
}

int main(){
    string a[] = {"hello", "hi", "domo"};
    int n = sizeof(a)/sizeof(string);
    string key = "hi";
    cout<<"The key is at the index: "<<search(a,n,key)<<endl;

    return 0;
} 