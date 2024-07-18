#include<iostream>
using namespace std;

struct node{
    int data;
    node * next;
    node(int value) {
        data=value;
        next=NULL;
    }
};

node  *createLL(){
    cout<<"Enter Data"<<endl;
    int value;
    cin>>value;
    node *head=NULL;
    while(value!=-1){
        node *currentnode=new node(value);
        if (head==NULL){
            head=currentnode;
        }else{
            node *tail=head;
            while(tail->next!=NULL){
                tail=tail->next;
            }tail->next=currentnode;
        }cout<<"Enter -1 to stop else enter data: "<<endl;
        cin>>value;
    }
return head;
}

void display(node *head){
    node *tail=head;
    while(tail!=NULL){
       cout<<tail->data; 
       tail=tail->next;

 }return;
}

int main(){
    node *head=createLL();
    display(head);
    return 0;
}    