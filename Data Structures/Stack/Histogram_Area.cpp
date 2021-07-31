#include<bits/stdc++.h>
using namespace std;
// s5e6 - 31:27
template <typename T>
class Stack{
    vector<T> v;    
    public:
    bool isEmpty(){
        return(v.size()==0);
    }
    void push(T t){
        v.push_back(t);
    }
    void pop(){
        if(!isEmpty()){ 
            v.pop_back();
        }
    }
    T Top(){
        return(v[v.size()-1]);
    }
};

int main(){


    return(0);
}