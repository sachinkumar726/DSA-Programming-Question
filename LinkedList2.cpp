#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;

    Node(){
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node * head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int getlength(Node * head){
    Node* temp = head;
    int cnt =0;
    while( temp != NULL){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

void insertAthead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* newnode = new Node(d);
        head = newnode;
        tail = newnode;
    }
    else{
        Node* newnode = new Node(d);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertAttail(Node* &head, Node* &tail, int d){
    if (head == NULL){
        Node* newnode = new Node(d);
        head = newnode;
        tail = newnode;
    }
    else{
        Node* newnode = new Node(d);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d ){
    int len = getlength(head);
    if(head == NULL){
        Node * newnode = new Node(d);
        head = newnode;
        tail = newnode;
    }
    if (position == 1){
        insertAthead(head, tail, d);
        return ;
    }
    else if (position == len +1){
        insertAttail(head,tail, d);
        return;
    }
    else{
        Node* newnode = new Node(d);
        Node* prevNode = NULL;
        Node* currNode = head;
        while (position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = newnode;
        newnode->prev = prevNode;
        newnode->next= currNode;
        currNode->prev = newnode;
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout<<"Can't Delete because linked list is empty"<<endl;
        return;
    }
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    int len = getlength(head);
    if(position == 1){
        Node* temp = head;
        head = head->next;
        if (head != NULL) // Check if the new head exists
            head->prev = NULL; // Update the prev pointer of the new head
        delete temp;
        return;
    }
    else if(position == len){
        Node* prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
        return;
    }
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        while (position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }

        Node* nextNode = currNode->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        delete currNode;
        return;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAthead(head,tail,40);
    insertAthead(head,tail,30);
    insertAthead(head,tail,20);
    insertAttail(head,tail,60);

    print(head);
    // cout<<endl;
    // insertAtPosition(head,tail,3,50);
    // print(head);

    cout<<endl;
    deleteNode(head,tail,1);
    print(head);

    // cout<<endl;
    // deleteNode(head,tail,2);
    // print(head);

    // cout<<endl;
    // deleteNode(head,tail,2);
    // print(head);

    // cout<<endl;
    // deleteNode(head,tail,2);
    // print(head);
    

    return 0;
}
