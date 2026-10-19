#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* previous;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> previous = NULL;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};


//traversing 

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}


//size of LL

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}


//Insert a node at head
void insertatHead(Node* &head, int d){

    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }

    else{
        //create a new node
        Node* temp = new Node(d);

        //step 1 - point temp to head
        temp -> next = head;

        //step 2 - point head to temp
        head -> previous = temp;

        //step 3 - change position of head
        head = temp;
    }
}


//Insert a node at Tail
void insertAtTail(Node* &tail, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
        //create a new node
        Node* temp = new Node(d);

        //step 1 - point temp to tail
        temp -> previous = tail;

        //step 2 - point tail to temp
        tail -> next = temp;

        //step 3 - change position of tail
        tail = temp;
    }

}


//Insertion of Node (at any position)

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //insert at start
    if(position == 1){
        insertatHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    //insert at tail
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    //if insertion in middle

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> previous = nodeToInsert;

    temp -> next = nodeToInsert;
    nodeToInsert -> previous = temp;
}


//Deletion of a Node


void deleteNode(int position, Node* &head){

    //deleting start node

    if(position == 1){
        Node* temp = head;
        temp -> next -> previous = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        //deleting middle or last node

        Node* curr = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = curr;
            curr = curr -> next;
            count++;
        }

        curr -> previous = NULL;
        previous -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout <<"length of node is " << getLength(head) << endl;

    insertatHead(head, 9);
    print(head);

    insertAtTail(tail, 2);
    print(head);

    insertAtPosition(head, tail,2,13);
    print(head);

    deleteNode(1,head);
    print(head);

    return 0;
}