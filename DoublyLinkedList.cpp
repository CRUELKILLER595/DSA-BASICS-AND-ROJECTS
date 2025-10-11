#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
};
Node*head=NULL;
void insertAtBeginning(int value){
    Node*NEW=new Node();
    NEW->data=value;
    NEW->next=head;
    NEW->prev=NULL;
    if(head!=NULL){
        head->prev=NEW;
    }
head=NEW;
}
void insertAtEnd(int value){
    Node*NEW=new Node();
    NEW->data=value;
    NEW->next=NULL;
    if(head==NULL){
        NEW->prev=NULL;
        head=NEW;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=NEW;
    NEW->prev=temp;
}
void DEL(int position){
    if(head==NULL){
        cout<<" LIST IS EMPTY"<<endl;
        return;
    }
    if (position <= 0) {
    cout << "INVALID POSITION" << endl;
    return;
}
    Node*temp=head;
    if(position==1){
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        delete temp;
        return;
    }
    for(int i=1;i<position && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<" POSITION NOT FOUND"<<endl;
        return;
    }
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
        
    }
    else{
        temp->prev->next=NULL;
        
    }
    delete temp;

}
void display(){
    Node*temp=head;
    if(head==NULL){
        cout<<" LIST IS EMPTY"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}