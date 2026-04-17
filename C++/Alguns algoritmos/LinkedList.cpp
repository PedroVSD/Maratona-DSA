#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head;


public:
    LinkedList() : head(NULL){}


    void insertAtBeginnig(int value){
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = head;
        head = newNode;
    }

    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = NULL;

        if(!head){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp -> next){
            temp = temp -> next;
        }

        temp->next = newNode;
    }

};


int main(void){

}