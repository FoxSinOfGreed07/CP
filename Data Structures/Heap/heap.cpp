#include<bits/stdc++.h>
using namespace std;

class heap{
    vector<int> v;
    bool minHeap;

    void heapify(vector<int> &v, int idx, int size){
        int left = 2*idx;
        int right = left + 1;
        if(minHeap){
            int minIdx = idx;
            int last = size-1;
            if(left <= last and v[left] < v[idx]){
                minIdx = left;
            }
            if(right < size and v[right] < v[minIdx]){
                minIdx = right;
            }
            if(idx != minIdx){
                swap(v[idx], v[minIdx]);
                heapify(v, minIdx, size);
            }
        } else{
            int maxIdx = idx;
            int last = size-1;
            if(left <= last and v[left] > v[idx]){
                maxIdx = left;
            }
            if(right <= last and v[right] > v[maxIdx]){
                maxIdx = right;
            }
            if(idx != maxIdx){
                swap(v[idx], v[maxIdx]);
                heapify(v, maxIdx, size);
            }
        }
    }

    public:

    heap(int default_size = 10, bool type = true){
        v.reserve(default_size);
        v.push_back(-1);
        minHeap = type;
    }
    
    void print(vector<int> v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    void push(int d){
        v.push_back(d);
        int idx = v.size()-1;
        int parIdx = idx/2;
        if(minHeap){
            while((v[parIdx] > v[idx]) and parIdx > 0){
                swap(v[parIdx], v[idx]);
                idx = parIdx;
                parIdx = idx/2;
            }
        } else{
            while((v[parIdx] < v[idx]) and parIdx > 0){
                swap(v[parIdx], v[idx]);
                idx = parIdx;
                parIdx = idx/2;
            }
        }
    }

    int top(){
        return(v[1]);
    }

    void pop(){
        int idx = v.size()-1;
        swap(v[1], v[idx]);
        v.pop_back();
        idx = 1;
        heapify(v, idx, v.size()-1);
    }

    void buildHeapNlogN(vector<int> &v){
        for(int i=2;i<v.size();i++){
            int idx = i;
            int parIdx = i/2;
            if(minHeap){
                while(idx > 1 and v[parIdx] > v[idx]){
                    swap(v[idx], v[parIdx]);
                    idx = parIdx;
                    parIdx /= 2;    
                }
            } else{
                while(idx > 1 and v[parIdx] < v[idx]){
                    swap(v[idx], v[parIdx]);
                    idx = parIdx;
                    parIdx /= 2;    
                }                
            }
        }
    }

    void buildHeapOn(vector<int> &v){
        for(int i=(v.size() -1)/2;i>=1;i--){
            heapify(v, i, v.size());
        }
    }
    
    void heapSort(vector<int> &v){
        buildHeapOn(v);
        int n = v.size();
        while(n>1){
            swap(v[1], v[n-1]);
            n--;
            heapify(v, 1, n);
        }
    }
};

int main(){
    vector<int> v1 = {-1, 1, 3, 4, 6, 11, 2, 7, 5};
    vector<int> v2 = {-1, 19, 8, 3, 10, 1, 6, 7, 12};
    heap h1(8, false), h2(8, false);
    // h1.buildHeapNlogN(v1);
    // h2.buildHeapOn(v2);
    // h1.print(v1);
    h2.heapSort(v2);
    h2.print(v2);
    
}