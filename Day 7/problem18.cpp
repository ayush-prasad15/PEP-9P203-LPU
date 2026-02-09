#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
};

Node* insertAtEnd(Node* &head, int data ){
    Node* newNode = new Node();
    if(!head){
        head = newNode;
        head->data = data;
        head->next = NULL;
    }
    else{
        
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->data = data;
        newNode->next = NULL;
    }

}


Node* createLinkedList(int arr[],int n, Node* &head){
    for (int i = 0; i<n; i++){
        insertAtEnd(head,arr[i]);
    }
    return head;
}

