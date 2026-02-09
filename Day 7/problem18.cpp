#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
};

Node* insertAtEnd(Node* &head, int data ){
    if(!head){
        head->data = data;
        head->next = NULL;
    }
    else{
        Node* newNode = new Node();
        Node* temp = head;
        while(temp!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->data = data;
        newNode->next = NULL;
    }

}


Node* createLinkedList(int arr[],Node* &head){
    for (int a: arr){
        insertAtEnd(head,a);
    }
    return head;
}

