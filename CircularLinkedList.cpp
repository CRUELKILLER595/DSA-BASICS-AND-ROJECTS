#include<iostream>
using namespace std;
struct Node{
    char data;
    Node*next;
};
Node*head=NULL;
void insertAtBeginning(char value){
    Node*NEW=new Node();
    NEW->data=value;
    if(head==NULL){
        head=NEW;
        NEW->next=head;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    NEW->next=head;
    temp->next=NEW;
    head=NEW;
}
void insertAtEnd(char value){
    Node*NEW=new Node();
    NEW->data=value;
    if(head==NULL){
        head=NEW;
        NEW->next=head;
        return;

    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;

    }
    temp->next=NEW;
    NEW->next=head;

}
void DEL(int position){
    if(head==NULL){
        cout<<"LIST IS EMPTY "<<endl;
        return;
    }
    Node*temp=head;
    if (position == 1) {
    Node* toDelete = head;
    if (head->next == head) {  // only one node
        head = NULL;
    } else {
        while (temp->next != head) {
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
    }
    delete toDelete;
    return;
}

    Node*prev=NULL;
    int count=1;
    while(count<position && temp->next!=head){
        prev=temp;
        temp=temp->next;
        count++;
    }
    if(count!=position){
        cout<<"POSITION OUT OF BOUND "<<endl;
        return;
    }
     prev->next=temp->next;
     delete temp;

}
void display(){
    if(head==NULL){
        cout<<" LIST IS EMPTY "<<endl;
        return;
    }
    Node*temp=head;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
}while(temp!=head);
        
    }
