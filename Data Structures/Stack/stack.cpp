#include<bits/stdc++.h>
using namespace std;

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
    Stack<int> s;
    cout<<s.isEmpty()<<" ";
    s.push(1);
    s.push(2);
    cout<<s.Top()<<" ";
    s.pop();
    s.pop();
    for(int i=10;i<21;i++){
        s.push(i);
    }
    cout<<endl<<s.Top()<<" "<<s.isEmpty()<<" ";
    return(0);
}