#include<iostream>
using namespace std;

template <typename T>
class Node{
    public:
    T data;
    Node* next;

    Node(T d){
        data = d;
        next = NULL; 
    }
};

template <typename T>
int length(Node<T>* head){
    int count = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return(count);
}

template <typename T>
void insertAtHead(Node<T>* &head, T d){
    if(head == NULL){
        head = new Node<T>(d);
        return;
    }
    Node<T>* n = new Node<T>(d);
    n->next = head;
    head = n;
}


template <typename T>
void insertAtTail(Node<T>* head, T d){
    while(head->next!=NULL){
        head = head->next;
    }
    Node<T>* n = new Node<T>(d);
    head->next = n;
}


template <typename T>
void insertInMiddle(Node<T>* head, int pos, T d){
    if(head == NULL or pos == 0){
        insertAtHead(head, d);
        return;
    }
    if(pos>length(head)){
        insertAtTail(head, d);
        return;
    }
    int p = 1;
    while(p<pos){
        head = head->next;
        p++;
    }
    Node<T>* n = new Node<T>(d);
    Node<T>* temp = head->next;
    head->next = n;
    n->next = temp;
}

template <typename T>
void deleteHead(Node<T>* &head){
    Node<T>* temp = head->next;
    delete(head);
    head = temp;
}

template <typename T>
void deleteTail(Node<T>* head){
    Node<T>* temp;
    while(head->next!=NULL){
        temp = head;
        head = head->next;
    }
    temp->next = NULL;
    delete(head);
}

template <typename T>
void deleteMiddle(Node<T>* head, int pos){
    if(pos==0){
        deleteHead(head);
        return;
    }
    if(pos==length(head)){
        deleteTail(head);
        return;
    }
    int p = 1;
    while(p<pos-1){
        p++;
        head = head->next;
    }
    Node<T>* temp = head->next;
    head->next = temp->next;
    delete(temp);
}

template <typename T>
int search(Node<T>* head, T key){
    int l = length(head);
    for(int i=1;i<=l;i++){
        if(head->data == key){
            return i;
        }
        head = head->next;
    }
    return(-1);
}

template <typename T>
void print(Node<T>* head){
    while(head!=NULL){
        cout<<head->data<<" --> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node<int>* head = NULL;

    insertAtHead(head, 0);
    insertAtHead(head, 10);
    insertAtHead(head, 15);
    insertAtHead(head, 20);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);

    insertInMiddle(head, 3, 30);
    print(head);

    insertAtTail(head, -10);
    print(head);

    deleteHead(head);
    print(head);

    deleteMiddle(head, 5);
    print(head);

    deleteTail(head);
    print(head);

    cout<<search(head, 50)<<endl;
    cout<<search(head, 30)<<endl;
    cout<<search(head, 0)<<endl;
    cout<<search(head, -10)<<endl;
}