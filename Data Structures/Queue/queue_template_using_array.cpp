#include<bits/stdc++.h>

using namespace std;

template <typename T>
class Queue{
    T* arr;
    int f,r,cs,ms;
    public:
    Queue(int defaultSize = 10){
        arr = new T[defaultSize];
        cs = 0;
        ms = defaultSize;
        f = 0;
        r = ms-1;
    }
    bool isFull(){
        return(cs==ms);
    }
    bool isEmpty(){
        return(cs==0);
    }
    void push(T data){
        if(!isFull()){
            r = (r+1)%ms;
            arr[r] = data;
            cs++;
        }
    }
    void pop(){
        if(!isEmpty()){
            f = (f+1)%ms;
            cs--;
        }
    }
    T front(){
        if(!isEmpty()){
            return(arr[f]);
        }
    }
    ~Queue(){
        if(arr!=NULL){
            delete [] arr;
            arr = NULL;
        }
    }
};

int main(){
    Queue<int> q;
    for(int i=1;i<=11;i++){
        q.push(i);
    }
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    q.push(11);
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}