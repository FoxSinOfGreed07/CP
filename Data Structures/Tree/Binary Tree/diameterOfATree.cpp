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

int height(node* root){
    if(root == NULL){
        return(0);
    }
    int leftSubtreeHeight = height(root->left);
    int rightSubtreeHeight = height(root->right);
    return( max(leftSubtreeHeight, rightSubtreeHeight) + 1);
}

int diameterInefficient(node*root){
    if(root == NULL){
        return(0);
    }
    int rightSubtreeHeight = height(root->right);
    int leftSubtreeHeight = height(root->left);
    int op1 = rightSubtreeHeight + leftSubtreeHeight;
    int op2 = diameterInefficient(root->left);
    int op3 = diameterInefficient(root->right);
    return(max(max(op1, op2), op3));
}

pair<int, int> diameterEfficient(node* root){
    pair<int, int> pLeft; // pair <(height of the tree with this node as root), (diameter of tree with this node as root)>
    pair<int, int> pRight;
    pair<int, int> p;
    if(root == NULL){
        p.first = 0;
        p.second = 0;
        return(p); // if node is null, then it has no height or diameter
    }
    pLeft = diameterEfficient(root->left);
    pRight = diameterEfficient(root->right);
    p.first = max(pLeft.first, pRight.first) + 1;
    p.second = max(max(pLeft.first + pRight.first , pLeft.second), pRight.second);
    return(p);
}

int main(){
    node* root = buildTree();
    cout<<diameterInefficient(root)<<endl; // O[n^2]
    cout<<diameterEfficient(root).second; // O[n]
}