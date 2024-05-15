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

    for(int i = 1; i<=10; i++){
        insertAtHead(head, i);
    }
    int m = 3, n = 7, count = 1;
    print(head);
    cout<<"________________________ n = "<<n<<" m = "<<m<<" __________________________________________"<<endl;
    Node<int>* itr = head;
    Node<int>* nxt = NULL;
    Node<int>* prev = NULL;
    Node<int>* start = NULL;
    Node<int>* end = NULL;
    while(count != m+1){
        if(count==m){
            start = prev;
        }
        prev = itr;
        itr = itr->next;
        count++;
    }
    nxt = itr->next;
    end = prev;
    while(count != n+1){
        itr->next = prev;
        prev = itr;
        itr = nxt;
        nxt = nxt ->next;
        count++;
    }
    // cout<<start->data<<" "<<end->data<<" "<<itr->data<<" "<<prev->data<<endl;
    start -> next = prev;
    end -> next = itr;
    print(head);
}