#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Queue{
    int cs;
    list<T> l;
    public:
    Queue(){
        cs = 0;
    }
    bool isEmpty(){
        return(cs==0);
    }
    void push(T data){
        l.push_back(data);
        cs++;
    }
    void pop(){
        if(!isEmpty()){
            l.pop_front();
            cs--;
        }
    }
    T front(){
        return(l.front());
    }
};

int main(){
    Queue<int> q;
    for(int i=1;i<11;i++){
        q.push(i);
    }
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    if(q.isEmpty()){
        cout<<"The Queue is empty!";
    } else{
        cout<<"The Queue is not empty!";
    }
}