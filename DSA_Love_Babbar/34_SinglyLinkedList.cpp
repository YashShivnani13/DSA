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

//Insertion in LL

void InsertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);

    //point new node next from null to previous node data
    temp -> next = head;

    //move head to new node
    head = temp;
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


int main(){

    //created a new node

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;

    print(head);

    InsertAtHead(head, 12);

    print(head);

    return 0;
}