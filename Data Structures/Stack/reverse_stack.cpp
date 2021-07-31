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
    int size(){
        return(v.size());
    }
};

//                Using another stack
// int main(){
//     Stack<int> s1,s2;
//     for(int i=0;i<5;i++){
//         s1.push(i+1);
//     }
//     while(!s1.isEmpty()){
//         cout<<s1.Top()<<" ";
//         s1.pop();
//     }
//     cout<<endl;
//     for(int i=0;i<5;i++){
//         s1.push(i+1);
//     }

//     for(int i=s1.size()-1;i>=0;i--){
//         int a = s1.Top();
//         s1.pop();
//         for(int j=0;j<i;j++){
//             s2.push(s1.Top());
//             s1.pop();
//         }
//         s1.push(a);
//         for(int j=0;j<i;j++){
//             s1.push(s2.Top());
//             s2.pop();
//         }
//     }
//     while(!s1.isEmpty()){
//         cout<<s1.Top()<<" ";
//         s1.pop();
//     }
//     return(0);
// }
