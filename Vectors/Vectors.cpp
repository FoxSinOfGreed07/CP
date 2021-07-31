#include<bits/stdc++.h>
// #include<vector>
#include<cstring>

using namespace std;

class car{
    private:
    string name;
    int x,y;
    public:
    car(){

    }
    void fill(string s, int a, int b){
        this->name = s;
        this->x = a;
        this->y = b;
    }
    int dist(){
        return(x*x + y*y);
    }
    void disp(){
        cout<<this->name;
        cout<<" ("<<this->x<<","<<this->y<<") "<<endl;
    }
};

bool compare(car a, car b){
    return a.dist()<b.dist();
}

int main(){
    int n;
    cin>>n;
    vector<car> V;
    car List[n];
    for(int i=0;i<n;i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        List[i].fill(name,x,y);
        V.push_back(List[i]);
    }   
    sort(V.begin(), V.end(), compare);
    for(auto it:V){
        it.disp();
    }
    return(0);
}