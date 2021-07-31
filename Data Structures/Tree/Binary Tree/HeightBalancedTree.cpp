#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return(root);
}

node* buildHeightBalancedTree(int* a, int s, int e){
    if(s<=e){
        int mid = (s + e)/2;
        node* root = new node(a[mid]);
        root->left = buildHeightBalancedTree(a, s, mid-1);
        root->right = buildHeightBalancedTree(a, mid+1, e);
        return(root);
    } else{
        return(NULL);
    }
}

pair<bool, int> isHeightBalanced(node* root){
    pair<bool, int> p; // <Height balanced or not, height>
    if(root == NULL){
        p.first = true;
        p.second = 0;
        return(p);
    }
    pair<bool, int> pLeft = isHeightBalanced(root->left);
    pair<bool, int> pRight = isHeightBalanced(root->right);
    p.first = (pLeft.first and pRight.first) and (abs(pLeft.second - pRight.second) <= 1);
    p.second = max(pLeft.second, pRight.second) + 1;
    return(p);
}

void printPre(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}

int main(){
    node* root = buildTree();
    cout<<isHeightBalanced(root).first<<endl;
    printPre(root);
    cout<<endl;
    int a[] = {1, 2, 3, 4, 5, 6};
    node* HBTnode = buildHeightBalancedTree(a, 0, 5);
    printPre(HBTnode);
}
// 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
//              1
//          2       3
//        4   5       6