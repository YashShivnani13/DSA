#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;

        if(this -> next != NULL){
            delete next;
            next = NULL; 

        }
    }
};


void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{

        //non empty list
        //assuming element is present in the list

        Node* curr = tail; 

        while(curr->data != element){
            curr = curr->next;
        }

        //element is found and curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void print(Node* &tail){
    
    Node* temp = tail;

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
}

int main(){

    Node* tail = NULL;

    //empty list me insert
    insertNode(tail, 5, 3);
    print(tail);

    return 0;
}