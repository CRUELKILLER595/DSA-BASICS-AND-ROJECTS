#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
class stack{
    node*top;
    public:
    stack(){
        top=NULL;
    }
    void push(int x){
        node*NEW=new node();
        NEW->data=x;
        NEW->next=top;
    }
    void pop(){
        if(top==NULL){
            cout<<" STACK UNDERFLOW "<<endl;
            return;
        }
        node*temp=top;
        cout<<temp->data<<" has been popped from stack "<<endl;
        top=top->next;
delete temp;
    }
    void peek(){
        if(top==NULL){
            cout<<" List is empty "<<endl;
            return;
        }
        node*temp=top;
        cout<<temp->data<<" is at the top of stack"<<endl;

    }
    void display(){
        if(top==NULL){
            cout<<" LIST IS EMPTY"<<endl;
            return;
        }
        node*temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};