// LinkedList insert at head and printing the likedlist
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
            cout<<"Memory free for node with data"<<value<<endl;
        }

    }
};
void insertAtHead(Node * &head, Node * &tail, int d){
    if(head == NULL){
        Node* newnode = new Node(d);
        head = newnode;
        tail = newnode;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(Node* &head,Node* &tail, int d){
   if (head == NULL)
   {
     Node * newnode = new Node(d);
     head =newnode;
     tail = newnode;
   }
   
   else{
    Node * temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
   }
}

void insertAtMiddle(Node*head, Node*tail,int position , int d){
    Node*temp = head;
    int cnt = 1;
    while (cnt< position-1)
    {
        temp = temp->next;
        cnt++;
    }
    // create a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    // issert at start
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }
    // inserting at last position
    if(temp->next == NULL){
        insertAtTail(head,tail, d);
        return;
    }
}
void print(Node * head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp ->next;
    }
    
}

int length(Node *head){
    Node* temp = head;
    int cnt =0;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
    
}

void deleteNode(int position , Node* &head){
    // deleting fist or start node
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node * curr = head;
        Node * prev = NULL;
        int cnt = 1;
        while (position > cnt)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev ->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

int main(){

    int n;
    cout<<"Enter the first element of the LinkedList"<<endl;
    cin>>n;
    // Created a new node
    Node * first = new Node(n);
    // head pointed to node1
    Node* head = first;
    Node* tail = head;
    cout<<"Before inset at head positionn"<<endl;;
    print(head);
    cout<<endl;

    // inserting element in the head position
    cout<<"after inserting at head Position"<<endl;
    insertAtHead(head, tail,12);
    print(head);
    cout<<endl;

    //Inserting element in the tail
    cout<<"After inserting at tail Position"<<endl;
    insertAtTail(head,tail, 13);
    print(head);
    cout<<endl;

    // Inserting element in the positoin
    cout<<"After inserting at Position"<<endl;
    insertAtMiddle(head,tail,3,14);
    print(head);
    cout<<endl;

    // counting node
    int len = length(head);
    cout<<"Total Number of nodes:"<<len<<endl;

    //deleting node
    cout<<"After deleting the Node"<<endl;
    deleteNode(3,head);
    print(head);

    return 0;
}
