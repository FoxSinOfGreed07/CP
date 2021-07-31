#include<iostream>
#include<algorithm>

using namespace std;

int binSearch(int arr[], int n, int k){
    int left = 0, right = n-1, mid, ind=-1;
    mid = (left+right)/2;
    while(mid<=right && mid>=left){
        if(arr[mid]==k){
            ind=mid;
            break;
        } else if (arr[mid]>k){
            right = mid-1;
        } else if (arr[mid]<k){
            left = mid+1;
        }
        mid = (left+right)/2;    
    }
    return(ind);
}

int main(){
    int a[] = {2,4,8,16,32};
    int key = 16;
    int pos = binSearch(a, 5, key);
    cout<<"The position of the key[ "<<key<<" ] is: "<<pos<<endl;

    return(0);
}