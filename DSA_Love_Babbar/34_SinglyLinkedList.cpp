//NODE CLASS


// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };


// int main(){

//     Node* node1 = new Node(10);
//     cout << node1 -> data << endl;
//     cout << node1 -> next << endl;

//     return 0;
// }









//SINGLY LINKED LIST


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//Insertion in LL (at head)

void InsertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);

    //point new node next from null to previous node data
    temp -> next = head;

    //move head to new node
    head = temp;
}

//Insertion of Node (at tail)

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;
}

//Traverse and Print a LL

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


//Insertion of Node (at any position)

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //insert at start
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position -1){
        temp = temp -> next;
        count++;
    }

    //insert at tail
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}


int main(){

    //created a new node

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;

    //tail pointed to node1
    Node* tail = node1;

    print(head);

    InsertAtHead(head, 12);

    print(head);

    insertAtTail(tail, 19);
    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);

    insertAtPosition(head, tail, 1, 22);
    print(head);

    return 0;
}