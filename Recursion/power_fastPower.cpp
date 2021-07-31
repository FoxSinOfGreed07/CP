#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b==0){
        return(1);
    }
    return(a*power(a,b-1));
}

int fastPower(int a, int b){
    if(b==0){
        return(1);
    }
    int subCase = fastPower(a,b/2);
    if(b&1){
        return(a*power(subCase,2));
    } else{
        return(power(subCase,2));
    }
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<power(a, b)<<endl;
    cout<<fastPower(a, b);
    return(0);
}