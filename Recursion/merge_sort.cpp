#include<bits/stdc++.h>
using namespace std;

void merge(int* a, int left, int right){
    int mid = (left + right)/2;
    int i = left;
    int j = mid+1;
    int k = left;
    int temp[100];
    while(i <= mid and j <= right){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        } else{
            temp[k++] = a[j++];
        }
    }
    while(i <= mid){
        temp[k++] = a[i++];
    }
    while(j <= right){
        temp[k++] = a[j++];
    }
    for(int i=left;i<=right;i++){
        a[i] = temp[i];
    }
}

void mergeSortRecursive(int* a, int left, int right){
    if(left>=right){
        return;
    }
    int mid = (left + right)/2;
    mergeSortRecursive(a, left, mid);
    mergeSortRecursive(a, mid+1, right);
    merge(a, left, right);
}

int main(){
    int a[] = {7,4,2,3,5,1,6};
    mergeSortRecursive(a, 0, 6);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    return(0);
}