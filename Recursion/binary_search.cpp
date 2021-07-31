#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* a, int key, int left, int right){
    if(left>right){
        return(-1);
    }
    int mid = (left+right)/2;
    if(a[mid]==key){
        return mid;
    } else if(a[mid]>key){
        return binarySearch(a, key, left, mid-1);
    } else{
        return binarySearch(a, key, mid+1, right);
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    cout<<binarySearch(a, 5, 0, 6);
}
// 1 2 3 4 5 6 7