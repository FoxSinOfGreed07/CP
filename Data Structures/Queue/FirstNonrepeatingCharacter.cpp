#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

int main(){
    queue<char> q;
    unordered_map<char, int> m;
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        q.push(s[i]);
        if(m.find(s[i])==m.end()){
            m[s[i]] = 1;
        } else{
            m[s[i]]++;
        }
        while(m[q.front()]>1){
            q.pop();
        }
        if(q.empty()){
            cout<<-1<<" ";
        } else{
            cout<<q.front()<<" ";
        }
    }
}