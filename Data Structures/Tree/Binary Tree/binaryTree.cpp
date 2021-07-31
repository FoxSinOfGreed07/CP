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

void printPre(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}

void printIn(node* root){
    if(root == NULL){
        return;
    }
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPost(node* root){
    if(root == NULL){
        return;
    }
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}

void printKthLevel(node* root, int k){
    if(root == NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    if(k>1){
        k--;
        printKthLevel(root->left, k);
        printKthLevel(root->right, k);
    }
}

void printLevel(node* root){
    int h = height(root);
    for(int i=1;i<=h;i++){
        printKthLevel(root, i);
        cout<<endl;
    }
}

void BFS(node* root){
    queue<node*> q;

    if(root != NULL){
        q.push(root);
        q.push(NULL);
    }
    while(!q.empty()){
        node* n = q.front();
        if(n==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        } else{
            cout<<n->data<<" ";
            q.pop();

            if(n->left){
                q.push(n->left);
            } 
            if(n->right){
                q.push(n->right);
            }
        }
    }
}

int main(){
    node* root = buildTree();
    printPre(root);
    cout<<endl;
    printIn(root);
    cout<<endl;
    printPost(root);
    cout<<endl<<height(root)<<endl;
    printKthLevel(root, 3);
    cout<<endl;
    printLevel(root); // level order print in O[n^2]
    BFS(root);  // level order print in O[n]
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

//                           8
//                   10           3
//                1      6          14
//                     9   7     13
