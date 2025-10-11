#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
Node*head=NULL;
void insertAtBeginning(int value){
Node*NEW=new Node();
NEW->data=value;
NEW->next=head;
head=NEW;
}
void insertAtEnd(int value){
    Node*NEW=new Node();
    NEW->data=value;
    NEW->next=NULL;
    if(head==NULL){
        head=NEW;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=NEW;
}
void Insert(int value,int position){
    if(position==0){
        insertAtBeginning(value);
        return;
    }
    Node*NEW=new Node();
    NEW->data=value;
    Node*temp=head;
    for(int i=0;i<position-1;i++){
        if(temp==NULL){
            cout<<"POSITION OUT OF BOUNDS"<<endl;
            return;

        }
        temp=temp->next;
    }
    if (temp == NULL) {
        cout << "POSITION OUT OF BOUNDS" << endl;
        return;
    }
    NEW->next=temp->next;
    temp->next=NEW;
}
void Del(int position){
    if(head==NULL){
        cout<<"LIST IS EMPTY"<<endl;
        return;
    }
    Node*temp=head;

    if(position==0){
        head=head->next;
        delete temp;
        return;
    }
    Node*prev=NULL;
    for(int i=1;temp!=NULL && i<position;i++){
        if(temp->next==NULL){
            cout<<" POSITION OUT OF BOUNDS "<<endl;
            return;
        }
        prev=temp;
        temp=temp->next;

    }
    prev->next=temp->next;
    delete temp;
}
void display(){
    Node*temp=head;
    if(head==NULL){
        cout<<"LIST IS EMPTY"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
