#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int* a, int n, int key){
    if(n==0){
        return(-1);
    }
    if(a[0]==key){
        return 0;
    }
    int i = firstOccurence(a+1, n-1, key); 
    if(i==-1){
        return(-1);
    }
    return(i+1);
}

int lastOccurence(int* a, int n, int key){
    if(n==0){
        return(-1);
    }
    int i = lastOccurence(a+1, n-1, key);
    if(i==-1){
        if(a[0]==key){
            return(0);
        }
        return(-1);
    }
    return(i+1);
}

void allOccurences(int* a, int i, int n, int key){
    if(n==0){
        return;
    }
    if(a[0]==key){
        cout<<i<<" ";
    }
    allOccurences(a+1, i+1, n-1, key);
}

int main(){
    int a[] = {1,4,2,4,3};
    cout<<firstOccurence(a, sizeof(a)/sizeof(int), 4)<<endl;
    cout<<lastOccurence(a, sizeof(a)/sizeof(int), 4)<<endl;
    allOccurences(a, 0, sizeof(a)/sizeof(int), 4);
}