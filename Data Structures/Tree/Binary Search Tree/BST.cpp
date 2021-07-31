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

node* insertInBST(node* root, int d){
    if(root == NULL){
        root = new node(d);
        return(root);
    }
    if(d <= root->data){
        root->left = insertInBST(root->left, d);
    } else{
        root->right = insertInBST(root->right, d);
    }
    return(root);
}

node* buildBST(){
    int d;
    cin>>d;

    node* root = NULL;
    while(d!=-1){
        root = insertInBST(root, d);
        cin>>d;
    }
    return(root);
}

bool search(node* root, int key){
    if(root == NULL){
        return(false);
    }
    if(root->data == key){
        return(true);
    }
    if(key<root->data){
        return(search(root->left, key));
    } else{
        return(search(root->right, key));
    }
}

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

node* del(node* root, int key){
    if(root == NULL){
        return(NULL);
    } else if(root->data == key){
        if(root->left == NULL and root->right == NULL){ //  If leaf node
            delete(root);
            return(NULL);
        } else if(root->left == NULL){                  //  If has only Right Child
            node* temp = root->right;
            delete(root);
            return(temp);
        } else if( root->right == NULL){                //  If has only left Child
            node* temp = root->left;
            delete(root);
            return(temp);
        } else{                                         //  If has both left and right children
            node* temp1 = root;
            root = root->right;                                    
            node* temp2;
            if(root->left != NULL){  
                while(root->left != NULL){
                    temp2 = root;
                    root = root->left;
                }
                temp1->data = root->data;
                delete(root);
                temp2->left = NULL;
                return(temp1);
            } else{
                temp2 = root;
                if(root->right == NULL){
                    temp1->data = root->data;
                    delete(root);
                    temp1->right = NULL;
                } else{
                    root = root->right;
                    temp1->data = temp2->data;
                    temp1->right = root;
                    delete(temp2);
                }
                return(temp1);
            }
        }
    } else if(root->data < key){
        root->right = del(root->right, key);
        return(root);
    } else{
        root->left = del(root->left, key);
        return(root);
    }
}

bool isBST(node* root, int minVal = INT_MIN, int maxVal = INT_MAX){
    if(root == NULL){
        return(true);
    }
    if(root->data >= minVal and root->data < maxVal and isBST(root->left, minVal, root->data) and isBST(root->right, root->data, maxVal)){
        return(true);
    }
    return(false);
}

// void printPre(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     printPre(root->left);
//     printPre(root->right);
// }

void printIn(node* root){
    if(root == NULL){
        return;
    }
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
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

pair<node*, node*> BSTtoSortedLL(node* root){
    pair<node*, node*> p;
    if(root == NULL){
        p.first = p.second = NULL;
        return(p);
    }
    if(root->left == NULL and root->right == NULL){
        p.first = p.second = root;
        return(p);
    }
    if(root->left == NULL){
        pair<node*, node*> rightLL = BSTtoSortedLL(root->right);
        root->right = rightLL.first;
        rightLL.first->left = root;
        rightLL.first = root;
        return(rightLL);
    } 
    if(root->right == NULL){
        pair<node*, node*> leftLL = BSTtoSortedLL(root->left);
        leftLL.second->right = root;
        root->left = leftLL.second;
        leftLL.second = root;
        return(leftLL);
    } else{
        pair<node*, node*> leftLL = BSTtoSortedLL(root->left);
        pair<node*, node*> rightLL = BSTtoSortedLL(root->right);

        root->right = rightLL.first;
        rightLL.first->left = root;

        leftLL.second->right = root;
        root->left = leftLL.second;

        pair<node*, node*> finalLL;
        finalLL.first = leftLL.first;
        finalLL.second = rightLL.second;
        
        return(finalLL);
    }
}

int main(){
    node* rootBST = buildBST();
    // node* root = buildTree();
    // printPre(root);
    // cout<<endl;
    // printIn(root);
    // cout<<endl;
    // BFS(root);
    // cout<<search(root, 4)<<endl;
    // del(root, 4);
    // BFS(root);
    // cout<<search(root, 4)<<endl;
    // if(isBST(rootBST)){
    //     cout<<"Is a BST!"<<endl;
    // } else{
    //     cout<<"Not a BST!"<<endl;
    // }
    // if(isBST(root)){
    //     cout<<"Is a BST!"<<endl;
    // } else{
    //     cout<<"Not a BST!"<<endl;
    // }
    // printIn(rootBST);
    pair<node*, node*> LinkedList = BSTtoSortedLL(rootBST);
    while(LinkedList.first!= NULL){
        cout<<LinkedList.first->data<<" ";
        LinkedList.first = LinkedList.first->right;
    }
    cout<<endl;
    while(LinkedList.second!= NULL){
        cout<<LinkedList.second->data<<" ";
        LinkedList.second = LinkedList.second->left;
    }
}