#include<bits/stdc++.h>

using namespace std;

bool check(int* a, int n){
    if(n==1){
        return true;
    }
    if(a[0]<a[1] and check(a+1, n-1)){
        return true;
    }
    return false;
}

int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr, n)){
        cout<<"Sorted";
    } else{
        cout<<"Not Sorted";
    }
    return 0;
}