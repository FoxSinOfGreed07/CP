#include<bits/stdc++.h>

using namespace std;

void inc(int n){
    if(n>1){
        inc(n-1);
    }
    cout<<n<<" ";
}

void dec(int n){
    cout<<n<<" ";
    if(n>1){
        dec(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<endl;
    dec(n);
    return 0;
}